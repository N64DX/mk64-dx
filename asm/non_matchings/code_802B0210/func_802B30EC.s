glabel func_802B30EC
/* 11C6FC 802B30EC 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 11C700 802B30F0 AFBE0038 */  sw    $fp, 0x38($sp)
/* 11C704 802B30F4 AFB60030 */  sw    $s6, 0x30($sp)
/* 11C708 802B30F8 AFB5002C */  sw    $s5, 0x2c($sp)
/* 11C70C 802B30FC AFB40028 */  sw    $s4, 0x28($sp)
/* 11C710 802B3100 AFB20020 */  sw    $s2, 0x20($sp)
/* 11C714 802B3104 AFB00018 */  sw    $s0, 0x18($sp)
/* 11C718 802B3108 AFB70034 */  sw    $s7, 0x34($sp)
/* 11C71C 802B310C AFB30024 */  sw    $s3, 0x24($sp)
/* 11C720 802B3110 3C10800F */  lui   $s0, %hi(gPlayers) # $s0, 0x800f
/* 11C724 802B3114 3C12800F */  lui   $s2, %hi(gControllers) # $s2, 0x800f
/* 11C728 802B3118 3C14800F */  lui   $s4, %hi(gControllers+0x40) # $s4, 0x800f
/* 11C72C 802B311C 3C15800E */  lui   $s5, %hi(gPlayerTwo) # $s5, 0x800e
/* 11C730 802B3120 3C16800E */  lui   $s6, %hi(gControllerSix) # $s6, 0x800e
/* 11C734 802B3124 3C1E800E */  lui   $fp, %hi(gPlayerThree) # $fp, 0x800e
/* 11C738 802B3128 AFBF003C */  sw    $ra, 0x3c($sp)
/* 11C73C 802B312C AFB1001C */  sw    $s1, 0x1c($sp)
/* 11C740 802B3130 27DEC4E4 */  addiu $fp, %lo(gPlayerThree) # addiu $fp, $fp, -0x3b1c
/* 11C744 802B3134 26D6C4D0 */  addiu $s6, %lo(gControllerSix) # addiu $s6, $s6, -0x3b30
/* 11C748 802B3138 26B5C4E0 */  addiu $s5, %lo(gPlayerTwo) # addiu $s5, $s5, -0x3b20
/* 11C74C 802B313C 26946950 */  addiu $s4, %lo(gControllers+0x40) # addiu $s4, $s4, 0x6950
/* 11C750 802B3140 26526910 */  addiu $s2, %lo(gControllers) # addiu $s2, $s2, 0x6910
/* 11C754 802B3144 26106990 */  addiu $s0, %lo(gPlayers) # addiu $s0, $s0, 0x6990
/* 11C758 802B3148 24130DD8 */  li    $s3, 3544
/* 11C75C 802B314C 2417DFFF */  li    $s7, -8193
.L802B3150:
/* 11C760 802B3150 02408825 */  move  $s1, $s2
/* 11C764 802B3154 0C024439 */  jal   func_800910E4
/* 11C768 802B3158 02002025 */   move  $a0, $s0
/* 11C76C 802B315C 5440004B */  bnel  $v0, $zero, .L802B328C
/* 11C770 802B3160 26520010 */   addiu $s2, $s2, 0x10
/* 11C774 802B3164 96020000 */  lhu   $v0, ($s0)
/* 11C778 802B3168 304E0100 */  andi  $t6, $v0, 0x100
/* 11C77C 802B316C 51C00037 */  beql  $t6, $zero, .L802B324C
/* 11C780 802B3170 304E4000 */   andi  $t6, $v0, 0x4000
/* 11C784 802B3174 8EAF0000 */  lw    $t7, ($s5)
/* 11C788 802B3178 020FC023 */  subu  $t8, $s0, $t7
/* 11C78C 802B317C 0313001A */  div   $zero, $t8, $s3
/* 11C790 802B3180 0000C812 */  mflo  $t9
/* 11C794 802B3184 16600002 */  bnez  $s3, .L802B3190
/* 11C798 802B3188 00000000 */   nop
/* 11C79C 802B318C 0007000D */  break 7
.L802B3190:
/* 11C7A0 802B3190 2401FFFF */  li    $at, -1
/* 11C7A4 802B3194 16610004 */  bne   $s3, $at, .L802B31A8
/* 11C7A8 802B3198 3C018000 */   lui   $at, 0x8000
/* 11C7AC 802B319C 17010002 */  bne   $t8, $at, .L802B31A8
/* 11C7B0 802B31A0 00000000 */   nop
/* 11C7B4 802B31A4 0006000D */  break 6
.L802B31A8:
/* 11C7B8 802B31A8 57200004 */  bnel  $t9, $zero, .L802B31BC
/* 11C7BC 802B31AC 8FC80000 */   lw    $t0, ($fp)
/* 11C7C0 802B31B0 10000025 */  b     .L802B3248
/* 11C7C4 802B31B4 8ED10000 */   lw    $s1, ($s6)
/* 11C7C8 802B31B8 8FC80000 */  lw    $t0, ($fp)
.L802B31BC:
/* 11C7CC 802B31BC 3C0B800E */  lui   $t3, %hi(gPlayerOne) # $t3, 0x800e
/* 11C7D0 802B31C0 02084823 */  subu  $t1, $s0, $t0
/* 11C7D4 802B31C4 0133001A */  div   $zero, $t1, $s3
/* 11C7D8 802B31C8 00005012 */  mflo  $t2
/* 11C7DC 802B31CC 16600002 */  bnez  $s3, .L802B31D8
/* 11C7E0 802B31D0 00000000 */   nop
/* 11C7E4 802B31D4 0007000D */  break 7
.L802B31D8:
/* 11C7E8 802B31D8 2401FFFF */  li    $at, -1
/* 11C7EC 802B31DC 16610004 */  bne   $s3, $at, .L802B31F0
/* 11C7F0 802B31E0 3C018000 */   lui   $at, 0x8000
/* 11C7F4 802B31E4 15210002 */  bne   $t1, $at, .L802B31F0
/* 11C7F8 802B31E8 00000000 */   nop
/* 11C7FC 802B31EC 0006000D */  break 6
.L802B31F0:
/* 11C800 802B31F0 15400004 */  bnez  $t2, .L802B3204
/* 11C804 802B31F4 00000000 */   nop
/* 11C808 802B31F8 3C11800E */  lui   $s1, %hi(gControllerSeven) # $s1, 0x800e
/* 11C80C 802B31FC 10000012 */  b     .L802B3248
/* 11C810 802B3200 8E31C4D4 */   lw    $s1, %lo(gControllerSeven)($s1)
.L802B3204:
/* 11C814 802B3204 8D6BC4DC */  lw    $t3, %lo(gPlayerOne)($t3)
/* 11C818 802B3208 020B6023 */  subu  $t4, $s0, $t3
/* 11C81C 802B320C 0193001A */  div   $zero, $t4, $s3
/* 11C820 802B3210 00006812 */  mflo  $t5
/* 11C824 802B3214 16600002 */  bnez  $s3, .L802B3220
/* 11C828 802B3218 00000000 */   nop
/* 11C82C 802B321C 0007000D */  break 7
.L802B3220:
/* 11C830 802B3220 2401FFFF */  li    $at, -1
/* 11C834 802B3224 16610004 */  bne   $s3, $at, .L802B3238
/* 11C838 802B3228 3C018000 */   lui   $at, 0x8000
/* 11C83C 802B322C 15810002 */  bne   $t4, $at, .L802B3238
/* 11C840 802B3230 00000000 */   nop
/* 11C844 802B3234 0006000D */  break 6
.L802B3238:
/* 11C848 802B3238 55A00004 */  bnel  $t5, $zero, .L802B324C
/* 11C84C 802B323C 304E4000 */   andi  $t6, $v0, 0x4000
/* 11C850 802B3240 3C11800E */  lui   $s1, %hi(gControllerEight) # $s1, 0x800e
/* 11C854 802B3244 8E31C4D8 */  lw    $s1, %lo(gControllerEight)($s1)
.L802B3248:
/* 11C858 802B3248 304E4000 */  andi  $t6, $v0, 0x4000
.L802B324C:
/* 11C85C 802B324C 51C0000F */  beql  $t6, $zero, .L802B328C
/* 11C860 802B3250 26520010 */   addiu $s2, $s2, 0x10
/* 11C864 802B3254 860F0010 */  lh    $t7, 0x10($s0)
/* 11C868 802B3258 30582000 */  andi  $t8, $v0, 0x2000
/* 11C86C 802B325C 51E0000B */  beql  $t7, $zero, .L802B328C
/* 11C870 802B3260 26520010 */   addiu $s2, $s2, 0x10
/* 11C874 802B3264 57000009 */  bnel  $t8, $zero, .L802B328C
/* 11C878 802B3268 26520010 */   addiu $s2, $s2, 0x10
/* 11C87C 802B326C 96220006 */  lhu   $v0, 6($s1)
/* 11C880 802B3270 02002025 */  move  $a0, $s0
/* 11C884 802B3274 30592000 */  andi  $t9, $v0, 0x2000
/* 11C888 802B3278 13200003 */  beqz  $t9, .L802B3288
/* 11C88C 802B327C 00574024 */   and   $t0, $v0, $s7
/* 11C890 802B3280 0C0ACBE8 */  jal   func_802B2FA0
/* 11C894 802B3284 A6280006 */   sh    $t0, 6($s1)
.L802B3288:
/* 11C898 802B3288 26520010 */  addiu $s2, $s2, 0x10
.L802B328C:
/* 11C89C 802B328C 1654FFB0 */  bne   $s2, $s4, .L802B3150
/* 11C8A0 802B3290 26100DD8 */   addiu $s0, $s0, 0xdd8
/* 11C8A4 802B3294 8FBF003C */  lw    $ra, 0x3c($sp)
/* 11C8A8 802B3298 8FB00018 */  lw    $s0, 0x18($sp)
/* 11C8AC 802B329C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 11C8B0 802B32A0 8FB20020 */  lw    $s2, 0x20($sp)
/* 11C8B4 802B32A4 8FB30024 */  lw    $s3, 0x24($sp)
/* 11C8B8 802B32A8 8FB40028 */  lw    $s4, 0x28($sp)
/* 11C8BC 802B32AC 8FB5002C */  lw    $s5, 0x2c($sp)
/* 11C8C0 802B32B0 8FB60030 */  lw    $s6, 0x30($sp)
/* 11C8C4 802B32B4 8FB70034 */  lw    $s7, 0x34($sp)
/* 11C8C8 802B32B8 8FBE0038 */  lw    $fp, 0x38($sp)
/* 11C8CC 802B32BC 03E00008 */  jr    $ra
/* 11C8D0 802B32C0 27BD0040 */   addiu $sp, $sp, 0x40
