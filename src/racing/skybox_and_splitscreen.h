#ifndef SKYBOX_AND_SPLITSCREEN_H
#define SKYBOX_AND_SPLITSCREEN_H

#include <PR/gbi.h>

#define G_CLEAR_ALL_MODES 0xFFFFFFFF

/* Function Prototypes */

void func_802A4A0C(Vtx*, struct UnkStruct_800DC5EC*, s32, s32, f32*);

void func_802A3730(struct UnkStruct_800DC5EC*);
void func_802A38AC(void);
void func_802A38B4(void);
void func_802A39E0(struct UnkStruct_800DC5EC*);
void init_z_buffer(void);
void init_rdp(void);
void func_802A40A4(void);
void func_802A40AC(void);
void func_802A40B4(void);
void func_802A40BC(void);
void func_802A40C4(void);
void func_802A40CC(void);
void func_802A40D4(void);
void func_802A40DC(void);
s32  set_viewport2(void);
void set_viewport(void);
void select_framebuffer(void);
void func_802A4300(void);
void func_802A450C(Vtx*);
void func_802A487C(Vtx*, struct UnkStruct_800DC5EC*, s32, s32, f32*);
void func_802A4D18(void);
void func_802A4EF4(void);
void func_802A5004(void);
void func_802A50EC(void);
void func_802A51D4(void);
void func_802A52BC(void);
void func_802A53A4(void);
void func_802A54A8(void);
void func_802A5590(void);
void func_802A5678(void);
void func_802A5760(void);
void func_802A59A4(void);
void func_802A5CB4(void);
void func_802A5FAC(void);
void func_802A62A4(void);
void func_802A65B8(void);
void func_802A68CC(void);
void func_802A6BB0(void);
void func_802A6E94(void);
void func_802A7178(void);
void func_802A74BC(void);
void copy_framebuffer(s32, s32, s32, s32, u16*, u16*);
void func_802A7728(void);
void func_802A7940(void);

extern Vp D_802B8880[];

extern struct UnkStruct_800DC5EC *D_800DC5EC;
extern struct UnkStruct_800DC5EC *D_800DC5F0;
extern struct UnkStruct_800DC5EC *D_800DC5F4;
extern struct UnkStruct_800DC5EC *D_800DC5F8;
extern u16 D_800DC5B0;
extern u16 gIsInQuitToMenuTransition;
extern u16 gQuitToMenuTransitionCounter;

extern s32 D_800DC5D0;
extern s32 D_800DC5D4;
extern s32 D_800DC5D8;
extern u16 D_800DC5BC;
extern u16 D_800DC5B4;


extern u16 D_800DC5C8;
extern u16 D_800DC5B8;
extern struct UnkStruct_800DC5EC D_8015F480[];

extern s32 D_800DC5DC;
extern s32 D_800DC5E0;

#endif
