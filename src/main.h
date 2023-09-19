#ifndef MAIN_H
#define MAIN_H

#include "types.h"

// Message IDs
#define MESG_SP_COMPLETE 100
#define MESG_DP_COMPLETE 101
#define MESG_VI_VBLANK 102
#define MESG_START_GFX_SPTASK 103
#define MESG_NMI_REQUEST 104

#define MTX_HUD_POOL_SIZE 800

#ifdef AVOID_UB
#define MTX_HUD_POOL_SIZE_MAX MTX_HUD_POOL_SIZE
#else
#define MTX_HUD_POOL_SIZE_MAX MTX_HUD_POOL_SIZE - 50
#endif

#define MTX_OBJECT_POOL_SIZE 128

// TODO: Verify with proper documentation
// functions called by mtxShadow multiply by 8
// 8 CPU Players * 4 real players in coop
#define MTX_SHADOW_POOL_SIZE 8 * 4

// TODO: Verify with proper documentation
// functions called by mtxKart multiply by 8
// 8 CPU Players * 4 real players in coop
#define MTX_KART_POOL_SIZE 8 * 4

#define MTX_EFFECT_POOL_SIZE 660

// func_80095BD0 sets an OOB pool size max check (760)
#ifdef AVOID_UB
#define MTX_EFFECT_POOL_SIZE_MAX MTX_EFFECT_POOL_SIZE
#else
#define MTX_EFFECT_POOL_SIZE_MAX MTX_EFFECT_POOL_SIZE + 100
#endif

#define GFX_POOL_SIZE 0x1D4C

struct GfxPool {
    /* 0x00000 */ Mtx mtxScreen; // Matrix for skybox and startup logo
    /* 0x00040 */ Mtx mtxPersp[4]; // Matrix for perspective screen modes
    /* 0x00140 */ Mtx mtxOrtho; // Matrix for ortho hud screen modes
    /* 0x00180 */ Mtx mtxUnk; // Matrix unused
    /* 0x001C0 */ Mtx mtxLookAt[4]; // Matrix for lookat screen modes
    /* 0x002C0 */ Mtx mtxHud[MTX_HUD_POOL_SIZE]; // Matrix hud elements and 2D related effects
    /* 0x0CAC0 */ Mtx mtxObject[MTX_OBJECT_POOL_SIZE]; // Matrix course objects
    /* 0x0EAC0 */ Mtx mtxShadow[MTX_SHADOW_POOL_SIZE]; // Matrix shadow characters
    /* 0x0F2C0 */ Mtx mtxKart[MTX_KART_POOL_SIZE]; // Matrix kart characters
    /* 0x0FAC0 */ Mtx mtxEffect[MTX_EFFECT_POOL_SIZE]; // Matrix misc effects
    /* 0x19FC0 */ Mtx mtxArr[4]; // Matrix unused array
    /* 0x1A0C0 */ Gfx gfxPool[GFX_POOL_SIZE];
    /* 0x28B20 */ struct SPTask spTask;
}; // size = 0x28B70

struct UnkStruct_8015F584 {
    u16 unk0;
    u16 unk2;
};

extern struct UnkStruct_8015F584 D_8014F110[];

void create_thread(OSThread*, OSId, void (*entry)(void *), void*, void*, OSPri);
void main_func(void);
void thread1_idle(void*);
void setup_mesg_queues(void);
void start_sptask(s32);
void create_gfx_task_structure(void);
void init_controllers(void);
void update_controller(s32);
void read_controllers(void);
void func_80000BEC(void);
void dispatch_audio_sptask(struct SPTask*);
void exec_display_list(struct SPTask*);
void init_rcp(void);
void end_master_display_list(void);
void *clear_framebuffer(s32);
void rendering_init(void);
void config_gfx_pool(void);
void display_and_vsync(void);
void init_segment_ending_sequences(void);
void init_segment_racing(void);
void dma_copy(u8*, u8*, u32);
void setup_game_memory(void);
void game_init_clear_framebuffer(void);
void race_logic_loop(void);
void game_state_handler(void);
void interrupt_gfx_sptask(void);
void receive_new_tasks(void);
void set_vblank_handler(s32, struct VblankHandler*, OSMesgQueue*, OSMesg*);
void start_gfx_sptask(void);
void handle_vblank(void);
void handle_dp_complete(void);
void handle_sp_complete(void);
void thread3_video(void*);
void func_800025D4(void);
void func_80002600(void);
void func_8000262C(void);
void func_80002658(void);
void update_gamestate(void);
void thread5_game_loop(void*);
void thread4_audio(void*);

extern struct GfxPool *gGfxPool;
extern Gfx *gDisplayListHead;
extern struct Controller gControllers[];
extern struct Controller *gControllerOne;
extern struct Controller *gControllerTwo;
extern struct Controller *gControllerThree;
extern struct Controller *gControllerFour;
extern struct Controller *gControllerFive;
extern struct Controller *gControllerSix;
extern struct Controller *gControllerSeven;
extern struct Controller *gControllerEight;
extern s32 D_800DC568;
extern s32 D_800DC56C[];


extern Player gPlayers[];
extern Player *gPlayerOne;
extern Player *gPlayerTwo;
extern Player *gPlayerThree;
extern Player *gPlayerFour;
extern Player *gPlayerFive;
extern Player *gPlayerSix;
extern Player *gPlayerSeven;
extern Player *gPlayerEight;

extern Player *gPlayerOneCopy;
extern Player *gPlayerTwoCopy;
extern UNUSED Player *gPlayerThreeCopy;
extern UNUSED Player *gPlayerFourCopy;

