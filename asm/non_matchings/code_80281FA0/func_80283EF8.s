glabel func_80283EF8
/* 127538 80283EF8 27BDFFE8 */  addiu $sp, $sp, -0x18
/* 12753C 80283EFC 3C0E800E */  lui   $t6, %hi(gPlayerTwo) # $t6, 0x800e
/* 127540 80283F00 8DCEC4E0 */  lw    $t6, %lo(gPlayerTwo)($t6)
/* 127544 80283F04 AFBF0014 */  sw    $ra, 0x14($sp)
/* 127548 80283F08 AFA40018 */  sw    $a0, 0x18($sp)
/* 12754C 80283F0C 3C063DF5 */  lui   $a2, (0x3DF5C28F >> 16) # lui $a2, 0x3df5
/* 127550 80283F10 34C6C28F */  ori   $a2, (0x3DF5C28F & 0xFFFF) # ori $a2, $a2, 0xc28f
/* 127554 80283F14 0C0A0868 */  jal   func_802821A0
/* 127558 80283F18 8DC50014 */   lw    $a1, 0x14($t6)
/* 12755C 80283F1C 3C0F800E */  lui   $t7, %hi(gPlayerTwo) # $t7, 0x800e
/* 127560 80283F20 8DEFC4E0 */  lw    $t7, %lo(gPlayerTwo)($t7)
/* 127564 80283F24 8FA40018 */  lw    $a0, 0x18($sp)
/* 127568 80283F28 3C063DF5 */  lui   $a2, (0x3DF5C28F >> 16) # lui $a2, 0x3df5
/* 12756C 80283F2C 34C6C28F */  ori   $a2, (0x3DF5C28F & 0xFFFF) # ori $a2, $a2, 0xc28f
/* 127570 80283F30 8DE50018 */  lw    $a1, 0x18($t7)
/* 127574 80283F34 0C0A0868 */  jal   func_802821A0
/* 127578 80283F38 24840004 */   addiu $a0, $a0, 4
/* 12757C 80283F3C 3C18800E */  lui   $t8, %hi(gPlayerTwo) # $t8, 0x800e
/* 127580 80283F40 8F18C4E0 */  lw    $t8, %lo(gPlayerTwo)($t8)
/* 127584 80283F44 8FA40018 */  lw    $a0, 0x18($sp)
/* 127588 80283F48 3C063DF5 */  lui   $a2, (0x3DF5C28F >> 16) # lui $a2, 0x3df5
/* 12758C 80283F4C 34C6C28F */  ori   $a2, (0x3DF5C28F & 0xFFFF) # ori $a2, $a2, 0xc28f
/* 127590 80283F50 8F05001C */  lw    $a1, 0x1c($t8)
/* 127594 80283F54 0C0A0868 */  jal   func_802821A0
/* 127598 80283F58 24840008 */   addiu $a0, $a0, 8
/* 12759C 80283F5C 8FBF0014 */  lw    $ra, 0x14($sp)
/* 1275A0 80283F60 27BD0018 */  addiu $sp, $sp, 0x18
/* 1275A4 80283F64 03E00008 */  jr    $ra
/* 1275A8 80283F68 00000000 */   nop
