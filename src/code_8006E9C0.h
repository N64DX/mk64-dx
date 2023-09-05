#ifndef CODE_8006E9C0_H
#define CODE_8006E9C0_H

#include "common_structs.h"
#include "code_80071F00.h"

void func_8006E9C0(void);
void func_8006EA5C(void);
void func_8006EB10(void);
void func_8006ED60(void);
u8  *func_8006ED94(u8*, u8*, u32, u32);
void func_8006EE44(void);
void func_8006EE7C(s32);
void func_8006FA94(void);
void func_80070148(void);
void func_80070190(void);
void func_80070250(s32, s32, StarSpawn*);
void func_80070328(StarSpawn*);
void func_800703E0(s32, s32, StarSpawn*);
void func_800704A0(StarSpawn*);
void func_8007055C(void);
void func_80070714(void);
void func_80071428(void);
void func_80071818(void);
void func_80071C28(void);
void func_80071A20(void);

extern s16 D_800E5520[];
extern s16 D_800E5548[];
extern s32 gCourseOutlineTextures[0x14];

extern s32 gScreenModeSelection;
extern s8 *gTextureLogoMarioKart64;
extern s16 D_80165730;
extern s16 D_80165740;
extern s16 D_80165748;
extern s32 D_80183D5C;
extern s8  D_8018EDF3;
extern u8 *D_8018D1E0;
extern intptr_t D_8018D9B0;

// Destination for decompressed exhaust textures (I think)
// I'm not how much I like this "pointer to an array" setup, but if it matches it matches
extern u8 (*D_8018D220)[1024];

extern s32 D_8018D240;
extern s16 D_8018D2B0;
extern s16 D_8018D2B8;
extern s32 D_80183DA0;
extern s32 D_80183DBC;

extern struct_8018CA70_entry D_8018CA70[];
// These are all *technically* hardcoded references to spots in D_8018CA70, but there's something weird
// going on match wise in func_8006EA5C that means we have to (for now) leave them as separate variables
extern s8 D_8018CAE0;
extern s8 D_8018CAE1;
extern s8 D_8018CAE2;
extern s8 D_8018CAF1;
extern s8 D_8018CB64;
extern s8 D_8018CB65;
extern s8 D_8018CB66;
extern s8 D_8018CB75;
extern s8 D_8018CBE8;
extern s8 D_8018CBE9;
extern s8 D_8018CBEA;
extern s8 D_8018CBF9;
extern s8 D_8018CC6C;
extern s8 D_8018CC6D;
extern s8 D_8018CC6E;
extern s8 D_8018CC7D;

// These are found in data_code_80071F00
extern StarSpawn D_800E6A38[];                        /* unable to generate initializer */
extern StarSpawn D_800E6AA8[];                        /* unable to generate initializer */
extern StarSpawn D_800E6B00[];                        /* unable to generate initializer */
extern StarSpawn D_800E6B38[];                        /* unable to generate initializer */
extern StarSpawn D_800E6BA8[];                        /* unable to generate initializer */
extern StarSpawn D_800E6C10[];                        /* unable to generate initializer */
extern StarSpawn D_800E6C80[];                        /* unable to generate initializer */
extern StarSpawn D_800E6DE0[];                        /* unable to generate initializer */

#endif
