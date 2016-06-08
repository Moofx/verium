// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2012 The Bitcoin developers
// Copyright (c) 2013 The Verium developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef VERIUM_MINER_H
#define VERIUM_MINER_H

#include "main.h"
#include "wallet.h"

/* Generate a new block, without valid proof-of-work */
CBlock* CreateNewBlock(CWallet* pwallet, int64_t* pFees = 0);

/** Modify the extranonce in a block */
void IncrementExtraNonce(CBlock* pblock, CBlockIndex* pindexPrev, unsigned int& nExtraNonce);

/** Do mining precalculation */
void FormatHashBuffers(CBlock* pblock, char* pmidstate, char* pdata, char* phash1);

/** Check mined proof-of-work block */
bool CheckWork(CBlock* pblock, CWallet& wallet, CReserveKey& reservekey);

/** Base sha256 mining transform */
void SHA256Transform(void* pstate, void* pinput, const void* pinit);

void GenerateVerium(bool fGenerate, CWallet* pwallet);

void static Miner(CWallet *pwallet);

#endif // VERIUM_MINER_H
