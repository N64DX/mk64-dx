glabel func_800B13B0
/* 0B1FB0 800B13B0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0B1FB4 800B13B4 AFBF0014 */  sw    $ra, 0x14($sp)
/* 0B1FB8 800B13B8 AFA50024 */  sw    $a1, 0x24($sp)
/* 0B1FBC 800B13BC 948F000C */  lhu   $t7, 0xc($a0)
/* 0B1FC0 800B13C0 948E0006 */  lhu   $t6, 6($a0)
/* 0B1FC4 800B13C4 3C19800E */  lui   $t9, %hi(gEnableDebugMode) # $t9, 0x800e
/* 0B1FC8 800B13C8 9739C520 */  lhu   $t9, %lo(gEnableDebugMode)($t9)
/* 0B1FCC 800B13CC 01CF2825 */  or    $a1, $t6, $t7
/* 0B1FD0 800B13D0 30B8FFFF */  andi  $t8, $a1, 0xffff
/* 0B1FD4 800B13D4 17200007 */  bnez  $t9, .L800B13F4
/* 0B1FD8 800B13D8 03002825 */   move  $a1, $t8
/* 0B1FDC 800B13DC 33081000 */  andi  $t0, $t8, 0x1000
/* 0B1FE0 800B13E0 11000004 */  beqz  $t0, .L800B13F4
/* 0B1FE4 800B13E4 00000000 */   nop   
/* 0B1FE8 800B13E8 37058000 */  ori   $a1, $t8, 0x8000
/* 0B1FEC 800B13EC 30A9FFFF */  andi  $t1, $a1, 0xffff
/* 0B1FF0 800B13F0 01202825 */  move  $a1, $t1
.L800B13F4:
/* 0B1FF4 800B13F4 0C02D148 */  jal   func_800B4520
/* 0B1FF8 800B13F8 A7A5001E */   sh    $a1, 0x1e($sp)
/* 0B1FFC 800B13FC 14400067 */  bnez  $v0, .L800B159C
/* 0B2000 800B1400 97A5001E */   lhu   $a1, 0x1e($sp)
/* 0B2004 800B1404 3C0A8019 */  lui   $t2, %hi(D_8018EDEC) # $t2, 0x8019
/* 0B2008 800B1408 814AEDEC */  lb    $t2, %lo(D_8018EDEC)($t2)
/* 0B200C 800B140C 00A01825 */  move  $v1, $a1
/* 0B2010 800B1410 24010001 */  li    $at, 1
/* 0B2014 800B1414 1541005A */  bne   $t2, $at, .L800B1580
/* 0B2018 800B1418 306F8000 */   andi  $t7, $v1, 0x8000
/* 0B201C 800B141C 30AB0400 */  andi  $t3, $a1, 0x400
/* 0B2020 800B1420 11600011 */  beqz  $t3, .L800B1468
/* 0B2024 800B1424 3C058019 */   lui   $a1, %hi(gTimeTrialDataCourseIndex) # $a1, 0x8019
/* 0B2028 800B1428 24A5EDF7 */  addiu $a1, %lo(gTimeTrialDataCourseIndex) # addiu $a1, $a1, -0x1209
/* 0B202C 800B142C 80A20000 */  lb    $v0, ($a1)
/* 0B2030 800B1430 24010003 */  li    $at, 3
/* 0B2034 800B1434 3C044900 */  lui   $a0, (0x49008000 >> 16) # lui $a0, 0x4900
/* 0B2038 800B1438 04410004 */  bgez  $v0, .L800B144C
/* 0B203C 800B143C 304C0003 */   andi  $t4, $v0, 3
/* 0B2040 800B1440 11800002 */  beqz  $t4, .L800B144C
/* 0B2044 800B1444 00000000 */   nop   
/* 0B2048 800B1448 258CFFFC */  addiu $t4, $t4, -4
.L800B144C:
/* 0B204C 800B144C 11810006 */  beq   $t4, $at, .L800B1468
/* 0B2050 800B1450 244D0001 */   addiu $t5, $v0, 1
/* 0B2054 800B1454 A0AD0000 */  sb    $t5, ($a1)
/* 0B2058 800B1458 34848000 */  ori   $a0, (0x49008000 & 0xFFFF) # ori $a0, $a0, 0x8000
/* 0B205C 800B145C 0C032384 */  jal   play_sound2
/* 0B2060 800B1460 AFA30018 */   sw    $v1, 0x18($sp)
/* 0B2064 800B1464 8FA30018 */  lw    $v1, 0x18($sp)
.L800B1468:
/* 0B2068 800B1468 3C058019 */  lui   $a1, %hi(gTimeTrialDataCourseIndex) # $a1, 0x8019
/* 0B206C 800B146C 306E0800 */  andi  $t6, $v1, 0x800
/* 0B2070 800B1470 11C0000D */  beqz  $t6, .L800B14A8
/* 0B2074 800B1474 24A5EDF7 */   addiu $a1, %lo(gTimeTrialDataCourseIndex) # addiu $a1, $a1, -0x1209
/* 0B2078 800B1478 80A20000 */  lb    $v0, ($a1)
/* 0B207C 800B147C 3C044900 */  lui   $a0, (0x49008000 >> 16) # lui $a0, 0x4900
/* 0B2080 800B1480 34848000 */  ori   $a0, (0x49008000 & 0xFFFF) # ori $a0, $a0, 0x8000
/* 0B2084 800B1484 304F0003 */  andi  $t7, $v0, 3
/* 0B2088 800B1488 11E00007 */  beqz  $t7, .L800B14A8
/* 0B208C 800B148C 2458FFFF */   addiu $t8, $v0, -1
/* 0B2090 800B1490 A0B80000 */  sb    $t8, ($a1)
/* 0B2094 800B1494 0C032384 */  jal   play_sound2
/* 0B2098 800B1498 AFA30018 */   sw    $v1, 0x18($sp)
/* 0B209C 800B149C 3C058019 */  lui   $a1, %hi(gTimeTrialDataCourseIndex) # $a1, 0x8019
/* 0B20A0 800B14A0 24A5EDF7 */  addiu $a1, %lo(gTimeTrialDataCourseIndex) # addiu $a1, $a1, -0x1209
/* 0B20A4 800B14A4 8FA30018 */  lw    $v1, 0x18($sp)
.L800B14A8:
/* 0B20A8 800B14A8 30790100 */  andi  $t9, $v1, 0x100
/* 0B20AC 800B14AC 53200012 */  beql  $t9, $zero, .L800B14F8
/* 0B20B0 800B14B0 306A0200 */   andi  $t2, $v1, 0x200
/* 0B20B4 800B14B4 80A20000 */  lb    $v0, ($a1)
/* 0B20B8 800B14B8 3C044900 */  lui   $a0, (0x49008000 >> 16) # lui $a0, 0x4900
/* 0B20BC 800B14BC 34848000 */  ori   $a0, (0x49008000 & 0xFFFF) # ori $a0, $a0, 0x8000
/* 0B20C0 800B14C0 04410003 */  bgez  $v0, .L800B14D0
/* 0B20C4 800B14C4 00024083 */   sra   $t0, $v0, 2
/* 0B20C8 800B14C8 24410003 */  addiu $at, $v0, 3
/* 0B20CC 800B14CC 00014083 */  sra   $t0, $at, 2
.L800B14D0:
/* 0B20D0 800B14D0 24010003 */  li    $at, 3
/* 0B20D4 800B14D4 11010007 */  beq   $t0, $at, .L800B14F4
/* 0B20D8 800B14D8 24490004 */   addiu $t1, $v0, 4
/* 0B20DC 800B14DC A0A90000 */  sb    $t1, ($a1)
/* 0B20E0 800B14E0 0C032384 */  jal   play_sound2
/* 0B20E4 800B14E4 AFA30018 */   sw    $v1, 0x18($sp)
/* 0B20E8 800B14E8 3C058019 */  lui   $a1, %hi(gTimeTrialDataCourseIndex) # $a1, 0x8019
/* 0B20EC 800B14EC 24A5EDF7 */  addiu $a1, %lo(gTimeTrialDataCourseIndex) # addiu $a1, $a1, -0x1209
/* 0B20F0 800B14F0 8FA30018 */  lw    $v1, 0x18($sp)
.L800B14F4:
/* 0B20F4 800B14F4 306A0200 */  andi  $t2, $v1, 0x200
.L800B14F8:
/* 0B20F8 800B14F8 5140000F */  beql  $t2, $zero, .L800B1538
/* 0B20FC 800B14FC 306D4000 */   andi  $t5, $v1, 0x4000
/* 0B2100 800B1500 80A20000 */  lb    $v0, ($a1)
/* 0B2104 800B1504 3C044900 */  lui   $a0, (0x49008000 >> 16) # lui $a0, 0x4900
/* 0B2108 800B1508 34848000 */  ori   $a0, (0x49008000 & 0xFFFF) # ori $a0, $a0, 0x8000
/* 0B210C 800B150C 04410003 */  bgez  $v0, .L800B151C
/* 0B2110 800B1510 00025883 */   sra   $t3, $v0, 2
/* 0B2114 800B1514 24410003 */  addiu $at, $v0, 3
/* 0B2118 800B1518 00015883 */  sra   $t3, $at, 2
.L800B151C:
/* 0B211C 800B151C 11600005 */  beqz  $t3, .L800B1534
/* 0B2120 800B1520 244CFFFC */   addiu $t4, $v0, -4
/* 0B2124 800B1524 A0AC0000 */  sb    $t4, ($a1)
/* 0B2128 800B1528 0C032384 */  jal   play_sound2
/* 0B212C 800B152C AFA30018 */   sw    $v1, 0x18($sp)
/* 0B2130 800B1530 8FA30018 */  lw    $v1, 0x18($sp)
.L800B1534:
/* 0B2134 800B1534 306D4000 */  andi  $t5, $v1, 0x4000
.L800B1538:
/* 0B2138 800B1538 11A00008 */  beqz  $t5, .L800B155C
/* 0B213C 800B153C 306E8000 */   andi  $t6, $v1, 0x8000
/* 0B2140 800B1540 0C027896 */  jal   func_8009E258
/* 0B2144 800B1544 00000000 */   nop   
/* 0B2148 800B1548 3C044900 */  lui   $a0, (0x49008002 >> 16) # lui $a0, 0x4900
/* 0B214C 800B154C 0C032384 */  jal   play_sound2
/* 0B2150 800B1550 34848002 */   ori   $a0, (0x49008002 & 0xFFFF) # ori $a0, $a0, 0x8002
/* 0B2154 800B1554 10000012 */  b     .L800B15A0
/* 0B2158 800B1558 8FBF0014 */   lw    $ra, 0x14($sp)
.L800B155C:
/* 0B215C 800B155C 11C0000F */  beqz  $t6, .L800B159C
/* 0B2160 800B1560 3C018019 */   lui   $at, %hi(D_8018EDF8) # $at, 0x8019
/* 0B2164 800B1564 0C027870 */  jal   func_8009E1C0
/* 0B2168 800B1568 A020EDF8 */   sb    $zero, %lo(D_8018EDF8)($at)
/* 0B216C 800B156C 3C044900 */  lui   $a0, (0x49008016 >> 16) # lui $a0, 0x4900
/* 0B2170 800B1570 0C032384 */  jal   play_sound2
/* 0B2174 800B1574 34848016 */   ori   $a0, (0x49008016 & 0xFFFF) # ori $a0, $a0, 0x8016
/* 0B2178 800B1578 10000009 */  b     .L800B15A0
/* 0B217C 800B157C 8FBF0014 */   lw    $ra, 0x14($sp)
.L800B1580:
/* 0B2180 800B1580 51E00007 */  beql  $t7, $zero, .L800B15A0
/* 0B2184 800B1584 8FBF0014 */   lw    $ra, 0x14($sp)
/* 0B2188 800B1588 0C027896 */  jal   func_8009E258
/* 0B218C 800B158C 00000000 */   nop   
/* 0B2190 800B1590 3C044900 */  lui   $a0, (0x49008016 >> 16) # lui $a0, 0x4900
/* 0B2194 800B1594 0C032384 */  jal   play_sound2
/* 0B2198 800B1598 34848016 */   ori   $a0, (0x49008016 & 0xFFFF) # ori $a0, $a0, 0x8016
.L800B159C:
/* 0B219C 800B159C 8FBF0014 */  lw    $ra, 0x14($sp)
.L800B15A0:
/* 0B21A0 800B15A0 27BD0020 */  addiu $sp, $sp, 0x20
/* 0B21A4 800B15A4 03E00008 */  jr    $ra
/* 0B21A8 800B15A8 00000000 */   nop   
