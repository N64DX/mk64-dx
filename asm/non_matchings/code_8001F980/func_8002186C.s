glabel func_8002186C
/* 02246C 8002186C 27BDFFE8 */  addiu $sp, $sp, -0x18
/* 022470 80021870 AFBF0014 */  sw    $ra, 0x14($sp)
/* 022474 80021874 3C01800E */  lui   $at, %hi(D_800DDB58) # $at, 0x800e
/* 022478 80021878 3C04800E */  lui   $a0, %hi(gPlayerOneCopy) # $a0, 0x800e
/* 02247C 8002187C 3C05800E */  lui   $a1, %hi(camera3) # $a1, 0x800e
/* 022480 80021880 AC20DB58 */  sw    $zero, %lo(D_800DDB58)($at)
/* 022484 80021884 8CA5DB48 */  lw    $a1, %lo(camera3)($a1)
/* 022488 80021888 8C84C4FC */  lw    $a0, %lo(gPlayerOneCopy)($a0)
/* 02248C 8002188C 00003025 */  move  $a2, $zero
/* 022490 80021890 0C008000 */  jal   func_80020000
/* 022494 80021894 24070002 */   li    $a3, 2
/* 022498 80021898 3C04800E */  lui   $a0, %hi(gPlayerTwo) # $a0, 0x800e
/* 02249C 8002189C 3C05800E */  lui   $a1, %hi(camera3) # $a1, 0x800e
/* 0224A0 800218A0 8CA5DB48 */  lw    $a1, %lo(camera3)($a1)
/* 0224A4 800218A4 8C84C4E0 */  lw    $a0, %lo(gPlayerTwo)($a0)
/* 0224A8 800218A8 24060001 */  li    $a2, 1
/* 0224AC 800218AC 0C008000 */  jal   func_80020000
/* 0224B0 800218B0 24070002 */   li    $a3, 2
/* 0224B4 800218B4 3C04800E */  lui   $a0, %hi(gPlayerThree) # $a0, 0x800e
/* 0224B8 800218B8 3C05800E */  lui   $a1, %hi(camera3) # $a1, 0x800e
/* 0224BC 800218BC 8CA5DB48 */  lw    $a1, %lo(camera3)($a1)
/* 0224C0 800218C0 8C84C4E4 */  lw    $a0, %lo(gPlayerThree)($a0)
/* 0224C4 800218C4 24060002 */  li    $a2, 2
/* 0224C8 800218C8 0C008000 */  jal   func_80020000
/* 0224CC 800218CC 24070002 */   li    $a3, 2
/* 0224D0 800218D0 3C04800E */  lui   $a0, %hi(gPlayerFour) # $a0, 0x800e
/* 0224D4 800218D4 3C05800E */  lui   $a1, %hi(camera3) # $a1, 0x800e
/* 0224D8 800218D8 8CA5DB48 */  lw    $a1, %lo(camera3)($a1)
/* 0224DC 800218DC 8C84C4E8 */  lw    $a0, %lo(gPlayerFour)($a0)
/* 0224E0 800218E0 24060003 */  li    $a2, 3
/* 0224E4 800218E4 0C008000 */  jal   func_80020000
/* 0224E8 800218E8 24070002 */   li    $a3, 2
/* 0224EC 800218EC 3C04800E */  lui   $a0, %hi(gPlayerOne) # $a0, 0x800e
/* 0224F0 800218F0 8C84C4DC */  lw    $a0, %lo(gPlayerOne)($a0)
/* 0224F4 800218F4 00002825 */  move  $a1, $zero
/* 0224F8 800218F8 0C008491 */  jal   func_80021244
/* 0224FC 800218FC 24060002 */   li    $a2, 2
/* 022500 80021900 3C04800E */  lui   $a0, %hi(gPlayerTwo) # $a0, 0x800e
/* 022504 80021904 8C84C4E0 */  lw    $a0, %lo(gPlayerTwo)($a0)
/* 022508 80021908 24050001 */  li    $a1, 1
/* 02250C 8002190C 0C008491 */  jal   func_80021244
/* 022510 80021910 24060002 */   li    $a2, 2
/* 022514 80021914 3C04800E */  lui   $a0, %hi(gPlayerThree) # $a0, 0x800e
/* 022518 80021918 8C84C4E4 */  lw    $a0, %lo(gPlayerThree)($a0)
/* 02251C 8002191C 24050002 */  li    $a1, 2
/* 022520 80021920 0C008491 */  jal   func_80021244
/* 022524 80021924 24060002 */   li    $a2, 2
/* 022528 80021928 3C04800E */  lui   $a0, %hi(gPlayerFour) # $a0, 0x800e
/* 02252C 8002192C 8C84C4E8 */  lw    $a0, %lo(gPlayerFour)($a0)
/* 022530 80021930 24050003 */  li    $a1, 3
/* 022534 80021934 0C008491 */  jal   func_80021244
/* 022538 80021938 24060002 */   li    $a2, 2
/* 02253C 8002193C 3C0E800E */  lui   $t6, %hi(D_800DDB58) # $t6, 0x800e
/* 022540 80021940 8DCEDB58 */  lw    $t6, %lo(D_800DDB58)($t6)
/* 022544 80021944 3C04800E */  lui   $a0, %hi(gPlayerOneCopy) # $a0, 0x800e
/* 022548 80021948 00002825 */  move  $a1, $zero
/* 02254C 8002194C 11C00005 */  beqz  $t6, .L80021964
/* 022550 80021950 24060002 */   li    $a2, 2
/* 022554 80021954 0C0082FD */  jal   func_80020BF4
/* 022558 80021958 00000000 */   nop
/* 02255C 8002195C 10000013 */  b     .L800219AC
/* 022560 80021960 8FBF0014 */   lw    $ra, 0x14($sp)
.L80021964:
/* 022564 80021964 0C01B9AF */  jal   func_8006E6BC
/* 022568 80021968 8C84C4FC */   lw    $a0, %lo(gPlayerOneCopy)($a0)
/* 02256C 8002196C 3C04800E */  lui   $a0, %hi(gPlayerTwo) # $a0, 0x800e
/* 022570 80021970 8C84C4E0 */  lw    $a0, %lo(gPlayerTwo)($a0)
/* 022574 80021974 24050001 */  li    $a1, 1
/* 022578 80021978 0C01B9AF */  jal   func_8006E6BC
/* 02257C 8002197C 24060002 */   li    $a2, 2
/* 022580 80021980 3C04800E */  lui   $a0, %hi(gPlayerThree) # $a0, 0x800e
/* 022584 80021984 8C84C4E4 */  lw    $a0, %lo(gPlayerThree)($a0)
/* 022588 80021988 24050002 */  li    $a1, 2
/* 02258C 8002198C 0C01B9AF */  jal   func_8006E6BC
/* 022590 80021990 24060002 */   li    $a2, 2
/* 022594 80021994 3C04800E */  lui   $a0, %hi(gPlayerFour) # $a0, 0x800e
/* 022598 80021998 8C84C4E8 */  lw    $a0, %lo(gPlayerFour)($a0)
/* 02259C 8002199C 24050003 */  li    $a1, 3
/* 0225A0 800219A0 0C01B9AF */  jal   func_8006E6BC
/* 0225A4 800219A4 24060002 */   li    $a2, 2
/* 0225A8 800219A8 8FBF0014 */  lw    $ra, 0x14($sp)
.L800219AC:
/* 0225AC 800219AC 3C01800E */  lui   $at, %hi(D_800DDB58) # $at, 0x800e
/* 0225B0 800219B0 AC20DB58 */  sw    $zero, %lo(D_800DDB58)($at)
/* 0225B4 800219B4 03E00008 */  jr    $ra
/* 0225B8 800219B8 27BD0018 */   addiu $sp, $sp, 0x18
