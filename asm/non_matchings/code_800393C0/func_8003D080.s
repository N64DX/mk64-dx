glabel func_8003D080
/* 03DC80 8003D080 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 03DC84 8003D084 AFBF001C */  sw    $ra, 0x1c($sp)
/* 03DC88 8003D088 0C0174A4 */  jal   func_8005D290
/* 03DC8C 8003D08C 00000000 */   nop
/* 03DC90 8003D090 3C0E800E */  lui   $t6, %hi(D_800DC50C) # $t6, 0x800e
/* 03DC94 8003D094 8DCEC50C */  lw    $t6, %lo(D_800DC50C)($t6)
/* 03DC98 8003D098 24010005 */  li    $at, 5
/* 03DC9C 8003D09C 15C10005 */  bne   $t6, $at, .L8003D0B4
/* 03DCA0 8003D0A0 00000000 */   nop
/* 03DCA4 8003D0A4 0C00F35E */  jal   func_8003CD78
/* 03DCA8 8003D0A8 00000000 */   nop
/* 03DCAC 8003D0AC 10000003 */  b     .L8003D0BC
/* 03DCB0 8003D0B0 00000000 */   nop
.L8003D0B4:
/* 03DCB4 8003D0B4 0C00F03C */  jal   func_8003C0F0
/* 03DCB8 8003D0B8 00000000 */   nop
.L8003D0BC:
/* 03DCBC 8003D0BC 3C0F800E */  lui   $t7, %hi(D_800DC51C) # $t7, 0x800e
/* 03DCC0 8003D0C0 95EFC51C */  lhu   $t7, %lo(D_800DC51C)($t7)
/* 03DCC4 8003D0C4 3C02800E */  lui   $v0, %hi(D_800DC52C) # 0x800e
/* 03DCC8 8003D0C8 15E00117 */  bnez  $t7, .L8003D528
/* 03DCCC 8003D0CC 00000000 */   nop
/* 03DCD0 8003D0D0 3C02800E */  lui   $v0, %hi(D_800DC52C) # $v0, 0x800e
/* 03DCD4 8003D0D4 8C42C52C */  lw    $v0, %lo(D_800DC52C)($v0)
/* 03DCD8 8003D0D8 24010001 */  li    $at, 1
/* 03DCDC 8003D0DC 10400009 */  beqz  $v0, .L8003D104
/* 03DCE0 8003D0E0 00000000 */   nop
/* 03DCE4 8003D0E4 10410050 */  beq   $v0, $at, .L8003D228
/* 03DCE8 8003D0E8 24010002 */   li    $at, 2
/* 03DCEC 8003D0EC 1041004E */  beq   $v0, $at, .L8003D228
/* 03DCF0 8003D0F0 24010003 */   li    $at, 3
/* 03DCF4 8003D0F4 1041009E */  beq   $v0, $at, .L8003D370
/* 03DCF8 8003D0F8 3C0A800E */   lui   $t2, %hi(gModeSelection) # 0x800e
/* 03DCFC 8003D0FC 1000016E */  b     .L8003D6B8
/* 03DD00 8003D100 00000000 */   nop
.L8003D104:
/* 03DD04 8003D104 3C02800E */  lui   $v0, %hi(gModeSelection) # $v0, 0x800e
/* 03DD08 8003D108 8C42C53C */  lw    $v0, %lo(gModeSelection)($v0)
/* 03DD0C 8003D10C 24010001 */  li    $at, 1
/* 03DD10 8003D110 3C18800E */  lui   $t8, %hi(gCurrentCourseId) # $t8, 0x800e
/* 03DD14 8003D114 10400005 */  beqz  $v0, .L8003D12C
/* 03DD18 8003D118 00000000 */   nop
/* 03DD1C 8003D11C 10410027 */  beq   $v0, $at, .L8003D1BC
/* 03DD20 8003D120 3C06800F */   lui   $a2, %hi(gPlayers+0x1C) # 0x800f
/* 03DD24 8003D124 10000032 */  b     .L8003D1F0
/* 03DD28 8003D128 3C01800F */   lui   $at, %hi(gPlayers+0x14) # 0x800f
.L8003D12C:
/* 03DD2C 8003D12C 8718C5A0 */  lh    $t8, %lo(gCurrentCourseId)($t8)
/* 03DD30 8003D130 2401000A */  li    $at, 10
/* 03DD34 8003D134 3C028016 */  lui   $v0, %hi(D_80165210) # $v0, 0x8016
/* 03DD38 8003D138 1701000E */  bne   $t8, $at, .L8003D174
/* 03DD3C 8003D13C 24425210 */   addiu $v0, %lo(D_80165210) # addiu $v0, $v0, 0x5210
/* 03DD40 8003D140 44806000 */  mtc1  $zero, $f12
/* 03DD44 8003D144 3C01800F */  lui   $at, %hi(gPlayers+0x18) # $at, 0x800f
/* 03DD48 8003D148 3C068016 */  lui   $a2, %hi(D_8016524C) # $a2, 0x8016
/* 03DD4C 8003D14C 3C07800F */  lui   $a3, %hi(gPlayers+0x2E) # $a3, 0x800f
/* 03DD50 8003D150 24190008 */  li    $t9, 8
/* 03DD54 8003D154 AFB90010 */  sw    $t9, 0x10($sp)
/* 03DD58 8003D158 84E769BE */  lh    $a3, %lo(gPlayers+0x2E)($a3)
/* 03DD5C 8003D15C 8CC6524C */  lw    $a2, %lo(D_8016524C)($a2)
/* 03DD60 8003D160 C42E69A8 */  lwc1  $f14, %lo(gPlayers+0x18)($at)
/* 03DD64 8003D164 0C007134 */  jal   func_8001C4D0
/* 03DD68 8003D168 AFA00014 */   sw    $zero, 0x14($sp)
/* 03DD6C 8003D16C 1000002B */  b     .L8003D21C
/* 03DD70 8003D170 00000000 */   nop
.L8003D174:
/* 03DD74 8003D174 C4440018 */  lwc1  $f4, 0x18($v0)
/* 03DD78 8003D178 C446001C */  lwc1  $f6, 0x1c($v0)
/* 03DD7C 8003D17C 3C014000 */  li    $at, 0x40000000 # 2.000000
/* 03DD80 8003D180 44815000 */  mtc1  $at, $f10
/* 03DD84 8003D184 46062200 */  add.s $f8, $f4, $f6
/* 03DD88 8003D188 3C01800F */  lui   $at, %hi(gPlayers+0x18) # $at, 0x800f
/* 03DD8C 8003D18C 3C068016 */  lui   $a2, %hi(D_8016524C) # $a2, 0x8016
/* 03DD90 8003D190 3C07800F */  lui   $a3, %hi(gPlayers+0x2E) # $a3, 0x800f
/* 03DD94 8003D194 24080008 */  li    $t0, 8
/* 03DD98 8003D198 AFA80010 */  sw    $t0, 0x10($sp)
/* 03DD9C 8003D19C 84E769BE */  lh    $a3, %lo(gPlayers+0x2E)($a3)
/* 03DDA0 8003D1A0 8CC6524C */  lw    $a2, %lo(D_8016524C)($a2)
/* 03DDA4 8003D1A4 C42E69A8 */  lwc1  $f14, %lo(gPlayers+0x18)($at)
/* 03DDA8 8003D1A8 AFA00014 */  sw    $zero, 0x14($sp)
/* 03DDAC 8003D1AC 0C007134 */  jal   func_8001C4D0
/* 03DDB0 8003D1B0 460A4303 */   div.s $f12, $f8, $f10
/* 03DDB4 8003D1B4 10000019 */  b     .L8003D21C
/* 03DDB8 8003D1B8 00000000 */   nop
.L8003D1BC:
/* 03DDBC 8003D1BC 3C01800F */  lui   $at, %hi(gPlayers+0x14) # $at, 0x800f
/* 03DDC0 8003D1C0 C42C69A4 */  lwc1  $f12, %lo(gPlayers+0x14)($at)
/* 03DDC4 8003D1C4 3C01800F */  lui   $at, %hi(gPlayers+0x14) # $at, 0x800f
/* 03DDC8 8003D1C8 3C07800F */  lui   $a3, %hi(gPlayers+0x2E) # $a3, 0x800f
/* 03DDCC 8003D1CC 24090001 */  li    $t1, 1
/* 03DDD0 8003D1D0 AFA90010 */  sw    $t1, 0x10($sp)
/* 03DDD4 8003D1D4 84E769BE */  lh    $a3, %lo(gPlayers+0x2E)($a3)
/* 03DDD8 8003D1D8 C42E69A8 */  lwc1  $f14, %lo(gPlayers+0x18)($at)
/* 03DDDC 8003D1DC 8CC669AC */  lw    $a2, %lo(gPlayers+0x1C)($a2) # 0x69ac($a2)
/* 03DDE0 8003D1E0 0C007134 */  jal   func_8001C4D0
/* 03DDE4 8003D1E4 AFA00014 */   sw    $zero, 0x14($sp)
/* 03DDE8 8003D1E8 1000000C */  b     .L8003D21C
/* 03DDEC 8003D1EC 00000000 */   nop
.L8003D1F0:
/* 03DDF0 8003D1F0 C42C69A4 */  lwc1  $f12, %lo(gPlayers+0x14)($at)
/* 03DDF4 8003D1F4 3C01800F */  lui   $at, %hi(gPlayers+0x18) # $at, 0x800f
/* 03DDF8 8003D1F8 3C06800F */  lui   $a2, %hi(gPlayers+0x1C) # $a2, 0x800f
/* 03DDFC 8003D1FC 3C07800F */  lui   $a3, %hi(gPlayers+0x2E) # $a3, 0x800f
/* 03DE00 8003D200 240A000A */  li    $t2, 10
/* 03DE04 8003D204 AFAA0010 */  sw    $t2, 0x10($sp)
/* 03DE08 8003D208 84E769BE */  lh    $a3, %lo(gPlayers+0x2E)($a3)
/* 03DE0C 8003D20C 8CC669AC */  lw    $a2, %lo(gPlayers+0x1C)($a2)
/* 03DE10 8003D210 C42E69A8 */  lwc1  $f14, %lo(gPlayers+0x18)($at)
/* 03DE14 8003D214 0C007134 */  jal   func_8001C4D0
/* 03DE18 8003D218 AFA00014 */   sw    $zero, 0x14($sp)
.L8003D21C:
/* 03DE1C 8003D21C 3C02800E */  lui   $v0, %hi(D_800DC52C) # $v0, 0x800e
/* 03DE20 8003D220 10000125 */  b     .L8003D6B8
/* 03DE24 8003D224 8C42C52C */   lw    $v0, %lo(D_800DC52C)($v0)
.L8003D228:
/* 03DE28 8003D228 3C02800E */  lui   $v0, %hi(gModeSelection) # $v0, 0x800e
/* 03DE2C 8003D22C 8C42C53C */  lw    $v0, %lo(gModeSelection)($v0)
/* 03DE30 8003D230 3C01800F */  lui   $at, %hi(gPlayers+0x14) # 0x800f
/* 03DE34 8003D234 3C06800F */  lui   $a2, %hi(gPlayers+0x1C) # 0x800f
/* 03DE38 8003D238 10400006 */  beqz  $v0, .L8003D254
/* 03DE3C 8003D23C 3C07800F */   lui   $a3, %hi(gPlayers+0x2E) # $a3, 0x800f
/* 03DE40 8003D240 24010003 */  li    $at, 3
/* 03DE44 8003D244 10410019 */  beq   $v0, $at, .L8003D2AC
/* 03DE48 8003D248 3C06800F */   lui   $a2, %hi(gPlayers+0x1C) # $a2, 0x800f
/* 03DE4C 8003D24C 1000002F */  b     .L8003D30C
/* 03DE50 8003D250 3C01800F */   lui   $at, %hi(gPlayers+0x14) # $at, 0x800f
.L8003D254:
/* 03DE54 8003D254 C42C69A4 */  lwc1  $f12, %lo(gPlayers+0x14)($at)
/* 03DE58 8003D258 3C01800F */  lui   $at, %hi(gPlayers+0x18) # $at, 0x800f
/* 03DE5C 8003D25C 240B0001 */  li    $t3, 1
/* 03DE60 8003D260 AFAB0010 */  sw    $t3, 0x10($sp)
/* 03DE64 8003D264 C42E69A8 */  lwc1  $f14, %lo(gPlayers+0x18)($at)
/* 03DE68 8003D268 8CC669AC */  lw    $a2, %lo(gPlayers+0x1C)($a2)
/* 03DE6C 8003D26C 84E769BE */  lh    $a3, %lo(gPlayers+0x2E)($a3)
/* 03DE70 8003D270 0C007134 */  jal   func_8001C4D0
/* 03DE74 8003D274 AFA00014 */   sw    $zero, 0x14($sp)
/* 03DE78 8003D278 3C02800F */  lui   $v0, %hi(gPlayers+0xDD8) # $v0, 0x800f
/* 03DE7C 8003D27C 24427768 */  addiu $v0, %lo(gPlayers+0xDD8) # addiu $v0, $v0, 0x7768
/* 03DE80 8003D280 C44C0014 */  lwc1  $f12, 0x14($v0)
/* 03DE84 8003D284 C44E0018 */  lwc1  $f14, 0x18($v0)
/* 03DE88 8003D288 8C46001C */  lw    $a2, 0x1c($v0)
/* 03DE8C 8003D28C 8447002E */  lh    $a3, 0x2e($v0)
/* 03DE90 8003D290 240C0001 */  li    $t4, 1
/* 03DE94 8003D294 240D0001 */  li    $t5, 1
/* 03DE98 8003D298 AFAD0014 */  sw    $t5, 0x14($sp)
/* 03DE9C 8003D29C 0C007134 */  jal   func_8001C4D0
/* 03DEA0 8003D2A0 AFAC0010 */   sw    $t4, 0x10($sp)
/* 03DEA4 8003D2A4 1000002F */  b     .L8003D364
/* 03DEA8 8003D2A8 00000000 */   nop
.L8003D2AC:
/* 03DEAC 8003D2AC 3C01800F */  lui   $at, %hi(gPlayers+0x14) # $at, 0x800f
/* 03DEB0 8003D2B0 C42C69A4 */  lwc1  $f12, %lo(gPlayers+0x14)($at)
/* 03DEB4 8003D2B4 3C01800F */  lui   $at, %hi(gPlayers+0x14) # $at, 0x800f
/* 03DEB8 8003D2B8 3C07800F */  lui   $a3, %hi(gPlayers+0x2E) # $a3, 0x800f
/* 03DEBC 8003D2BC 240E0009 */  li    $t6, 9
/* 03DEC0 8003D2C0 AFAE0010 */  sw    $t6, 0x10($sp)
/* 03DEC4 8003D2C4 84E769BE */  lh    $a3, %lo(gPlayers+0x2E)($a3)
/* 03DEC8 8003D2C8 C42E69A8 */  lwc1  $f14, %lo(gPlayers+0x18)($at)
/* 03DECC 8003D2CC 8CC669AC */  lw    $a2, 0x69ac($a2)
/* 03DED0 8003D2D0 0C007134 */  jal   func_8001C4D0
/* 03DED4 8003D2D4 AFA00014 */   sw    $zero, 0x14($sp)
/* 03DED8 8003D2D8 3C02800F */  lui   $v0, %hi(gPlayers+0xDD8) # $v0, 0x800f
/* 03DEDC 8003D2DC 24427768 */  addiu $v0, %lo(gPlayers+0xDD8) # addiu $v0, $v0, 0x7768
/* 03DEE0 8003D2E0 C44C0014 */  lwc1  $f12, 0x14($v0)
/* 03DEE4 8003D2E4 C44E0018 */  lwc1  $f14, 0x18($v0)
/* 03DEE8 8003D2E8 8C46001C */  lw    $a2, 0x1c($v0)
/* 03DEEC 8003D2EC 8447002E */  lh    $a3, 0x2e($v0)
/* 03DEF0 8003D2F0 240F0009 */  li    $t7, 9
/* 03DEF4 8003D2F4 24180001 */  li    $t8, 1
/* 03DEF8 8003D2F8 AFB80014 */  sw    $t8, 0x14($sp)
/* 03DEFC 8003D2FC 0C007134 */  jal   func_8001C4D0
/* 03DF00 8003D300 AFAF0010 */   sw    $t7, 0x10($sp)
/* 03DF04 8003D304 10000017 */  b     .L8003D364
/* 03DF08 8003D308 00000000 */   nop
.L8003D30C:
/* 03DF0C 8003D30C C42C69A4 */  lwc1  $f12, %lo(gPlayers+0x14)($at)
/* 03DF10 8003D310 3C01800F */  lui   $at, %hi(gPlayers+0x18) # $at, 0x800f
/* 03DF14 8003D314 3C06800F */  lui   $a2, %hi(gPlayers+0x1C) # $a2, 0x800f
/* 03DF18 8003D318 3C07800F */  lui   $a3, %hi(gPlayers+0x2E) # $a3, 0x800f
/* 03DF1C 8003D31C 24190001 */  li    $t9, 1
/* 03DF20 8003D320 AFB90010 */  sw    $t9, 0x10($sp)
/* 03DF24 8003D324 84E769BE */  lh    $a3, %lo(gPlayers+0x2E)($a3)
/* 03DF28 8003D328 8CC669AC */  lw    $a2, %lo(gPlayers+0x1C)($a2)
/* 03DF2C 8003D32C C42E69A8 */  lwc1  $f14, %lo(gPlayers+0x18)($at)
/* 03DF30 8003D330 0C007134 */  jal   func_8001C4D0
/* 03DF34 8003D334 AFA00014 */   sw    $zero, 0x14($sp)
/* 03DF38 8003D338 3C02800F */  lui   $v0, %hi(gPlayers+0xDD8) # $v0, 0x800f
/* 03DF3C 8003D33C 24427768 */  addiu $v0, %lo(gPlayers+0xDD8) # addiu $v0, $v0, 0x7768
/* 03DF40 8003D340 C44C0014 */  lwc1  $f12, 0x14($v0)
/* 03DF44 8003D344 C44E0018 */  lwc1  $f14, 0x18($v0)
/* 03DF48 8003D348 8C46001C */  lw    $a2, 0x1c($v0)
/* 03DF4C 8003D34C 8447002E */  lh    $a3, 0x2e($v0)
/* 03DF50 8003D350 24080001 */  li    $t0, 1
/* 03DF54 8003D354 24090001 */  li    $t1, 1
/* 03DF58 8003D358 AFA90014 */  sw    $t1, 0x14($sp)
/* 03DF5C 8003D35C 0C007134 */  jal   func_8001C4D0
/* 03DF60 8003D360 AFA80010 */   sw    $t0, 0x10($sp)
.L8003D364:
/* 03DF64 8003D364 3C02800E */  lui   $v0, %hi(D_800DC52C) # $v0, 0x800e
/* 03DF68 8003D368 100000D3 */  b     .L8003D6B8
/* 03DF6C 8003D36C 8C42C52C */   lw    $v0, %lo(D_800DC52C)($v0)
.L8003D370:
/* 03DF70 8003D370 8D4AC53C */  lw    $t2, %lo(gModeSelection)($t2) # -0x3ac4($t2)
/* 03DF74 8003D374 24010003 */  li    $at, 3
/* 03DF78 8003D378 3C06800F */  lui   $a2, %hi(gPlayers+0x1C) # 0x800f
/* 03DF7C 8003D37C 15410036 */  bne   $t2, $at, .L8003D458
/* 03DF80 8003D380 3C07800F */   lui   $a3, %hi(gPlayers+0x2E) # 0x800f
/* 03DF84 8003D384 3C01800F */  lui   $at, %hi(gPlayers+0x14) # $at, 0x800f
/* 03DF88 8003D388 C42C69A4 */  lwc1  $f12, %lo(gPlayers+0x14)($at)
/* 03DF8C 8003D38C 3C01800F */  lui   $at, %hi(gPlayers+0x18) # $at, 0x800f
/* 03DF90 8003D390 3C06800F */  lui   $a2, %hi(gPlayers+0x1C) # $a2, 0x800f
/* 03DF94 8003D394 3C07800F */  lui   $a3, %hi(gPlayers+0x2E) # $a3, 0x800f
/* 03DF98 8003D398 240B0009 */  li    $t3, 9
/* 03DF9C 8003D39C AFAB0010 */  sw    $t3, 0x10($sp)
/* 03DFA0 8003D3A0 84E769BE */  lh    $a3, %lo(gPlayers+0x2E)($a3)
/* 03DFA4 8003D3A4 8CC669AC */  lw    $a2, %lo(gPlayers+0x1C)($a2)
/* 03DFA8 8003D3A8 C42E69A8 */  lwc1  $f14, %lo(gPlayers+0x18)($at)
/* 03DFAC 8003D3AC 0C007134 */  jal   func_8001C4D0
/* 03DFB0 8003D3B0 AFA00014 */   sw    $zero, 0x14($sp)
/* 03DFB4 8003D3B4 3C02800F */  lui   $v0, %hi(gPlayers+0xDD8) # $v0, 0x800f
/* 03DFB8 8003D3B8 24427768 */  addiu $v0, %lo(gPlayers+0xDD8) # addiu $v0, $v0, 0x7768
/* 03DFBC 8003D3BC C44C0014 */  lwc1  $f12, 0x14($v0)
/* 03DFC0 8003D3C0 C44E0018 */  lwc1  $f14, 0x18($v0)
/* 03DFC4 8003D3C4 8C46001C */  lw    $a2, 0x1c($v0)
/* 03DFC8 8003D3C8 8447002E */  lh    $a3, 0x2e($v0)
/* 03DFCC 8003D3CC 240C0009 */  li    $t4, 9
/* 03DFD0 8003D3D0 240D0001 */  li    $t5, 1
/* 03DFD4 8003D3D4 AFAD0014 */  sw    $t5, 0x14($sp)
/* 03DFD8 8003D3D8 AFAC0010 */  sw    $t4, 0x10($sp)
/* 03DFDC 8003D3DC 0C007134 */  jal   func_8001C4D0
/* 03DFE0 8003D3E0 AFA20020 */   sw    $v0, 0x20($sp)
/* 03DFE4 8003D3E4 8FA20020 */  lw    $v0, 0x20($sp)
/* 03DFE8 8003D3E8 240E0009 */  li    $t6, 9
/* 03DFEC 8003D3EC 240F0002 */  li    $t7, 2
/* 03DFF0 8003D3F0 84470E06 */  lh    $a3, 0xe06($v0)
/* 03DFF4 8003D3F4 8C460DF4 */  lw    $a2, 0xdf4($v0)
/* 03DFF8 8003D3F8 C44E0DF0 */  lwc1  $f14, 0xdf0($v0)
/* 03DFFC 8003D3FC C44C0DEC */  lwc1  $f12, 0xdec($v0)
/* 03E000 8003D400 24420DD8 */  addiu $v0, $v0, 0xdd8
/* 03E004 8003D404 AFA20020 */  sw    $v0, 0x20($sp)
/* 03E008 8003D408 AFAF0014 */  sw    $t7, 0x14($sp)
/* 03E00C 8003D40C 0C007134 */  jal   func_8001C4D0
/* 03E010 8003D410 AFAE0010 */   sw    $t6, 0x10($sp)
/* 03E014 8003D414 3C18800E */  lui   $t8, %hi(gPlayerCountSelection1) # $t8, 0x800e
/* 03E018 8003D418 8F18C538 */  lw    $t8, %lo(gPlayerCountSelection1)($t8)
/* 03E01C 8003D41C 8FA20020 */  lw    $v0, 0x20($sp)
/* 03E020 8003D420 24010004 */  li    $at, 4
/* 03E024 8003D424 1701003D */  bne   $t8, $at, .L8003D51C
/* 03E028 8003D428 24420DD8 */   addiu $v0, $v0, 0xdd8
/* 03E02C 8003D42C C44C0014 */  lwc1  $f12, 0x14($v0)
/* 03E030 8003D430 C44E0018 */  lwc1  $f14, 0x18($v0)
/* 03E034 8003D434 8C46001C */  lw    $a2, 0x1c($v0)
/* 03E038 8003D438 8447002E */  lh    $a3, 0x2e($v0)
/* 03E03C 8003D43C 24190009 */  li    $t9, 9
/* 03E040 8003D440 24080003 */  li    $t0, 3
/* 03E044 8003D444 AFA80014 */  sw    $t0, 0x14($sp)
/* 03E048 8003D448 0C007134 */  jal   func_8001C4D0
/* 03E04C 8003D44C AFB90010 */   sw    $t9, 0x10($sp)
/* 03E050 8003D450 10000032 */  b     .L8003D51C
/* 03E054 8003D454 00000000 */   nop
.L8003D458:
/* 03E058 8003D458 3C01800F */  lui   $at, %hi(gPlayers+0x14) # $at, 0x800f
/* 03E05C 8003D45C C42C69A4 */  lwc1  $f12, %lo(gPlayers+0x14)($at)
/* 03E060 8003D460 3C01800F */  lui   $at, %hi(gPlayers+0x18) # $at, 0x800f
/* 03E064 8003D464 24090001 */  li    $t1, 1
/* 03E068 8003D468 AFA90010 */  sw    $t1, 0x10($sp)
/* 03E06C 8003D46C C42E69A8 */  lwc1  $f14, %lo(gPlayers+0x18)($at)
/* 03E070 8003D470 8CC669AC */  lw    $a2, %lo(gPlayers+0x1C)($a2) # 0x69ac($a2)
/* 03E074 8003D474 84E769BE */  lh    $a3, %lo(gPlayers+0x2E)($a3)
/* 03E078 8003D478 0C007134 */  jal   func_8001C4D0
/* 03E07C 8003D47C AFA00014 */   sw    $zero, 0x14($sp)
/* 03E080 8003D480 3C02800F */  lui   $v0, %hi(gPlayers+0xDD8) # $v0, 0x800f
/* 03E084 8003D484 24427768 */  addiu $v0, %lo(gPlayers+0xDD8) # addiu $v0, $v0, 0x7768
/* 03E088 8003D488 C44C0014 */  lwc1  $f12, 0x14($v0)
/* 03E08C 8003D48C C44E0018 */  lwc1  $f14, 0x18($v0)
/* 03E090 8003D490 8C46001C */  lw    $a2, 0x1c($v0)
/* 03E094 8003D494 8447002E */  lh    $a3, 0x2e($v0)
/* 03E098 8003D498 240A0001 */  li    $t2, 1
/* 03E09C 8003D49C 240B0001 */  li    $t3, 1
/* 03E0A0 8003D4A0 AFAB0014 */  sw    $t3, 0x14($sp)
/* 03E0A4 8003D4A4 AFAA0010 */  sw    $t2, 0x10($sp)
/* 03E0A8 8003D4A8 0C007134 */  jal   func_8001C4D0
/* 03E0AC 8003D4AC AFA20020 */   sw    $v0, 0x20($sp)
/* 03E0B0 8003D4B0 8FA20020 */  lw    $v0, 0x20($sp)
/* 03E0B4 8003D4B4 240C0001 */  li    $t4, 1
/* 03E0B8 8003D4B8 240D0002 */  li    $t5, 2
/* 03E0BC 8003D4BC 84470E06 */  lh    $a3, 0xe06($v0)
/* 03E0C0 8003D4C0 8C460DF4 */  lw    $a2, 0xdf4($v0)
/* 03E0C4 8003D4C4 C44E0DF0 */  lwc1  $f14, 0xdf0($v0)
/* 03E0C8 8003D4C8 C44C0DEC */  lwc1  $f12, 0xdec($v0)
/* 03E0CC 8003D4CC 24420DD8 */  addiu $v0, $v0, 0xdd8
/* 03E0D0 8003D4D0 AFA20020 */  sw    $v0, 0x20($sp)
/* 03E0D4 8003D4D4 AFAD0014 */  sw    $t5, 0x14($sp)
/* 03E0D8 8003D4D8 0C007134 */  jal   func_8001C4D0
/* 03E0DC 8003D4DC AFAC0010 */   sw    $t4, 0x10($sp)
/* 03E0E0 8003D4E0 3C0E800E */  lui   $t6, %hi(gPlayerCountSelection1) # $t6, 0x800e
/* 03E0E4 8003D4E4 8DCEC538 */  lw    $t6, %lo(gPlayerCountSelection1)($t6)
/* 03E0E8 8003D4E8 8FA20020 */  lw    $v0, 0x20($sp)
/* 03E0EC 8003D4EC 24010004 */  li    $at, 4
/* 03E0F0 8003D4F0 15C1000A */  bne   $t6, $at, .L8003D51C
/* 03E0F4 8003D4F4 24420DD8 */   addiu $v0, $v0, 0xdd8
/* 03E0F8 8003D4F8 C44C0014 */  lwc1  $f12, 0x14($v0)
/* 03E0FC 8003D4FC C44E0018 */  lwc1  $f14, 0x18($v0)
/* 03E100 8003D500 8C46001C */  lw    $a2, 0x1c($v0)
/* 03E104 8003D504 8447002E */  lh    $a3, 0x2e($v0)
/* 03E108 8003D508 240F0001 */  li    $t7, 1
/* 03E10C 8003D50C 24180003 */  li    $t8, 3
/* 03E110 8003D510 AFB80014 */  sw    $t8, 0x14($sp)
/* 03E114 8003D514 0C007134 */  jal   func_8001C4D0
/* 03E118 8003D518 AFAF0010 */   sw    $t7, 0x10($sp)
.L8003D51C:
/* 03E11C 8003D51C 3C02800E */  lui   $v0, %hi(D_800DC52C) # $v0, 0x800e
/* 03E120 8003D520 10000065 */  b     .L8003D6B8
/* 03E124 8003D524 8C42C52C */   lw    $v0, %lo(D_800DC52C)($v0)
.L8003D528:
/* 03E128 8003D528 8C42C52C */  lw    $v0, %lo(D_800DC52C)($v0) # -0x3ad4($v0)
/* 03E12C 8003D52C 3C01800F */  lui   $at, %hi(gPlayers+0x14) # $at, 0x800f
/* 03E130 8003D530 3C06800F */  lui   $a2, %hi(gPlayers+0x1C) # 0x800f
/* 03E134 8003D534 1040000B */  beqz  $v0, .L8003D564
/* 03E138 8003D538 3C07800F */   lui   $a3, %hi(gPlayers+0x2E) # $a3, 0x800f
/* 03E13C 8003D53C 24010001 */  li    $at, 1
/* 03E140 8003D540 10410014 */  beq   $v0, $at, .L8003D594
/* 03E144 8003D544 3C06800F */   lui   $a2, %hi(gPlayers+0x1C) # 0x800f
/* 03E148 8003D548 24010002 */  li    $at, 2
/* 03E14C 8003D54C 10410011 */  beq   $v0, $at, .L8003D594
/* 03E150 8003D550 24010003 */   li    $at, 3
/* 03E154 8003D554 10410028 */  beq   $v0, $at, .L8003D5F8
/* 03E158 8003D558 3C06800F */   lui   $a2, %hi(gPlayers+0x1C) # $a2, 0x800f
/* 03E15C 8003D55C 10000056 */  b     .L8003D6B8
/* 03E160 8003D560 00000000 */   nop
.L8003D564:
/* 03E164 8003D564 C42C69A4 */  lwc1  $f12, %lo(gPlayers+0x14)($at)
/* 03E168 8003D568 3C01800F */  lui   $at, %hi(gPlayers+0x18) # $at, 0x800f
/* 03E16C 8003D56C 24190003 */  li    $t9, 3
/* 03E170 8003D570 AFB90010 */  sw    $t9, 0x10($sp)
/* 03E174 8003D574 C42E69A8 */  lwc1  $f14, %lo(gPlayers+0x18)($at)
/* 03E178 8003D578 8CC669AC */  lw    $a2, %lo(gPlayers+0x1C)($a2)
/* 03E17C 8003D57C 84E769BE */  lh    $a3, %lo(gPlayers+0x2E)($a3)
/* 03E180 8003D580 0C007134 */  jal   func_8001C4D0
/* 03E184 8003D584 AFA00014 */   sw    $zero, 0x14($sp)
/* 03E188 8003D588 3C02800E */  lui   $v0, %hi(D_800DC52C) # $v0, 0x800e
/* 03E18C 8003D58C 1000004A */  b     .L8003D6B8
/* 03E190 8003D590 8C42C52C */   lw    $v0, %lo(D_800DC52C)($v0)
.L8003D594:
/* 03E194 8003D594 3C01800F */  lui   $at, %hi(gPlayers+0x14) # $at, 0x800f
/* 03E198 8003D598 C42C69A4 */  lwc1  $f12, %lo(gPlayers+0x14)($at)
/* 03E19C 8003D59C 3C01800F */  lui   $at, %hi(gPlayers+0x18) # $at, 0x800f
/* 03E1A0 8003D5A0 3C07800F */  lui   $a3, %hi(gPlayers+0x2E) # $a3, 0x800f
/* 03E1A4 8003D5A4 24080003 */  li    $t0, 3
/* 03E1A8 8003D5A8 AFA80010 */  sw    $t0, 0x10($sp)
/* 03E1AC 8003D5AC 84E769BE */  lh    $a3, %lo(gPlayers+0x2E)($a3)
/* 03E1B0 8003D5B0 C42E69A8 */  lwc1  $f14, %lo(gPlayers+0x18)($at)
/* 03E1B4 8003D5B4 8CC669AC */  lw    $a2, %lo(gPlayers+0x1C)($a2) # 0x69ac($a2)
/* 03E1B8 8003D5B8 0C007134 */  jal   func_8001C4D0
/* 03E1BC 8003D5BC AFA00014 */   sw    $zero, 0x14($sp)
/* 03E1C0 8003D5C0 3C02800F */  lui   $v0, %hi(gPlayers+0xDD8) # $v0, 0x800f
/* 03E1C4 8003D5C4 24427768 */  addiu $v0, %lo(gPlayers+0xDD8) # addiu $v0, $v0, 0x7768
/* 03E1C8 8003D5C8 C44C0014 */  lwc1  $f12, 0x14($v0)
/* 03E1CC 8003D5CC C44E0018 */  lwc1  $f14, 0x18($v0)
/* 03E1D0 8003D5D0 8C46001C */  lw    $a2, 0x1c($v0)
/* 03E1D4 8003D5D4 8447002E */  lh    $a3, 0x2e($v0)
/* 03E1D8 8003D5D8 24090003 */  li    $t1, 3
/* 03E1DC 8003D5DC 240A0001 */  li    $t2, 1
/* 03E1E0 8003D5E0 AFAA0014 */  sw    $t2, 0x14($sp)
/* 03E1E4 8003D5E4 0C007134 */  jal   func_8001C4D0
/* 03E1E8 8003D5E8 AFA90010 */   sw    $t1, 0x10($sp)
/* 03E1EC 8003D5EC 3C02800E */  lui   $v0, %hi(D_800DC52C) # $v0, 0x800e
/* 03E1F0 8003D5F0 10000031 */  b     .L8003D6B8
/* 03E1F4 8003D5F4 8C42C52C */   lw    $v0, %lo(D_800DC52C)($v0)
.L8003D5F8:
/* 03E1F8 8003D5F8 3C01800F */  lui   $at, %hi(gPlayers+0x14) # $at, 0x800f
/* 03E1FC 8003D5FC C42C69A4 */  lwc1  $f12, %lo(gPlayers+0x14)($at)
/* 03E200 8003D600 3C01800F */  lui   $at, %hi(gPlayers+0x18) # $at, 0x800f
/* 03E204 8003D604 3C07800F */  lui   $a3, %hi(gPlayers+0x2E) # $a3, 0x800f
/* 03E208 8003D608 240B0003 */  li    $t3, 3
/* 03E20C 8003D60C AFAB0010 */  sw    $t3, 0x10($sp)
/* 03E210 8003D610 84E769BE */  lh    $a3, %lo(gPlayers+0x2E)($a3)
/* 03E214 8003D614 C42E69A8 */  lwc1  $f14, %lo(gPlayers+0x18)($at)
/* 03E218 8003D618 8CC669AC */  lw    $a2, 0x69ac($a2)
/* 03E21C 8003D61C 0C007134 */  jal   func_8001C4D0
/* 03E220 8003D620 AFA00014 */   sw    $zero, 0x14($sp)
/* 03E224 8003D624 3C02800F */  lui   $v0, %hi(gPlayers+0xDD8) # $v0, 0x800f
/* 03E228 8003D628 24427768 */  addiu $v0, %lo(gPlayers+0xDD8) # addiu $v0, $v0, 0x7768
/* 03E22C 8003D62C C44C0014 */  lwc1  $f12, 0x14($v0)
/* 03E230 8003D630 C44E0018 */  lwc1  $f14, 0x18($v0)
/* 03E234 8003D634 8C46001C */  lw    $a2, 0x1c($v0)
/* 03E238 8003D638 8447002E */  lh    $a3, 0x2e($v0)
/* 03E23C 8003D63C 240C0003 */  li    $t4, 3
/* 03E240 8003D640 240D0001 */  li    $t5, 1
/* 03E244 8003D644 AFAD0014 */  sw    $t5, 0x14($sp)
/* 03E248 8003D648 AFAC0010 */  sw    $t4, 0x10($sp)
/* 03E24C 8003D64C 0C007134 */  jal   func_8001C4D0
/* 03E250 8003D650 AFA20020 */   sw    $v0, 0x20($sp)
/* 03E254 8003D654 8FA20020 */  lw    $v0, 0x20($sp)
/* 03E258 8003D658 240E0003 */  li    $t6, 3
/* 03E25C 8003D65C 240F0002 */  li    $t7, 2
/* 03E260 8003D660 84470E06 */  lh    $a3, 0xe06($v0)
/* 03E264 8003D664 8C460DF4 */  lw    $a2, 0xdf4($v0)
/* 03E268 8003D668 C44E0DF0 */  lwc1  $f14, 0xdf0($v0)
/* 03E26C 8003D66C C44C0DEC */  lwc1  $f12, 0xdec($v0)
/* 03E270 8003D670 24420DD8 */  addiu $v0, $v0, 0xdd8
/* 03E274 8003D674 AFA20020 */  sw    $v0, 0x20($sp)
/* 03E278 8003D678 AFAF0014 */  sw    $t7, 0x14($sp)
/* 03E27C 8003D67C 0C007134 */  jal   func_8001C4D0
/* 03E280 8003D680 AFAE0010 */   sw    $t6, 0x10($sp)
/* 03E284 8003D684 8FA20020 */  lw    $v0, 0x20($sp)
/* 03E288 8003D688 24180003 */  li    $t8, 3
/* 03E28C 8003D68C 24190003 */  li    $t9, 3
/* 03E290 8003D690 84470E06 */  lh    $a3, 0xe06($v0)
/* 03E294 8003D694 8C460DF4 */  lw    $a2, 0xdf4($v0)
/* 03E298 8003D698 C44E0DF0 */  lwc1  $f14, 0xdf0($v0)
/* 03E29C 8003D69C C44C0DEC */  lwc1  $f12, 0xdec($v0)
/* 03E2A0 8003D6A0 AFB90014 */  sw    $t9, 0x14($sp)
/* 03E2A4 8003D6A4 AFB80010 */  sw    $t8, 0x10($sp)
/* 03E2A8 8003D6A8 0C007134 */  jal   func_8001C4D0
/* 03E2AC 8003D6AC 24420DD8 */   addiu $v0, $v0, 0xdd8
/* 03E2B0 8003D6B0 3C02800E */  lui   $v0, %hi(D_800DC52C) # $v0, 0x800e
/* 03E2B4 8003D6B4 8C42C52C */  lw    $v0, %lo(D_800DC52C)($v0)
.L8003D6B8:
/* 03E2B8 8003D6B8 1040000B */  beqz  $v0, .L8003D6E8
/* 03E2BC 8003D6BC 3C04800E */   lui   $a0, %hi(gPlayerOneCopy) # 0x800e
/* 03E2C0 8003D6C0 24010001 */  li    $at, 1
/* 03E2C4 8003D6C4 10410041 */  beq   $v0, $at, .L8003D7CC
/* 03E2C8 8003D6C8 3C04800E */   lui   $a0, %hi(gPlayerOneCopy) # 0x800e
/* 03E2CC 8003D6CC 24010002 */  li    $at, 2
/* 03E2D0 8003D6D0 1041003E */  beq   $v0, $at, .L8003D7CC
/* 03E2D4 8003D6D4 24010003 */   li    $at, 3
/* 03E2D8 8003D6D8 104100AD */  beq   $v0, $at, .L8003D990
/* 03E2DC 8003D6DC 3C04800E */   lui   $a0, %hi(gPlayerOneCopy) # $a0, 0x800e
/* 03E2E0 8003D6E0 1000011B */  b     .L8003DB50
/* 03E2E4 8003D6E4 8FBF001C */   lw    $ra, 0x1c($sp)
.L8003D6E8:
/* 03E2E8 8003D6E8 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E2EC 8003D6EC 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E2F0 8003D6F0 8C84C4FC */  lw    $a0, %lo(gPlayerOneCopy)($a0)
/* 03E2F4 8003D6F4 00003025 */  move  $a2, $zero
/* 03E2F8 8003D6F8 0C00F366 */  jal   func_8003CD98
/* 03E2FC 8003D6FC 00003825 */   move  $a3, $zero
/* 03E300 8003D700 3C04800E */  lui   $a0, %hi(gPlayerTwo) # $a0, 0x800e
/* 03E304 8003D704 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E308 8003D708 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E30C 8003D70C 8C84C4E0 */  lw    $a0, %lo(gPlayerTwo)($a0)
/* 03E310 8003D710 24060001 */  li    $a2, 1
/* 03E314 8003D714 0C00F366 */  jal   func_8003CD98
/* 03E318 8003D718 00003825 */   move  $a3, $zero
/* 03E31C 8003D71C 3C04800E */  lui   $a0, %hi(gPlayerThree) # $a0, 0x800e
/* 03E320 8003D720 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E324 8003D724 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E328 8003D728 8C84C4E4 */  lw    $a0, %lo(gPlayerThree)($a0)
/* 03E32C 8003D72C 24060002 */  li    $a2, 2
/* 03E330 8003D730 0C00F366 */  jal   func_8003CD98
/* 03E334 8003D734 00003825 */   move  $a3, $zero
/* 03E338 8003D738 3C04800E */  lui   $a0, %hi(gPlayerFour) # $a0, 0x800e
/* 03E33C 8003D73C 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E340 8003D740 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E344 8003D744 8C84C4E8 */  lw    $a0, %lo(gPlayerFour)($a0)
/* 03E348 8003D748 24060003 */  li    $a2, 3
/* 03E34C 8003D74C 0C00F366 */  jal   func_8003CD98
/* 03E350 8003D750 00003825 */   move  $a3, $zero
/* 03E354 8003D754 3C04800E */  lui   $a0, %hi(gPlayerFive) # $a0, 0x800e
/* 03E358 8003D758 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E35C 8003D75C 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E360 8003D760 8C84C4EC */  lw    $a0, %lo(gPlayerFive)($a0)
/* 03E364 8003D764 24060004 */  li    $a2, 4
/* 03E368 8003D768 0C00F366 */  jal   func_8003CD98
/* 03E36C 8003D76C 00003825 */   move  $a3, $zero
/* 03E370 8003D770 3C04800E */  lui   $a0, %hi(gPlayerSix) # $a0, 0x800e
/* 03E374 8003D774 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E378 8003D778 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E37C 8003D77C 8C84C4F0 */  lw    $a0, %lo(gPlayerSix)($a0)
/* 03E380 8003D780 24060005 */  li    $a2, 5
/* 03E384 8003D784 0C00F366 */  jal   func_8003CD98
/* 03E388 8003D788 00003825 */   move  $a3, $zero
/* 03E38C 8003D78C 3C04800E */  lui   $a0, %hi(gPlayerSeven) # $a0, 0x800e
/* 03E390 8003D790 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E394 8003D794 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E398 8003D798 8C84C4F4 */  lw    $a0, %lo(gPlayerSeven)($a0)
/* 03E39C 8003D79C 24060006 */  li    $a2, 6
/* 03E3A0 8003D7A0 0C00F366 */  jal   func_8003CD98
/* 03E3A4 8003D7A4 00003825 */   move  $a3, $zero
/* 03E3A8 8003D7A8 3C04800E */  lui   $a0, %hi(gPlayerEight) # $a0, 0x800e
/* 03E3AC 8003D7AC 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E3B0 8003D7B0 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E3B4 8003D7B4 8C84C4F8 */  lw    $a0, %lo(gPlayerEight)($a0)
/* 03E3B8 8003D7B8 24060007 */  li    $a2, 7
/* 03E3BC 8003D7BC 0C00F366 */  jal   func_8003CD98
/* 03E3C0 8003D7C0 00003825 */   move  $a3, $zero
/* 03E3C4 8003D7C4 100000E2 */  b     .L8003DB50
/* 03E3C8 8003D7C8 8FBF001C */   lw    $ra, 0x1c($sp)
.L8003D7CC:
/* 03E3CC 8003D7CC 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E3D0 8003D7D0 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E3D4 8003D7D4 8C84C4FC */  lw    $a0, %lo(gPlayerOneCopy)($a0) # -0x3b04($a0)
/* 03E3D8 8003D7D8 00003025 */  move  $a2, $zero
/* 03E3DC 8003D7DC 0C00F366 */  jal   func_8003CD98
/* 03E3E0 8003D7E0 00003825 */   move  $a3, $zero
/* 03E3E4 8003D7E4 3C04800E */  lui   $a0, %hi(gPlayerTwo) # $a0, 0x800e
/* 03E3E8 8003D7E8 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E3EC 8003D7EC 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E3F0 8003D7F0 8C84C4E0 */  lw    $a0, %lo(gPlayerTwo)($a0)
/* 03E3F4 8003D7F4 24060001 */  li    $a2, 1
/* 03E3F8 8003D7F8 0C00F366 */  jal   func_8003CD98
/* 03E3FC 8003D7FC 00003825 */   move  $a3, $zero
/* 03E400 8003D800 3C04800E */  lui   $a0, %hi(gPlayerThree) # $a0, 0x800e
/* 03E404 8003D804 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E408 8003D808 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E40C 8003D80C 8C84C4E4 */  lw    $a0, %lo(gPlayerThree)($a0)
/* 03E410 8003D810 24060002 */  li    $a2, 2
/* 03E414 8003D814 0C00F366 */  jal   func_8003CD98
/* 03E418 8003D818 00003825 */   move  $a3, $zero
/* 03E41C 8003D81C 3C04800E */  lui   $a0, %hi(gPlayerFour) # $a0, 0x800e
/* 03E420 8003D820 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E424 8003D824 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E428 8003D828 8C84C4E8 */  lw    $a0, %lo(gPlayerFour)($a0)
/* 03E42C 8003D82C 24060003 */  li    $a2, 3
/* 03E430 8003D830 0C00F366 */  jal   func_8003CD98
/* 03E434 8003D834 00003825 */   move  $a3, $zero
/* 03E438 8003D838 3C04800E */  lui   $a0, %hi(gPlayerFive) # $a0, 0x800e
/* 03E43C 8003D83C 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E440 8003D840 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E444 8003D844 8C84C4EC */  lw    $a0, %lo(gPlayerFive)($a0)
/* 03E448 8003D848 24060004 */  li    $a2, 4
/* 03E44C 8003D84C 0C00F366 */  jal   func_8003CD98
/* 03E450 8003D850 00003825 */   move  $a3, $zero
/* 03E454 8003D854 3C04800E */  lui   $a0, %hi(gPlayerSix) # $a0, 0x800e
/* 03E458 8003D858 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E45C 8003D85C 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E460 8003D860 8C84C4F0 */  lw    $a0, %lo(gPlayerSix)($a0)
/* 03E464 8003D864 24060005 */  li    $a2, 5
/* 03E468 8003D868 0C00F366 */  jal   func_8003CD98
/* 03E46C 8003D86C 00003825 */   move  $a3, $zero
/* 03E470 8003D870 3C04800E */  lui   $a0, %hi(gPlayerSeven) # $a0, 0x800e
/* 03E474 8003D874 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E478 8003D878 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E47C 8003D87C 8C84C4F4 */  lw    $a0, %lo(gPlayerSeven)($a0)
/* 03E480 8003D880 24060006 */  li    $a2, 6
/* 03E484 8003D884 0C00F366 */  jal   func_8003CD98
/* 03E488 8003D888 00003825 */   move  $a3, $zero
/* 03E48C 8003D88C 3C04800E */  lui   $a0, %hi(gPlayerEight) # $a0, 0x800e
/* 03E490 8003D890 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E494 8003D894 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E498 8003D898 8C84C4F8 */  lw    $a0, %lo(gPlayerEight)($a0)
/* 03E49C 8003D89C 24060007 */  li    $a2, 7
/* 03E4A0 8003D8A0 0C00F366 */  jal   func_8003CD98
/* 03E4A4 8003D8A4 00003825 */   move  $a3, $zero
/* 03E4A8 8003D8A8 3C04800E */  lui   $a0, %hi(gPlayerOneCopy) # $a0, 0x800e
/* 03E4AC 8003D8AC 3C05800E */  lui   $a1, %hi(camera2) # $a1, 0x800e
/* 03E4B0 8003D8B0 8CA5DB44 */  lw    $a1, %lo(camera2)($a1)
/* 03E4B4 8003D8B4 8C84C4FC */  lw    $a0, %lo(gPlayerOneCopy)($a0)
/* 03E4B8 8003D8B8 00003025 */  move  $a2, $zero
/* 03E4BC 8003D8BC 0C00F366 */  jal   func_8003CD98
/* 03E4C0 8003D8C0 24070001 */   li    $a3, 1
/* 03E4C4 8003D8C4 3C04800E */  lui   $a0, %hi(gPlayerTwo) # $a0, 0x800e
/* 03E4C8 8003D8C8 3C05800E */  lui   $a1, %hi(camera2) # $a1, 0x800e
/* 03E4CC 8003D8CC 8CA5DB44 */  lw    $a1, %lo(camera2)($a1)
/* 03E4D0 8003D8D0 8C84C4E0 */  lw    $a0, %lo(gPlayerTwo)($a0)
/* 03E4D4 8003D8D4 24060001 */  li    $a2, 1
/* 03E4D8 8003D8D8 0C00F366 */  jal   func_8003CD98
/* 03E4DC 8003D8DC 24070001 */   li    $a3, 1
/* 03E4E0 8003D8E0 3C04800E */  lui   $a0, %hi(gPlayerThree) # $a0, 0x800e
/* 03E4E4 8003D8E4 3C05800E */  lui   $a1, %hi(camera2) # $a1, 0x800e
/* 03E4E8 8003D8E8 8CA5DB44 */  lw    $a1, %lo(camera2)($a1)
/* 03E4EC 8003D8EC 8C84C4E4 */  lw    $a0, %lo(gPlayerThree)($a0)
/* 03E4F0 8003D8F0 24060002 */  li    $a2, 2
/* 03E4F4 8003D8F4 0C00F366 */  jal   func_8003CD98
/* 03E4F8 8003D8F8 24070001 */   li    $a3, 1
/* 03E4FC 8003D8FC 3C04800E */  lui   $a0, %hi(gPlayerFour) # $a0, 0x800e
/* 03E500 8003D900 3C05800E */  lui   $a1, %hi(camera2) # $a1, 0x800e
/* 03E504 8003D904 8CA5DB44 */  lw    $a1, %lo(camera2)($a1)
/* 03E508 8003D908 8C84C4E8 */  lw    $a0, %lo(gPlayerFour)($a0)
/* 03E50C 8003D90C 24060003 */  li    $a2, 3
/* 03E510 8003D910 0C00F366 */  jal   func_8003CD98
/* 03E514 8003D914 24070001 */   li    $a3, 1
/* 03E518 8003D918 3C04800E */  lui   $a0, %hi(gPlayerFive) # $a0, 0x800e
/* 03E51C 8003D91C 3C05800E */  lui   $a1, %hi(camera2) # $a1, 0x800e
/* 03E520 8003D920 8CA5DB44 */  lw    $a1, %lo(camera2)($a1)
/* 03E524 8003D924 8C84C4EC */  lw    $a0, %lo(gPlayerFive)($a0)
/* 03E528 8003D928 24060004 */  li    $a2, 4
/* 03E52C 8003D92C 0C00F366 */  jal   func_8003CD98
/* 03E530 8003D930 24070001 */   li    $a3, 1
/* 03E534 8003D934 3C04800E */  lui   $a0, %hi(gPlayerSix) # $a0, 0x800e
/* 03E538 8003D938 3C05800E */  lui   $a1, %hi(camera2) # $a1, 0x800e
/* 03E53C 8003D93C 8CA5DB44 */  lw    $a1, %lo(camera2)($a1)
/* 03E540 8003D940 8C84C4F0 */  lw    $a0, %lo(gPlayerSix)($a0)
/* 03E544 8003D944 24060005 */  li    $a2, 5
/* 03E548 8003D948 0C00F366 */  jal   func_8003CD98
/* 03E54C 8003D94C 24070001 */   li    $a3, 1
/* 03E550 8003D950 3C04800E */  lui   $a0, %hi(gPlayerSeven) # $a0, 0x800e
/* 03E554 8003D954 3C05800E */  lui   $a1, %hi(camera2) # $a1, 0x800e
/* 03E558 8003D958 8CA5DB44 */  lw    $a1, %lo(camera2)($a1)
/* 03E55C 8003D95C 8C84C4F4 */  lw    $a0, %lo(gPlayerSeven)($a0)
/* 03E560 8003D960 24060006 */  li    $a2, 6
/* 03E564 8003D964 0C00F366 */  jal   func_8003CD98
/* 03E568 8003D968 24070001 */   li    $a3, 1
/* 03E56C 8003D96C 3C04800E */  lui   $a0, %hi(gPlayerEight) # $a0, 0x800e
/* 03E570 8003D970 3C05800E */  lui   $a1, %hi(camera2) # $a1, 0x800e
/* 03E574 8003D974 8CA5DB44 */  lw    $a1, %lo(camera2)($a1)
/* 03E578 8003D978 8C84C4F8 */  lw    $a0, %lo(gPlayerEight)($a0)
/* 03E57C 8003D97C 24060007 */  li    $a2, 7
/* 03E580 8003D980 0C00F366 */  jal   func_8003CD98
/* 03E584 8003D984 24070001 */   li    $a3, 1
/* 03E588 8003D988 10000071 */  b     .L8003DB50
/* 03E58C 8003D98C 8FBF001C */   lw    $ra, 0x1c($sp)
.L8003D990:
/* 03E590 8003D990 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E594 8003D994 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E598 8003D998 8C84C4FC */  lw    $a0, %lo(gPlayerOneCopy)($a0) # -0x3b04($a0)
/* 03E59C 8003D99C 00003025 */  move  $a2, $zero
/* 03E5A0 8003D9A0 0C00F366 */  jal   func_8003CD98
/* 03E5A4 8003D9A4 00003825 */   move  $a3, $zero
/* 03E5A8 8003D9A8 3C04800E */  lui   $a0, %hi(gPlayerTwo) # $a0, 0x800e
/* 03E5AC 8003D9AC 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E5B0 8003D9B0 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E5B4 8003D9B4 8C84C4E0 */  lw    $a0, %lo(gPlayerTwo)($a0)
/* 03E5B8 8003D9B8 24060001 */  li    $a2, 1
/* 03E5BC 8003D9BC 0C00F366 */  jal   func_8003CD98
/* 03E5C0 8003D9C0 00003825 */   move  $a3, $zero
/* 03E5C4 8003D9C4 3C04800E */  lui   $a0, %hi(gPlayerThree) # $a0, 0x800e
/* 03E5C8 8003D9C8 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E5CC 8003D9CC 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E5D0 8003D9D0 8C84C4E4 */  lw    $a0, %lo(gPlayerThree)($a0)
/* 03E5D4 8003D9D4 24060002 */  li    $a2, 2
/* 03E5D8 8003D9D8 0C00F366 */  jal   func_8003CD98
/* 03E5DC 8003D9DC 00003825 */   move  $a3, $zero
/* 03E5E0 8003D9E0 3C04800E */  lui   $a0, %hi(gPlayerFour) # $a0, 0x800e
/* 03E5E4 8003D9E4 3C05800E */  lui   $a1, %hi(camera1) # $a1, 0x800e
/* 03E5E8 8003D9E8 8CA5DB40 */  lw    $a1, %lo(camera1)($a1)
/* 03E5EC 8003D9EC 8C84C4E8 */  lw    $a0, %lo(gPlayerFour)($a0)
/* 03E5F0 8003D9F0 24060003 */  li    $a2, 3
/* 03E5F4 8003D9F4 0C00F366 */  jal   func_8003CD98
/* 03E5F8 8003D9F8 00003825 */   move  $a3, $zero
/* 03E5FC 8003D9FC 3C04800E */  lui   $a0, %hi(gPlayerOneCopy) # $a0, 0x800e
/* 03E600 8003DA00 3C05800E */  lui   $a1, %hi(camera2) # $a1, 0x800e
/* 03E604 8003DA04 8CA5DB44 */  lw    $a1, %lo(camera2)($a1)
/* 03E608 8003DA08 8C84C4FC */  lw    $a0, %lo(gPlayerOneCopy)($a0)
/* 03E60C 8003DA0C 00003025 */  move  $a2, $zero
/* 03E610 8003DA10 0C00F366 */  jal   func_8003CD98
/* 03E614 8003DA14 24070001 */   li    $a3, 1
/* 03E618 8003DA18 3C04800E */  lui   $a0, %hi(gPlayerTwo) # $a0, 0x800e
/* 03E61C 8003DA1C 3C05800E */  lui   $a1, %hi(camera2) # $a1, 0x800e
/* 03E620 8003DA20 8CA5DB44 */  lw    $a1, %lo(camera2)($a1)
/* 03E624 8003DA24 8C84C4E0 */  lw    $a0, %lo(gPlayerTwo)($a0)
/* 03E628 8003DA28 24060001 */  li    $a2, 1
/* 03E62C 8003DA2C 0C00F366 */  jal   func_8003CD98
/* 03E630 8003DA30 24070001 */   li    $a3, 1
/* 03E634 8003DA34 3C04800E */  lui   $a0, %hi(gPlayerThree) # $a0, 0x800e
/* 03E638 8003DA38 3C05800E */  lui   $a1, %hi(camera2) # $a1, 0x800e
/* 03E63C 8003DA3C 8CA5DB44 */  lw    $a1, %lo(camera2)($a1)
/* 03E640 8003DA40 8C84C4E4 */  lw    $a0, %lo(gPlayerThree)($a0)
/* 03E644 8003DA44 24060002 */  li    $a2, 2
/* 03E648 8003DA48 0C00F366 */  jal   func_8003CD98
/* 03E64C 8003DA4C 24070001 */   li    $a3, 1
/* 03E650 8003DA50 3C04800E */  lui   $a0, %hi(gPlayerFour) # $a0, 0x800e
/* 03E654 8003DA54 3C05800E */  lui   $a1, %hi(camera2) # $a1, 0x800e
/* 03E658 8003DA58 8CA5DB44 */  lw    $a1, %lo(camera2)($a1)
/* 03E65C 8003DA5C 8C84C4E8 */  lw    $a0, %lo(gPlayerFour)($a0)
/* 03E660 8003DA60 24060003 */  li    $a2, 3
/* 03E664 8003DA64 0C00F366 */  jal   func_8003CD98
/* 03E668 8003DA68 24070001 */   li    $a3, 1
/* 03E66C 8003DA6C 3C04800E */  lui   $a0, %hi(gPlayerOneCopy) # $a0, 0x800e
/* 03E670 8003DA70 3C05800E */  lui   $a1, %hi(camera3) # $a1, 0x800e
/* 03E674 8003DA74 8CA5DB48 */  lw    $a1, %lo(camera3)($a1)
/* 03E678 8003DA78 8C84C4FC */  lw    $a0, %lo(gPlayerOneCopy)($a0)
/* 03E67C 8003DA7C 00003025 */  move  $a2, $zero
/* 03E680 8003DA80 0C00F366 */  jal   func_8003CD98
/* 03E684 8003DA84 24070002 */   li    $a3, 2
/* 03E688 8003DA88 3C04800E */  lui   $a0, %hi(gPlayerTwo) # $a0, 0x800e
/* 03E68C 8003DA8C 3C05800E */  lui   $a1, %hi(camera3) # $a1, 0x800e
/* 03E690 8003DA90 8CA5DB48 */  lw    $a1, %lo(camera3)($a1)
/* 03E694 8003DA94 8C84C4E0 */  lw    $a0, %lo(gPlayerTwo)($a0)
/* 03E698 8003DA98 24060001 */  li    $a2, 1
/* 03E69C 8003DA9C 0C00F366 */  jal   func_8003CD98
/* 03E6A0 8003DAA0 24070002 */   li    $a3, 2
/* 03E6A4 8003DAA4 3C04800E */  lui   $a0, %hi(gPlayerThree) # $a0, 0x800e
/* 03E6A8 8003DAA8 3C05800E */  lui   $a1, %hi(camera3) # $a1, 0x800e
/* 03E6AC 8003DAAC 8CA5DB48 */  lw    $a1, %lo(camera3)($a1)
/* 03E6B0 8003DAB0 8C84C4E4 */  lw    $a0, %lo(gPlayerThree)($a0)
/* 03E6B4 8003DAB4 24060002 */  li    $a2, 2
/* 03E6B8 8003DAB8 0C00F366 */  jal   func_8003CD98
/* 03E6BC 8003DABC 24070002 */   li    $a3, 2
/* 03E6C0 8003DAC0 3C04800E */  lui   $a0, %hi(gPlayerFour) # $a0, 0x800e
/* 03E6C4 8003DAC4 3C05800E */  lui   $a1, %hi(camera3) # $a1, 0x800e
/* 03E6C8 8003DAC8 8CA5DB48 */  lw    $a1, %lo(camera3)($a1)
/* 03E6CC 8003DACC 8C84C4E8 */  lw    $a0, %lo(gPlayerFour)($a0)
/* 03E6D0 8003DAD0 24060003 */  li    $a2, 3
/* 03E6D4 8003DAD4 0C00F366 */  jal   func_8003CD98
/* 03E6D8 8003DAD8 24070002 */   li    $a3, 2
/* 03E6DC 8003DADC 3C04800E */  lui   $a0, %hi(gPlayerOneCopy) # $a0, 0x800e
/* 03E6E0 8003DAE0 3C05800E */  lui   $a1, %hi(camera4) # $a1, 0x800e
/* 03E6E4 8003DAE4 8CA5DB4C */  lw    $a1, %lo(camera4)($a1)
/* 03E6E8 8003DAE8 8C84C4FC */  lw    $a0, %lo(gPlayerOneCopy)($a0)
/* 03E6EC 8003DAEC 00003025 */  move  $a2, $zero
/* 03E6F0 8003DAF0 0C00F366 */  jal   func_8003CD98
/* 03E6F4 8003DAF4 24070003 */   li    $a3, 3
/* 03E6F8 8003DAF8 3C04800E */  lui   $a0, %hi(gPlayerTwo) # $a0, 0x800e
/* 03E6FC 8003DAFC 3C05800E */  lui   $a1, %hi(camera4) # $a1, 0x800e
/* 03E700 8003DB00 8CA5DB4C */  lw    $a1, %lo(camera4)($a1)
/* 03E704 8003DB04 8C84C4E0 */  lw    $a0, %lo(gPlayerTwo)($a0)
/* 03E708 8003DB08 24060001 */  li    $a2, 1
/* 03E70C 8003DB0C 0C00F366 */  jal   func_8003CD98
/* 03E710 8003DB10 24070003 */   li    $a3, 3
/* 03E714 8003DB14 3C04800E */  lui   $a0, %hi(gPlayerThree) # $a0, 0x800e
/* 03E718 8003DB18 3C05800E */  lui   $a1, %hi(camera4) # $a1, 0x800e
/* 03E71C 8003DB1C 8CA5DB4C */  lw    $a1, %lo(camera4)($a1)
/* 03E720 8003DB20 8C84C4E4 */  lw    $a0, %lo(gPlayerThree)($a0)
/* 03E724 8003DB24 24060002 */  li    $a2, 2
/* 03E728 8003DB28 0C00F366 */  jal   func_8003CD98
/* 03E72C 8003DB2C 24070003 */   li    $a3, 3
/* 03E730 8003DB30 3C04800E */  lui   $a0, %hi(gPlayerFour) # $a0, 0x800e
/* 03E734 8003DB34 3C05800E */  lui   $a1, %hi(camera4) # $a1, 0x800e
/* 03E738 8003DB38 8CA5DB4C */  lw    $a1, %lo(camera4)($a1)
/* 03E73C 8003DB3C 8C84C4E8 */  lw    $a0, %lo(gPlayerFour)($a0)
/* 03E740 8003DB40 24060003 */  li    $a2, 3
/* 03E744 8003DB44 0C00F366 */  jal   func_8003CD98
/* 03E748 8003DB48 24070003 */   li    $a3, 3
/* 03E74C 8003DB4C 8FBF001C */  lw    $ra, 0x1c($sp)
.L8003DB50:
/* 03E750 8003DB50 27BD0028 */  addiu $sp, $sp, 0x28
/* 03E754 8003DB54 03E00008 */  jr    $ra
/* 03E758 8003DB58 00000000 */   nop