extern s32 D_800FD850[3];
extern struct GfxPool gGfxPools[2];
extern struct GfxPool *gGfxPool;

extern s32 gfxPool_padding;
extern struct VblankHandler gGameVblankHandler;
extern struct VblankHandler sSoundVblankHandler;
extern OSMesgQueue gDmaMesgQueue, gGameVblankQueue, gGfxVblankQueue, unused_gMsgQueue, gIntrMesgQueue, gSPTaskMesgQueue;
extern OSMesgQueue sSoundMesgQueue;
extern OSMesg sSoundMesgBuf[1];
extern OSMesg gDmaMesgBuf[1], gGameMesgBuf;
extern OSMesg gGfxMesgBuf[1];
extern OSMesg gIntrMesgBuf[16], gSPTaskMesgBuf[16];
extern OSMesg gMainReceivedMesg;
extern OSIoMesg gDmaIoMesg;
extern OSMesgQueue gSIEventMesgQueue;
extern OSMesg gSIEventMesgBuf[3];

extern OSContStatus gControllerStatuses[4];

extern OSContPad gControllerPads[4];
extern u8 gControllerBits;

extern struct UnkStruct_8015F584 D_8014F110[1024];
extern u16 gNumActors;
extern u16 D_80150112;
extern s32 gTickSpeed;
extern f32 D_80150118;
extern u16 wasSoftReset;
extern u16 D_8015011E;

extern s32 D_80150120;
extern s32 gMenuSelectionFromQuit;
extern f32 D_80150130[4];

extern f32 D_80150148;
extern f32 D_8015014C;
extern f32 D_80150150;

extern struct D_80150158 gD_80150158[16];
extern uintptr_t gSegmentTable[16];
extern Gfx *gDisplayListHead;
extern struct SPTask *gGfxSPTask;
extern s32 D_801502A0;
extern s32 D_801502A4;
extern u16 *gPhysicalFramebuffers[3];
extern u32 D_801502B4;
extern UNUSED u32 D_801502B8;
extern UNUSED u32 D_801502BC;
extern Mat4 D_801502C0;

extern s32 padding[2048];

extern u16 D_80152300[4];
extern u16 D_80152308;

extern OSThread gIdleThread;
extern ALIGNED8 u8 gIdleThreadStack[STACKSIZE]; // Based on sm64 and padding between bss symbols.
extern OSThread gVideoThread;
extern ALIGNED8 u8 gVideoThreadStack[STACKSIZE];
extern OSThread gGameLoopThread;
extern ALIGNED8 u8 gGameLoopThreadStack[STACKSIZE];
extern OSThread gAudioThread;
extern ALIGNED8 u8 gAudioThreadStack[STACKSIZE];

extern u8 gGfxSPTaskYieldBuffer[4352];
extern u32 gGfxSPTaskStack[256];
extern OSMesg gPIMesgBuf[32];
extern OSMesgQueue gPIMesgQueue;

extern s32 gGamestate;
extern u16 D_800DC510;
extern u16 D_800DC514;
extern u16 D_800DC518;
extern u16 gDemoMode;
extern u16 gEnableDebugMode;
extern s32 gGamestateNext;
extern s32 gActiveScreenMode;
extern s32 gScreenModeSelection;
extern s32 gPlayerCountSelection1;

extern s32 gModeSelection;
extern s32 D_800DC540;
extern s32 D_800DC544;
extern s32 gCCSelection;
extern s32 gGlobalTimer;
// Framebuffer rendering values (max 3)
extern u16 sRenderedFramebuffer;
extern u16 sRenderingFramebuffer;
extern s32 D_800DC568;
extern s32 D_800DC56C[8];
extern s16 sNumVBlanks;
extern f32 gVBlankTimer;
extern f32 gCourseTimer;

extern u16 D_80152308;

extern s32 gModeSelection;

extern u16 *gPhysicalFramebuffers[];
extern OSIoMesg gDmaIoMesg;
extern OSMesg gMainReceivedMesg;
extern OSMesgQueue gDmaMesgQueue;
extern s32 gGamestateNext;
extern s32 gActiveScreenMode;
extern f32 gVBlankTimer;
extern s32 gScreenModeSelection;

extern OSContStatus gControllerStatuses[];
extern struct Controller *gControllerFive;
extern u8 gControllerBits;

extern u64 rspbootTextStart[], rspbootTextEnd[];
extern u64 gspF3DEXTextStart[], gspF3DEXTextEnd[];
extern u64 gspF3DLXTextStart[], gspF3DLXTextEnd[];
extern u64 gspF3DEXDataStart[];
extern u64 gspF3DLXDataStart[];

extern u64 gGfxSPTaskOutputBuffer[];
extern u32 gGfxSPTaskOutputBufferSize;

extern u8 _data_segment2SegmentRomStart[];
extern u8 _data_segment2SegmentRomEnd[];
extern u8 _common_texturesSegmentRomStart[];
extern u8 _common_texturesSegmentRomEnd[];
extern u8 _data_802BA370SegmentRomStart[];
extern u32 *D_801978D0; // Segment? Keeps track of segmented addresses?

extern s16 gCurrentlyLoadedCourseId;
extern s16 gCurrentCourseId;

extern s16 gMatrixEffectCount;
extern u16 gIsGamePaused; // 1 if the game is paused and 0 if the game is not paused
extern u16 gIsInQuitToMenuTransition;

extern struct UnkStruct_800DC5EC *D_800DC5EC;

extern u16 D_800DC5B0;
extern s32 gPlayerWinningIndex;

extern u16 D_80152300[];

#endif
