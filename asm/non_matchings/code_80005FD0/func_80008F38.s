glabel func_80008F38
/* 009B38 80008F38 3C068016 */  lui   $a2, %hi(D_801645C8) # $a2, 0x8016
/* 009B3C 80008F3C 00041080 */  sll   $v0, $a0, 2
/* 009B40 80008F40 3C038016 */  lui   $v1, %hi(gLapCountByPlayerId) # 0x8016
/* 009B44 80008F44 24C645C8 */  addiu $a2, %lo(D_801645C8) # addiu $a2, $a2, 0x45c8
/* 009B48 80008F48 00621821 */  addu  $v1, $v1, $v0
/* 009B4C 80008F4C 8C634390 */  lw    $v1, %lo(gLapCountByPlayerId)($v1) # 0x4390($v1)
/* 009B50 80008F50 94CE0000 */  lhu   $t6, ($a2)
/* 009B54 80008F54 00042840 */  sll   $a1, $a0, 1
/* 009B58 80008F58 3C088016 */  lui   $t0, %hi(D_80164438) # 0x8016
/* 009B5C 80008F5C 01C30019 */  multu $t6, $v1
/* 009B60 80008F60 01054021 */  addu  $t0, $t0, $a1
/* 009B64 80008F64 95084438 */  lhu   $t0, %lo(D_80164438)($t0) # 0x4438($t0)
/* 009B68 80008F68 3C188016 */  lui   $t8, %hi(D_80162FCE) # $t8, 0x8016
/* 009B6C 80008F6C 87182FCE */  lh    $t8, %lo(D_80162FCE)($t8)
/* 009B70 80008F70 44882000 */  mtc1  $t0, $f4
/* 009B74 80008F74 3C018016 */  lui   $at, %hi(D_80164450) # 0x8016
/* 009B78 80008F78 00220821 */  addu  $at, $at, $v0
/* 009B7C 80008F7C 3C098016 */  lui   $t1, %hi(D_801645B0) # 0x8016
/* 009B80 80008F80 468021A0 */  cvt.s.w $f6, $f4
/* 009B84 80008F84 00007812 */  mflo  $t7
/* 009B88 80008F88 01F8C821 */  addu  $t9, $t7, $t8
/* 009B8C 80008F8C 05010005 */  bgez  $t0, .L80008FA4
/* 009B90 80008F90 AC394450 */   sw    $t9, %lo(D_80164450)($at) # 0x4450($at)
/* 009B94 80008F94 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 009B98 80008F98 44814000 */  mtc1  $at, $f8
/* 009B9C 80008F9C 00000000 */  nop   
/* 009BA0 80008FA0 46083180 */  add.s $f6, $f6, $f8
.L80008FA4:
/* 009BA4 80008FA4 01254821 */  addu  $t1, $t1, $a1
/* 009BA8 80008FA8 952945B0 */  lhu   $t1, %lo(D_801645B0)($t1) # 0x45b0($t1)
/* 009BAC 80008FAC 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 009BB0 80008FB0 00095040 */  sll   $t2, $t1, 1
/* 009BB4 80008FB4 00CA5821 */  addu  $t3, $a2, $t2
/* 009BB8 80008FB8 956C0000 */  lhu   $t4, ($t3)
/* 009BBC 80008FBC 448C5000 */  mtc1  $t4, $f10
/* 009BC0 80008FC0 05810004 */  bgez  $t4, .L80008FD4
/* 009BC4 80008FC4 46805420 */   cvt.s.w $f16, $f10
/* 009BC8 80008FC8 44819000 */  mtc1  $at, $f18
/* 009BCC 80008FCC 00000000 */  nop   
/* 009BD0 80008FD0 46128400 */  add.s $f16, $f16, $f18
.L80008FD4:
/* 009BD4 80008FD4 46103003 */  div.s $f0, $f6, $f16
/* 009BD8 80008FD8 44832000 */  mtc1  $v1, $f4
/* 009BDC 80008FDC 3C018016 */  lui   $at, %hi(gLapCompletionPercentByPlayerId)
/* 009BE0 80008FE0 00220821 */  addu  $at, $at, $v0
/* 009BE4 80008FE4 46802220 */  cvt.s.w $f8, $f4
/* 009BE8 80008FE8 46080280 */  add.s $f10, $f0, $f8
/* 009BEC 80008FEC E42044A8 */  swc1  $f0, %lo(gLapCompletionPercentByPlayerId)($at)
/* 009BF0 80008FF0 3C018016 */  lui   $at, %hi(gCourseCompletionPercentByPlayerId)
/* 009BF4 80008FF4 00220821 */  addu  $at, $at, $v0
/* 009BF8 80008FF8 03E00008 */  jr    $ra
/* 009BFC 80008FFC E42A44D0 */   swc1  $f10, %lo(gCourseCompletionPercentByPlayerId)($at)
