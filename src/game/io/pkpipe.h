/**
 * @file
 *
 * @author CCHyper
 * @author OmniBlade
 *
 * @brief Pipe that processes the data with RSA and Blowfish as it writes it.
 *
 * @copyright Chronoshift is free software: you can redistribute it and/or
 *            modify it under the terms of the GNU General Public License
 *            as published by the Free Software Foundation, either version
 *            2 of the License, or (at your option) any later version.
 *            A full copy of the GNU General Public License can be found in
 *            LICENSE
 */
#pragma once

#ifndef PKPIPE_H
#define PKPIPE_H

#include "always.h"
#include "blowpipe.h"
#include "pipe.h"

class Straw;
class PKey;

class PKPipe : public Pipe
{
public:
    PKPipe(PipeControl mode, Straw &rstraw);
    virtual ~PKPipe(){};

    virtual int Put(const void *buffer, int length) override;
    virtual void Put_To(Pipe *pipe) override;

    void Key(PKey *key);
    int Encrypted_Key_Length() const;
    int Plain_Key_Length() const;

private:
    BOOL m_ChangeKey;
    Straw &m_CryptRandom;
    BlowPipe m_BlowFish;
    PipeControl m_Mode;
    PKey *m_RSAKey;
    int m_CryptoBuffer[256];
    int m_EncryptedKeyLength;
    int m_Carryover;
};

#endif // PKPIPE_H
