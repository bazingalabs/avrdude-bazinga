/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     K_READ = 258,
     K_WRITE = 259,
     K_READ_LO = 260,
     K_READ_HI = 261,
     K_WRITE_LO = 262,
     K_WRITE_HI = 263,
     K_LOADPAGE_LO = 264,
     K_LOADPAGE_HI = 265,
     K_LOAD_EXT_ADDR = 266,
     K_WRITEPAGE = 267,
     K_CHIP_ERASE = 268,
     K_PGM_ENABLE = 269,
     K_MEMORY = 270,
     K_PAGE_SIZE = 271,
     K_PAGED = 272,
     K_ARDUINO = 273,
     K_AVRFTDI = 274,
     K_BAUDRATE = 275,
     K_BS2 = 276,
     K_BUFF = 277,
     K_BUSPIRATE = 278,
     K_CHIP_ERASE_DELAY = 279,
     K_DEDICATED = 280,
     K_DEFAULT_PARALLEL = 281,
     K_DEFAULT_PROGRAMMER = 282,
     K_DEFAULT_SERIAL = 283,
     K_DEFAULT_BITCLOCK = 284,
     K_DESC = 285,
     K_DEVICECODE = 286,
     K_DRAGON_DW = 287,
     K_DRAGON_HVSP = 288,
     K_DRAGON_ISP = 289,
     K_DRAGON_JTAG = 290,
     K_DRAGON_PDI = 291,
     K_DRAGON_PP = 292,
     K_STK500_DEVCODE = 293,
     K_AVR910_DEVCODE = 294,
     K_EEPROM = 295,
     K_ERRLED = 296,
     K_FLASH = 297,
     K_ID = 298,
     K_IO = 299,
     K_JTAG_MKI = 300,
     K_JTAG_MKII = 301,
     K_JTAG_MKII_AVR32 = 302,
     K_JTAG_MKII_DW = 303,
     K_JTAG_MKII_ISP = 304,
     K_JTAG_MKII_PDI = 305,
     K_LOADPAGE = 306,
     K_MAX_WRITE_DELAY = 307,
     K_MIN_WRITE_DELAY = 308,
     K_MISO = 309,
     K_MOSI = 310,
     K_NUM_PAGES = 311,
     K_NVM_BASE = 312,
     K_OFFSET = 313,
     K_PAGEL = 314,
     K_PAR = 315,
     K_PARALLEL = 316,
     K_PART = 317,
     K_PGMLED = 318,
     K_PROGRAMMER = 319,
     K_PSEUDO = 320,
     K_PWROFF_AFTER_WRITE = 321,
     K_RDYLED = 322,
     K_READBACK_P1 = 323,
     K_READBACK_P2 = 324,
     K_READMEM = 325,
     K_RESET = 326,
     K_RETRY_PULSE = 327,
     K_SERBB = 328,
     K_SERIAL = 329,
     K_SCK = 330,
     K_SIGNATURE = 331,
     K_SIZE = 332,
     K_STK500 = 333,
     K_STK500HVSP = 334,
     K_STK500PP = 335,
     K_STK500V2 = 336,
     K_STK500GENERIC = 337,
     K_STK600 = 338,
     K_STK600HVSP = 339,
     K_STK600PP = 340,
     K_AVR910 = 341,
     K_USBASP = 342,
     K_USBDEV = 343,
     K_USBSN = 344,
     K_USBTINY = 345,
     K_USBPID = 346,
     K_USBPRODUCT = 347,
     K_USBVENDOR = 348,
     K_USBVID = 349,
     K_BUTTERFLY = 350,
     K_PROGER = 351,
     K_BUTTERFLY_MK = 352,
     K_TYPE = 353,
     K_VCC = 354,
     K_VFYLED = 355,
     K_WIRING = 356,
     K_NO = 357,
     K_YES = 358,
     K_TIMEOUT = 359,
     K_STABDELAY = 360,
     K_CMDEXEDELAY = 361,
     K_HVSPCMDEXEDELAY = 362,
     K_SYNCHLOOPS = 363,
     K_BYTEDELAY = 364,
     K_POLLVALUE = 365,
     K_POLLINDEX = 366,
     K_PREDELAY = 367,
     K_POSTDELAY = 368,
     K_POLLMETHOD = 369,
     K_MODE = 370,
     K_DELAY = 371,
     K_BLOCKSIZE = 372,
     K_READSIZE = 373,
     K_HVENTERSTABDELAY = 374,
     K_PROGMODEDELAY = 375,
     K_LATCHCYCLES = 376,
     K_TOGGLEVTG = 377,
     K_POWEROFFDELAY = 378,
     K_RESETDELAYMS = 379,
     K_RESETDELAYUS = 380,
     K_HVLEAVESTABDELAY = 381,
     K_RESETDELAY = 382,
     K_SYNCHCYCLES = 383,
     K_HVCMDEXEDELAY = 384,
     K_CHIPERASEPULSEWIDTH = 385,
     K_CHIPERASEPOLLTIMEOUT = 386,
     K_CHIPERASETIME = 387,
     K_PROGRAMFUSEPULSEWIDTH = 388,
     K_PROGRAMFUSEPOLLTIMEOUT = 389,
     K_PROGRAMLOCKPULSEWIDTH = 390,
     K_PROGRAMLOCKPOLLTIMEOUT = 391,
     K_PP_CONTROLSTACK = 392,
     K_HVSP_CONTROLSTACK = 393,
     K_ALLOWFULLPAGEBITSTREAM = 394,
     K_ENABLEPAGEPROGRAMMING = 395,
     K_HAS_JTAG = 396,
     K_HAS_DW = 397,
     K_HAS_PDI = 398,
     K_HAS_TPI = 399,
     K_IDR = 400,
     K_IS_AVR32 = 401,
     K_RAMPZ = 402,
     K_SPMCR = 403,
     K_EECR = 404,
     K_FLASH_INSTR = 405,
     K_EEPROM_INSTR = 406,
     TKN_COMMA = 407,
     TKN_EQUAL = 408,
     TKN_SEMI = 409,
     TKN_TILDE = 410,
     TKN_NUMBER = 411,
     TKN_STRING = 412,
     TKN_ID = 413
   };
