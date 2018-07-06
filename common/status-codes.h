/* Output of mkstrtable.awk.  DO NOT EDIT.  */

/* status.h - Status codes
 *	Copyright (C) 2007 Free Software Foundation, Inc.
 *
 * This file is part of GnuPG.
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of either
 *
 *   - the GNU Lesser General Public License as published by the Free
 *     Software Foundation; either version 3 of the License, or (at
 *     your option) any later version.
 *
 * or
 *
 *   - the GNU General Public License as published by the Free
 *     Software Foundation; either version 2 of the License, or (at
 *     your option) any later version.
 *
 * or both in parallel, as here.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <https://www.gnu.org/licenses/>.
 */

/* The purpose of this complex string table is to produce
   optimal code with a minimum of relocations.  */

static const char statusstr_msgstr[] = 
  "ENTER" "\0"
  "LEAVE" "\0"
  "ABORT" "\0"
  "GOODSIG" "\0"
  "BADSIG" "\0"
  "ERRSIG" "\0"
  "BADARMOR" "\0"
  "TRUST_UNDEFINED" "\0"
  "TRUST_NEVER" "\0"
  "TRUST_MARGINAL" "\0"
  "TRUST_FULLY" "\0"
  "TRUST_ULTIMATE" "\0"
  "NEED_PASSPHRASE" "\0"
  "VALIDSIG" "\0"
  "SIG_ID" "\0"
  "ENC_TO" "\0"
  "NODATA" "\0"
  "BAD_PASSPHRASE" "\0"
  "NO_PUBKEY" "\0"
  "NO_SECKEY" "\0"
  "NEED_PASSPHRASE_SYM" "\0"
  "DECRYPTION_INFO" "\0"
  "DECRYPTION_FAILED" "\0"
  "DECRYPTION_OKAY" "\0"
  "MISSING_PASSPHRASE" "\0"
  "GOOD_PASSPHRASE" "\0"
  "GOODMDC" "\0"
  "BADMDC" "\0"
  "ERRMDC" "\0"
  "IMPORTED" "\0"
  "IMPORT_OK" "\0"
  "IMPORT_PROBLEM" "\0"
  "IMPORT_RES" "\0"
  "IMPORT_CHECK" "\0"
  "EXPORTED" "\0"
  "EXPORT_RES" "\0"
  "FILE_START" "\0"
  "FILE_DONE" "\0"
  "FILE_ERROR" "\0"
  "BEGIN_DECRYPTION" "\0"
  "END_DECRYPTION" "\0"
  "BEGIN_ENCRYPTION" "\0"
  "END_ENCRYPTION" "\0"
  "BEGIN_SIGNING" "\0"
  "DELETE_PROBLEM" "\0"
  "GET_BOOL" "\0"
  "GET_LINE" "\0"
  "GET_HIDDEN" "\0"
  "GOT_IT" "\0"
  "PROGRESS" "\0"
  "SIG_CREATED" "\0"
  "SESSION_KEY" "\0"
  "NOTATION_NAME" "\0"
  "NOTATION_FLAGS" "\0"
  "NOTATION_DATA" "\0"
  "POLICY_URL" "\0"
  "KEY_CREATED" "\0"
  "USERID_HINT" "\0"
  "UNEXPECTED" "\0"
  "INV_RECP" "\0"
  "INV_SGNR" "\0"
  "NO_RECP" "\0"
  "NO_SGNR" "\0"
  "KEY_CONSIDERED" "\0"
  "ALREADY_SIGNED" "\0"
  "KEYEXPIRED" "\0"
  "KEYREVOKED" "\0"
  "EXPSIG" "\0"
  "EXPKEYSIG" "\0"
  "ATTRIBUTE" "\0"
  "REVKEYSIG" "\0"
  "NEWSIG" "\0"
  "SIG_SUBPACKET" "\0"
  "PLAINTEXT" "\0"
  "PLAINTEXT_LENGTH" "\0"
  "KEY_NOT_CREATED" "\0"
  "NEED_PASSPHRASE_PIN" "\0"
  "CARDCTRL" "\0"
  "SC_OP_FAILURE" "\0"
  "SC_OP_SUCCESS" "\0"
  "BACKUP_KEY_CREATED" "\0"
  "PKA_TRUST_BAD" "\0"
  "PKA_TRUST_GOOD" "\0"
  "TOFU_USER" "\0"
  "TOFU_STATS" "\0"
  "TOFU_STATS_SHORT" "\0"
  "TOFU_STATS_LONG" "\0"
  "TRUNCATED" "\0"
  "MOUNTPOINT" "\0"
  "BLOCKDEV" "\0"
  "PINENTRY_LAUNCHED" "\0"
  "PLAINTEXT_FOLLOWS" "\0"
  "ERROR" "\0"
  "WARNING" "\0"
  "SUCCESS" "\0"
  "FAILURE" "\0"
  "INQUIRE_MAXLEN";

static const int statusstr_msgidx[] =
  {
    0,
    6,
    12,
    18,
    26,
    33,
    40,
    49,
    65,
    77,
    92,
    104,
    119,
    135,
    144,
    151,
    158,
    165,
    180,
    190,
    200,
    220,
    236,
    254,
    270,
    289,
    305,
    313,
    320,
    327,
    336,
    346,
    361,
    372,
    385,
    394,
    405,
    416,
    426,
    437,
    454,
    469,
    486,
    501,
    515,
    530,
    539,
    548,
    559,
    566,
    575,
    587,
    599,
    613,
    628,
    642,
    653,
    665,
    677,
    688,
    697,
    706,
    714,
    722,
    737,
    752,
    763,
    774,
    781,
    791,
    801,
    811,
    818,
    832,
    842,
    859,
    875,
    895,
    904,
    918,
    932,
    951,
    965,
    980,
    990,
    1001,
    1018,
    1034,
    1044,
    1055,
    1064,
    1082,
    1100,
    1106,
    1114,
    1122,
    1130,
    
  };

#define statusstr_msgidxof(code) (0 ? -1 \
  : ((code >= 0) && (code <= 96)) ? (code - 0) \
  : -1)
