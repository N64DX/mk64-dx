glabel func_80002684
/* 003284 80002684 3C0E800E */  lui   $t6, %hi(D_800DC50C) # $t6, 0x800e
/* 003288 80002688 8DCEC50C */  lw    $t6, %lo(D_800DC50C)($t6)
/* 00328C 8000268C 27BDFFE8 */  addiu $sp, $sp, -0x18
/* 003290 80002690 AFBF0014 */  sw    $ra, 0x14($sp)
/* 003294 80002694 2DC1000A */  sltiu $at, $t6, 0xa
/* 003298 80002698 10200034 */  beqz  $at, .L8000276C
/* 00329C 8000269C 000E7080 */   sll   $t6, $t6, 2
/* 0032A0 800026A0 3C01800F */  lui   $at, %hi(D_800EB648)
/* 0032A4 800026A4 002E0821 */  addu  $at, $at, $t6
/* 0032A8 800026A8 8C2EB648 */  lw    $t6, %lo(D_800EB648)($at)
/* 0032AC 800026AC 01C00008 */  jr    $t6
/* 0032B0 800026B0 00000000 */   nop   
glabel L800026B4
/* 0032B4 800026B4 0C000996 */  jal   func_80002658
/* 0032B8 800026B8 00000000 */   nop   
/* 0032BC 800026BC 240F00FF */  li    $t7, 255
/* 0032C0 800026C0 3C01800E */  lui   $at, %hi(gCurrentlyLoadedCourseId) # $at, 0x800e
/* 0032C4 800026C4 10000029 */  b     .L8000276C
/* 0032C8 800026C8 A42FC5A4 */   sh    $t7, %lo(gCurrentlyLoadedCourseId)($at)
glabel L800026CC
/* 0032CC 800026CC 0C000975 */  jal   func_800025D4
/* 0032D0 800026D0 00000000 */   nop   
/* 0032D4 800026D4 241800FF */  li    $t8, 255
/* 0032D8 800026D8 3C01800E */  lui   $at, %hi(gCurrentlyLoadedCourseId) # $at, 0x800e
/* 0032DC 800026DC 10000023 */  b     .L8000276C
/* 0032E0 800026E0 A438C5A4 */   sh    $t8, %lo(gCurrentlyLoadedCourseId)($at)
glabel L800026E4
/* 0032E4 800026E4 0C000980 */  jal   func_80002600
/* 0032E8 800026E8 00000000 */   nop   
/* 0032EC 800026EC 241900FF */  li    $t9, 255
/* 0032F0 800026F0 3C01800E */  lui   $at, %hi(gCurrentlyLoadedCourseId) # $at, 0x800e
/* 0032F4 800026F4 1000001D */  b     .L8000276C
/* 0032F8 800026F8 A439C5A4 */   sh    $t9, %lo(gCurrentlyLoadedCourseId)($at)
glabel L800026FC
/* 0032FC 800026FC 0C00098B */  jal   func_8000262C
/* 003300 80002700 00000000 */   nop   
/* 003304 80002704 240800FF */  li    $t0, 255
/* 003308 80002708 3C01800E */  lui   $at, %hi(gCurrentlyLoadedCourseId) # $at, 0x800e
/* 00330C 8000270C 10000017 */  b     .L8000276C
/* 003310 80002710 A428C5A4 */   sh    $t0, %lo(gCurrentlyLoadedCourseId)($at)
glabel L80002714
/* 003314 80002714 0C000433 */  jal   func_800010CC
/* 003318 80002718 00000000 */   nop   
/* 00331C 8000271C 0C000A86 */  jal   func_80002A18
/* 003320 80002720 00000000 */   nop   
/* 003324 80002724 10000012 */  b     .L80002770
/* 003328 80002728 8FBF0014 */   lw    $ra, 0x14($sp)
glabel L8000272C
/* 00332C 8000272C 240900FF */  li    $t1, 255
/* 003330 80002730 3C01800E */  lui   $at, %hi(gCurrentlyLoadedCourseId) # $at, 0x800e
/* 003334 80002734 0C000417 */  jal   func_8000105C
/* 003338 80002738 A429C5A4 */   sh    $t1, %lo(gCurrentlyLoadedCourseId)($at)
/* 00333C 8000273C 0C0A065A */  jal   load_ending_sequence_royalraceway
/* 003340 80002740 00000000 */   nop   
/* 003344 80002744 1000000A */  b     .L80002770
/* 003348 80002748 8FBF0014 */   lw    $ra, 0x14($sp)
glabel L8000274C
/* 00334C 8000274C 240A00FF */  li    $t2, 255
/* 003350 80002750 3C01800E */  lui   $at, %hi(gCurrentlyLoadedCourseId) # $at, 0x800e
/* 003354 80002754 0C000433 */  jal   func_800010CC
/* 003358 80002758 A42AC5A4 */   sh    $t2, %lo(gCurrentlyLoadedCourseId)($at)
/* 00335C 8000275C 0C000417 */  jal   func_8000105C
/* 003360 80002760 00000000 */   nop   
/* 003364 80002764 0C0A0108 */  jal   func_80280420
/* 003368 80002768 00000000 */   nop   
.L8000276C:
glabel L8000276C
/* 00336C 8000276C 8FBF0014 */  lw    $ra, 0x14($sp)
.L80002770:
/* 003370 80002770 27BD0018 */  addiu $sp, $sp, 0x18
/* 003374 80002774 03E00008 */  jr    $ra
/* 003378 80002778 00000000 */   nop   