#endif
/* Tokens.  */
#define K_READ 258
#define K_WRITE 259
#define K_READ_LO 260
#define K_READ_HI 261
#define K_WRITE_LO 262
#define K_WRITE_HI 263
#define K_LOADPAGE_LO 264
#define K_LOADPAGE_HI 265
#define K_LOAD_EXT_ADDR 266
#define K_WRITEPAGE 267
#define K_CHIP_ERASE 268
#define K_PGM_ENABLE 269
#define K_MEMORY 270
#define K_PAGE_SIZE 271
#define K_PAGED 272
#define K_ARDUINO 273
#define K_AVRFTDI 274
#define K_BAUDRATE 275
#define K_BS2 276
#define K_BUFF 277
#define K_BUSPIRATE 278
#define K_CHIP_ERASE_DELAY 279
#define K_DEDICATED 280
#define K_DEFAULT_PARALLEL 281
#define K_DEFAULT_PROGRAMMER 282
#define K_DEFAULT_SERIAL 283
#define K_DEFAULT_BITCLOCK 284
#define K_DESC 285
#define K_DEVICECODE 286
#define K_DRAGON_DW 287
#define K_DRAGON_HVSP 288
#define K_DRAGON_ISP 289
#define K_DRAGON_JTAG 290
#define K_DRAGON_PDI 291
#define K_DRAGON_PP 292
#define K_STK500_DEVCODE 293
#define K_AVR910_DEVCODE 294
#define K_EEPROM 295
#define K_ERRLED 296
#define K_FLASH 297
#define K_ID 298
#define K_IO 299
#define K_JTAG_MKI 300
#define K_JTAG_MKII 301
#define K_JTAG_MKII_AVR32 302
#define K_JTAG_MKII_DW 303
#define K_JTAG_MKII_ISP 304
#define K_JTAG_MKII_PDI 305
#define K_LOADPAGE 306
#define K_MAX_WRITE_DELAY 307
#define K_MIN_WRITE_DELAY 308
#define K_MISO 309
#define K_MOSI 310
#define K_NUM_PAGES 311
#define K_NVM_BASE 312
#define K_OFFSET 313
#define K_PAGEL 314
#define K_PAR 315
#define K_PARALLEL 316
#define K_PART 317
#define K_PGMLED 318
#define K_PROGRAMMER 319
#define K_PSEUDO 320
#define K_PWROFF_AFTER_WRITE 321
#define K_RDYLED 322
#define K_READBACK_P1 323
#define K_READBACK_P2 324
#define K_READMEM 325
#define K_RESET 326
#define K_RETRY_PULSE 327
#define K_SERBB 328
#define K_SERIAL 329
#define K_SCK 330
#define K_SIGNATURE 331
#define K_SIZE 332
#define K_STK500 333
#define K_STK500HVSP 334
#define K_STK500PP 335
#define K_STK500V2 336
#define K_STK500GENERIC 337
#define K_STK600 338
#define K_STK600HVSP 339
#define K_STK600PP 340
#define K_AVR910 341
#define K_USBASP 342
#define K_USBDEV 343
#define K_USBSN 344
#define K_USBTINY 345
#define K_USBPID 346
#define K_USBPRODUCT 347
#define K_USBVENDOR 348
#define K_USBVID 349
#define K_BUTTERFLY 350
#define K_PROGER 351
#define K_BUTTERFLY_MK 352
#define K_TYPE 353
#define K_VCC 354
#define K_VFYLED 355
#define K_WIRING 356
#define K_NO 357
#define K_YES 358
#define K_TIMEOUT 359
#define K_STABDELAY 360
#define K_CMDEXEDELAY 361
#define K_HVSPCMDEXEDELAY 362
#define K_SYNCHLOOPS 363
#define K_BYTEDELAY 364
#define K_POLLVALUE 365
#define K_POLLINDEX 366
#define K_PREDELAY 367
#define K_POSTDELAY 368
#define K_POLLMETHOD 369
#define K_MODE 370
#define K_DELAY 371
#define K_BLOCKSIZE 372
#define K_READSIZE 373
#define K_HVENTERSTABDELAY 374
#define K_PROGMODEDELAY 375
#define K_LATCHCYCLES 376
#define K_TOGGLEVTG 377
#define K_POWEROFFDELAY 378
#define K_RESETDELAYMS 379
#define K_RESETDELAYUS 380
#define K_HVLEAVESTABDELAY 381
#define K_RESETDELAY 382
#define K_SYNCHCYCLES 383
#define K_HVCMDEXEDELAY 384
#define K_CHIPERASEPULSEWIDTH 385
#define K_CHIPERASEPOLLTIMEOUT 386
#define K_CHIPERASETIME 387
#define K_PROGRAMFUSEPULSEWIDTH 388
#define K_PROGRAMFUSEPOLLTIMEOUT 389
#define K_PROGRAMLOCKPULSEWIDTH 390
#define K_PROGRAMLOCKPOLLTIMEOUT 391
#define K_PP_CONTROLSTACK 392
#define K_HVSP_CONTROLSTACK 393
#define K_ALLOWFULLPAGEBITSTREAM 394
#define K_ENABLEPAGEPROGRAMMING 395
#define K_HAS_JTAG 396
#define K_HAS_DW 397
#define K_HAS_PDI 398
#define K_HAS_TPI 399
#define K_IDR 400
#define K_IS_AVR32 401
#define K_RAMPZ 402
#define K_SPMCR 403
#define K_EECR 404
#define K_FLASH_INSTR 405
#define K_EEPROM_INSTR 406
#define TKN_COMMA 407
#define TKN_EQUAL 408
#define TKN_SEMI 409
#define TKN_TILDE 410
#define TKN_NUMBER 411
#define TKN_STRING 412
#define TKN_ID 413




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

