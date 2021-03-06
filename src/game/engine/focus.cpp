/**
 * @file
 *
 * @author OmniBlade
 *
 * @brief Focus change handling functions.
 *
 * @copyright Chronoshift is free software: you can redistribute it and/or
 *            modify it under the terms of the GNU General Public License
 *            as published by the Free Software Foundation, either version
 *            2 of the License, or (at your option) any later version.
 *            A full copy of the GNU General Public License can be found in
 *            LICENSE
 */
#include "focus.h"
#include "audio.h"
#include "gbuffer.h"
#include "iomap.h"
#include "mouse.h"
#include "theme.h"

/**
 * Handler for loss of application focus.
 *
 * 0x005B3488
 */
void Focus_Loss()
{
    g_Theme.Suspend();
    Stop_Primary_Sound_Buffer();

    if (g_Mouse != nullptr) {
        g_Mouse->Clear_Cursor_Clip();
    }
}

/**
 * Handler for gain of application focus.
 *
 * 0x005B34B4
 */
void Focus_Restore()
{
    g_Map.Flag_To_Redraw(true);
    Start_Primary_Sound_Buffer(true);

    if (g_Mouse != nullptr) {
        g_Mouse->Set_Cursor_Clip();
    }

    g_VisiblePage.Clear();
    g_HiddenPage.Clear();
}
