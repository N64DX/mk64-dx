glabel func_80021C78
/* 022878 80021C78 27BDFFE8 */  addiu $sp, $sp, -0x18
/* 02287C 80021C7C AFBF0014 */  sw    $ra, 0x14($sp)
/* 022880 80021C80 3C04800E */  lui   $a0, %hi(gPlayerOneCopy) # $a0, 0x800e
/* 022884 80021C84 8C84C4FC */  lw    $a0, %lo(gPlayerOneCopy)($a0)
/* 022888 80021C88 00002825 */  move  $a1, $zero
/* 02288C 80021C8C 0C01BA12 */  jal   func_8006E848
/* 022890 80021C90 24060001 */   li    $a2, 1
/* 022894 80021C94 3C04800E */  lui   $a0, %hi(gPlayerTwo) # $a0, 0x800e
/* 022898 80021C98 8C84C4E0 */  lw    $a0, %lo(gPlayerTwo)($a0)
/* 02289C 80021C9C 24050001 */  li    $a1, 1
/* 0228A0 80021CA0 0C01BA12 */  jal   func_8006E848
/* 0228A4 80021CA4 24060001 */   li    $a2, 1
/* 0228A8 80021CA8 3C04800E */  lui   $a0, %hi(gPlayerThree) # $a0, 0x800e
/* 0228AC 80021CAC 8C84C4E4 */  lw    $a0, %lo(gPlayerThree)($a0)
/* 0228B0 80021CB0 24050002 */  li    $a1, 2
/* 0228B4 80021CB4 0C01BA12 */  jal   func_8006E848
/* 0228B8 80021CB8 24060001 */   li    $a2, 1
/* 0228BC 80021CBC 3C04800E */  lui   $a0, %hi(gPlayerFour) # $a0, 0x800e
/* 0228C0 80021CC0 8C84C4E8 */  lw    $a0, %lo(gPlayerFour)($a0)
/* 0228C4 80021CC4 24050003 */  li    $a1, 3
/* 0228C8 80021CC8 0C01BA12 */  jal   func_8006E848
/* 0228CC 80021CCC 24060001 */   li    $a2, 1
/* 0228D0 80021CD0 3C0E800E */  lui   $t6, %hi(D_800DC52C) # $t6, 0x800e
/* 0228D4 80021CD4 8DCEC52C */  lw    $t6, %lo(D_800DC52C)($t6)
/* 0228D8 80021CD8 24010003 */  li    $at, 3
/* 0228DC 80021CDC 3C04800E */  lui   $a0, %hi(gPlayerFive) # $a0, 0x800e
/* 0228E0 80021CE0 11C10013 */  beq   $t6, $at, .L80021D30
/* 0228E4 80021CE4 24050004 */   li    $a1, 4
/* 0228E8 80021CE8 8C84C4EC */  lw    $a0, %lo(gPlayerFive)($a0)
/* 0228EC 80021CEC 0C01BA12 */  jal   func_8006E848
/* 0228F0 80021CF0 24060001 */   li    $a2, 1
/* 0228F4 80021CF4 3C04800E */  lui   $a0, %hi(gPlayerSix) # $a0, 0x800e
/* 0228F8 80021CF8 8C84C4F0 */  lw    $a0, %lo(gPlayerSix)($a0)
/* 0228FC 80021CFC 24050005 */  li    $a1, 5
/* 022900 80021D00 0C01BA12 */  jal   func_8006E848
/* 022904 80021D04 24060001 */   li    $a2, 1
/* 022908 80021D08 3C04800E */  lui   $a0, %hi(gPlayerSeven) # $a0, 0x800e
/* 02290C 80021D0C 8C84C4F4 */  lw    $a0, %lo(gPlayerSeven)($a0)
/* 022910 80021D10 24050006 */  li    $a1, 6
/* 022914 80021D14 0C01BA12 */  jal   func_8006E848
/* 022918 80021D18 24060001 */   li    $a2, 1
/* 02291C 80021D1C 3C04800E */  lui   $a0, %hi(gPlayerEight) # $a0, 0x800e
/* 022920 80021D20 8C84C4F8 */  lw    $a0, %lo(gPlayerEight)($a0)
/* 022924 80021D24 24050007 */  li    $a1, 7
/* 022928 80021D28 0C01BA12 */  jal   func_8006E848
/* 02292C 80021D2C 24060001 */   li    $a2, 1
.L80021D30:
/* 022930 80021D30 8FBF0014 */  lw    $ra, 0x14($sp)
/* 022934 80021D34 27BD0018 */  addiu $sp, $sp, 0x18
/* 022938 80021D38 03E00008 */  jr    $ra
/* 02293C 80021D3C 00000000 */   nop
