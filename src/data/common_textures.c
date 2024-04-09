#include <types.h>
#include <macros.h>
#include <PR/gbi.h>
#include <defines.h>

#include "common_textures.h"

/**
 * @file Contains common course data
 * @segment 0x0D
 * textures, vertices, displaylists, etc.
 * A good example would be lakitu or shells as they exist in every course.
*/

// From common_textures.bin
// Vtx 1210-1750

// Somehow these symbols need to be linked in. For now, raw addresses are used.

/*
extern u8 D_03004000[];
extern u8 D_03004800[];
extern u8 D_03005000[];
extern u8 D_03005800[];
extern u8 D_03006000[];
extern u8 D_03006800[];
extern u8 D_03007000[];
extern u8 D_03007800[];
extern u8 D_03008000[];
extern u8 D_03008800[];
*/

u8 common_tlut_finish_line_banner[] = { // tlut
    #include "assets/finish_line_banner/common_tlut_finish_line_banner.inc.c"
};

u8 common_texture_particle_fire[] = { // tlut
    #include "textures/common/common_texture_particle_fire.rgba16.inc.c"
};

Vtx D_0D001200[] = {
    {{{   -80,     100,       0}, 0, {0, 900}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D001210[] = {
    {{{     4,       0,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x00}}},
    {{{     0,      20,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x00}}},
    {{{    -4,       0,       0}, 0, {0, 0}, {0xfe, 0x02, 0x00, 0x00}}},
};

Vtx D_0D001240[] = {
    {{{     4,       0,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x00}}},
    {{{     0,      20,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x00}}},
    {{{    -4,       0,       0}, 0, {0, 0}, {0xf4, 0x89, 0x00, 0x00}}},
};

Vtx D_0D001270[] = {
    {{{     4,       0,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x00}}},
    {{{     0,      20,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x00}}},
    {{{    -4,       0,       0}, 0, {0, 0}, {0xe7, 0xf3, 0x00, 0x00}}},
};

Vtx D_0D0012A0[] = {
    {{{     4,       0,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x00}}},
    {{{     0,      20,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x00}}},
    {{{    -4,       0,       0}, 0, {0, 0}, {0xa6, 0xfe, 0x23, 0x00}}},
};
Vtx D_0D0012D0[] = { 
    {{{     4,       0,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x00}}},
    {{{     0,      20,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x00}}},
    {{{    -4,       0,       0}, 0, {0, 0}, {0x00, 0x9c, 0x23, 0x00}}},
};
Vtx D_0D001300[] = {  
    {{{     4,       0,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x00}}},
    {{{     0,      20,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x00}}},
    {{{    -4,       0,       0}, 0, {0, 0}, {0x00, 0x94, 0xa5, 0x00}}},
};

Vtx D_0D001330[] = {
    {{{     4,       0,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x00}}},
    {{{     0,      20,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x00}}},
    {{{    -4,       0,       0}, 0, {0, 0}, {0x00, 0x50, 0x9d, 0x00}}},
};

Vtx D_0D001360[] = {
    {{{     4,       0,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x00}}},
    {{{     0,      20,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x00}}},
    {{{    -4,       0,       0}, 0, {0, 0}, {0x00, 0x00, 0x9b, 0x00}}},
};

Vtx D_0D001390[] = {
    {{{   -80,     100,       0}, 0, {0, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -40,     100,       0}, 0, {2012, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -40,     115,       0}, 0, {2012, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -80,     115,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -80,      85,       0}, 0, {0, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -40,      85,       0}, 0, {2012, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -40,     100,       0}, 0, {2012, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -80,     100,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -40,     100,       0}, 0, {0, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,     100,       0}, 0, {2012, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,     115,       0}, 0, {2012, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -40,     115,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -40,      85,       0}, 0, {0, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,      85,       0}, 0, {2012, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,     100,       0}, 0, {2012, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -40,     100,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,     100,       0}, 0, {0, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    40,     100,       0}, 0, {2012, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    40,     115,       0}, 0, {2012, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,     115,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,      85,       0}, 0, {0, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    40,      85,       0}, 0, {2012, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    40,     100,       0}, 0, {2012, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,     100,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    40,     100,       0}, 0, {0, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    80,     100,       0}, 0, {2012, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    80,     115,       0}, 0, {2012, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    40,     115,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    40,      85,       0}, 0, {0, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    80,      85,       0}, 0, {2012, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    80,     100,       0}, 0, {2012, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    40,     100,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx common_vertex_finish_post[] = {
    {{{   -92,       0,       0}, 0, {0, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -89,       0,       0}, 0, {990, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -89,     115,       0}, 0, {990, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -92,     115,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    89,       0,       0}, 0, {0, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    92,       0,       0}, 0, {990, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    92,     115,       0}, 0, {990, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    89,     115,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -88,     110,       0}, 0, {0, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -80,     110,       0}, 0, {990, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -80,     115,       0}, 0, {990, 290}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -88,     115,       0}, 0, {0, 290}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -88,      82,       0}, 0, {0, 660}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -80,      85,       0}, 0, {990, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -80,      90,       0}, 0, {990, 116}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -88,      87,       0}, 0, {0, 65240}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    80,     110,       0}, 0, {990, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    88,     110,       0}, 0, {0, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    88,     115,       0}, 0, {0, 224}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    80,     115,       0}, 0, {990, 224}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    80,      85,       0}, 0, {0, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    88,      82,       0}, 0, {990, 990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    88,      87,       0}, 0, {990, 22}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    80,      90,       0}, 0, {0, 2}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D001710[] = {
    {{{    80,      85,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -80,      85,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -80,     115,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    80,     115,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},

};

Gfx D_0D001750[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_LOD),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsSPEndDisplayList(),
};

Gfx D_0D001780[] = {
    gsSPVertex(D_0D001210, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D001798[] = {
    gsSPVertex(D_0D001240, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D0017B0[] = {
    gsSPVertex(D_0D001270, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D0017C8[] = {
    gsSPVertex(D_0D0012A0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D0017E0[] = {
    gsSPVertex(D_0D0012D0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D0017F8[] = {
    gsSPVertex(D_0D001300, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D001810[] = {
    gsSPVertex(D_0D001330, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D001828[] = {
    gsSPVertex(D_0D001360, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D001840[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(common_tlut_finish_line_banner),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 8, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0xFC, 0x7C),
    gsDPLoadTextureBlock(0x03004000, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(D_0D001390, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPLoadTextureBlock(0x03004800, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPLoadTextureBlock(0x03005000, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPLoadTextureBlock(0x03005800, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPLoadTextureBlock(0x03006000, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPLoadTextureBlock(0x03006800, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPLoadTextureBlock(0x03007000, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPLoadTextureBlock(0x03007800, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPEndDisplayList(),
};

Gfx common_model_finish_post[] = {
    gsSPClearGeometryMode(G_CULL_BACK),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, 0x03008000),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 1023, 256),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 124, 124),
    gsSPVertex(common_vertex_finish_post, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, 0x03008800),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 1023, 256),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 124, 124),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPEndDisplayList(),
};

Gfx D_0D001B68[] = {
    gsSPTexture(1, 1, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPVertex(D_0D001710, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D001B90[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(D_0D001840),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPDisplayList(common_model_finish_post),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
};

Gfx D_0D001BD8[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPDisplayList(common_model_finish_post),
    gsDPSetCombineMode(G_CC_DECALRGB, G_CC_DECALRGB),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(D_0D001B68),
    gsSPEndDisplayList(),
};

Gfx D_0D001C20[] = {
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_2CYCLE),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(D_0D001840),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_PASS2),
    gsSPDisplayList(common_model_finish_post),
    gsSPClearGeometryMode(G_FOG),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
};

Gfx D_0D001C88[] = {
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_2CYCLE),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_PASS2),
    gsSPDisplayList(common_model_finish_post),
    gsDPSetCombineMode(G_CC_DECALRGB, G_CC_PASS2),
    gsSPDisplayList(D_0D001B68),
    gsSPClearGeometryMode(G_FOG),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
};


Vtx D_0D001CE8[] = {
    {{{    -5,       0,      -5}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x80}}},
    {{{    -5,       0,       5}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x80}}},
    {{{     5,       0,       5}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x80}}},
    {{{     5,       0,      -5}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x80}}},
};

Vtx common_vtx_itembox_question_mark[] = {
    {{{     3,      -5,       0}, 0, {1024, 1945}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     3,       5,       0}, 0, {1024, 65434}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -3,       5,       0}, 0, {0, 65434}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -3,      -5,       0}, 0, {0, 1945}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D001D68[] = {
    {{{     5,       0,       5}, 0, {0, 0}, {0x00, 0x00, 0xff, 0x99}}},
    {{{     5,       0,      -5}, 0, {0, 0}, {0x00, 0xff, 0xff, 0x99}}},
    {{{     0,       7,       0}, 0, {0, 0}, {0x00, 0xff, 0x00, 0x99}}},
};

Vtx D_0D001D98[] = {
    {{{     5,       0,      -5}, 0, {0, 0}, {0x00, 0xff, 0xff, 0x99}}},
    {{{    -5,       0,      -5}, 0, {0, 0}, {0xff, 0x82, 0x00, 0x99}}},
    {{{     0,       7,       0}, 0, {0, 0}, {0x00, 0xff, 0x00, 0x99}}},
};

Vtx D_0D001DC8[] = {
    {{{    -5,       0,      -5}, 0, {0, 0}, {0xff, 0x82, 0x00, 0x99}}},
    {{{    -5,       0,       5}, 0, {0, 0}, {0xff, 0xff, 0x00, 0x99}}},
    {{{     0,       7,       0}, 0, {0, 0}, {0x00, 0xff, 0x00, 0x99}}},
};

Vtx D_0D001DF8[] = {
    {{{    -5,       0,       5}, 0, {0, 0}, {0xff, 0xff, 0x00, 0x99}}},
    {{{     5,       0,       5}, 0, {0, 0}, {0x00, 0x00, 0xff, 0x99}}},
    {{{     0,       7,       0}, 0, {0, 0}, {0x00, 0xff, 0x00, 0x99}}},
};

Vtx D_0D001E28[] = {
    {{{     5,       0,       5}, 0, {0, 0}, {0x00, 0x00, 0xff, 0x99}}},
    {{{    -5,       0,       5}, 0, {0, 0}, {0xff, 0xff, 0x00, 0x99}}},
    {{{     0,      -7,       0}, 0, {0, 0}, {0xff, 0x00, 0x04, 0x99}}},
};

Vtx D_0D001E58[] = {  
    {{{     5,       0,      -5}, 0, {0, 0}, {0x00, 0xff, 0xff, 0x99}}},
    {{{     5,       0,       5}, 0, {0, 0}, {0x00, 0x00, 0xff, 0x99}}},
    {{{     0,      -7,       0}, 0, {0, 0}, {0xff, 0x00, 0x04, 0x99}}},

};
Vtx D_0D001E88[] = {
    {{{    -5,       0,      -5}, 0, {0, 0}, {0xff, 0x82, 0x00, 0x99}}},
    {{{     5,       0,      -5}, 0, {0, 0}, {0x00, 0xff, 0xff, 0x99}}},
    {{{     0,      -7,       0}, 0, {0, 0}, {0xff, 0x00, 0x04, 0x99}}},
};

Vtx D_0D001EB8[] = {
    {{{    -5,       0,       5}, 0, {0, 0}, {0xff, 0xff, 0x00, 0x99}}},
    {{{    -5,       0,      -5}, 0, {0, 0}, {0xff, 0x82, 0x00, 0x99}}},
    {{{     0,      -7,       0}, 0, {0, 0}, {0xff, 0x00, 0x04, 0x99}}},
};

// D_0D001EE8
u8 common_texture_item_box_question_mark[] = {
    #include "textures/common/common_texture_item_box_question_mark.rgba16.inc.c"
};

Gfx D_0D002EE8[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 1, 1, G_OFF),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetBlendMask(0xFF),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsSPVertex(D_0D001CE8, 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

Vtx common_fake_item_box_question_mark_vertices[] = {
    {{{    -3,       5,       0}, 0, {1024, 2048}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -3,      -5,       0}, 0, {1024, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     3,      -5,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     3,       5,       0}, 0, {0, 2048}, {0xff, 0xff, 0xff, 0xff}}},
};

Gfx common_model_fake_itembox[] = {
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIDECALA),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 124, 252),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, common_texture_item_box_question_mark),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 2047, 256),
    gsSPVertex(common_fake_item_box_question_mark_vertices, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPEndDisplayList(),
};

Gfx itemBoxQuestionMarkModel[] = {
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIDECALA),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 124, 252),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, common_texture_item_box_question_mark),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 2047, 256),
    gsSPVertex(common_vtx_itembox_question_mark, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPEndDisplayList(),
};

Gfx D_0D003090[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPTexture(1, 1, 0, G_TX_RENDERTILE, G_OFF),
    gsSPVertex(D_0D001D68, 24, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(15, 16, 17, 0),
    gsSP1Triangle(18, 19, 20, 0),
    gsSP1Triangle(21, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D0030F8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPTexture(1, 1, 0, G_TX_RENDERTILE, G_OFF),
    gsSPVertex(D_0D001D68, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D003128[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPTexture(1, 1, 0, G_TX_RENDERTILE, G_OFF),
    gsSPVertex(D_0D001D98, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D003158[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPTexture(1, 1, 0, G_TX_RENDERTILE, G_OFF),
    gsSPVertex(D_0D001DC8, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D003188[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPTexture(1, 1, 0, G_TX_RENDERTILE, G_OFF),
    gsSPVertex(D_0D001DF8, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D0031B8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPTexture(1, 1, 0, G_TX_RENDERTILE, G_OFF),
    gsSPVertex(D_0D001E28, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D0031E8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPTexture(1, 1, 0, G_TX_RENDERTILE, G_OFF),
    gsSPVertex(D_0D001E58, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D003218[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPTexture(1, 1, 0, G_TX_RENDERTILE, G_OFF),
    gsSPVertex(D_0D001E88, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D003248[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPTexture(1, 1, 0, G_TX_RENDERTILE, G_OFF),
    gsSPVertex(D_0D001EB8, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D003278[] = {
    gsSPDisplayList(D_0D003090),
    gsSPEndDisplayList(),
};

Gfx D_0D003288[] = {
    gsSPDisplayList(D_0D003278),
    gsSPEndDisplayList(),
};

Vtx common_vtx_banana[] = {
    {{{     4,      -3,       0}, 0, {1228, 1024}, {0xff, 0xfe, 0xfe, 0xff}}},
    {{{     0,       4,       0}, 0, {512, 65332}, {0xc1, 0xff, 0x00, 0xff}}},
    {{{    -4,      -3,       0}, 0, {65332, 1024}, {0xff, 0xfe, 0xfe, 0xff}}},
    {{{     0,      -3,       4}, 0, {1228, 1024}, {0xd3, 0xda, 0xad, 0xff}}},
    {{{     0,      -3,      -4}, 0, {65332, 1024}, {0xd3, 0xda, 0xad, 0xff}}},
};

Vtx common_vtx_flat_banana[] = {
    {{{     6,      -3,       0}, 0, {2048, 1024}, {0xff, 0xfe, 0xfe, 0xff}}},
    {{{     0,       4,       0}, 0, {1023, 65127}, {0xc1, 0xff, 0x00, 0xff}}},
    {{{    -6,      -3,       0}, 0, {0, 1024}, {0xff, 0xfe, 0xfe, 0xff}}},
    {{{     0,      -3,       6}, 0, {2048, 1024}, {0xd3, 0xda, 0xad, 0xff}}},
    {{{     0,       4,       0}, 0, {1024, 65127}, {0xc1, 0xff, 0x00, 0xff}}},
    {{{     0,      -3,      -6}, 0, {0, 1024}, {0xd3, 0xda, 0xad, 0xff}}},
};


// D_0D003348
u8 common_texture_banana[] = {
    #include "textures/common/common_texture_banana.rgba16.inc.c"
};

u8 common_texture_flat_banana[] = {
    #include "textures/common/common_texture_flat_banana.rgba16.inc.c"
};

// 0x4B48
Gfx common_model_banana[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIDECALA),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 124, 124),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, common_texture_banana),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 1023, 256),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsSPVertex(common_vtx_banana, 5, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 1, 4, 0),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPEndDisplayList(),
};


Gfx common_model_flat_banana[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIDECALA),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_CLAMP, 6, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 252, 124),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, common_texture_flat_banana),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 2047, 128),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsSPVertex(common_vtx_flat_banana, 6, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPEndDisplayList(),
};

// tlut size 8x29
//! @todo What is this?
u8 common_tlut_trees_import[] = {
    #include "assets/trees/common_tlut_trees_import.inc.c"
};

u8 common_tlut_green_shell[] = {
    #include "assets/greenshell/common_tlut_green_shell.inc.c"
};
// 5038
u8 common_tlut_blue_shell[] = {
    #include "assets/blueshell/common_tlut_blue_shell.inc.c"
};

Vtx D_0D005238[] = {
    {{{     3,       6,       0}, 0, {1984, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -3,       6,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -3,       0,       0}, 0, {0, 1920}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     3,       0,       0}, 0, {1984, 1920}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D005278[] = {

    {{{     3,       6,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -3,       6,       0}, 0, {1984, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -3,       0,       0}, 0, {1984, 1920}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     3,       0,       0}, 0, {0, 1920}, {0xff, 0xff, 0xff, 0xff}}},

};

Gfx D_0D0052B8[] = {
    gsSPTexture(32768, 32768, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 124, 124),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPTexture(0xFFFF, 0xFFFF, 1, 1, G_OFF),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
};

Gfx D_0D005308[] = {
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPTexture(32768, 32768, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | FORCE_BL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA), AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | FORCE_BL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),
    gsSPEndDisplayList(),
};

Gfx D_0D005338[] = { // normal shell
    gsSPDisplayList(D_0D005308),
    gsSPVertex(D_0D005238, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
};

Gfx D_0D005368[] = { // mirrored shell
    gsSPDisplayList(D_0D005308),
    gsSPVertex(D_0D005278, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
};

Gfx D_toads_turnpike_0D005398[] = {
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_toads_turnpike_0D0053B0[] = {
    gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIDECALA),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsSPEndDisplayList(),
};

Gfx D_toads_turnpike_0D0053C8[] = {
    gsDPSetCycleType(G_CYC_2CYCLE),
    gsSPSetGeometryMode(G_FOG | G_SHADING_SMOOTH),
    gsDPSetCombineMode(G_CC_MODULATEI, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_toads_turnpike_0D0053F0[] = {
    gsDPSetCycleType(G_CYC_2CYCLE),
    gsSPSetGeometryMode(G_FOG | G_SHADING_SMOOTH),
    gsDPSetCombineMode(G_CC_MODULATEI, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_toads_turnpike_0D005418[] = {
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsSPClearGeometryMode(G_FOG),
    gsSPEndDisplayList(),
};

Vtx D_0D005430[] = {
    {{{    -2,      -2,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     1,      -2,       0}, 0, {192, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     1,       1,       0}, 0, {192, 192}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -2,       1,       0}, 0, {0, 192}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx common_vtx_player_minimap_icon[] = {
    {{{    -4,      -4,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     3,      -4,       0}, 0, {448, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     3,       3,       0}, 0, {448, 448}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -4,       3,       0}, 0, {0, 448}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D0054B0[] = {
    {{{    -4,      -8,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     3,      -8,       0}, 0, {448, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     3,       7,       0}, 0, {448, 960}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -4,       7,       0}, 0, {0, 960}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -4,      -8,       0}, 0, {0, 0}, {0xff, 0xff, 0x80, 0xff}}},
    {{{     3,      -8,       0}, 0, {448, 0}, {0xff, 0xff, 0x80, 0xff}}},
    {{{     3,       7,       0}, 0, {448, 960}, {0xff, 0x80, 0x00, 0xff}}},
    {{{    -4,       7,       0}, 0, {0, 960}, {0xff, 0x80, 0x00, 0xff}}},
    {{{    -3,      -7,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{     4,      -7,       0}, 0, {448, 0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{     4,       8,       0}, 0, {448, 960}, {0x00, 0x00, 0x00, 0xff}}},
    {{{    -3,       8,       0}, 0, {0, 960}, {0x00, 0x00, 0x00, 0xff}}},
    {{{    -4,     -80,       0}, 0, {0, 0}, {0xff, 0xff, 0x80, 0xff}}},
    {{{     3,     -80,       0}, 0, {448, 0}, {0xff, 0xff, 0x80, 0xff}}},
    {{{     3,      79,       0}, 0, {448, 10176}, {0xff, 0x80, 0x00, 0xff}}},
    {{{    -4,      79,       0}, 0, {0, 10176}, {0xff, 0x80, 0x00, 0xff}}},
    {{{    -6,      -6,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     5,      -6,       0}, 0, {704, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     5,       5,       0}, 0, {704, 704}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -6,       5,       0}, 0, {0, 704}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -6,      -8,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     5,      -8,       0}, 0, {704, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     5,       7,       0}, 0, {704, 960}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -6,       7,       0}, 0, {0, 960}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -6,      -8,       0}, 0, {0, 0}, {0xff, 0xff, 0x80, 0xff}}},
    {{{     5,      -8,       0}, 0, {704, 0}, {0xff, 0xff, 0x80, 0xff}}},
    {{{     5,       7,       0}, 0, {704, 960}, {0xff, 0x80, 0x00, 0xff}}},
    {{{    -6,       7,       0}, 0, {0, 960}, {0xff, 0x80, 0x00, 0xff}}},
    {{{    -5,      -7,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{     6,      -7,       0}, 0, {704, 0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{     6,       8,       0}, 0, {704, 960}, {0x00, 0x00, 0x00, 0xff}}},
    {{{    -5,       8,       0}, 0, {0, 960}, {0x00, 0x00, 0x00, 0xff}}},
    {{{    -6,     -80,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     5,     -80,       0}, 0, {704, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     5,      79,       0}, 0, {704, 10176}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -6,      79,       0}, 0, {0, 10176}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -6,     -80,       0}, 0, {0, 0}, {0xff, 0xff, 0x80, 0xff}}},
    {{{     5,     -80,       0}, 0, {704, 0}, {0xff, 0xff, 0x80, 0xff}}},
    {{{     5,      79,       0}, 0, {704, 10176}, {0xff, 0x80, 0x00, 0xff}}},
    {{{    -6,      79,       0}, 0, {0, 10176}, {0xff, 0x80, 0x00, 0xff}}},
    {{{    -6,     -96,       0}, 0, {0, 0}, {0xff, 0xff, 0x80, 0xff}}},
    {{{     5,     -96,       0}, 0, {704, 0}, {0xff, 0xff, 0x80, 0xff}}},
    {{{     5,      95,       0}, 0, {704, 12224}, {0xff, 0x80, 0x00, 0xff}}},
    {{{    -6,      95,       0}, 0, {0, 12224}, {0xff, 0x80, 0x00, 0xff}}},
};

Vtx common_vtx_rectangle[] = {
    {{{    -8,      -8,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     7,      -8,       0}, 0, {960, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     7,       7,       0}, 0, {960, 960}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -8,       7,       0}, 0, {0, 960}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D0057B0[] = {
    {{{    -8,      -8,       0}, 0, {960, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     7,      -8,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     7,       7,       0}, 0, {0, 960}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -8,       7,       0}, 0, {960, 960}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D0057F0[] = {
    {{{    -8,       0,      -8}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     7,       0,      -8}, 0, {960, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     7,       0,       7}, 0, {960, 960}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -8,       0,       7}, 0, {0, 960}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -8,      -8,       0}, 0, {0, 0}, {0xff, 0xff, 0x80, 0xff}}},
    {{{     7,      -8,       0}, 0, {960, 0}, {0xff, 0xff, 0x80, 0xff}}},
    {{{     7,       7,       0}, 0, {960, 960}, {0xff, 0x80, 0x00, 0xff}}},
    {{{    -8,       7,       0}, 0, {0, 960}, {0xff, 0x80, 0x00, 0xff}}},
    {{{    -6,      -6,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{     9,      -6,       0}, 0, {960, 0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{     9,       9,       0}, 0, {960, 960}, {0x00, 0x00, 0x00, 0xff}}},
    {{{    -6,       9,       0}, 0, {0, 960}, {0x00, 0x00, 0x00, 0xff}}},
    {{{     0,      -8,       0}, 0, {448, 0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{     8,       8,       0}, 0, {960, 960}, {0x00, 0x00, 0x00, 0xff}}},
    {{{    -8,       8,       0}, 0, {0, 960}, {0x00, 0x00, 0x00, 0xff}}},
};

Vtx D_0D0058E0[] = {
    {{{    -8,      -8,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     7,      -8,       0}, 0, {960, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     7,       7,       0}, 0, {960, 960}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -8,       7,       0}, 0, {0, 960}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D005920[] = {
    {{{    -4,     -32,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     3,     -32,       0}, 0, {960, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     3,      31,       0}, 0, {960, 960}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -4,      31,       0}, 0, {0, 960}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -8,     -80,       0}, 0, {0, 0}, {0xff, 0xff, 0x80, 0xff}}},
    {{{     7,     -80,       0}, 0, {960, 0}, {0xff, 0xff, 0x80, 0xff}}},
    {{{     7,      79,       0}, 0, {960, 10176}, {0xff, 0x80, 0x00, 0xff}}},
    {{{    -8,      79,       0}, 0, {0, 10176}, {0xff, 0x80, 0x00, 0xff}}},
    {{{   -10,     -10,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     9,     -10,       0}, 0, {1216, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     9,       9,       0}, 0, {1216, 1216}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -10,       9,       0}, 0, {0, 1216}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -12,     -12,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    11,     -12,       0}, 0, {1472, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    11,      11,       0}, 0, {1472, 1472}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -12,      11,       0}, 0, {0, 1472}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -12,     -24,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    11,     -24,       0}, 0, {1472, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    11,      23,       0}, 0, {1472, 3008}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -12,      23,       0}, 0, {0, 3008}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -14,     -14,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    13,     -14,       0}, 0, {1728, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    13,      13,       0}, 0, {1728, 1728}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -14,      13,       0}, 0, {0, 1728}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D005AA0[] = {
    {{{   -16,      -8,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    15,      -8,       0}, 0, {1984, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    15,       7,       0}, 0, {1984, 960}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -16,       7,       0}, 0, {0, 960}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D005AE0[] = {
    {{{   -16,     -16,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    15,     -16,       0}, 0, {1984, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    15,      15,       0}, 0, {1984, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -16,      15,       0}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D005B20[] = {
    {{{   -16,     -16,       0}, 0, {1984, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    15,     -16,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    15,      15,       0}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -16,      15,       0}, 0, {1984, 1984}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D005B60[] = {
    {{{   -16,       0,     -16}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    15,       0,     -16}, 0, {1984, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    15,       0,      15}, 0, {1984, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -16,       0,      15}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D005BA0[] = {
    {{{     0,      18,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    16,      -9,       0}, 0, {1984, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -16,      -9,       0}, 0, {1984, 1984}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D005BD0[] = {
    {{{     0,      18,       0}, 0, {0, 0}, {0x00, 0x00, 0x78, 0xff}}},
    {{{    16,      -9,       0}, 0, {1984, 0}, {0x00, 0x00, 0x78, 0xff}}},
    {{{   -16,      -9,       0}, 0, {1984, 1984}, {0x00, 0x00, 0x78, 0xff}}},
};

Vtx D_0D005C00[] = {
    {{{     0,      18,       0}, 0, {0, 0}, {0xd5, 0x2c, 0x66, 0xff}}},
    {{{    16,      -9,       0}, 0, {1984, 0}, {0x66, 0xd3, 0x2b, 0xff}}},
    {{{   -16,      -9,       0}, 0, {1984, 1984}, {0x2a, 0x99, 0xd6, 0xff}}},
};

Vtx D_0D005C30[] = {
    {{{   -20,     -15,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    19,     -15,       0}, 0, {2496, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    19,      16,       0}, 0, {2496, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -20,      16,       0}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -20,     -19,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    19,     -19,       0}, 0, {2496, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    19,      20,       0}, 0, {2496, 2496}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -20,      20,       0}, 0, {0, 2496}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -24,      -8,       0}, 0, {0, 0}, {0xff, 0xff, 0x80, 0xff}}},
    {{{    23,      -8,       0}, 0, {3008, 0}, {0xff, 0xff, 0x80, 0xff}}},
    {{{    23,       7,       0}, 0, {3008, 960}, {0xff, 0x80, 0x00, 0xff}}},
    {{{   -24,       7,       0}, 0, {0, 960}, {0xff, 0x80, 0x00, 0xff}}},
    {{{   -24,      -8,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{    23,      -8,       0}, 0, {3008, 0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{    23,       7,       0}, 0, {3008, 960}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   -24,       7,       0}, 0, {0, 960}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   -24,     -19,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    23,     -19,       0}, 0, {3008, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    23,      20,       0}, 0, {3008, 2496}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -24,      20,       0}, 0, {0, 2496}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -24,     -19,       0}, 0, {3008, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    23,     -19,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    23,      20,       0}, 0, {0, 2496}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -24,      20,       0}, 0, {3008, 2496}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -24,     -19,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{    23,     -19,       0}, 0, {3008, 0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{    23,       0,       0}, 0, {3008, 1216}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   -24,       0,       0}, 0, {0, 1216}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   -24,       0,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{    23,       0,       0}, 0, {3008, 0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{    23,      19,       0}, 0, {3008, 1216}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   -24,      19,       0}, 0, {0, 1216}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   -24,     -23,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    23,     -23,       0}, 0, {3008, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    23,       0,       0}, 0, {3008, 1472}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -24,       0,       0}, 0, {0, 1472}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -24,       0,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D005E80[] = {
    {{{    23,       0,       0}, 0, {3008, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    23,      23,       0}, 0, {3008, 1472}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -24,      23,       0}, 0, {0, 1472}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D005EB0[] = {
    {{{   -28,     -35,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    27,     -35,       0}, 0, {3520, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    27,       0,       0}, 0, {3520, 2240}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -28,       0,       0}, 0, {0, 2240}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -28,       0,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
};
    
Vtx D_0D005F00[] = {
    {{{    27,       0,       0}, 0, {3520, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    27,      35,       0}, 0, {3520, 2240}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -28,      35,       0}, 0, {0, 2240}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D005F30[] = {
    {{{   -10,     -35,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    45,     -35,       0}, 0, {3520, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    45,       0,       0}, 0, {3520, 2240}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -10,       0,       0}, 0, {0, 2240}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -10,       0,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D005F80[] = {
    {{{    45,       0,       0}, 0, {3520, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    45,      35,       0}, 0, {3520, 2240}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -10,      35,       0}, 0, {0, 2240}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D005FB0 = {{{ -32, -16, 0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}};

Vtx D_0D005FC0[] = {
    {{{    31,     -16,       0}, 0, {4032, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,      15,       0}, 0, {4032, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,      15,       0}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D005FF0 = {{{ -53, -16, 0}, 0, {0, 0}, {0xff, 0x00, 0x00, 0xff}}};

Vtx D_0D006000[] = {
    {{{    10,     -16,       0}, 0, {4032, 0}, {0xff, 0x00, 0x00, 0xff}}},
    {{{    10,      15,       0}, 0, {4032, 1984}, {0xff, 0x00, 0x00, 0xff}}},
    {{{   -53,      15,       0}, 0, {0, 1984}, {0xff, 0x00, 0x00, 0xff}}},
};

Vtx D_0D006030[] = {
    {{{   -32,     -32,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,     -32,       0}, 0, {4032, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,      31,       0}, 0, {4032, 4032}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,      31,       0}, 0, {0, 4032}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,     -32,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0xff}}},
};

Vtx D_0D006080[] = {  
    {{{    31,     -32,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{    31,      31,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   -32,      31,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0xff}}},
};

Vtx D_0D0060B0[] = {  
    {{{   -32,     -31,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,     -31,       0}, 0, {4032, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,       0,       0}, 0, {4032, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,       0,       0}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,       0,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D006100[] = {
    {{{    31,       0,       0}, 0, {4032, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,      31,       0}, 0, {4032, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,      31,       0}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D006130[] = {
    {{{   -32,     -31,       0}, 0, {4032, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,     -31,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,       0,       0}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,       0,       0}, 0, {4032, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,       0,       0}, 0, {4032, 0}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D006180[] = {  
    {{{    31,       0,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,      31,       0}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,      31,       0}, 0, {4032, 1984}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D0061B0[] = { 
    {{{   -32,     -31,     -12}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,     -31,     -12}, 0, {4032, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,       0,     -12}, 0, {4032, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,       0,     -12}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,       0,     -12}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,       0,     -12}, 0, {4032, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,      31,     -12}, 0, {4032, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,      31,     -12}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,     -31,       0}, 0, {4032, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,     -31,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,       0,       0}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,       0,       0}, 0, {4032, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,       0,       0}, 0, {4032, 0}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D006280[] = {  
    {{{    31,       0,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,      31,       0}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,      31,       0}, 0, {4032, 1984}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D0062B0[] = {  
    {{{   -32,     -32,      20}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,     -32,      20}, 0, {4032, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,      31,      20}, 0, {4032, 4032}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,      31,      20}, 0, {0, 4032}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -31,     -32,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,     -32,       0}, 0, {1984, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,      31,       0}, 0, {1984, 4032}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -31,      31,       0}, 0, {0, 4032}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     1,     -32,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    32,     -32,       0}, 0, {1984, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    32,      31,       0}, 0, {1984, 4032}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     1,      31,       0}, 0, {0, 4032}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,     -31,       0}, 0, {64, 64}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,     -31,       0}, 0, {4096, 64}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,       0,       0}, 0, {4096, 2048}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,       0,       0}, 0, {64, 2048}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,       1,       0}, 0, {64, 64}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,       1,       0}, 0, {4096, 64}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,      32,       0}, 0, {4096, 2048}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,      32,       0}, 0, {64, 2048}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,     -48,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,     -48,       0}, 0, {4032, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,     -16,       0}, 0, {4032, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,     -16,       0}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,     -16,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,     -16,       0}, 0, {4032, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,      15,       0}, 0, {4032, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,      15,       0}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,      15,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D006480[] = {
    {{{    31,      15,       0}, 0, {4032, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,      47,       0}, 0, {4032, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,      47,       0}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D0064B0[] = {
    {{{   -32,     -47,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,     -47,       0}, 0, {4032, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,       0,       0}, 0, {4032, 3008}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,       0,       0}, 0, {0, 3008}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,       0,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,       0,       0}, 0, {4032, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    31,      47,       0}, 0, {4032, 3008}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -32,      47,       0}, 0, {0, 3008}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,     -23,       0}, 0, {0, 32}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,     -23,       0}, 0, {4544, 32}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,       0,       0}, 0, {4544, 1504}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,       0,       0}, 0, {0, 1504}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,       0,       0}, 0, {0, 32}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,       0,       0}, 0, {4544, 32}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,      23,       0}, 0, {4544, 1504}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,      23,       0}, 0, {0, 1504}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,     -23,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,     -23,       0}, 0, {4544, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,       0,       0}, 0, {4544, 1472}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,       0,       0}, 0, {0, 1472}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,       0,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,       0,       0}, 0, {4544, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,      23,       0}, 0, {4544, 1472}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,      23,       0}, 0, {0, 1472}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,     -23,       0}, 0, {0, 16}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,     -23,       0}, 0, {4544, 16}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,       0,       0}, 0, {4544, 1488}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,       0,       0}, 0, {0, 1488}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,       0,       0}, 0, {0, 16}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,       0,       0}, 0, {4544, 16}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,      23,       0}, 0, {4544, 1488}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,      23,       0}, 0, {0, 1488}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,     -23,       0}, 0, {0, 32}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,     -23,       0}, 0, {4544, 32}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,       0,       0}, 0, {4544, 1504}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,       0,       0}, 0, {0, 1504}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,       0,       0}, 0, {0, 32}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D006700[] = {
    {{{    35,       0,       0}, 0, {4544, 32}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,      23,       0}, 0, {4544, 1504}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,      23,       0}, 0, {0, 1504}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D006730[] = {
    {{{   -36,     -27,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,     -27,       0}, 0, {4544, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,       0,       0}, 0, {4544, 1728}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,       0,       0}, 0, {0, 1728}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,       0,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,       0,       0}, 0, {4544, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    35,      27,       0}, 0, {4544, 1728}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -36,      27,       0}, 0, {0, 1728}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -40,     -24,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    40,     -24,       0}, 0, {5056, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    40,       0,       0}, 0, {5056, 1472}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -40,       0,       0}, 0, {0, 1472}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -40,       0,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    40,       0,       0}, 0, {5056, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    40,      24,       0}, 0, {5056, 1472}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -40,      24,       0}, 0, {0, 1472}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -48,      -8,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    47,      -8,       0}, 0, {6080, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    47,       7,       0}, 0, {6080, 960}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -48,       7,       0}, 0, {0, 960}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -56,     -16,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    55,     -16,       0}, 0, {7104, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    55,      15,       0}, 0, {7104, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -56,      15,       0}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -56,     -16,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0xff}}},
};

Vtx D_0D0068C0[] = {
    {{{    55,     -16,       0}, 0, {7104, 0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{    55,      15,       0}, 0, {7104, 1984}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   -56,      15,       0}, 0, {0, 1984}, {0x00, 0x00, 0x00, 0xff}}},
};

Vtx D_0D0068F0[] = {
    {{{   -64,     -32,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    63,     -32,       0}, 0, {8128, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    63,      31,       0}, 0, {8128, 4032}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -64,      31,       0}, 0, {0, 4032}, {0xff, 0xff, 0xff, 0xff}}},

};

Gfx D_0D006930[] = {
    gsSP1Triangle(0, 2, 1, 0),
    gsSPEndDisplayList(),
};

Gfx common_rectangle_display[] = {
    gsSP2Triangles(0, 2, 1, 0, 0, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D006950[] = {
    gsSPVertex(common_vtx_player_minimap_icon, 4, 0),
    gsSPDisplayList(common_rectangle_display),
    gsSPEndDisplayList(),
};

Gfx D_0D006968[] = {
    gsSPVertex(D_0D0054B0, 4, 0),
    gsSPDisplayList(common_rectangle_display),
    gsSPEndDisplayList(),
};

Gfx D_0D006980[] = {
    gsSPVertex(common_vtx_rectangle, 4, 0),
    gsSPDisplayList(common_rectangle_display),
    gsSPEndDisplayList(),
};

Gfx D_0D006998[] = {
    gsSPVertex(D_0D0057B0, 4, 0),
    gsSPDisplayList(common_rectangle_display),
    gsSPEndDisplayList(),
};

Gfx D_0D0069B0[] = {
    gsSPVertex(D_0D0057F0, 4, 0),
    gsSPDisplayList(common_rectangle_display),
    gsSPEndDisplayList(),
};

Gfx D_0D0069C8[] = {
    gsSPVertex(D_0D005AA0, 4, 0),
    gsSPDisplayList(common_rectangle_display),
    gsSPEndDisplayList(),
};

Gfx D_0D0069E0[] = {
    gsSPVertex(D_0D005AE0, 4, 0),
    gsSPDisplayList(common_rectangle_display),
    gsSPEndDisplayList(),
};

Gfx D_0D0069F8[] = {
    gsSPVertex(D_0D005B20, 4, 0),
    gsSPDisplayList(common_rectangle_display),
    gsSPEndDisplayList(),
};

Gfx D_0D006A10[] = {
    gsSPVertex(D_0D005B60, 4, 0),
    gsSPDisplayList(common_rectangle_display),
    gsSPEndDisplayList(),
};

Gfx D_0D006A28[] = {
    gsSPVertex(D_0D0058E0, 4, 0),
    gsSPDisplayList(common_rectangle_display),
    gsSPEndDisplayList(),
};

Gfx D_0D006A40[] = {
    gsSPVertex(D_0D005920, 4, 0),
    gsSPDisplayList(common_rectangle_display),
    gsSPEndDisplayList(),
};






// Texture Block shadow i4
u8 D_0D006A58[] = {
    #include "textures/common/132B50_06A58.i4.inc.c"
};

u8 D_0D006AD8[] = {
    #include "textures/common/132B50_06AD8.ia8.inc.c"
};

// tlut
u8 common_tlut_debug_font[] = {
    #include "assets/debug_font/common_tlut_debug_font.inc.c"
};

u8 common_texture_debug_font[] = {
    #include "assets/debug_font/common_texture_debug_font.inc.c"
};

// 0x76F8
Gfx D_0D0076F8[] = {
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsDPSetTextureLOD(G_TL_TILE),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPSetTextureDetail(G_TD_CLAMP),
    gsDPSetTexturePersp(G_TP_PERSP),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureConvert(G_TC_FILT),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsDPSetCombineKey(G_CK_NONE),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_OPA_SURF2),
    gsDPSetBlendMask(0xFF),
    gsDPSetColorDither(G_CD_DISABLE),
    gsSPSetGeometryMode(G_SHADE | G_CULL_BACK),
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

Gfx D_0D007780[] = {
    gsDPSetTexturePersp(G_TP_PERSP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsSPEndDisplayList(),
};

Gfx D_0D0077A0[] = {
    gsSPDisplayList(D_0D007780),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

Gfx D_0D0077D0[] = {
    gsSPDisplayList(D_0D007780),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

Gfx D_0D0077F8[] = {
    gsSPDisplayList(D_0D007780),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),
    gsSPSetGeometryMode(G_SHADE | G_CULL_BACK | G_LIGHTING),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

Gfx D_0D007828[] = {
    gsSPDisplayList(D_0D007780),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),
    gsSPSetGeometryMode(G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

Gfx D_0D007850[] = {
    gsSPDisplayList(D_0D007780),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),
    gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsSPSetGeometryMode(G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

Gfx D_0D007878[] = {
    gsSPDisplayList(D_0D007780),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsSPSetGeometryMode(G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

Gfx D_0D0078A0[] = {
    gsSPDisplayList(D_0D007780),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

Gfx D_0D0078D0[] = {
    gsSPDisplayList(D_0D007780),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_OPA_SURF2),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADE | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

Gfx D_0D0078F8[] = {
    gsDPSetTexturePersp(G_TP_PERSP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPTexture(32768, 32768, 0, G_TX_RENDERTILE, G_ON),
    gsSPEndDisplayList(),
};

Gfx D_0D007928[] = {
    gsSPDisplayList(D_0D0078F8),
    gsDPSetRenderMode(G_RM_TEX_EDGE, G_RM_TEX_EDGE2),
    gsDPSetTextureFilter(G_TF_POINT),
    gsSPEndDisplayList(),
};

Gfx D_0D007948[] = {
    gsSPDisplayList(D_0D0078F8),
    gsDPSetRenderMode(G_RM_TEX_EDGE, G_RM_TEX_EDGE2),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsSPEndDisplayList(),
};

Gfx D_0D007968[] = {
    gsSPDisplayList(D_0D0078F8),
    gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
    gsDPSetTextureFilter(G_TF_POINT),
    gsSPEndDisplayList(),
};

Gfx D_0D007988[] = {
    gsSPDisplayList(D_0D0078F8),
    gsDPSetRenderMode(G_RM_AA_TEX_EDGE, G_RM_AA_TEX_EDGE2),
    gsDPSetTextureFilter(G_TF_POINT),
    gsSPEndDisplayList(),
};

Gfx D_0D0079A8[] = {
    gsSPDisplayList(D_0D0078F8),
    gsDPSetRenderMode(G_RM_AA_TEX_EDGE, G_RM_AA_TEX_EDGE2),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsSPEndDisplayList(),
};

Gfx D_0D0079C8[] = {
    gsSPDisplayList(D_0D0078F8),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsSPEndDisplayList(),
};

Gfx D_0D0079E8[] = {
    gsSPDisplayList(D_0D0078F8),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_WRAP | ZMODE_XLU | CVG_X_ALPHA | FORCE_BL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA), AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_WRAP | ZMODE_XLU | CVG_X_ALPHA | FORCE_BL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsSPEndDisplayList(),
};

Gfx D_0D007A08[] = {
    gsDPSetTexturePersp(G_TP_PERSP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPTexture(32768, 32768, 0, G_TX_RENDERTILE, G_ON),
    gsSPEndDisplayList(),
};

Gfx D_0D007A40[] = {
    gsSPDisplayList(D_0D007A08),
    gsDPSetTextureFilter(G_TF_POINT),
    gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_0D007A60[] = {
    gsSPDisplayList(D_0D007A08),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_0D007A80[] = {
    gsSPDisplayList(D_0D007A08),
    gsDPSetTextureFilter(G_TF_POINT),
    gsDPSetRenderMode(G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_0D007AA0[] = {
    gsSPDisplayList(D_0D007A08),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetRenderMode(G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_0D007AC0[] = {
    gsSPDisplayList(D_0D007A08),
    gsDPSetTextureFilter(G_TF_POINT),
    gsDPSetRenderMode(G_RM_ZB_XLU_SURF, G_RM_ZB_XLU_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_0D007AE0[] = {
    gsSPDisplayList(D_0D007A08),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetRenderMode(G_RM_ZB_XLU_SURF, G_RM_ZB_XLU_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_0D007B00[] = {
    gsSPDisplayList(D_0D007A08),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_0D007B20[] = {
    gsSPDisplayList(D_0D007A08),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetPrimColor(0, 0, 0x14, 0x14, 0x14, 0x00),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0),
    gsDPLoadTextureBlock_4b(D_0D006A58, G_IM_FMT_I, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(D_0D006980),
    gsSPTexture(32768, 32768, 0, G_TX_RENDERTILE, G_OFF),
    gsSPEndDisplayList(),
};

Gfx D_0D007B98[] = {
    gsSPDisplayList(D_0D007A08),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetPrimColor(0, 0, 0x14, 0x14, 0x14, 0x00),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0),
    gsDPLoadTextureBlock_4b(D_0D006A58, G_IM_FMT_I, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(D_0D0069B0),
    gsSPTexture(32768, 32768, 0, G_TX_RENDERTILE, G_OFF),
    gsSPEndDisplayList(),
};

Gfx D_0D007C10[] = {
    gsSPDisplayList(D_0D007A08),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetPrimColor(0, 0, 0x1E, 0x0A, 0x00, 0xC8),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
    gsDPLoadTextureBlock(D_0D006AD8, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(D_0D006A10),
    gsSPTexture(32768, 32768, 0, G_TX_RENDERTILE, G_OFF),
    gsSPEndDisplayList(),
};

Gfx D_0D007C88[] = {
    gsDPSetTexturePersp(G_TP_PERSP),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPTexture(32768, 32768, 0, G_TX_RENDERTILE, G_ON),
    gsSPEndDisplayList(),
};

Gfx D_0D007CB8[] = {
    gsSPDisplayList(D_0D007C88),
    gsDPSetTextureFilter(G_TF_POINT),
    gsDPSetRenderMode(G_RM_TEX_EDGE, G_RM_TEX_EDGE2),
    gsSPEndDisplayList(),
};

Gfx D_0D007CD8[] = {
    gsSPDisplayList(D_0D007C88),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetRenderMode(G_RM_TEX_EDGE, G_RM_TEX_EDGE2),
    gsSPEndDisplayList(),
};

Gfx D_0D007CF8[] = {
    gsSPDisplayList(D_0D007C88),
    gsDPSetTextureFilter(G_TF_AVERAGE),
    gsDPSetRenderMode(G_RM_TEX_EDGE, G_RM_TEX_EDGE2),
    gsSPEndDisplayList(),
};

Gfx D_0D007D18[] = {
    gsSPDisplayList(D_0D007C88),
    gsDPSetRenderMode(G_RM_AA_TEX_EDGE, G_RM_AA_TEX_EDGE2),
    gsDPSetTextureFilter(G_TF_POINT),
    gsSPEndDisplayList(),
};

Gfx D_0D007D38[] = {
    gsSPDisplayList(D_0D007C88),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetRenderMode(G_RM_AA_TEX_EDGE, G_RM_AA_TEX_EDGE2),
    gsSPEndDisplayList(),
};

Gfx D_0D007D58[] = {
    gsSPDisplayList(D_0D007C88),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetRenderMode(G_RM_ZB_OPA_SURF, G_RM_ZB_OPA_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_0D007D78[] = {
    gsSPDisplayList(D_0D007C88),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsSPEndDisplayList(),
};

Gfx D_0D007D98[] = {
    gsSPDisplayList(D_0D007C88),
    gsDPSetTextureFilter(G_TF_POINT),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsSPEndDisplayList(),
};

Gfx D_0D007DB8[] = {
    gsSPDisplayList(D_0D007C88),
    gsDPSetTextureFilter(G_TF_POINT),
    gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_0D007DD8[] = {
    gsSPDisplayList(D_0D007C88),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_0D007DF8[] = {
    gsSPDisplayList(D_0D007C88),
    gsDPSetTextureFilter(G_TF_POINT),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_0D007E18[] = {
    gsSPDisplayList(D_0D007C88),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_0D007E38[] = {
    gsSPDisplayList(D_0D007C88),
    gsDPSetTextureFilter(G_TF_POINT),
    gsDPSetRenderMode(G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_0D007E58[] = {
    gsSPDisplayList(D_0D007C88),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetRenderMode(G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_0D007E78[] = {
    gsSPDisplayList(D_0D007C88),
    gsDPSetTextureFilter(G_TF_POINT),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_WRAP | ZMODE_XLU | CVG_X_ALPHA | FORCE_BL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA), AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_WRAP | ZMODE_XLU | CVG_X_ALPHA | FORCE_BL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPEndDisplayList(),
};

Gfx D_0D007E98[] = {
    gsSPDisplayList(D_0D007C88),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_WRAP | ZMODE_XLU | CVG_X_ALPHA | FORCE_BL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA), AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_WRAP | ZMODE_XLU | CVG_X_ALPHA | FORCE_BL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPEndDisplayList(),
};

Gfx D_0D007EB8[] = {
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

Gfx D_0D007ED8[] = {
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPSetTexturePersp(G_TP_NONE),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPEndDisplayList(),
};

Gfx D_0D007EF8[] = {
    gsSPDisplayList(D_0D007ED8),
    gsDPSetRenderMode(G_RM_TEX_EDGE, G_RM_TEX_EDGE2),
    gsDPSetTextureFilter(G_TF_POINT),
    gsSPEndDisplayList(),
};

Gfx D_0D007F18[] = {
    gsSPDisplayList(D_0D007ED8),
    gsDPSetRenderMode(G_RM_TEX_EDGE, G_RM_TEX_EDGE2),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsSPEndDisplayList(),
};

Gfx D_0D007F38[] = {
    gsSPDisplayList(D_0D007ED8),
    gsDPSetTextureFilter(G_TF_POINT),
    gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_0D007F58[] = {
    gsSPDisplayList(D_0D007ED8),
    gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsSPEndDisplayList(),
};

Gfx D_0D007F78[] = {
    gsSPDisplayList(D_0D007ED8),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsSPEndDisplayList(),
};

Gfx D_0D007F98[] = {
    gsSPDisplayList(D_0D007ED8),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_WRAP | ZMODE_XLU | CVG_X_ALPHA | FORCE_BL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA), AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_WRAP | ZMODE_XLU | CVG_X_ALPHA | FORCE_BL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsSPEndDisplayList(),
};

Gfx D_0D007FB8[] = {
    gsDPSetTexturePersp(G_TP_NONE),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

Gfx D_0D007FE0[] = {
    gsSPDisplayList(D_0D007FB8),
    gsDPSetTextureFilter(G_TF_POINT),
    gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_0D008000[] = {
    gsSPDisplayList(D_0D007FB8),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
    gsSPEndDisplayList(),
};

Gfx D_0D008020[] = {
    gsDPSetTexturePersp(G_TP_NONE),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPEndDisplayList(),
};

Gfx D_0D008040[] = {
    gsSPDisplayList(D_0D008020),
    gsDPSetTextureFilter(G_TF_POINT),
    gsDPSetRenderMode(G_RM_TEX_EDGE, G_RM_TEX_EDGE2),
    gsSPEndDisplayList(),
};

Gfx D_0D008060[] = {
    gsSPDisplayList(D_0D008020),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetRenderMode(G_RM_TEX_EDGE, G_RM_TEX_EDGE2),
    gsSPEndDisplayList(),
};

Gfx D_0D008080[] = {
    gsSPDisplayList(D_0D007EF8),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(0, common_tlut_debug_font),
    gsDPLoadSync(),
    gsDPLoadTextureBlock_4b(common_texture_debug_font, G_IM_FMT_CI, 128, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPEndDisplayList(),
};

Gfx D_0D008108[] = {
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_COPY),
    gsSPEndDisplayList(),
};

Gfx D_0D008120[] = {
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsSPEndDisplayList(),
};

Gfx D_0D008138[] = {
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_2CYCLE),
    gsSPEndDisplayList(),
};

// Curve graphs for generating a random item based on player race position.
u8 common_grand_prix_human_item_curve[8][100] = {
    {   // 1st
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA_BUNCH,  ITEM_BANANA_BUNCH,  ITEM_BANANA_BUNCH,  ITEM_BANANA_BUNCH,  ITEM_BANANA_BUNCH,  ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_RED_SHELL,     ITEM_RED_SHELL,     ITEM_RED_SHELL,     ITEM_RED_SHELL,     ITEM_RED_SHELL,     ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,
        ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_BOO,                ITEM_BOO,                ITEM_BOO,                ITEM_BOO,                ITEM_BOO,
        ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,
    },
    {   // 2nd
        ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,       ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,
        ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,
        ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,
        ITEM_BOO,                ITEM_BOO,                ITEM_BOO,                ITEM_BOO,                ITEM_BOO,                ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,
    },
    {   // 3rd
        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,
        ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,
        ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,        ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,
        ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,
        ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,
    },
    {   // 4th
        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,
        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL,
        ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,
        ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,
        ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_MUSHROOM,         ITEM_MUSHROOM,         ITEM_MUSHROOM,         ITEM_MUSHROOM,         ITEM_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,
        ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,
    },
    {   // 5th
        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL,
        ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,
        ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,
        ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,
        ITEM_MUSHROOM,         ITEM_MUSHROOM,         ITEM_MUSHROOM,         ITEM_MUSHROOM,         ITEM_MUSHROOM,         ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,
        ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,
    },
    {   // 6th
        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL,
        ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL,
        ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,
        ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,
        ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,
        ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,
        ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,
    },
    {   // 7th
        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL,
        ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL,
        ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,
        ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,
        ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,
        ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,
        ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,
        ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,
        ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,
    },
    {   // 8th
        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL,
        ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL,
        ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,
        ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,
        ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,
        ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,
        ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,
        ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,
        ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,
    },
};

u8 common_grand_prix_kart_ai_item_curve[8][100] = {
    {
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,
        ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX,
        ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_BOO,           ITEM_BOO,           ITEM_BOO,           ITEM_BOO,           ITEM_BOO,
    },
    {
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,
        ITEM_BOO,           ITEM_BOO,           ITEM_BOO,           ITEM_BOO,           ITEM_BOO,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,
    },
    {
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,
        ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_BOO,                ITEM_BOO,                ITEM_BOO,                ITEM_BOO,                ITEM_BOO,
        ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,
    },
    {
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,
        ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_BOO,                ITEM_BOO,                ITEM_BOO,                ITEM_BOO,                ITEM_BOO,
        ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,
    },
    {
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,
        ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,
        ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,
    },
    {
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,
        ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,
        ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,
    },
    {
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,
        ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,
        ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,
    },
    {
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_THUNDERBOLT,        ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,
        ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,
        ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,
        ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,
    },
};

u8 common_versus_2_player_item_curve[2][100] = {
    {
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,        ITEM_BOO,           ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA_BUNCH,  ITEM_BANANA_BUNCH,  ITEM_BANANA_BUNCH,  ITEM_BANANA_BUNCH,
        ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,  ITEM_BANANA_BUNCH,  ITEM_BOO,           ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_BOO,                ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_BOO,           ITEM_TRIPLE_GREEN_SHELL,
        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_RED_SHELL,     ITEM_RED_SHELL,     ITEM_RED_SHELL,     ITEM_RED_SHELL,     ITEM_RED_SHELL,     ITEM_BOO,
        ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX,
        ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,
    },
    {
        ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_BANANA_BUNCH,     ITEM_TRIPLE_GREEN_SHELL, ITEM_RED_SHELL,        ITEM_BLUE_SPINY_SHELL, ITEM_SUPER_MUSHROOM,
        ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,     ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_TRIPLE_GREEN_SHELL,
        ITEM_BLUE_SPINY_SHELL, ITEM_RED_SHELL,        ITEM_BANANA_BUNCH,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,   ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_RED_SHELL,          ITEM_BLUE_SPINY_SHELL, ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL, ITEM_STAR,             ITEM_STAR,             ITEM_STAR,               ITEM_STAR,               ITEM_STAR,             ITEM_BANANA_BUNCH,       ITEM_BLUE_SPINY_SHELL, ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,
        ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_BANANA_BUNCH,       ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_TRIPLE_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_GREEN_SHELL, ITEM_RED_SHELL,        ITEM_BLUE_SPINY_SHELL,   ITEM_STAR,             ITEM_STAR,             ITEM_STAR,
        ITEM_STAR,             ITEM_STAR,             ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,        ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_RED_SHELL,        ITEM_TRIPLE_GREEN_SHELL, ITEM_STAR,               ITEM_STAR,             ITEM_STAR,               ITEM_STAR,             ITEM_STAR,             ITEM_BANANA_BUNCH,
        ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,
    },
};

u8 common_versus_3_player_item_curve[3][100] = {
    {
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA_BUNCH,  ITEM_BANANA_BUNCH,  ITEM_BANANA_BUNCH,  ITEM_BANANA_BUNCH,  ITEM_BANANA_BUNCH,
        ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,
        ITEM_RED_SHELL,     ITEM_RED_SHELL,     ITEM_RED_SHELL,     ITEM_RED_SHELL,     ITEM_RED_SHELL,     ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX,
        ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_BOO,           ITEM_BOO,           ITEM_BOO,           ITEM_BOO,           ITEM_BOO,
        ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,
    },
    {
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,
        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,
        ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,
        ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,        ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,
        ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_BOO,                ITEM_BOO,                ITEM_BOO,                ITEM_BOO,                ITEM_BOO,
        ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,
    },
    {
        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL,
        ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL,
        ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,
        ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,
        ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,
        ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,
        ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,
    },
};

u8 common_versus_4_player_item_curve[4][100] = {
    {
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,
        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA,        ITEM_BANANA_BUNCH,  ITEM_BANANA_BUNCH,  ITEM_BANANA_BUNCH,  ITEM_BANANA_BUNCH,  ITEM_BANANA_BUNCH,
        ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,
        ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,   ITEM_GREEN_SHELL,
        ITEM_RED_SHELL,     ITEM_RED_SHELL,     ITEM_RED_SHELL,     ITEM_RED_SHELL,     ITEM_RED_SHELL,     ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX,
        ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_FAKE_ITEM_BOX, ITEM_BOO,           ITEM_BOO,           ITEM_BOO,           ITEM_BOO,           ITEM_BOO,
        ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,      ITEM_MUSHROOM,
    },
    {
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,
        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,
        ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,
        ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_BOO,                ITEM_BOO,                ITEM_BOO,                ITEM_BOO,                ITEM_BOO,
        ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,
    },
    {
        ITEM_BANANA_BUNCH,     ITEM_BANANA_BUNCH,     ITEM_BANANA_BUNCH,     ITEM_BANANA_BUNCH,     ITEM_BANANA_BUNCH,     ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,        ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,   ITEM_TRIPLE_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_BLUE_SPINY_SHELL,   ITEM_BLUE_SPINY_SHELL,   ITEM_BLUE_SPINY_SHELL,   ITEM_BLUE_SPINY_SHELL,   ITEM_BLUE_SPINY_SHELL,
        ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,        ITEM_THUNDERBOLT,
        ITEM_FAKE_ITEM_BOX,    ITEM_FAKE_ITEM_BOX,    ITEM_FAKE_ITEM_BOX,    ITEM_FAKE_ITEM_BOX,    ITEM_FAKE_ITEM_BOX,    ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,
        ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,           ITEM_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,    ITEM_TRIPLE_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,     ITEM_SUPER_MUSHROOM,
    },
    {
        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL,
        ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL, ITEM_TRIPLE_RED_SHELL,
        ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL, ITEM_BLUE_SPINY_SHELL,
        ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,
        ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_THUNDERBOLT,      ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,
        ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,
        ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_STAR,             ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,
        ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,  ITEM_TRIPLE_MUSHROOM,
        ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,   ITEM_SUPER_MUSHROOM,
    },
};

u8 common_battle_item_curve[1][100] = {
    {
        ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,             ITEM_BANANA,
        ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,       ITEM_BANANA_BUNCH,       ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,        ITEM_GREEN_SHELL,
        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL, ITEM_TRIPLE_GREEN_SHELL,
        ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,
        ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,          ITEM_RED_SHELL,
        ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,
        ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_FAKE_ITEM_BOX,      ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,
        ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,
        ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_STAR,               ITEM_BOO,                ITEM_BOO,                ITEM_BOO,                ITEM_BOO,                ITEM_BOO,
    },
};

Vtx D_0D008B78[] = {
    {{{     2,       2,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     2,      -2,       0}, 0, {0, 960}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -2,      -2,       0}, 0, {960, 960}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -2,       2,       0}, 0, {960, 0}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D008BB8[] = {
    {{{     2,       4,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     2,       0,       0}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -2,       0,       0}, 0, {1984, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -2,       4,       0}, 0, {1984, 0}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D008BF8[] = {
    {{{     2,       2,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     2,      -2,       0}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -2,      -2,       0}, 0, {1984, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -2,       2,       0}, 0, {1984, 0}, {0xff, 0xff, 0xff, 0xff}}},
};

Vtx D_0D008C38[] = {
    {{{     2,       2,       0}, 0, {1984, 0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     2,      -2,       0}, 0, {1984, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -2,      -2,       0}, 0, {0, 1984}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    -2,       2,       0}, 0, {0, 0}, {0xff, 0xff, 0xff, 0xff}}},
};

Gfx common_square_plain_render[] = {
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx D_0D008C90[] = {
    gsDPPipeSync(),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsSPTexture(32768, 32768, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTexturePersp(G_TP_PERSP),
    gsSPEndDisplayList(),
};

Gfx common_setting_render_character[] = {
    gsDPPipeSync(),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPTexture(32768, 32768, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTexturePersp(G_TP_PERSP),
    gsSPEndDisplayList(),
};

Gfx D_0D008D10[] = {
    gsDPPipeSync(),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | FORCE_BL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA), AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | FORCE_BL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(32768, 32768, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTexturePersp(G_TP_PERSP),
    gsSPEndDisplayList(),
};

Gfx D_0D008D58[] = {
    gsDPPipeSync(),
    gsDPSetTexturePersp(G_TP_PERSP),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetBlendMask(0xFF),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsSPTexture(32768, 32768, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),
    gsSPEndDisplayList(),
};

Gfx D_0D008DA0[] = {
    gsSPDisplayList(common_square_plain_render),
    gsSPTexture(1, 1, 0, G_TX_RENDERTILE, G_OFF),
    gsSPEndDisplayList(),
};

Gfx D_0D008DB8[] = {
    gsDPPipeSync(),
    gsDPSetTexturePersp(G_TP_PERSP),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetBlendMask(0xFF),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsSPTexture(32768, 32768, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPEndDisplayList(),
};

Gfx D_0D008DF8[] = {
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsSPVertex(D_0D008B78, 4, 0),
    gsSPDisplayList(D_0D008DA0),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

Gfx D_0D008E20[] = {
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsSPVertex(D_0D008BB8, 4, 0),
    gsSPDisplayList(D_0D008DA0),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

Gfx D_0D008E48[] = {
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsSPVertex(D_0D008BF8, 4, 0),
    gsSPDisplayList(D_0D008DA0),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

Gfx D_0D008E70[] = {
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsSPVertex(D_0D008C38, 4, 0),
    gsSPDisplayList(D_0D008DA0),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

Mtx D_0D008E98 = {
    {{65536,       0, 1, 0},
     {    0,   65536, 0, 1},
     {    0,       0, 0, 0},
     {    0,       0, 0, 0}},
};

Vtx D_0D008ED8[] = {
    // These 4 Vtx's MAY be a Mtx too, its hard to say though as I can't find any references
    // to any of them in the code base
    {{{     0,     410,       0}, 0, {0, 0}, {0x00, 0x00, 0x00, 0x00}}},
    {{{     0,       0,       0}, 546, {0, 0}, {0x00, 0x00, 0x00, 0x00}}},
    {{{     0,       0,       0}, 0, {65535, 3}, {0x00, 0x00, 0x00, 0x00}}},
    {{{    -1,       3,      -1}, 3, {65535, 3}, {0x00, 0x01, 0x00, 0x00}}},
};

KartAIBehaviour common_kart_ai_behaviour_battle_courses[] = {
    {  1,  3, BEHAVIOUR_HOP, },
    { -1, -1, BEHAVIOUR_NONE, },
};

KartAIBehaviour common_kart_ai_behaviour_mario_raceway[] = {
    {   1,   2, BEHAVIOUR_NORMAL_SPEED, },
    {  11,  30, BEHAVIOUR_1, },
    {  55,  74, BEHAVIOUR_1, },
    {  90, 105, BEHAVIOUR_1, },
    { 139, 155, BEHAVIOUR_1, },
    { 177, 205, BEHAVIOUR_1, },
    { 225, 242, BEHAVIOUR_1, },
    { 292, 313, BEHAVIOUR_1, },
    { 352, 373, BEHAVIOUR_1, },
    { 452, 465, BEHAVIOUR_1, },
    {  -1,  -1, BEHAVIOUR_NONE, },
};

KartAIBehaviour common_kart_ai_behaviour_choco_mountain[] = {
    {   1,   2, BEHAVIOUR_NORMAL_SPEED, },
    {  10,  25, BEHAVIOUR_1, },
    { 190, 210, BEHAVIOUR_1, },
    { 270, 290, BEHAVIOUR_1, },
    { 410, 440, BEHAVIOUR_1, },
    { 540, 550, BEHAVIOUR_1, },
    {  -1,  -1, BEHAVIOUR_NONE, },
};

KartAIBehaviour common_kart_ai_behaviour_bowser_castle[] = {
    {   1,   2,  BEHAVIOUR_NORMAL_SPEED, },
    {  60,  80,  BEHAVIOUR_1, },
    { 125, 140,  BEHAVIOUR_1, },
    { 170, 185,  BEHAVIOUR_1, },
    { 230, 240,  BEHAVIOUR_1, },
    { 275, 285,  BEHAVIOUR_1, },
    { 310, 320,  BEHAVIOUR_1, },
    { 321, 349,  BEHAVIOUR_3, },
    { 350, 360,  BEHAVIOUR_1, },
    { 385, 415,  BEHAVIOUR_1, },
    { 450, 468,  BEHAVIOUR_1, },
    { 470, 477,  BEHAVIOUR_9, },
    { 480, 485,  BEHAVIOUR_MAX_SPEED, },
    { 543, 546,  BEHAVIOUR_9, },
    { 548, 550,  BEHAVIOUR_MAX_SPEED, },
    { 565, 568,  BEHAVIOUR_HOP, },
    { 630, 631,  BEHAVIOUR_NORMAL_SPEED, },
    { 635, 640,  BEHAVIOUR_10, },
    { 645, 655,  BEHAVIOUR_1, },
    {  -1,  -1,  BEHAVIOUR_NONE, },
};

KartAIBehaviour common_kart_ai_behaviour_banshee_boardwalk[] = {
    {   1,   2, BEHAVIOUR_NORMAL_SPEED, },
    {  15,  30, BEHAVIOUR_1, },
    {  55,  65, BEHAVIOUR_1, },
    { 125, 150, BEHAVIOUR_1, },
    { 265, 270, BEHAVIOUR_1, },
    { 275, 285, BEHAVIOUR_1, },
    { 305, 320, BEHAVIOUR_HOP, },
    { 330, 340, BEHAVIOUR_1, },
    { 375, 385, BEHAVIOUR_1, },
    { 547, 570, BEHAVIOUR_1, },
    { 582, 600, BEHAVIOUR_1, },
    {  -1,  -1, BEHAVIOUR_NONE, },
};

KartAIBehaviour common_kart_ai_behaviour_yoshi_valley[] = {
    {   1,   2, BEHAVIOUR_NORMAL_SPEED, },
    {  70,  94, BEHAVIOUR_1, },
    { 120, 133, BEHAVIOUR_1, },
    { 150, 170, BEHAVIOUR_1, },
    { 249, 265, BEHAVIOUR_1, },
    { 360, 395, BEHAVIOUR_1, },
    { 635, 655, BEHAVIOUR_1, },
    {  -1,  -1, BEHAVIOUR_NONE, },
};

KartAIBehaviour common_kart_ai_behaviour_frappe_snowland[] = {
    {   1,   2,  BEHAVIOUR_NORMAL_SPEED, },
    {  15,  30,  BEHAVIOUR_1, },
    {  41,  63,  BEHAVIOUR_1, },
    { 115, 155,  BEHAVIOUR_1, },
    { 200, 215,  BEHAVIOUR_1, },
    { 240, 241,  BEHAVIOUR_9, },
    { 264, 265,  BEHAVIOUR_10, },
    { 270, 290,  BEHAVIOUR_1, },
    { 345, 375,  BEHAVIOUR_1, },
    { 493, 544,  BEHAVIOUR_1, },
    { 583, 605,  BEHAVIOUR_1, },
    {  -1,  -1,  BEHAVIOUR_NONE, },
};

KartAIBehaviour common_kart_ai_behaviour_koopa_beach[] = {
    {   1,   2, BEHAVIOUR_NORMAL_SPEED, },
    {  75, 100, BEHAVIOUR_1, },
    { 135, 150, BEHAVIOUR_1, },
    { 355, 390, BEHAVIOUR_1, },
    { 505, 525, BEHAVIOUR_1, },
    {  -1,  -1, BEHAVIOUR_NONE, },
};

KartAIBehaviour common_kart_ai_behaviour_royal_raceway[] = {
    {   1,   2,  BEHAVIOUR_NORMAL_SPEED, },
    {  65,  80,  BEHAVIOUR_1, },
    { 165, 166,  BEHAVIOUR_9, },
    { 180, 210,  BEHAVIOUR_1, },
    { 220, 221,  BEHAVIOUR_10, },
    { 250, 275,  BEHAVIOUR_1, },
    { 360, 380,  BEHAVIOUR_1, },
    { 440, 480,  BEHAVIOUR_1, },
    { 600, 601,  BEHAVIOUR_9, },
    { 689, 690,  BEHAVIOUR_10, },
    { 695, 725,  BEHAVIOUR_1, },
    {  -1,  -1,  BEHAVIOUR_NONE, },
};

KartAIBehaviour common_kart_ai_behaviour_luigi_raceway[] = {
    {   1,   2, BEHAVIOUR_NORMAL_SPEED, },
    { 128, 275, BEHAVIOUR_1, },
    { 320, 345, BEHAVIOUR_1, },
    { 465, 565, BEHAVIOUR_1, },
    {  -1,  -1, BEHAVIOUR_NONE, },
};

KartAIBehaviour common_kart_ai_behaviour_moo_moo_farm[] = {
    {   1,   2, BEHAVIOUR_NORMAL_SPEED, },
    {  75, 100, BEHAVIOUR_1, },
    { 175, 210, BEHAVIOUR_1, },
    { 275, 300, BEHAVIOUR_1, },
    {  -1,  -1, BEHAVIOUR_NONE, },
};

KartAIBehaviour common_kart_ai_behaviour_toad_turnpike[] = {
    {   1,   2, BEHAVIOUR_NORMAL_SPEED, },
    { 106, 188, BEHAVIOUR_1, },
    { 220, 386, BEHAVIOUR_1, },
    { 583, 765, BEHAVIOUR_1, },
    {  -1,  -1, BEHAVIOUR_NONE, },
};

KartAIBehaviour common_kart_ai_behaviour_kalamari_desert[] = {
    {   1,   2, BEHAVIOUR_NORMAL_SPEED, },
    { 245, 262, BEHAVIOUR_1, },
    { 585, 606, BEHAVIOUR_1, },
    {  -1,  -1, BEHAVIOUR_NONE, },
};

KartAIBehaviour common_kart_ai_behaviour_sherbet_land[] = {
    {   1,   2, BEHAVIOUR_NORMAL_SPEED, },
    {   7,  38, BEHAVIOUR_1, },
    {  36,  54, BEHAVIOUR_1, },
    { 129, 150, BEHAVIOUR_1, },
    { 380, 410, BEHAVIOUR_1, },
    { 425, 445, BEHAVIOUR_1, },
    { 456, 500, BEHAVIOUR_1, },
    { 594, 625, BEHAVIOUR_1, },
    {  -1,  -1, BEHAVIOUR_NONE, },
};

KartAIBehaviour common_kart_ai_behaviour_rainbow_road[] = {
    {    1,    2,  BEHAVIOUR_NORMAL_SPEED, },
    {    4,    5,  BEHAVIOUR_9, },
    {  129,  130,  BEHAVIOUR_10, },
    {  555,  560,  BEHAVIOUR_9, },
    {  827,  832,  BEHAVIOUR_10, },
    {  810,  845,  BEHAVIOUR_1, },
    {  910,  993,  BEHAVIOUR_1, },
    { 1390, 1600,  BEHAVIOUR_1, },
    {   -1,   -1,  BEHAVIOUR_NONE, },
};

KartAIBehaviour common_kart_ai_behaviour_wario_stadium[] = {
    {    1,    2,  BEHAVIOUR_NORMAL_SPEED, },
    {   80,  120,  BEHAVIOUR_1, },
    {  200,  250,  BEHAVIOUR_1, },
    {  252,  253,  BEHAVIOUR_9, },
    {  273,  295,  BEHAVIOUR_1, },
    {  300,  315,  BEHAVIOUR_1, },
    {  333,  384,  BEHAVIOUR_1, },
    {  400,  401,  BEHAVIOUR_10, },
    {  405,  435,  BEHAVIOUR_1, },
    {  445,  475,  BEHAVIOUR_1, },
    {  485,  525,  BEHAVIOUR_1, },
    {  585,  615,  BEHAVIOUR_1, },
    {  685,  735,  BEHAVIOUR_1, },
    {  783,  820,  BEHAVIOUR_1, },
    {  956,  984,  BEHAVIOUR_1, },
    { 1005, 1050,  BEHAVIOUR_1, },
    { 1063, 1088,  BEHAVIOUR_1, },
    { 1130, 1131,  BEHAVIOUR_9, },
    { 1169, 1170,  BEHAVIOUR_10, },
    { 1195, 1240,  BEHAVIOUR_1, },
    { 1262, 1300,  BEHAVIOUR_1, },
    {   -1,   -1,  BEHAVIOUR_NONE, },
};

KartAIBehaviour common_kart_ai_behaviour_dk_jungle[] = {
    {   1,    2,  BEHAVIOUR_NORMAL_SPEED, },
    {  20,   40,  BEHAVIOUR_1, },
    { 190,  191,  BEHAVIOUR_9, },
    { 259,  260,  BEHAVIOUR_10, },
    { 315,  335,  BEHAVIOUR_1, },
    { 353,  370,  BEHAVIOUR_1, },
    { 398,  430,  BEHAVIOUR_1, },
    { 458,  485,  BEHAVIOUR_1, },
    { 510,  535,  BEHAVIOUR_1, },
    { 580,  660,  BEHAVIOUR_3, },
    {  -1,   -1,  BEHAVIOUR_NONE, },
};

// unknown float data
f32 D_0D009418[][4] = {
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    { 4.1666665f, 5.5833334f, 6.1666665f, 6.75f},
    {       0.0f,       0.0f,       0.0f,  0.0f},
};

f32 D_0D009568[][4] = {
    {     3.75f, 5.1666665f,      5.75f, 6.3333334f},
    {     3.75f, 5.1666665f,      5.75f, 6.3333334f},
    {     3.75f, 5.1666665f,      5.75f, 6.3333334f},
    {     3.75f, 5.1666665f,      5.75f, 6.3333334f},
    {     3.75f, 4.5833334f, 4.5833334f, 4.5833334f},
    {     3.75f, 5.1666665f,      5.75f, 6.3333334f},
    {     3.75f, 5.1666665f,      5.75f, 6.3333334f},
    {     3.75f, 5.1666665f,      5.75f, 6.3333334f},
    {     3.75f, 5.1666665f,      5.75f, 6.3333334f},
    {     3.75f, 5.1666665f,      5.75f, 6.3333334f},
    {4.1666665f, 5.5833334f, 6.1666665f,      6.75f},
    {     3.75f, 5.1666665f,      5.75f, 6.3333334f},
    {     3.75f, 5.1666665f,      5.75f, 6.3333334f},
    {     3.75f, 5.1666665f,      5.75f, 6.3333334f},
    {     3.75f, 5.1666665f,      5.75f, 6.3333334f},
    {     3.75f, 5.1666665f,      5.75f, 6.3333334f},
    {     3.75f, 5.1666665f,      5.75f, 6.3333334f},
    {     3.75f, 5.1666665f,      5.75f, 6.3333334f},
    {     3.75f, 5.1666665f,      5.75f, 6.3333334f},
    {     3.75f, 5.1666665f,      5.75f, 6.3333334f},
    {      0.0f,       0.0f,       0.0f,       0.0f},
};

f32 D_0D0096B8[][4] = {
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {3.3333332f, 3.3333332f, 3.3333332f, 3.3333332f},
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {3.3333332f, 3.9166667f,       4.5f, 5.0833334f},
    {0.0f,             0.0f,       0.0f,       0.0f},
};

f32 D_0D009808[][4] = {
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {2.9166667f,      3.75f, 3.75f,      3.75f},
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {     3.75f, 5.1666665f, 5.75f, 6.3333334f},
    {      0.0f,       0.0f,  0.0f,       0.0f},
};

// Odometer speedometer
u8 common_texture_speedometer[] = {
    #include "textures/common/common_texture_speedometer.i4.inc.c"
};

// i8? odometer needle
u8 common_texture_speedometer_needle[] = {
    #include "textures/common/common_texture_speedometer_needle.i4.inc.c"
};

// Lap UI Texture
u8 common_texture_hud_lap[] = {
    #include "textures/common/common_texture_hud_lap.rgba16.inc.c"
};

// 123/
u8 common_texture_hud_123[] = {
    #include "textures/common/common_texture_hud_123.rgba16.inc.c"
};

// Lap
u8 common_texture_hud_lap_time[] = {
    #include "textures/common/common_texture_hud_lap_time.rgba16.inc.c"
};

// 1/3
u8 common_texture_hud_lap_1_on_3[] = {
    #include "textures/common/common_texture_hud_lap_1_on_3.rgba16.inc.c"
};

// 2/3
u8 common_texture_hud_lap_2_on_3[] = {
    #include "textures/common/common_texture_hud_lap_2_on_3.rgba16.inc.c"
};

// 3/3
u8 common_texture_hud_lap_3_on_3[] = {
    #include "textures/common/common_texture_hud_lap_3_on_3.rgba16.inc.c"
};

// total
u8 common_texture_hud_total_time[] = {
    #include "textures/common/common_texture_hud_total_time.rgba16.inc.c"
};

// time
u8 common_texture_hud_time[] = {
    #include "textures/common/common_texture_hud_time.rgba16.inc.c"
};

// 0123456789'"!
u8 common_texture_hud_normal_digit[] = {
    #include "textures/common/common_texture_hud_normal_digit.rgba16.inc.c"
};

u8 common_texture_hud_place[][4096] = {
    // first place
    {
        #include "textures/common/common_texture_hud_1st.i4.inc.c"
    },
    // second place
    {
        #include "textures/common/common_texture_hud_2nd.i4.inc.c"
    },
    // third place
    {
        #include "textures/common/common_texture_hud_3rd.i4.inc.c"
    },
    // fourth place
    {
        #include "textures/common/common_texture_hud_4th.i4.inc.c"
    },
    // fifth place
    {
        #include "textures/common/common_texture_hud_5th.i4.inc.c"
    },
    // sixth place
    {
        #include "textures/common/common_texture_hud_6th.i4.inc.c"
    },
    // seventh place
    {
        #include "textures/common/common_texture_hud_7th.i4.inc.c"
    },
    // eighth place
    {
        #include "textures/common/common_texture_hud_8th.i4.inc.c"
    },
};

u8 D_0D015258[][2048] = {
    // First
    {
        #include "textures/common/132B50_15258.i4.inc.c"
    },
    // Second
    {
        #include "textures/common/132B50_15A58.i4.inc.c"
    },
    // Third
    {
        #include "textures/common/132B50_16258.i4.inc.c"
    },
    // Fourth
    {
        #include "textures/common/132B50_16A58.i4.inc.c"
    },
};

// tlut for 1p, 2p, 3p, 4p
u8 common_tlut_player_emblem[] = {
    #include "assets/player_emblems/common_tlut_player_emblem.inc.c"
};

// 1p, 2p, 3p, 4p
u8 common_texture_player_emblem[][2048] = {
    {
        #include "assets/player_emblems/common_texture_player_emblem_1p.inc.c"
    },
    {
        #include "assets/player_emblems/common_texture_player_emblem_2p.inc.c"
    },
    {
        #include "assets/player_emblems/common_texture_player_emblem_3p.inc.c"
    },
    {
        #include "assets/player_emblems/common_texture_player_emblem_4p.inc.c"
    },
};

// font tlut for 12345678
u8 common_tlut_hud_type_C_rank_font[] = {
   #include "assets/hud_type_c/common_tlut_hud_type_C_rank_font.inc.c"
};
 
// font 12345678
u8 common_texture_hud_type_C_rank_font[][256] = {
    {
        #include "assets/hud_type_c/common_texture_hud_type_C_rank_font_1.inc.c"
    },
    {
        #include "assets/hud_type_c/common_texture_hud_type_C_rank_font_2.inc.c"
    },
    {
        #include "assets/hud_type_c/common_texture_hud_type_C_rank_font_3.inc.c"
    },
    {
        #include "assets/hud_type_c/common_texture_hud_type_C_rank_font_4.inc.c"
    },
    {
        #include "assets/hud_type_c/common_texture_hud_type_C_rank_font_5.inc.c"
    },
    {
        #include "assets/hud_type_c/common_texture_hud_type_C_rank_font_6.inc.c"
    },
    {
        #include "assets/hud_type_c/common_texture_hud_type_C_rank_font_7.inc.c"
    },
    {
        #include "assets/hud_type_c/common_texture_hud_type_C_rank_font_8.inc.c"
    },
};

// font tlut for 0123456789
u8 common_tlut_hud_type_C_rank_tiny_font[] = {
   #include "assets/hud_type_c/common_tlut_hud_type_C_rank_tiny_font.inc.c"
};

// 0123456789
u8 common_texture_hud_type_C_rank_tiny_font[][64] = {
    {
        #include "assets/hud_type_c/common_texture_hud_type_C_rank_tiny_font_0.inc.c"
    },
    {
        #include "assets/hud_type_c/common_texture_hud_type_C_rank_tiny_font_1.inc.c"
    },
    {
        #include "assets/hud_type_c/common_texture_hud_type_C_rank_tiny_font_2.inc.c"
    },
    {
        #include "assets/hud_type_c/common_texture_hud_type_C_rank_tiny_font_3.inc.c"
    },
    {
        #include "assets/hud_type_c/common_texture_hud_type_C_rank_tiny_font_4.inc.c"
    },
    {
        #include "assets/hud_type_c/common_texture_hud_type_C_rank_tiny_font_5.inc.c"
    },
    {
        #include "assets/hud_type_c/common_texture_hud_type_C_rank_tiny_font_6.inc.c"
    },
    {
        #include "assets/hud_type_c/common_texture_hud_type_C_rank_tiny_font_7.inc.c"
    },
    {
        #include "assets/hud_type_c/common_texture_hud_type_C_rank_tiny_font_8.inc.c"
    },
    {
        #include "assets/hud_type_c/common_texture_hud_type_C_rank_tiny_font_9.inc.c"
    },
};

// Square
u8 common_texture_character_portrait_border[] = {
    #include "assets/hud_type_c/common_texture_character_portrait_border.inc.c"
};

// 1A4D8 mario tlut
u8 common_tlut_portrait_mario[] = {
    #include "assets/character_portraits/common_tlut_portrait_mario.inc.c"
};

// 1A6D8 luigi tlut
u8 common_tlut_portrait_luigi[] = {
    #include "assets/character_portraits/common_tlut_portrait_luigi.inc.c"
};

// 1A8D8 peach tlut
u8 common_tlut_portrait_peach[] = {
    #include "assets/character_portraits/common_tlut_portrait_peach.inc.c"
};

// 1AAD8 toad tlut
u8 common_tlut_portrait_toad[] = {
    #include "assets/character_portraits/common_tlut_portrait_toad.inc.c"
};

// 1ACD8 yoshi tlut
u8 common_tlut_portrait_yoshi[] = {
    #include "assets/character_portraits/common_tlut_portrait_yoshi.inc.c"
};

// 1AED8 dk tlut
u8 common_tlut_portrait_donkey_kong[] = {
    #include "assets/character_portraits/common_tlut_portrait_donkey_kong.inc.c"
};

// 1B0D8 wario tlut
u8 common_tlut_portrait_wario[] = {
    #include "assets/character_portraits/common_tlut_portrait_wario.inc.c"
};

// 1B2D8 bowser tlut
u8 common_tlut_portrait_bowser[] = {
    #include "assets/character_portraits/common_tlut_portrait_bowser.inc.c"
};

// 1B4D8 bob-omb tlut and question mark?
u8 common_tlut_portrait_bomb_kart_and_question_mark[] = {
    #include "assets/character_portraits/common_tlut_portrait_bomb_kart_and_question_mark.inc.c"
};


// Mario
u8 common_texture_portrait_mario[] = {
    #include "assets/character_portraits/common_texture_portrait_mario.inc.c"
};

// Luigi
u8 common_texture_portrait_luigi[] = {
    #include "assets/character_portraits/common_texture_portrait_luigi.inc.c"
};

// Peach
u8 common_texture_portrait_peach[] = {
    #include "assets/character_portraits/common_texture_portrait_peach.inc.c"
};

// Toad
u8 common_texture_portrait_toad[] = {
    #include "assets/character_portraits/common_texture_portrait_toad.inc.c"
};

// Yoshi
u8 common_texture_portrait_yoshi[] = {
    #include "assets/character_portraits/common_texture_portrait_yoshi.inc.c"
};

// Donkey Kong
u8 common_texture_portrait_donkey_kong[] = {
    #include "assets/character_portraits/common_texture_portrait_donkey_kong.inc.c"
};

// Wario
u8 common_texture_portrait_wario[] = {
    #include "assets/character_portraits/common_texture_portrait_wario.inc.c"
};

// Bowser
u8 common_texture_portrait_bowser[] = {
    #include "assets/character_portraits/common_texture_portrait_bowser.inc.c"
};

// Mini Bomb Kart
u8 common_texture_portrait_bomb_kart[] = {
    #include "assets/character_portraits/common_texture_portrait_bomb_kart.inc.c"
};

// Question Mark
u8 common_texture_portrait_question_mark[] = {
    #include "assets/character_portraits/common_texture_portrait_question_mark.inc.c"
};

// 1DED8 tlut item frames
u8 common_tlut_item_window_none[] = {
    #include "assets/item_window/common_tlut_item_window_none.inc.c"
};

u8 common_tlut_item_window_banana[] = {
    #include "assets/item_window/common_tlut_item_window_banana.inc.c"
};

u8 common_tlut_item_window_banana_bunch[] = {
    #include "assets/item_window/common_tlut_item_window_banana_bunch.inc.c"
};

u8 common_tlut_item_window_mushroom[] = {
    #include "assets/item_window/common_tlut_item_window_mushroom.inc.c"
};

u8 common_tlut_item_window_double_mushroom[] = {
    #include "assets/item_window/common_tlut_item_window_double_mushroom.inc.c"
};

u8 common_tlut_item_window_triple_mushroom[] = {
    #include "assets/item_window/common_tlut_item_window_triple_mushroom.inc.c"
};

u8 common_tlut_item_window_super_mushroom[] = {
    #include "assets/item_window/common_tlut_item_window_super_mushroom.inc.c"
};

u8 common_tlut_item_window_blue_shell[] = {
    #include "assets/item_window/common_tlut_item_window_blue_shell.inc.c"
};

u8 common_tlut_item_window_boo[] = {
    #include "assets/item_window/common_tlut_item_window_boo.inc.c"
};

u8 common_tlut_item_window_green_shell[] = {
    #include "assets/item_window/common_tlut_item_window_green_shell.inc.c"
};

u8 common_tlut_item_window_triple_green_shell[] = {
    #include "assets/item_window/common_tlut_item_window_triple_green_shell.inc.c"
};

u8 common_tlut_item_window_red_shell[] = {
    #include "assets/item_window/common_tlut_item_window_red_shell.inc.c"
};

u8 common_tlut_item_window_triple_red_shell[] = {
    #include "assets/item_window/common_tlut_item_window_triple_red_shell.inc.c"
};

u8 common_tlut_item_window_star[] = {
    #include "assets/item_window/common_tlut_item_window_star.inc.c"
};

u8 common_tlut_item_window_thunder_bolt[] = {
    #include "assets/item_window/common_tlut_item_window_thunder_bolt.inc.c"
};

u8 common_tlut_item_window_fake_item_box[] = {
    #include "assets/item_window/common_tlut_item_window_fake_item_box.inc.c"
};

// UI Item Frames
u8 common_texture_item_window_none[] = {
    #include "assets/item_window/common_texture_item_window_none.inc.c"
};

u8 common_texture_item_window_banana[] = {
    #include "assets/item_window/common_texture_item_window_banana.inc.c"
};

u8 common_texture_item_window_banana_bunch[] = {
    #include "assets/item_window/common_texture_item_window_banana_bunch.inc.c"
};

u8 common_texture_item_window_mushroom[] = {
    #include "assets/item_window/common_texture_item_window_mushroom.inc.c"
};

u8 common_texture_item_window_double_mushroom[] = {
    #include "assets/item_window/common_texture_item_window_double_mushroom.inc.c"
};

u8 common_texture_item_window_triple_mushroom[] = {
    #include "assets/item_window/common_texture_item_window_triple_mushroom.inc.c"
};

u8 common_texture_item_window_super_mushroom[] = {
    #include "assets/item_window/common_texture_item_window_super_mushroom.inc.c"
};

u8 common_texture_item_window_blue_shell[] = {
    #include "assets/item_window/common_texture_item_window_blue_shell.inc.c"
};

u8 common_texture_item_window_boo[] = {
    #include "assets/item_window/common_texture_item_window_boo.inc.c"
};

u8 common_texture_item_window_green_shell[] = {
    #include "assets/item_window/common_texture_item_window_green_shell.inc.c"
};

u8 common_texture_item_window_triple_green_shell[] = {
    #include "assets/item_window/common_texture_item_window_triple_green_shell.inc.c"
};

u8 common_texture_item_window_red_shell[] = {
    #include "assets/item_window/common_texture_item_window_red_shell.inc.c"
};

u8 common_texture_item_window_triple_red_shell[] = {
    #include "assets/item_window/common_texture_item_window_triple_red_shell.inc.c"
};

u8 common_texture_item_window_star[] = {
    #include "assets/item_window/common_texture_item_window_star.inc.c"
};

u8 common_texture_item_window_thunder_bolt[] = {
    #include "assets/item_window/common_texture_item_window_thunder_bolt.inc.c"
};

u8 common_texture_item_window_fake_item_box[] = {
    #include "assets/item_window/common_texture_item_window_fake_item_box.inc.c"
};

u8 common_tlut_lakitu_countdown[][512] = {
    {
        #include "assets/lakitu/nolights/common_tlut_lakitu_no_lights.inc.c"
    },
    {
        #include "assets/lakitu/redlights/common_tlut_lakitu_red_lights.inc.c"
    },
    {
        #include "assets/lakitu/bluelight/common_tlut_lakitu_blue_lights.inc.c"
    }
};

/**
 * @todo Generate tlut based on the actual texture.
 * The textures these tluts are for are not in common_textures.c
 * This applies to common_tlut_lakitu_checkered_flag, common_tlut_lakitu_second_lap,
 * common_tlut_lakitu_final_lap, common_tlut_lakitu_reverse, common_tlut_lakitu_fishing
 * Appears to be animation textures.
*/

u8 common_tlut_lakitu_checkered_flag[] = {
    #include "assets/lakitu/checkeredflag/common_tlut_lakitu_checkered_flag.inc.c"
};

u8 common_tlut_lakitu_second_lap[] = {
    #include "assets/lakitu/secondlap/common_tlut_lakitu_second_lap.inc.c"
};

u8 common_tlut_lakitu_final_lap[] = {
    #include "assets/lakitu/finallap/common_tlut_lakitu_final_lap.inc.c"
};

u8 common_tlut_lakitu_reverse[] = {
    #include "assets/lakitu/reverse/common_tlut_lakitu_reverse.inc.c"
};

u8 common_tlut_lakitu_fishing[] = {
    #include "assets/lakitu/fishing/common_tlut_lakitu_fishing.inc.c"
};

// unused traffic light tlut
UNUSED u8 common_tlut_traffic_light[] = {
    #include "assets/unused_traffic_light/common_tlut_traffic_light.inc.c"
};

// unused traffic light textures
 
UNUSED u8 common_texture_traffic_light_01[] = {
    #include "assets/unused_traffic_light/common_texture_traffic_light_01.inc.c"
};

UNUSED u8 common_texture_traffic_light_02[] = {
    #include "assets/unused_traffic_light/common_texture_traffic_light_02.inc.c"
};

UNUSED u8 common_texture_traffic_light_03[] = {
    #include "assets/unused_traffic_light/common_texture_traffic_light_03.inc.c"
};

UNUSED u8 common_texture_traffic_light_04[] = {
    #include "assets/unused_traffic_light/common_texture_traffic_light_04.inc.c"
};

UNUSED u8 common_texture_traffic_light_05[] = {
    #include "assets/unused_traffic_light/common_texture_traffic_light_05.inc.c"
};

UNUSED u8 common_texture_traffic_light_06[] = {
    #include "assets/unused_traffic_light/common_texture_traffic_light_06.inc.c"
};

UNUSED u8 common_texture_traffic_light_07[] = {
    #include "assets/unused_traffic_light/common_texture_traffic_light_07.inc.c"
};

UNUSED u8 common_texture_traffic_light_08[] = {
    #include "assets/unused_traffic_light/common_texture_traffic_light_08.inc.c"
};

UNUSED u8 common_texture_traffic_light_09[] = {
    #include "assets/unused_traffic_light/common_texture_traffic_light_09.inc.c"
};

UNUSED u8 common_texture_traffic_light_10[] = {
    #include "assets/unused_traffic_light/common_texture_traffic_light_10.inc.c"
};

// leaf
u8 common_texture_particle_leaf[] = {
    #include "textures/common/common_texture_particle_leaf.rgba16.inc.c"
};

// leaf
UNUSED u8 common_texture_unused_particle_leaf[] = {
    #include "textures/common/common_texture_unused_particle_leaf.rgba16.inc.c"
};


// Cloud smoke or fog?
u8 D_0D0293D8[] = {
    #include "textures/common/132B50_293D8.i4.inc.c"
};

// Smoke?
u8 D_0D029458[] = {
    #include "textures/common/132B50_29458.i8.inc.c"
};

// Uses 2A858 as tlut
u8 common_texture_bomb[][1024] = {
    {
        #include "assets/bomb/common_texture_bomb_1.inc.c"
    },
    {
        #include "assets/bomb/common_texture_bomb_2.inc.c"
    },
    {
        #include "assets/bomb/common_texture_bomb_3.inc.c"
    },
    {
        #include "assets/bomb/common_texture_bomb_4.inc.c"
    },
};

// Special tlut that uses 0xFFFF as a transparent tail instead of 0x0 or 0x07FE.
// tlut for 29858
u8 common_tlut_bomb[] = {
        #include "assets/bomb/common_tlut_bomb.inc.c"
};

u8 D_0D02AA58[] = {
    #include "textures/common/132B50_2AA58.rgba16.inc.c"
};

u8 common_texture_particle_spark[][1024] = {
    {
        #include "textures/common/common_texture_particle_spark_1.i8.inc.c"
    },
    {
        #include "textures/common/common_texture_particle_spark_2.i8.inc.c"
    },
    {
        #include "textures/common/common_texture_particle_spark_3.i8.inc.c"
    },
    {
        #include "textures/common/common_texture_particle_spark_4.i8.inc.c"
    },
};

u8 common_texture_particle_smoke[][1024] = {
    {
        #include "textures/common/common_texture_particle_smoke_1.i8.inc.c"
    },
    {
        #include "textures/common/common_texture_particle_smoke_2.i8.inc.c"
    },
    {
        #include "textures/common/common_texture_particle_smoke_3.i8.inc.c"
    },
    {
        #include "textures/common/common_texture_particle_smoke_4.i8.inc.c"
    },
};

// minimap cars
u8 common_texture_minimap_finish_line[] = {
    #include "assets/minimap_icons/common_texture_minimap_finish_line.inc.c"
};

u8 common_texture_minimap_kart_character[][128] = {
    { // Mario
        #include "assets/minimap_icons/common_texture_minimap_kart_mario.inc.c"
    },
    { // Luigi
        #include "assets/minimap_icons/common_texture_minimap_kart_luigi.inc.c"
    },
    { // Yoshi
        #include "assets/minimap_icons/common_texture_minimap_kart_yoshi.inc.c"
    },
    { // Toad
        #include "assets/minimap_icons/common_texture_minimap_kart_toad.inc.c"
    },
    { // Donkey Kong
        #include "assets/minimap_icons/common_texture_minimap_kart_donkey_kong.inc.c"
    },
    { // Wario
        #include "assets/minimap_icons/common_texture_minimap_kart_wario.inc.c"
    },
    { // Peach
        #include "assets/minimap_icons/common_texture_minimap_kart_peach.inc.c"
    },
    { // Bowser
        #include "assets/minimap_icons/common_texture_minimap_kart_bowser.inc.c"
    },
};

u8 common_texture_minimap_progress_dot[] = {
        #include "assets/minimap_icons/common_texture_minimap_progress_dot.inc.c"
};
