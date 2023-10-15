#include <ultra64.h>
#include <macros.h>
#include <PR/gbi.h>

#include "code_80057C60.h"
#include "main.h"
#include "actors.h"
#include "code_800029B0.h"
#include "racing/memory.h"
#include <variables.h>
#include <config.h>
#include <defines.h>
#include "math_util.h"
#include "math_util_2.h"
#include "code_80005FD0.h"
#include "code_8001F980.h"
#include "hud_renderer.h"
#include "code_80071F00.h"
#include "code_80086E70.h"
#include "code_8008C1D0.h"
#include "skybox_and_splitscreen.h"
#include "common_textures.h"
#include "audio/external.h"
#include "objects.h"
#include "bomb_kart.h"
#include "menus.h"


// WARNING: this macro is undef'd at the end of this file
#define MAKE_RGB(r,g,b) (((r) << 0x10) | ((g) << 0x08) | (b << 0x00))

s16 D_800E4730[] = {
    0x00ff, 0x0000, 0x0000,
    0x00ff, 0x00ff, 0x0000,
	0x0000, 0x00ff, 0x0000,
	0x0032, 0x00ff, 0x00ff,
	0x0000, 0x0000, 0x00ff,
	0x00ff, 0x0032, 0x00ff,
	0x00ff, 0x0028, 0x0028,
	0x0032, 0x00ff, 0x0064,
	0x0082, 0x000f, 0x00ff,
	0x0000, 0x0000, 0x0000,
    // I'm not convinced these aren't just padding, but stuff doesn't match
    // without them :/
    0x0000
};

u8 **D_800E4770[] = {
	&D_8018D420, &D_8018D424, &D_8018D428, &D_8018D428,
	&D_8018D42C, &D_8018D42C, &D_8018D430, &D_8018D430,
	&D_8018D434, &D_8018D434, &D_8018D434, &D_8018D434,
};

u8 **D_800E47A0[] = {
	&D_8018D438, &D_8018D43C, &D_8018D440, &D_8018D444,
	&D_8018D448, &D_8018D44C, &D_8018D450, &D_8018D454,
	&D_8018D458, &D_8018D45C, &D_8018D460, &D_8018D464,
	&D_8018D468, &D_8018D46C, &D_8018D470,
};

s32 D_800E47DC[] = {
    MAKE_RGB(0xFB, 0xFF, 0xFB),
    MAKE_RGB(0xA0, 0x60, 0x11),
    MAKE_RGB(0xE0, 0xC0, 0x90),
    MAKE_RGB(0xD0, 0xB0, 0x80),
    MAKE_RGB(0x90, 0x70, 0x40),
    MAKE_RGB(0xC0, 0x70, 0x10),
    MAKE_RGB(0xD0, 0xF0, 0xFF),
    MAKE_RGB(0xE0, 0x90, 0x30),
    MAKE_RGB(0xC0, 0x90, 0x30),
    MAKE_RGB(0x60, 0x40, 0x20),
    MAKE_RGB(0xF0, 0xD0, 0xB0),
    MAKE_RGB(0xA0, 0x80, 0x30),
};

s32 D_800E480C[] = {
    MAKE_RGB(0xB0, 0xB0, 0xB0),
    MAKE_RGB(0x80, 0x40, 0x11),
    MAKE_RGB(0xB0, 0x80, 0x50),
    MAKE_RGB(0xA0, 0x70, 0x40),
    MAKE_RGB(0x60, 0x30, 0x11),
    MAKE_RGB(0x80, 0x40, 0x10),
    MAKE_RGB(0x70, 0x90, 0xA0),
    MAKE_RGB(0xA0, 0x60, 0x30),
    MAKE_RGB(0xA0, 0x70, 0x10),
    MAKE_RGB(0x30, 0x10, 0x11),
    MAKE_RGB(0xB0, 0xA0, 0x80),
    MAKE_RGB(0x80, 0x60, 0x10),
};

// UI Code?
void func_80057C60(void) {
    gSPViewport(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(D_802B8880));
    gDPSetScissor(gDisplayListHead++, G_SC_NON_INTERLACE, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(D_80183D60), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
}

void func_80057CE4(void) {
    switch (D_8018D21C) {
    case 0:
        func_802A3730(D_800DC5EC);
        break;
    case 1:
        func_802A3730(D_800DC5EC);
        break;
    case 2:
        func_802A3730(D_800DC5F0);
        break;
    case 3:
        func_802A3730(D_800DC5EC);
        break;
    case 4:
        func_802A3730(D_800DC5F0);
        break;
    case 8:
        func_802A3730(D_800DC5EC);
        break;
    case 9:
        func_802A3730(D_800DC5F0);
        break;
    case 10:
        func_802A3730(D_800DC5F4);
        break;
    case 11:
        func_802A3730(D_800DC5F8);
        break;
    }
}

void func_80057DD0(void) {
    if (D_801657B2 != 0) {
        func_8004C024(0xF, 0xB, 0x122, 0, 0xFF, 0, 0xFF);
        func_8004C148(0x131, 0xB, 0xDA, 0, 0xFF, 0, 0xFF);
        func_8004C024(0xF, 0xE5, 0x122, 0, 0xFF, 0, 0xFF);
        func_8004C148(0xF, 0xB, 0xDA, 0, 0xFF, 0, 0xFF);
        func_8004C024(0x16, 0x10, 0x114, 0xFF, 0, 0, 0xFF);
        func_8004C148(0x12A, 0x10, 0xD0, 0xFF, 0, 0, 0xFF);
        func_8004C024(0x16, 0xE0, 0x114, 0xFF, 0, 0, 0xFF);
        func_8004C148(0x16, 0x10, 0xD0, 0xFF, 0, 0, 0xFF);
        func_8004C024(0x18, 0x15, 0x110, 0, 0, 0xFF, 0xFF);
        func_8004C148(0x128, 0x15, 0xC4, 0, 0, 0xFF, 0xFF);
        func_8004C024(0x18, 0xDB, 0x110, 0, 0, 0xFF, 0xFF);
        func_8004C148(0x18, 0x15, 0xC4, 0, 0, 0xFF, 0xFF);
    }
}

void func_80057FC4(u32 arg0) {
    UNUSED Gfx *temp_v1;


    if ((D_801657B0 != 0)) {
        return;
    }
    gSPDisplayList(gDisplayListHead++, &D_0D0076F8);
    func_80041EF4();

    if ((D_801657C8 != 0)){
        return;
    }

    switch (arg0) {
        case 0:
            func_80051EBC();
            break;
        case 1:
            func_80051EF8();
            break;
        case 2:
            func_80051F9C();
            break;
        case 3:
            func_80052044();
            break;
        case 4:
            func_80052080();
            break;
    }

}

void func_80058090(u32 arg0) {
    UNUSED Gfx *temp_v1;

    if (D_801657B0 != 0) {
        return;
    }

    gSPDisplayList(gDisplayListHead++, &D_0D0076F8);

    if (D_8018D22C != 0) {
        return;
    }


    switch (arg0) {
        case 0:
            func_800581C8();
            break;
        case 1:
            func_800581C8();
            break;
        case 2:
            func_800582CC();
            break;
        case 3:
            func_800581C8();
            break;
        case 4:
            func_800582CC();
            break;
        case 5:
            func_800581C8();
            break;
        case 6:
            func_800582CC();
            break;
        case 7:
            func_80058394();
            break;
        case 8:
            func_800581C8();
            break;
        case 9:
            func_800582CC();
            break;
        case 10:
            func_80058394();
            break;
        case 11:
            func_8005845C();
            break;
    }
}

void func_800581C8(void) {

    gDPSetTexturePersp(gDisplayListHead++, G_TP_PERSP);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&gGfxPool->mtxPersp[0]), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&gGfxPool->mtxLookAt[0]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_PROJECTION);

    func_8001C3C4(0);
    if (gGamestate == ENDING_SEQUENCE) {
        func_80055F48(0);
        func_80056160(0);
        func_8005217C(0);
        func_80054BE8(0);
        return;
    }
    if (!gDemoMode) {
        func_800532A4(0);
    }
    func_800588F4(0);
}

void func_800582CC(void) {

    gDPSetTexturePersp(gDisplayListHead++, G_TP_PERSP);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&gGfxPool->mtxPersp[1]), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&gGfxPool->mtxLookAt[1]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_PROJECTION);
    func_8001C3C4(1);
    if (!gDemoMode) {
        func_800532A4(1);
    }
    func_800588F4(1);
}

void func_80058394(void) {
    gDPSetTexturePersp(gDisplayListHead++, G_TP_PERSP);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&gGfxPool->mtxPersp[2]), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&gGfxPool->mtxLookAt[2]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_PROJECTION);
    func_8001C3C4(2);
    if (!gDemoMode) {
        func_800532A4(2);
    }
    func_800588F4(2);
}

void func_8005845C(void) {

    gDPSetTexturePersp(gDisplayListHead++, G_TP_PERSP);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&gGfxPool->mtxPersp[3]), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&gGfxPool->mtxLookAt[3]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_PROJECTION);
    func_8001C3C4(3);
    if ((!gDemoMode) && (gPlayerCountSelection1 == 4)) {
        func_800532A4(3);
    }
    func_800588F4(3);
}

void func_80058538(u32 arg0) {
    UNUSED Gfx *temp_v1;

    if (D_801657B0 != 0) {
        return;
    }

    gSPDisplayList(gDisplayListHead++, &D_0D0076F8);

    if (D_8018D22C != 0) {
        return;
    }
    switch (arg0) {
        case 0:
            func_80058640();
            break;
        case 1:
            func_80058640();
            break;
        case 2:
            func_800586FC();
            break;
        case 3:
            func_80058640();
            break;
        case 4:
            func_800586FC();
            break;
        case 8:
            func_80058640();
            break;
        case 9:
            func_800586FC();
            break;
        case 10:
            func_800587A4();
            break;
        case 11:
            func_8005884C();
            break;
    }
}

void func_80058640(void) {
    gDPSetTexturePersp(gDisplayListHead++, G_TP_PERSP);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&gGfxPool->mtxPersp[0]), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&gGfxPool->mtxLookAt[0]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_PROJECTION);
    if (gGamestate != ENDING_SEQUENCE) {
        func_80058B58(0);
    }
}

void func_800586FC(void) {
    gDPSetTexturePersp(gDisplayListHead++, G_TP_PERSP);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&gGfxPool->mtxPersp[1]), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&gGfxPool->mtxLookAt[1]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_PROJECTION);
    func_80058B58(1);
}

void func_800587A4(void) {
    gDPSetTexturePersp(gDisplayListHead++, G_TP_PERSP);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&gGfxPool->mtxPersp[2]), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&gGfxPool->mtxLookAt[2]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_PROJECTION);
    func_80058B58(2);
}

void func_8005884C(void) {
    gDPSetTexturePersp(gDisplayListHead++, G_TP_PERSP);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&gGfxPool->mtxPersp[3]), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&gGfxPool->mtxLookAt[3]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_PROJECTION);
    func_80058B58(3);
}

void func_800588F4(s32 arg0) {

    switch (gCurrentCourseId) {
        case COURSE_MARIO_RACEWAY:
            break;
        case COURSE_CHOCO_MOUNTAIN:
            break;
        case COURSE_BOWSER_CASTLE:
            func_80053870(arg0);
            func_80054664(arg0);
            break;
        case COURSE_BANSHEE_BOARDWALK:
            if (gGamestate != CREDITS_SEQUENCE) {
                func_800527D8(arg0);
                func_80052590(arg0);
                func_8005217C(arg0);
                func_800524B4(arg0);
            }
            break;
        case COURSE_YOSHI_VALLEY:
            func_80055228(arg0);
            if (gGamestate != CREDITS_SEQUENCE) {
                func_8005568C(arg0);
            }
            break;
        case COURSE_FRAPPE_SNOWLAND:
            if (gGamestate != CREDITS_SEQUENCE) {
                func_8005327C(arg0);
            }
            break;
        case COURSE_KOOPA_BEACH:
            if (gGamestate != CREDITS_SEQUENCE) {
                func_80055528(arg0);
            }
            if (gGamestate != CREDITS_SEQUENCE) {

                if ((gPlayerCount == 1) || (gPlayerCount == 2)) {
                    func_80055380(arg0);
                }
            } else {
                func_80055380(arg0);
            }
            break;
        case COURSE_ROYAL_RACEWAY:
            break;
        case COURSE_LUIGI_RACEWAY:
            if (D_80165898 != 0) {
                func_80055E68(arg0);
            }
            break;
        case COURSE_MOO_MOO_FARM:
            if (gGamestate != CREDITS_SEQUENCE) {
                func_800550A4(arg0);
            }
            break;
        case COURSE_TOADS_TURNPIKE:
            break;
        case COURSE_KALAMARI_DESERT:
            func_800541BC(arg0);
            break;
        case COURSE_SHERBET_LAND:
            if (gGamestate != CREDITS_SEQUENCE) {
                func_80052E30(arg0);
            }
            func_8005592C(arg0);
            break;
        case COURSE_RAINBOW_ROAD:
            if (gGamestate != CREDITS_SEQUENCE) {
                func_80056188(arg0);
                func_80055C38(arg0);
            }
            break;
        case COURSE_WARIO_STADIUM:
            break;
        case COURSE_BLOCK_FORT:
            break;
        case COURSE_SKYSCRAPER:
            break;
        case COURSE_DOUBLE_DECK:
            break;
        case COURSE_DK_JUNGLE:
            if (gGamestate != CREDITS_SEQUENCE) {
                func_80054414(arg0);
            }
            break;
    }

    func_80054938(arg0);
    func_80051638(arg0);

    if (D_80165730 != 0) {
        func_80053E6C(arg0);
    }
    if (gModeSelection == BATTLE) {
        func_80056AC0(arg0);
    }
}

void func_80058B58(s32 arg0) {
    switch(gCurrentCourseId) {
        case COURSE_FRAPPE_SNOWLAND:
            if (gGamestate != 9) {
                if ((D_8015F894 == 0) && (gPlayerCountSelection1 == 1)) {
                    func_800517C8();
                }
            } else {
                func_800517C8();
            }
            break;
        case COURSE_SHERBET_LAND:
            func_80052C60(arg0);
            break;
    }
}

void func_80058BF4(void) {
    gSPDisplayList(gDisplayListHead++, &D_0D0076F8);
}

void func_80058C20(u32 arg0) {

    D_8018D21C = arg0;
    gSPDisplayList(gDisplayListHead++, &D_0D0076F8);

    if (D_8018D22C == 0) {
        switch (arg0) {
            case 0:
                func_80058F48();
                break;
            case 1:
                if (!gDemoMode) {
                    func_80059358();
                    break;
                }

                break;
            case 2:
                if (!gDemoMode) {
                    func_800593F0();
                    break;
                }

                break;
            case 3:
                if (!gDemoMode) {
                    func_800594F0();
                    break;
                }

                break;
            case 4:
                if (!gDemoMode) {
                    func_80059528();
                    break;
                }

                break;
            case 8:
                if (!gDemoMode) {
                    func_800596A8();
                    break;
                }

                break;
            case 9:
                if (!gDemoMode) {
                    func_80059710();
                    break;
                }

                break;
            case 10:
                if (!gDemoMode) {
                    func_80059750();
                    break;
                }

                break;
            case 11:
                if ((!gDemoMode) && (gPlayerCountSelection1 == 4)) {
                    func_800597B8();
                }
                break;
        }
    }
}

void func_80058DB4(u32 arg0) {

    D_8018D21C = arg0;
    gSPDisplayList(gDisplayListHead++, &D_0D0076F8);
    if (D_8018D22C == 0) {
        switch (arg0) {
        case 0:
            func_80058F78();
            break;
        case 1:
            if (!gDemoMode) {
                func_80059360();
                break;
            }

            break;
        case 2:
            if (!gDemoMode) {
                func_800593F8();
                break;
            }

            break;
        case 3:
            if (!gDemoMode) {
                func_800594F8();
                break;
            }

            break;
        case 4:
            if (!gDemoMode) {
                func_80059530();
                break;
            }

            break;
        case 8:
            if (!gDemoMode) {
                func_800596D8();
                break;
            }

            break;
        case 9:
            if (!gDemoMode) {
                func_80059718();
                break;
            }

            break;
        case 10:
            if (!gDemoMode) {
                func_80059780();
                break;
            }

            break;
        case 11:
            if ((!gDemoMode) && (gPlayerCountSelection1 == 4)) {
                func_800597E8();
            }
            break;
        }
    }
}

void func_80058F48(void) {
    if (D_801657B0 == 0) {
        func_80041EF4();
    }
}

void func_80058F78(void) {
    if (D_801657B0 == 0) {
        func_80041EF4();
        if ((!gDemoMode) && (gIsHUDVisible != 0) && (D_801657D8 == 0)) {
            func_8004E638(0);
            if (D_801657E4 != 2) {
                func_8004FA78(0);
                func_8004E78C(0);
                func_8004EB38(0);
                if (D_801657E6 != FALSE) {
                    func_8004ED40(0);
                }
            }
        }
    }
}

void func_80059024(void) {

}

void func_8005902C(void) {

    if (D_8018D2AC != 0) {
        switch(gPlayerCountSelection1) {
            case 2:
                func_8004EB30(0);
                func_8004EB30(1);
                break;
            case 3:
                func_8004EB30(0);
                func_8004EB30(1);
                func_8004EB30(2);
                break;
            case 4:
                func_8004EB30(0);
                func_8004EB30(1);
                func_8004EB30(2);
                func_8004EB30(3);
                break;
        }
    }
}

void func_800590D4(void) {
    if (D_8018D2A4 != 0) {
        if (gModeSelection != BATTLE) {
            switch (gPlayerCountSelection1) {
                case 1:
                    if (gModeSelection != TIME_TRIALS) {
                        func_8004E800(0);
                        break;
                    }
                    break;
                case 2:
                    func_8004E800(0);
                    func_8004E800(1);
                    break;
                case 3:
                    func_8004E998(0);
                    func_8004E998(1);
                    func_8004E998(2);
                    break;
                case 4:
                    func_8004E998(0);
                    func_8004E998(1);
                    func_8004E998(2);
                    func_8004E998(3);
                    break;
            }
        }
    }
}

void func_800591B4(void) {

    if ((D_801657B0 == 0) && (D_800DC5B8 != 0)) {
        func_80057C60();
        gSPDisplayList(gDisplayListHead++, &D_0D0076F8);

        if (gIsHUDVisible != 0) {
            if (D_801657D8 == 0) {
                if (D_801657F0 != FALSE) {
                    func_800514BC();
                }
                if ((!gDemoMode) && (D_801657E8 != FALSE)) {
                    if (D_80165800[0] != 0) {
                        func_8004EE54(0);
                        if (gModeSelection != BATTLE) {
                            func_8004F020(0);
                        }
                        func_8004F3E4(0);
                    }
                    if ((gScreenModeSelection == SCREEN_MODE_2P_SPLITSCREEN_HORIZONTAL) && (D_80165801 != 0)) {
                        func_8004EE54(1);
                        if (gModeSelection != BATTLE) {
                            func_8004F020(1);
                        }
                        func_8004F3E4(1);
                    }
                }
            }
            if ((D_801657E4 != 2) && (gModeSelection == GRAND_PRIX) && (D_8018D2BC != 0)) {
                func_80050320();
            }
            func_800590D4();
        }
        func_8005902C();
        func_80057DD0();
        func_80057CE4();
    }
}

void func_80059358(void) {

}

void func_80059360(void) {
    if (D_801657B0 == 0) {
        func_8004FA78(0);
        if (D_8018CA70[0].lapCount != 3) {
            func_8004CB60(D_8018CA70[0].lapX, D_8018CA70[0].lapY, D_0D00A958);
            func_8004FC78(D_8018CA70[0].lapX + 0xC, D_8018CA70[0].lapY - 4, D_8018CA70[0].alsoLapCount);
            func_8004E638(0);
        }
    }
}

void func_800593F0(void) {

}

void func_800593F8(void) {
    if (D_801657B0 == 0) {
        func_8004FA78(1);
        if (D_8018CA70[1].lapCount != 3) {
            func_8004CB60(D_8018CA70[1].lapX, D_8018CA70[1].lapY, D_0D00A958);
            func_8004FC78(D_8018CA70[1].lapX + 0xC, D_8018CA70[1].lapY - 4, D_8018CA70[1].alsoLapCount);
            func_8004E638(1);
        }
    }
}

void func_80059488(s32 arg0) {
    if ((gModeSelection != BATTLE) && (D_80165800[arg0] == 0) && (gIsHUDVisible != 0)) {
        func_8004FA78(arg0);
        func_8004E78C(arg0);
    }
    func_8004E638(arg0);
}

void func_800594F0(void) {

}

void func_800594F8(void) {
    if (D_801657B0 == 0) {
        func_80059488(0);
    }
}

void func_80059528(void) {

}

void func_80059530(void) {
    if (D_801657B0 == 0) {
        func_80059488(1);
    }
}

extern s32 D_80165608;
extern s8 D_801657F8;

void func_80059560(s32 arg0) {
    if (gModeSelection != BATTLE) {
        if (D_801657F8 && gIsHUDVisible) {
            func_8004CB60(D_8018CA70[arg0].lapX, D_8018CA70[arg0].lapY, D_0D00A958);
            func_8004FC78(D_8018CA70[arg0].lapX - 12, D_8018CA70[arg0].lapY + 4, D_8018CA70[arg0].alsoLapCount);
        }
        if (D_801657E4 == 2) {
            if (D_8018CA70[arg0].unk_74 && D_80165608) {
                func_80047910(D_8018CA70[arg0].unk_6C, D_8018CA70[arg0].unk_6E, 0, 1.0f, gTLUTPortraitBombKartAndQuestionMark, gTexturePortraitBombKart, D_0D005AE0, 0x20, 0x20, 0x20, 0x20);
            }
        }
    }
    func_8004E6C4(arg0);
}

void func_800596A8(void) {
    if (D_801657B0 == 0) {
        func_80041EF4();
    }
}

void func_800596D8(void) {
    if (D_801657B0 == 0) {
        func_80041EF4();
        func_80059560(0);
    }
}

void func_80059710(void) {

}

void func_80059718(void) {
    if (D_801657B0 == 0) {
        func_80041EF4();
        func_80059560(1);
    }
}

void func_80059750(void) {
    if (D_801657B0 == 0) {
        func_80041EF4();
    }
}

void func_80059780(void) {
    if (D_801657B0 == 0) {
        func_80041EF4();
        func_80059560(2);
    }
}

void func_800597B8(void) {
    if (D_801657B0 == 0) {
        func_80041EF4();
    }
}

void func_800597E8(void) {
    if (D_801657B0 == 0) {
        func_80041EF4();
        func_80059560(3);
    }
}

void func_80059820(s32 playerId) {
    struct_8018CA70_entry *temp_v0;

    D_8018CF1C = &gPlayerOne[playerId];
    D_8018CF14 = &camera1[playerId];
    temp_v0 = &D_8018CA70[playerId];
    temp_v0->posXInt = (s32) D_8018CF1C->pos[0];
    temp_v0->posYInt = (s32) D_8018CF1C->pos[1];
    temp_v0->posZInt = (s32) D_8018CF1C->pos[2];
}

void randomize_seed_from_controller(s32 arg0) {
    struct Controller *controller = &gControllerOne[arg0];

    if ((controller->button & A_BUTTON) != 0) {
        gControllerRandom++;
    }
    if ((controller->button & B_BUTTON) != 0) {
        gControllerRandom++;
    }
    if ((controller->button & R_TRIG) != 0) {
        gControllerRandom++;
    }
}

void func_8005994C(void) {
    D_8018D214 = TRUE;
}

extern s8 D_80165890;

void func_8005995C(void) {
    s32 i;
    Player *player = gPlayerOne;
    for (i = 0; i != 4; i++) {
        if ((D_80165890 != 0) && (player->type & PLAYER_INVISIBLE_OR_BOMB)) {
            player->currentItemCopy = ITEM_MUSHROOM;
            
            D_8018CA70[i].unk_75 = 2;
        }
        if ((player->type & PLAYER_INVISIBLE_OR_BOMB) && (player->currentItemCopy == ITEM_NONE)) {
            if (D_8018CA70[i].unk_75) {
                player->currentItemCopy = ITEM_MUSHROOM;
                --D_8018CA70[i].unk_75;
            }
        }
        ++player;
    }
    D_80165890 = 0;
}

void func_80059A88(s32 playerId) {
    func_80059820(playerId);
    if (!gDemoMode) {
        func_8007A948(playerId);
        func_8007BB9C(playerId);
    }
}

extern s32 D_80165678;
extern s32 gRaceFrameCounter;

void func_80059AC8(void) {
    s32 i;

    if (gIsGamePaused == 0) {
        func_8008C1D8(&D_80165678);
        gRaceFrameCounter++;
        for (i = 0; i != 8; i++) {
            D_8018CF68[i] = func_8008A890(&camera1[i]);
            func_800892E0(i);
        }
        switch (gScreenModeSelection) {
        case SCREEN_MODE_1P:
            if (gGamestate != 9) {
                func_80059A88(0);
                if (gModeSelection == TIME_TRIALS) {
                    func_8005995C();
                }
            } else {
                func_80059820(0);
            }
            break;
        case SCREEN_MODE_2P_SPLITSCREEN_VERTICAL:
            func_80059A88(0);
            func_80059A88(1);
            break;
        case SCREEN_MODE_2P_SPLITSCREEN_HORIZONTAL:
            func_80059A88(0);
            func_80059A88(1);
            break;
        case SCREEN_MODE_3P_4P_SPLITSCREEN:
            func_80059A88(0);
            func_80059A88(1);
            func_80059A88(2);
            func_80059A88(3);
            break;
        }
        func_8005A71C();
    }
}

void func_80059C50(void) {
    s32 someIndex;
    s32 playerId;

    func_8005A3C0();
    for (someIndex = 0; someIndex < 8; someIndex++) {
        playerId = gGPCurrentRacePlayerIdByRank[someIndex];
        // I hate this dumb pointer access here
        gGPCurrentRaceCharacterIdByRank[someIndex] = (gPlayerOne + playerId)->characterId;
    }
    for (someIndex = 0; someIndex < 8; someIndex++) {
        D_8018CF98[someIndex] = gGPCurrentRaceRankByPlayerId[someIndex];
    }
}

void func_80059D00(void) {
    
    func_8005A99C();
    func_8005A3C0();
    func_8005A380();

    if (D_801657AE == 0) {
        switch (gScreenModeSelection) {  
        case SCREEN_MODE_1P:
            randomize_seed_from_controller(0);
            if (D_8018D214 == FALSE) {
                func_80059820(0);
                func_8005B914();
                if (!gDemoMode) {
                    func_8007AA44(0);
                }
                func_80078C70(0);
                if (D_8018CAE0 == 0) {
                    func_8005C360((gPlayerOneCopy->unk_094 / 18.0f) * 216.0f);
                }
                func_8005D0FC(0);
            } else {
                func_80059820(0);
                func_80078C70(1);
                func_80059820(1);
                func_80078C70(2);
            }
            func_8005A74C();
            break;
        case SCREEN_MODE_2P_SPLITSCREEN_VERTICAL:
            randomize_seed_from_controller(0);
            randomize_seed_from_controller(1);
            func_80059820(0);
            func_8005D0FC(0);
            if (!gDemoMode) {
                func_8007AA44(0);
            }
            func_80078C70(1);
            func_8005D1F4(0);
            func_80059820(1);
            func_8005D0FC(1);
            if (!gDemoMode) {
                func_8007AA44(1);
            }
            func_80078C70(2);
            func_8005D1F4(1);
            func_8005A74C();
            break;
        case SCREEN_MODE_2P_SPLITSCREEN_HORIZONTAL:
            randomize_seed_from_controller(0);
            randomize_seed_from_controller(1);
            func_80059820(0);
            func_8005D0FC(0);
            if (!gDemoMode) {
                func_8007AA44(0);
            }
            func_80078C70(3);
            func_8005D1F4(0);
            func_80059820(1);
            func_8005D0FC(1);
            if (!gDemoMode) {
                func_8007AA44(1);
            }
            func_80078C70(4);
            func_8005D1F4(1);
            func_8005A74C();
            break;
        case SCREEN_MODE_3P_4P_SPLITSCREEN:
            randomize_seed_from_controller(0);
            randomize_seed_from_controller(1);
            randomize_seed_from_controller(2);
            randomize_seed_from_controller(3);
            func_80059820(0);
            func_8005D0FC(0);
            if (!gDemoMode) {
                func_8007AA44(0);
            }
            func_8005D1F4(0);
            func_80059820(1);
            func_8005D0FC(1);
            if (!gDemoMode) {
                func_8007AA44(1);
            }
            func_8005D1F4(1);
            func_80059820(2);
            func_8005D0FC(2);
            if (!gDemoMode) {
                func_8007AA44(2);
            }
            func_8005D1F4(2);
            if (gPlayerCountSelection1 == 4) {
                func_80059820(3);
                func_8005D0FC(3);
                if ((!gDemoMode) && (gPlayerCountSelection1 == 4)) {
                    func_8007AA44(3);
                }
                func_8005D1F4(3);
            }
            func_8005A74C();
            break;
        }
        func_800744CC();
    }
}

void func_8005A070(void) {
    func_8008C1D8(&D_80165678);
    gMatrixHudCount = 0;
    D_801655C0 = 0;
    func_80041D34();
    if (gIsGamePaused == 0) {
        func_8005C728();
        if (gGamestate == ENDING_SEQUENCE) {
            func_80086604();
            func_80086D80();
            func_8007C2F8(1);
            func_80077640();
        } else if (gGamestate == CREDITS_SEQUENCE) {
            func_80059820(0);
            func_80078C70(0);
            func_8005A74C();
        } else {
            func_80059D00();
        }
    }
    func_8008C204();
    func_8008C1E0(&D_80165678, (s32)&D_801655F0);
}

void func_8005A14C(s32 playerId) {
    s32 objectIndex;
    s32 lapCount;
    Player *player;
    s32 stackPadding;

    player = &gPlayerOne[playerId];
    objectIndex = D_8018CE10[playerId].objectIndex;
    lapCount = gLapCountByPlayerId[playerId];
    if (player->type & PLAYER_EXISTS) {
        if (player->effects & 0x204C0) {
            gObjectList[objectIndex].unk_0BE[2] += 0x1000;
        } else {
            if (gObjectList[objectIndex].unk_0BE[2] != 0) {
                gObjectList[objectIndex].unk_0BE[2] += 0x1000;
            }
        }
        if (player->effects & LIGHTNING_EFFECT) {
            f32_step_towards(&gObjectList[objectIndex].sizeScaling, 0.3f, 0.02f);
        } else {
            f32_step_towards(&gObjectList[objectIndex].sizeScaling, 0.6f, 0.02f);
        }
        if (player->effects & 0x04000000) {
            u16_step_up_towards(&gObjectList[objectIndex].unk_0BE[0], 0x0C00U, 0x0100U);
        } else {
            u16_step_down_towards(&gObjectList[objectIndex].unk_0BE[0], 0, 0x00000100);
        }
        if (player->effects & 0x03000000) {
            func_80087D24(objectIndex, 6.0f, 1.5f, 0.0f);
        } else {
            f32_step_towards(&gObjectList[objectIndex].unk_028[1], 0.0f, 1.0f);
        }
        if ((player->type & PLAYER_INVISIBLE_OR_BOMB) || (player->effects & 0x80000000)) {
            gObjectList[objectIndex].unk_0A0 = 0x0050;
        } else {
            gObjectList[objectIndex].unk_0A0 = 0x00FF;
        }
        if (lapCount >= 3) {
            gObjectList[objectIndex].unk_0BE[2] = 0;
            gObjectList[objectIndex].unk_0BE[1] = 0;
            gObjectList[objectIndex].unk_0BE[0] = 0;
            gObjectList[objectIndex].unk_028[2] = 0.0f;
            gObjectList[objectIndex].unk_028[1] = 0.0f;
            gObjectList[objectIndex].unk_028[0] = 0.0f;
            gObjectList[objectIndex].sizeScaling = 0.6f;
            gObjectList[objectIndex].unk_0A0 = 0x00FF;
        }
    }
}

void func_8005A380(void) {
    s32 temp_s0;
    for (temp_s0 = 0; temp_s0 < 8; ++temp_s0) {
        func_8005A14C(temp_s0);
    }
}

extern s8 D_801657F8;

void func_8006F824(s32);

void func_8005A3C0(void) {
    bool b = FALSE;
    if ((gGamestate != ENDING_SEQUENCE) && (gGamestate != CREDITS_SEQUENCE) && !D_8018D204) {
        switch (gPlayerCountSelection1) {
        case 1:
            if (gControllerOne->buttonPressed & R_CBUTTONS) {
                if (++D_801657E4 >= 3) {
                    D_801657E4 = 0;
                }
                if (D_801657E4 == 2) {
                    D_801657E8 = FALSE;
                    D_801657E6 = FALSE;
                    D_801657F0 = TRUE;
                } else if (D_801657E4 == 1) {
                    D_801657E8 = FALSE;
                    D_801657E6 = TRUE;
                    D_801657F0 = FALSE;
                } else {
                    D_801657E8 = TRUE;
                    D_801657E6 = FALSE;
                    D_801657F0 = FALSE;
                }
                b = TRUE;
            }
            break;
        case 2:
            if (gModeSelection != BATTLE) {
                if (gControllerOne->buttonPressed & R_CBUTTONS) {
                    D_80165800[0] = (D_80165800[0] + 1) & 1;
                    b = TRUE;
                }
                if (gControllerTwo->buttonPressed & R_CBUTTONS) {
                    D_80165800[1] = (D_80165800[1] + 1) & 1;
                    b = TRUE;
                }
                if (D_80165800[0] && D_80165800[1]) {
                    D_801657F0 = FALSE;
                } else {
                    D_801657F0 = TRUE;
                }
                if (gDemoMode) {
                    D_801657F0 = FALSE;
                }
            }
            break;
        case 3:
            if ((gControllerOne->buttonPressed & R_CBUTTONS)
                || (gControllerTwo->buttonPressed & R_CBUTTONS)
                || (gControllerThree->buttonPressed & R_CBUTTONS)) {
                if (gModeSelection != BATTLE) {
                    D_801657F0 = (D_801657F0 + 1) & 1;
                }
                D_801657E4 = (D_801657E4 + 1) & 1;
                b = TRUE;
            }
            break;
        case 4:
            if ((gControllerOne->buttonPressed & R_CBUTTONS)
                || (gControllerTwo->buttonPressed & R_CBUTTONS)
                || (gControllerThree->buttonPressed & R_CBUTTONS)
                || (gControllerFour->buttonPressed & R_CBUTTONS)) {
                D_801657E4 = (D_801657E4 + 1) & 1;
                D_801657F8 = (D_801657F8 + 1) & 1;
                D_80165800[0] = (D_80165800[0] + 1) & 1;
                if (gModeSelection != BATTLE) {
                    D_801657F0 = (D_801657F0 + 1) & 1;
                }
                b = TRUE;
            }
            break;
        }
        if (b) {
            func_8006F824(1);
        }
    }
}

void func_8005A71C(void) {
    if (gCurrentCourseId == COURSE_BOWSER_CASTLE) {
        func_80081210();
    }
}

void func_8005A74C(void) {
    switch (gCurrentCourseId) {
    case COURSE_MARIO_RACEWAY:
    case COURSE_CHOCO_MOUNTAIN:
        break;
    case COURSE_BOWSER_CASTLE:
        func_80081208();
        func_80076B84();
        break;
    case COURSE_BANSHEE_BOARDWALK:
        if (gGamestate != CREDITS_SEQUENCE) {
            func_8007E1AC();
            func_8007E4C4();
            if (gModeSelection != TIME_TRIALS) {
                func_8007DB44();
            }
            func_8007C340();
            func_8007C2F8(0);
        }
        break;
    case COURSE_YOSHI_VALLEY:
        func_80083080();
        if (gGamestate != CREDITS_SEQUENCE) {
            func_800834B8();
        }
        break;
    case COURSE_FRAPPE_SNOWLAND:
        if (gGamestate != CREDITS_SEQUENCE) {
            func_80083D60();
        }
        func_80078838();
        break;
    case COURSE_KOOPA_BEACH:
        if (gGamestate != CREDITS_SEQUENCE) {
            func_80082E5C();
        }
        if ((gPlayerCount == 1) || (gPlayerCount == 2) || (gGamestate == CREDITS_SEQUENCE)) {
            func_80082870();
        }
        break;
    case COURSE_LUIGI_RACEWAY:
        if (D_80165898 != 0) {
            func_800857C0();
        }
        break;
    case COURSE_MOO_MOO_FARM:
        if (gGamestate != CREDITS_SEQUENCE) {
            func_800821FC();
        }
        break;
    case COURSE_KALAMARI_DESERT:
        func_80075838();
        break;
    case COURSE_SHERBET_LAND:
        if (gGamestate != CREDITS_SEQUENCE) {
            func_800842C8();
        }
        func_80085214();
        break;
    case COURSE_RAINBOW_ROAD:
        if (gGamestate != CREDITS_SEQUENCE) {
            func_800861E0();
            func_80085AA8();
        }
        break;
    case COURSE_DK_JUNGLE:
        func_80075CA8();
        break;
    }
    if (D_80165730 != 0) {
        func_80074EE8();
    }
    func_80076F2C();
    if ((s16) gCurrentCourseId != COURSE_FRAPPE_SNOWLAND) {
        func_80077C9C();
    }
}

void func_8005A99C(void) {
    if (D_8018D170 == 0) {
        if (D_8018D178 == 0) {
            if (gPlayerCountSelection1 == 1) {
                func_8005AA34();
            }
            if (gPlayerCountSelection1 == 3) {
                D_801657E8 = TRUE;
            }
            gIsHUDVisible = (s32) 1;
            D_8018D170 = (s32) 1;
            D_8018D190 = (s32) 1;
            D_8018D204 = 0;
            return;
        }
        --D_8018D178;
    }
}

void func_8005AA34(void) {
    D_8018D1CC = 1;
    D_8018D1A0 = 0;
}

void func_8005AA4C(void) {
    ++D_8018D1CC;
    D_8018D1A0 = 0;
}

void func_8005AA6C(s32 arg0) {
    D_8018D1CC = arg0;
    D_8018D1A0 = 0;
}

void func_8005AA80(void) {
    D_8018D1CC = 0;
    D_8018D1A0 = 0;
}

void func_8005AA94(s32 arg0) {
    if (D_8018D1A0 == 0) {
        D_8018D1D4 = arg0;
        D_8018D1A0 = 1;
    }

    --D_8018D1D4;
    if (D_8018D1D4 < 0) {
        D_8018D1A0 = 0;
        func_8005AA4C();
    }
}

void func_8005AAF0(void) {
    D_8018D1B4 = 1;
    D_8018D1A0 = 0;
    func_8005AA4C();
}

void func_8005AB20(void) {
    if ((gModeSelection == GRAND_PRIX) && (gPlayerCountSelection1 == 1)) {
        func_8005AA6C(0x14);
    }
}

extern u16 D_8016579E;
extern u8 D_801657E7;
extern s16 D_8018CAAE;
extern s16 D_8018CAB0;
extern s16 D_8018CAB8;
extern s16 D_8018CABE;
extern s16 D_8018CAC0;
extern s16 D_8018CAC2;
extern s16 D_8018CACA;
extern s16 D_8018CACC;
extern s16 D_8018CACE;
extern f32 D_8018CFEC;
extern f32 D_8018CFF4;
extern u16 D_800E55B0[16];
extern f32 D_8018CFEC;
extern f32 D_8018CFF4;

extern struct_8018CA70_entry D_8018CA70[];

void func_8005AB60(void) {
    switch (D_8018CA70[0].unk_78) {
    case 0:
        break;
    case 1:
        s16_step_towards(&D_8018CAAE, 0x106, 0x10);
        if (s16_step_towards(&D_8018CAB0, 0xB6, 0x10) != 0) {
            D_8018CA70[0].unk_78++;
            D_8018CA70[0].unk_79 = 1;
        }
        break;
    case 2:
        s16_step_towards(&D_8018CAAE, 0x116, 4);
        if (s16_step_towards(&D_8018CAB0, 0xC6, 4) != 0) {
            D_8018CA70[0].unk_78++;
        }
        break;
    case 3:
        s16_step_towards(&D_8018CAAE, 0x106, 4);
        if (s16_step_towards(&D_8018CAB0, 0xB6, 4) != 0) {
            D_8018CA70[0].unk_78++;
        }
        break;
    case 4:
        s16_step_towards(&D_8018CAAE, 0x10E, 4);
        if (s16_step_towards(&D_8018CAB0, 0xBE, 4) != 0) {
            D_8018CA70[0].unk_78++;
        }
        break;
    case 5:
        s16_step_towards(&D_8018CAAE, 0x106, 4);
        if (s16_step_towards(&D_8018CAB0, 0xB6, 4) != 0) {
            D_8018CA70[0].unk_78++;
        }
        break;
    case 6:
        s16_step_towards(&D_8018CAAE, 0x10A, 2);
        if (s16_step_towards(&D_8018CAB0, 0xBA, 2) != 0) {
            D_8018CA70[0].unk_78++;
        }
        break;
    case 7:
        s16_step_towards(&D_8018CAAE, 0x106, 2);
        if (s16_step_towards(&D_8018CAB0, 0xB6, 2) != 0) {
            D_8018CA70[0].unk_78++;
        }
        break;
    case 8:
        D_8018CA70[0].unk_78 = 0;
        break;
    }
    if ((D_8018CA70[0].unk_79 != 0) && (D_8018CA70[0].unk_79 == 1)) {
        if (++D_801657E7 >= 0x10) {
            D_801657E7 = 0;
            D_8016579E = 0xDD00;
            D_8018CA70[0].unk_79 = 0U;
        } else {
            D_8016579E = D_800E55B0[D_801657E7] + 0xDD00;
        }
    }
    switch (D_8018CA70[0].unk_80) {
    case 0:
        break;
    case 1:
        if (s16_step_towards(&D_8018CAB8, 0x40, 8) != 0) {
            D_8018CA70[0].unk_80++;
        }
        break;
    case 2:
        if (s16_step_towards(&D_8018CAB8, 0x38, 8) != 0) {
            D_8018CA70[0].unk_80++;
        }
        break;
    case 3:
        if (s16_step_towards(&D_8018CAB8, 0x40, 8) != 0) {
            D_8018CA70[0].unk_80++;
        }
        break;
    case 4:
        if (s16_step_towards(&D_8018CAB8, 0x38, 8) != 0) {
            D_8018CA70[0].unk_80++;
        }
        break;
    case 5:
        if (s16_step_towards(&D_8018CAB8, 0x40, 8) != 0) {
            D_8018CA70[0].unk_80++;
        }
        break;
    case 6:
        if (s16_step_towards(&D_8018CAB8, 0x38, 4) != 0) {
            D_8018CA70[0].unk_80++;
        }
        break;
    case 7:
        if (s16_step_towards(&D_8018CAB8, 0x40, 4) != 0) {
            D_8018CA70[0].unk_80++;
        }
        break;
    case 8:
        D_8018CA70[0].unk_80 = 0;
        break;
    }
    switch (D_8018CA70[0].unk_7A) {
    case 0:
        break;
    case 1:
        if (s16_step_towards(&D_8018CABE, 0xE4, 0x10) != 0) {
            D_8018CA70[0].unk_7A++;
        }
        break;
    case 2:
        if (s16_step_towards(&D_8018CABE, 0xF4, 4) != 0) {
            D_8018CA70[0].unk_7A++;
        }
        break;
    case 3:
        if (s16_step_towards(&D_8018CABE, 0xE4, 4) != 0) {
            D_8018CA70[0].unk_7A++;
        }
        break;
    case 4:
        if (s16_step_towards(&D_8018CABE, 0xEC, 4) != 0) {
            D_8018CA70[0].unk_7A++;
        }
        break;
    case 5:
        if (s16_step_towards(&D_8018CABE, 0xE4, 4) != 0) {
            D_8018CA70[0].unk_7A++;
        }
        break;
    case 6:
        if (s16_step_towards(&D_8018CABE, 0xE8, 2) != 0) {
            D_8018CA70[0].unk_7A++;
        }
        break;
    case 7:
        if (s16_step_towards(&D_8018CABE, 0xE4, 2) != 0) {
            D_8018CA70[0].unk_7A++;
        }
        break;
    case 8:
        D_8018CA70[0].unk_7A = 0;
        break;
    }
    switch (D_8018CA70[0].unk_7D) {
    case 0:
        break;
    case 1:
        if (s16_step_towards(&D_8018CACA, 0x53, 0x10) != 0) {
            D_8018CA70[0].unk_7D++;
        }
        break;
    case 2:
        if (s16_step_towards(&D_8018CACA, 0x43, 4) != 0) {
            D_8018CA70[0].unk_7D++;
        }
        break;
    case 3:
        if (s16_step_towards(&D_8018CACA, 0x53, 4) != 0) {
            D_8018CA70[0].unk_7D++;
        }
        break;
    case 4:
        if (s16_step_towards(&D_8018CACA, 0x4B, 4) != 0) {
            D_8018CA70[0].unk_7D++;
        }
        break;
    case 5:
        if (s16_step_towards(&D_8018CACA, 0x53, 4) != 0) {
            D_8018CA70[0].unk_7D++;
        }
        break;
    case 6:
        if (s16_step_towards(&D_8018CACA, 0x4F, 2) != 0) {
            D_8018CA70[0].unk_7D++;
        }
        break;
    case 7:
        if (s16_step_towards(&D_8018CACA, 0x53, 2) != 0) {
            D_8018CA70[0].unk_7D++;
        }
        break;
    case 8:
        D_8018CA70[0].unk_7D = 0;
        break;
    }
    D_8018CFEC = (f32) (D_8018CA70[0].speedometerX + 0x18);
    D_8018CFF4 = (f32) (D_8018CA70[0].speedometerY + 6);
    switch (D_8018CA70[0].unk_7B) {
    case 0:
        break;
    case 1:
        if (s16_step_towards(&D_8018CAC0, 0xE4, 0x10) != 0) {
            D_8018CA70[0].unk_7B++;
        }
        break;
    case 2:
        if (s16_step_towards(&D_8018CAC0, 0xF4, 4) != 0) {
            D_8018CA70[0].unk_7B++;
        }
        break;
    case 3:
        if (s16_step_towards(&D_8018CAC0, 0xE4, 4) != 0) {
            D_8018CA70[0].unk_7B++;
        }
        break;
    case 4:
        if (s16_step_towards(&D_8018CAC0, 0xEC, 4) != 0) {
            D_8018CA70[0].unk_7B++;
        }
        break;
    case 5:
        if (s16_step_towards(&D_8018CAC0, 0xE4, 4) != 0) {
            D_8018CA70[0].unk_7B++;
        }
        break;
    case 6:
        if (s16_step_towards(&D_8018CAC0, 0xE8, 2) != 0) {
            D_8018CA70[0].unk_7B++;
        }
        break;
    case 7:
        if (s16_step_towards(&D_8018CAC0, 0xE4, 2) != 0) {
            D_8018CA70[0].unk_7B++;
        }
        break;
    case 8:
        D_8018CA70[0].unk_7B = 0;
        break;
    }
    switch (D_8018CA70[0].unk_7E) {
    case 0:
        break;
    case 1:
        if (s16_step_towards(&D_8018CACC, 0x53, 0x10) != 0) {
            D_8018CA70[0].unk_7E++;
        }
        break;
    case 2:
        if (s16_step_towards(&D_8018CACC, 0x43, 4) != 0) {
            D_8018CA70[0].unk_7E++;
        }
        break;
    case 3:
        if (s16_step_towards(&D_8018CACC, 0x53, 4) != 0) {
            D_8018CA70[0].unk_7E++;
        }
        break;
    case 4:
        if (s16_step_towards(&D_8018CACC, 0x4B, 4) != 0) {
            D_8018CA70[0].unk_7E++;
        }
        break;
    case 5:
        if (s16_step_towards(&D_8018CACC, 0x53, 4) != 0) {
            D_8018CA70[0].unk_7E++;
        }
        break;
    case 6:
        if (s16_step_towards(&D_8018CACC, 0x4F, 2) != 0) {
            D_8018CA70[0].unk_7E++;
        }
        break;
    case 7:
        if (s16_step_towards(&D_8018CACC, 0x53, 2) != 0) {
            D_8018CA70[0].unk_7E++;
        }
        break;
    case 8:
        D_8018CA70[0].unk_7E = 0;
        break;
    }
    switch (D_8018CA70[0].unk_7C) {
    case 0:
        break;
    case 1:
        if (s16_step_towards(&D_8018CAC2, 0xE4, 0x10) != 0) {
            D_8018CA70[0].unk_7C++;
        }
        break;
    case 2:
        if (s16_step_towards(&D_8018CAC2, 0xF4, 4) != 0) {
            D_8018CA70[0].unk_7C++;
        }
        break;
    case 3:
        if (s16_step_towards(&D_8018CAC2, 0xE4, 4) != 0) {
            D_8018CA70[0].unk_7C++;
        }
        break;
    case 4:
        if (s16_step_towards(&D_8018CAC2, 0xEC, 4) != 0) {
            D_8018CA70[0].unk_7C++;
        }
        break;
    case 5:
        if (s16_step_towards(&D_8018CAC2, 0xE4, 4) != 0) {
            D_8018CA70[0].unk_7C++;
        }
        break;
    case 6:
        if (s16_step_towards(&D_8018CAC2, 0xE8, 2) != 0) {
            D_8018CA70[0].unk_7C++;
        }
        break;
    case 7:
        if (s16_step_towards(&D_8018CAC2, 0xE4, 2) != 0) {
            D_8018CA70[0].unk_7C++;
        }
        break;
    case 8:
        D_8018CA70[0].unk_7C = 0;
        break;
    }
    switch (D_8018CA70[0].unk_7F) {
    case 0:
        break;
    case 1:
        if (s16_step_towards(&D_8018CACE, 0x53, 0x10) != 0) {
            D_8018CA70[0].unk_7F++;
        }
        break;
    case 2:
        if (s16_step_towards(&D_8018CACE, 0x43, 4) != 0) {
            D_8018CA70[0].unk_7F++;
        }
        break;
    case 3:
        if (s16_step_towards(&D_8018CACE, 0x53, 4) != 0) {
            D_8018CA70[0].unk_7F++;
        }
        break;
    case 4:
        if (s16_step_towards(&D_8018CACE, 0x4B, 4) != 0) {
            D_8018CA70[0].unk_7F++;
        }
        break;
    case 5:
        if (s16_step_towards(&D_8018CACE, 0x53, 4) != 0) {
            D_8018CA70[0].unk_7F++;
        }
        break;
    case 6:
        if (s16_step_towards(&D_8018CACE, 0x4F, 2) != 0) {
            D_8018CA70[0].unk_7F++;
        }
        break;
    case 7:
        if (s16_step_towards(&D_8018CACE, 0x53, 2) != 0) {
            D_8018CA70[0].unk_7F++;
        }
        break;
    case 8:
        D_8018CA70[0].unk_7F = 0;
        break;
    }
}

extern s16 D_8018CAC0;
extern s16 D_8018CAC2;
extern s16 D_8018CAC4;
extern s16 D_8018CAC6;

s32 f32_step_towards(f32*, f32, f32);
void func_8005AA4C(void);
void func_8005AA6C(s32 arg0);
void func_8005AA80(void);
void func_8005AA94(s32 arg0);
void func_8005AAF0(void);
void func_8005AB60(void);
void func_8005B7A0(void);
extern s8 D_801657E2;
extern struct_8018CA70_entry D_8018CA70[];
extern f32 D_8018D028[8];
extern f32 D_8018D050[8];
extern f32 D_8018D078[8];
extern f32 D_8018D0C8[8];
extern s32 D_8018D1CC;
extern s32 gGPCurrentRaceRankByPlayerId[];

void func_8005B7A0(void) {
    f32 temp_f0;
    f32* temp_s2;
    f32* temp_s3;
    f32* temp_s4;
    f32* var_s1;
    s32 var_s0;

    s16_step_towards(&D_8018CAC0, 0xE4, 0x10);
    s16_step_towards(&D_8018CAC2, 0xE4, 0x10);
    s16_step_towards(&D_8018CAC4, 0xE4, 0x10);
    s16_step_towards(&D_8018CAC6, 0xE4, 0x10);
    for (var_s0 = 0; var_s0 != 8; var_s0++) {
        temp_s2 = &D_8018D028[var_s0];
        temp_s3 = &D_8018D0C8[var_s0];
        temp_s4 = &D_8018D078[var_s0];
        if (D_8018D050[var_s0] >= 0.0f) {
            f32_step_towards(temp_s2, *temp_s3, *temp_s4);
            temp_f0 = *temp_s2;
            if (temp_f0 == *temp_s3) {
                *temp_s4 = 0.0f;
            }
            if ((f64) temp_f0 <= -32.0) {
                D_8018D050[var_s0] = -32.0f;
            }
        }
    }
}

void func_8005B914(void) {
    s32 i;
    UNUSED s32 unk;

    switch (D_8018D1CC) {
    case 0:
        break;
    case 0x1:
        func_8005AAF0();
        break;
    case 0x2:
        if (gModeSelection == 1) {
            D_8018CA70[0].unk_80 = 1;
        }
        D_8018CA70[0].unk_78 = 1;
        D_8018CA70[0].unk_7A = 1;
        D_8018CA70[0].unk_7D = 1;
        func_8005AA4C();
        break;
    case 0x3:
        func_8005AA94(0);
        break;
    case 0x4:
        D_8018CA70[0].unk_7B = 1;
        D_8018CA70[0].unk_7E = 1;
        func_8005AA4C();
        break;
    case 0x5:
        func_8005AA94(0);
        break;
    case 0x6:
        D_8018CA70[0].unk_7C = 1;
        D_8018CA70[0].unk_7F = 1;
        func_8005AA4C();
        func_8005AA80();
        break;
    case 0x14:
        D_8018D078[0] = 16.0f;
        func_8005AA4C();
        break;
    case 0x15:
        func_8005AA94(4);
        break;
    case 0x16:
        D_8018D078[1] = 16.0f;
        func_8005AA4C();
        break;
    case 0x17:
        func_8005AA94(4);
        break;
    case 0x18:
        D_8018D078[2] = 16.0f;
        func_8005AA4C();
        break;
    case 0x19:
        func_8005AA94(4);
        break;
    case 0x1A:
        D_8018D078[3] = 16.0f;
        func_8005AA4C();
        break;
    case 0x1B:
        func_8005AA94(0xA);
        break;
    case 0x1C:
        func_8005AA80();
        break;
    case 0x64:
        func_8005AA4C();
        break;
    case 0x65:
        func_8005AA94(0x3A);
        break;
    case 0x66:
        D_8018D078[0] = -8.0f;
        D_8018D0C8[0] = -32.0f;
        func_8005AA4C();
        break;
    case 0x67:
        func_8005AA94(4);
        break;
    case 0x68:
        D_8018D078[1] = -8.0f;
        D_8018D0C8[1] = -32.0f;
        func_8005AA4C();
        break;
    case 0x69:
        func_8005AA94(4);
        break;
    case 0x6A:
        D_8018D078[2] = -8.0f;
        D_8018D0C8[2] = -32.0f;
        func_8005AA4C();
        break;
    case 0x6B:
        func_8005AA94(4);
        break;
    case 0x6C:
        D_8018D078[3] = -8.0f;
        D_8018D0C8[3] = -32.0f;
        func_8005AA4C();
        break;
    case 0x6D:
        func_8005AA94(0xA);
        break;
    case 0x6E:
        for (i = 0; i != 8; i += 4) {
            D_8018D050[i] = -32.0f;
            D_8018D050[i + 1] = -32.0f;
            D_8018D050[i + 2] = -32.0f;
            D_8018D050[i + 3] = -32.0f;
        }
        D_8018D028[0] = 360.0f;
        D_8018D050[0] = 110.0f;
        D_8018D0C8[0] = 44.0f;
        D_8018D078[0] = -16.0f;
        D_801657E2 = 1;
        func_8005AA4C();
        break;
    case 0x6F:
        func_8005AA94(4);
        break;
    case 0x70:
        D_8018D028[1] = 360.0f;
        D_8018D050[1] = 110.0f;
        D_8018D0C8[1] = 76.0f;
        D_8018D078[1] = -16.0f;
        func_8005AA4C();
        break;
    case 0x71:
        func_8005AA94(4);
        break;
    case 0x72:
        D_8018D028[2] = 360.0f;
        D_8018D050[2] = 110.0f;
        D_8018D0C8[2] = 108.0f;
        D_8018D078[2] = -16.0f;
        func_8005AA4C();
        break;
    case 0x73:
        func_8005AA94(4);
        break;
    case 0x74:
        D_8018D028[3] = 360.0f;
        D_8018D050[3] = 110.0f;
        D_8018D0C8[3] = 140.0f;
        D_8018D078[3] = -16.0f;
        func_8005AA4C();
        break;
    case 0x75:
        func_8005AA94(4);
        break;
    case 0x76:
        D_8018D028[4] = 360.0f;
        D_8018D050[4] = 110.0f;
        D_8018D0C8[4] = 180.0f;
        D_8018D078[4] = -16.0f;
        func_8005AA4C();
        break;
    case 0x77:
        func_8005AA94(4);
        break;
    case 0x78:
        D_8018D028[5] = 360.0f;
        D_8018D050[5] = 110.0f;
        D_8018D0C8[5] = 212.0f;
        D_8018D078[5] = -16.0f;
        func_8005AA4C();
        break;
    case 0x79:
        func_8005AA94(4);
        break;
    case 0x7A:
        D_8018D028[6] = 360.0f;
        D_8018D050[6] = 110.0f;
        D_8018D0C8[6] = 244.0f;
        D_8018D078[6] = -16.0f;
        func_8005AA4C();
        break;
    case 0x7B:
        func_8005AA94(4);
        break;
    case 0x7C:
        D_8018D028[7] = 360.0f;
        D_8018D050[7] = 110.0f;
        D_8018D0C8[7] = 276.0f;
        D_8018D078[7] = -16.0f;
        func_8005AA4C();
        break;
    case 0x7D:
        func_8005AA94(0xA);
        break;
    case 0x7E:
        for (i = 0; i != 8; i++) {
            D_8018D078[i] = 0.0f;
        }
        func_8005AA4C();
        break;
    case 0x7F:
        func_8005AA94(0x82);
        break;
    case 0x80:
        if (gGPCurrentRaceRankByPlayerId[0] < 4) {
            func_8005AA6C(0x8C);
        } else {
            func_8005AA6C(0x82);
        }
        break;
    case 0x82:
        func_8005AA80();
        break;
    case 0x8C:
        D_8018D078[0] = -16.0f;
        D_8018D0C8[0] = -32.0f;
        func_8005AA4C();
        break;
    case 0x8D:
        func_8005AA94(4);
        break;
    case 0x8E:
        D_8018D078[1] = -16.0f;
        D_8018D0C8[1] = -32.0f;
        func_8005AA4C();
        break;
    case 0x8F:
        func_8005AA94(4);
        break;
    case 0x90:
        D_8018D078[2] = -16.0f;
        D_8018D0C8[2] = -32.0f;
        func_8005AA4C();
        break;
    case 0x91:
        func_8005AA94(4);
        break;
    case 0x92:
        D_8018D078[3] = -16.0f;
        D_8018D0C8[3] = -32.0f;
        func_8005AA4C();
        break;
    case 0x93:
        func_8005AA94(4);
        break;
    case 0x94:
        D_8018D078[4] = -16.0f;
        D_8018D0C8[4] = -32.0f;
        func_8005AA4C();
        break;
    case 0x95:
        func_8005AA94(4);
        break;
    case 0x96:
        D_8018D078[5] = -16.0f;
        D_8018D0C8[5] = -32.0f;
        func_8005AA4C();
        break;
    case 0x97:
        func_8005AA94(4);
        break;
    case 0x98:
        D_8018D078[6] = -16.0f;
        D_8018D0C8[6] = -32.0f;
        func_8005AA4C();
        break;
    case 0x99:
        func_8005AA94(4);
        break;
    case 0x9A:
        D_8018D078[7] = -16.0f;
        D_8018D0C8[7] = -32.0f;
        func_8005AA4C();
        break;
    case 0x9B:
        func_8005AA94(0x14);
        break;
    case 0x9C:
        func_8005AA80();
        break;
    }
    if (D_8018D1CC < 0x64) {
        func_8005AB60();
    } else if (D_8018D1CC < 0xC8) {
        func_8005B7A0();
    }
    if ((D_8018D1CC != 0) && (D_8018D1CC >= 0x14) && (D_8018D1CC < 0x1E)) {
        for (i = 0; i != 4; i++) {
            f32_step_towards(&D_8018D028[i], D_8018D0C8[i], D_8018D078[i]);
            if (D_8018D028[i] == D_8018D0C8[i]) {
                D_8018D078[i] = 0.0f;
            }
        }
    }
}

extern u16 D_800E55A0[];
extern u16 D_8016579E;
extern u8 D_801657E7;
extern u8 D_8018CAE9;
extern f32 D_8018CFE4;

void func_8005C360(f32 arg0) {
    if (!D_8018CAE9) {
        u16 v;
        if (arg0 < 10.0) {
            v = (u16) (128.0f * arg0) + 0xDD00;
        } else if (arg0 < 20.0) {
            v = (u16) ((arg0 - 10.0) * 256.0) + 0xE200;
        } else {
            v = (u16) ((arg0 - 20.0) * 268.8) + 0xEC00;
        }
        if (arg0 == D_8018CFE4) {
            if (arg0 > 5.0f) {
                if (++D_801657E7 == 8) {
                    D_801657E7 = 0;
                }
            } else {
                D_801657E7 = 0;
            }
        }
        D_8016579E = v + D_800E55A0[D_801657E7];
        D_8018CFE4 = arg0;
    }
}

void func_8005C64C(UNUSED s32 *arg0) {

}

void func_8005C654(s32 *arg0) {
    *arg0 = 0;
}

void func_8005C65C(s32 arg0) {
    D_8018D2C8[arg0] = 1;
}

void func_8005C674(s8 index, s16 *x, s16 *y, s16 *z) {
    s16 *src = &D_800E4730[index * 3];
    *x = *src++;
    *y = *src++;
    *z = *src++;
}

void func_8005C6B4(s8 arg0, s16* arg1, s16* arg2, s16* arg3) {
    switch (arg0) {
    case 0:
        *arg1 = 0xFF;
        *arg2 = 0x40;
        *arg3 = 0x40;
        break;
    case 1:
        *arg1 = 0xFF;
        *arg2 = 0xFF;
        *arg3 = 0x40;
        break;
    case 2:
        *arg1 = 0x40;
        *arg2 = 0x40;
        *arg3 = 0xFF;
        break;
    }
}

void func_8005C728(void) {
    s16 sp26;
    s16 sp24;
    s16 sp22;
    s32 temp_t7;

    temp_t7 = ++D_8018D400;
    D_8018D40C = temp_t7 & 0x3F;
    D_8018D410 = temp_t7 & 0x1F;
    D_80165590 = temp_t7 & 0xF;
    D_80165594 = temp_t7 & 7;
    D_80165598 = temp_t7 & 3;
    D_8016559C = temp_t7 & 1;
    if (D_8018D40C == 0) {
        D_801655A4 += 1;
        D_801655D8 ^= 1;
    }
    if (D_8018D410 == 0) {
        D_801655AC += 1;
        D_801655E8 ^= 1;
    }
    if (D_80165590 == 0) {
        D_801655B4 += 1;
        D_801655F8 ^= 1;
    }
    if (D_80165594 == 0) {
        D_801655BC += 1;
        D_80165608 ^= 1;
    }
    if (D_80165598 == 0) {
        D_801655C4 += 1;
        D_80165618 ^= 1;
    }
    if (D_8016559C == 0) {
        D_801655CC += 1;
        D_80165628 ^= 1;
    }
    if (--D_8018D2AC < 0) {
        D_8018D2AC = 0;
    }
    D_801658A8 += 1;
    if (D_801658A8 >= 7) {
        D_801658A8 = 0;
    }
    func_8005C674(D_801658A8, &sp26, &sp24, &sp22);
    D_801656C0 = sp26 / 2;
    D_801656D0 = sp24 / 2;
    D_801656E0 = sp22 / 2;
    func_8005C980();
}

struct _struct_D_800E55D0_0x3 {
    /* 0x0 */ u8 unk0;                              /* inferred */
    /* 0x1 */ u8 unk1;                              /* inferred */
    /* 0x2 */ u8 unk2;                              /* inferred */
};                                                  /* size = 0x3 */

extern struct _struct_D_800E55D0_0x3 D_800E55D0[14];
extern s32 D_80165590;
extern s16 D_80165794;
extern Player *D_8018CF28[];
extern s16 D_8018CF50[];
extern s16 D_8018CF98[];
extern s32 D_8018D314;
extern s32 D_8018D3F4;
extern s32 D_8018D3F8;
extern s16 gGPCurrentRaceCharacterIdByRank[8];
extern s16 gGPCurrentRacePlayerIdByRank[8];
extern s32 gGPCurrentRaceRankByPlayerId[8];

void func_8005C980(void) {
    s32 var_v0;
    s32 sp0;
    s32 temp_v1;
    for (var_v0 = 0; var_v0 < 8; var_v0++) {
        temp_v1 = gGPCurrentRaceRankByPlayerId[var_v0];
        if (D_80165590 == 0) {
            D_8018CF98[var_v0] = temp_v1;
        }
        D_8018CF28[temp_v1] = &gPlayerOne[sp0];
        if (sp0 == 0) {
            D_80165794 = temp_v1;
        }
    }

    for (var_v0 = 0; var_v0 < 8; var_v0++) {
        sp0 = gGPCurrentRacePlayerIdByRank[var_v0];
        D_8018CF50[var_v0] = sp0;
        if (D_80165590 == 0) {
            gGPCurrentRaceCharacterIdByRank[var_v0] = (gPlayerOne + sp0)->characterId;
        }
    }

    if (--D_8018D314 <= 0) {
        D_8018D314 = D_8018D3F4;
        D_8018D3E4 = D_800E55D0[D_8018D3F8].unk0;
        D_8018D3E8 = D_800E55D0[D_8018D3F8].unk1;
        D_8018D3EC = D_800E55D0[D_8018D3F8].unk2;
        if (++D_8018D3F8 == 6) {
            D_8018D3F8 = 0;
        }
    }
}

#ifdef NON_MATCHING
s32 f32_step_towards(f32*, f32, f32);
void func_80079054(s32);
void func_80079084(s32);
void func_800790B4(s32);
void func_800C9060(u8, u32);
void func_800C90F4(u8, uintptr_t);
s32 s16_step_towards(s16*, s16, s16);
extern s32 D_80165594;
extern s32 D_80165638;
extern u32 D_80165648;
extern u32 D_80165654[];
extern u32 D_80165658[];
extern s8 D_801657E3;
extern s8 D_801657E4;
extern s8 D_801657E5;
extern bool8 D_801657E6;
extern bool8 D_801657E8;
extern bool8 D_801657F0;
extern s8 D_80165800[2];
extern s32 D_8016587C;
extern s8 D_80165898;
extern struct_8018CA70_entry D_8018CA70[];
extern s32 D_8018D114;
extern s32 D_8018D1CC;
extern s32 D_8018D1FC;
extern s32 D_8018D204;
extern s32 D_8018D20C;
extern s32 D_8018D320;
extern s8 gPlayerCount;
extern f32 gCourseTimer;
extern s16 gCurrentCourseId;
extern s32 gModeSelection;
extern Player* gPlayerOne;
extern s32 gScreenModeSelection;

void func_8005CB60(s32 playerId, s32 arg1)
{
    Player* new_var;
    s32 temp_f18;
    s32 new_var2;
    s8* temp_v1;
    u32 new_var3;
    temp_v1 = &D_8018CA70[playerId].alsoLapCount;
    new_var = &gPlayerOne[playerId];
    if (D_8018CA70[playerId].lapCount < D_8018D320) {
        D_8018CA70[playerId].someTimer = (s32)(gCourseTimer * 100.0f);
        if ((*temp_v1) < arg1) {
            if (((!temp_v1) && (!temp_v1)) && (!temp_v1)) {
            }
            temp_f18 = gTimePlayerLastTouchedFinishLine[playerId] * 100.0f;
            D_8018CA70[playerId].timeLastTouchedFinishLine = temp_f18;
            D_8018CA70[playerId & 0xFFFFFFFFFFFFFFFFu].lapCompletionTimes[*temp_v1] = temp_f18;
            if (!(*temp_v1)) {
                D_8018CA70[playerId].lapDurations[(*temp_v1) & 0xFFFFFFFFFFFFFFFF] = D_8018CA70[playerId].timeLastTouchedFinishLine;
            }
            else {
                D_8018CA70[playerId].lapDurations[*temp_v1] = D_8018CA70[playerId].timeLastTouchedFinishLine + (-D_8018CA70[playerId].lapCompletionTimes[*temp_v1]);
            }
            new_var3 = (D_8018CA70[playerId].someTimer1 = D_8018CA70[playerId].lapDurations[*temp_v1]);
            D_8018CA70[playerId].blinkTimer = 0x3C;
            if (arg1 == 3) {
                D_8018CA70[playerId].someTimer = D_8018CA70[playerId].lapCompletionTimes[(*temp_v1) & 0xFFFFFFFFFFFFFFFFu];
            }
            if (gModeSelection == 1) {
                if (D_80165638 >= D_8018CA70[playerId].someTimer1) {
                    if (D_80165638 != D_8018CA70[playerId].someTimer1) {
                        D_80165658[0] = (D_80165658[1] = 0);
                    }
                    func_800C90F4(0, (new_var->characterId * 0x10) + 0x2900800D);
                    D_80165638 = D_8018CA70[playerId].someTimer1;
                    D_80165654[arg1] = 1;
                    D_801657E3 = 1;
                }
                if ((arg1 == 3) && (D_8018CA70[playerId].someTimer < D_80165648)) {
                    D_801657E5 = 1;
                }
            }
            if ((++(*temp_v1)) == D_8018D320) {
                *temp_v1 = D_8018D320 - 1;
            }
            temp_v1 = (s8*)(&D_8018CA70[playerId]);
            temp_v1 += 0x71;
            *temp_v1 += 1;
            switch (*temp_v1) {
            case 0:
                break;

            case 1:
                func_80079084(playerId);
                func_800C9060(playerId, 0x1900F015);
                if (((gCurrentCourseId == 8) && (D_80165898 == 0)) && (gModeSelection != 1)) {
                    D_80165898 = 1;
                }
                break;

            case 2:
                func_800790B4(playerId);
                break;

            case 3:
                if ((D_8018D114 == 0) || (D_8018D114 == 1)) {
                    D_801657E4 = 0;
                    D_801657E6 = FALSE;
                    D_801657F0 = FALSE;
                    D_801657E8 = TRUE;
                    D_80165800[0] = 1;
                    D_80165800[1] = 1;
                    D_8018D204 = 1;
                }
                D_8018CA70[playerId].raceCompleteBool = 1;
                if (D_8018D114 == 2) {
                    D_80165800[playerId] = 0;
                }
                if (gCurrentCourseId == 4) {
                    D_8018CA70[playerId].unk_81 = 1;
                }
                D_8018CA70[playerId].lap1CompletionTimeX = 0x140;
                D_8018CA70[playerId].lap2CompletionTimeX = 0x1E0;
                D_8018CA70[playerId].lap3CompletionTimeX = 0x280;
                D_8018CA70[playerId].totalTimeX = 0x320;
                D_8016587C = 1;
                if (D_8018D20C == 0) {
                    func_80079054(playerId);
                    D_8018D20C = 1;
                    if (gPlayerCount == 1) {
                        D_8018D1CC = 0x64;
                    }
                }
                break;
            }
        }
    }
    else {
        f32_step_towards(&D_8018CA70[playerId].rankScaling, 1.0f, 0.125f);
        switch (gScreenModeSelection) {
        case 0:
            s16_step_towards(&D_8018CA70[playerId].slideRankX, 0x1C, 7);
            if (D_8018D1FC != 0) {
                s16_step_towards(&D_8018CA70[playerId].slideRankY, -0x28, 1);
            }
            else {
                s16_step_towards(&D_8018CA70[playerId].slideRankY, -0x10, 4);
            }
            break;

        case 2:
            s16_step_towards(&D_8018CA70[playerId].slideRankX, 0x1C, 7);
            s16_step_towards(&D_8018CA70[playerId].slideRankY, -0x10, 4);
            break;

        case 1:
            s16_step_towards(&D_8018CA70[playerId].slideRankX, 0x1C, 7);
            s16_step_towards(&D_8018CA70[playerId].slideRankY, -0x10, 4);
            s16_step_towards(&D_8018CA70[playerId].lap1CompletionTimeX, 0xE4, 0x10);
            s16_step_towards(&D_8018CA70[playerId].lap2CompletionTimeX, 0xE4, 0x10);
            s16_step_towards(&D_8018CA70[playerId].lap3CompletionTimeX, 0xE4, 0x10);
            s16_step_towards(&D_8018CA70[playerId].totalTimeX, 0xE4, 0x10);
            break;

        case 3:
            if ((playerId & 1) == 1) {
                s16_step_towards(&D_8018CA70[playerId].slideRankX, -8, 2);
            }
            else {
                s16_step_towards(&D_8018CA70[playerId].slideRankX, 8, 2);
            }
            s16_step_towards(&D_8018CA70[playerId].slideRankY, -0x10, 4);
            break;
        }
    }
    if (D_8018CA70[playerId].blinkTimer == 0) {
        D_8018CA70[playerId].someTimer1 = D_8018CA70[playerId].someTimer;
        D_801657E3 = 0;
    }
    else {
        if (D_80165594 == 0) {
            D_8018CA70[playerId].blinkState += 1;
            D_8018CA70[playerId].blinkState &= 1;
        }
        if ((--D_8018CA70[playerId].blinkTimer) == 0) {
            D_8018CA70[playerId].blinkState = 0;
        }
    }
}
#else
GLOBAL_ASM("asm/non_matchings/code_80057C60/func_8005CB60.s")
#endif

void func_8005D0FC(s32 arg0) {
    if (gModeSelection != BATTLE) {
        switch (arg0) {                             /* irregular */
        case 0:
            func_8005CB60(arg0, gLapCountByPlayerId[0]);
            break;
        case 1:
            func_8005CB60(arg0, D_80164394);
            break;
        case 2:
            func_8005CB60(arg0, D_80164398);
            break;
        case 3:
            func_8005CB60(arg0, D_8016439C);
            break;
        }
    }
}

void func_8005D18C(void) {
    if ((gModeSelection == GRAND_PRIX) && (gPlayerCountSelection1 == TIME_TRIALS)) {
        D_801657D8 = 1;
        D_8018D2BC = 0;
        D_8018D2A4 = 0;
        if (gGPCurrentRaceRankByPlayerId[0] >= 4) {
            D_8018D1FC = 1;
            D_8018D2A4 = 1;
            D_8018D2BC = 1;
        }
    }
}

void func_8005D1F4(s32 arg0)
{
    s32 playerWaypoint;
    s32 bombWaypoint;
    s32 var_a2;
    s32 waypointDiff;

    if (gModeSelection == 2) {
        playerWaypoint = gNearestWaypointByPlayerId[arg0];
        D_8018CA70[arg0].unk_74 = 0;
        for (var_a2 = 0; var_a2 < NUM_BOMB_KARTS_VERSUS; var_a2++) {
            if ((gBombKarts[var_a2].state == BOMB_STATE_EXPLODED) || (gBombKarts[var_a2].state == BOMB_STATE_INACTIVE)) continue;
            bombWaypoint = gBombKarts[var_a2].waypointIndex;
            waypointDiff = bombWaypoint - playerWaypoint;
            if ((waypointDiff < -5) || (waypointDiff > 0x1E)) continue;
            D_8018CA70[arg0].unk_74 = 1;
            break;
        }
    }
}

// todo: Import?
// Appears to be balloons
extern u8 D_0F05D1E8[]; // unk
extern u8 D_0F05D420[]; // unk
extern u8 D_0F05D674[]; // unk
extern u8 D_0F05DA50[]; // unk
extern u8 D_0F05DDFC[]; // unk
extern u8 D_0F05DFC0[]; // unk
extern u8 D_0F05E19C[]; // balloon top?
extern u8 D_0F05E3E0[]; // balloon bottom?


extern u8 gTexture69B03C[];
extern u8 gTexture69B140[];
extern u8 gTexture69B378[];
extern u8 gTexture69B960[];
extern u8 gTexture69BA28[];
extern u8 gTexture69C1E8[];
extern u8 gTexture69C354[];
extern u8 gTexture69C4E4[];
extern u8 gTexture69C80C[];
extern u8 gTexture69C9C4[];
extern u8 gTexture69CB84[];
extern u8 gTexture69CCEC[];
extern u8 gTexture69CEB8[];
extern u8 gTexture69D148[];
extern u8 gTexture69D4E0[];
extern u8 gTexture69D8FC[];
extern u8 gTexture69DCB4[];
extern u8 gTexture69DFA0[];
extern u8 gTexture69E25C[];
extern u8 gTexture69E518[];
extern u8 gTexture69E7A8[];
extern u8 gTexture69EA18[];
extern u8 gTexture69EC54[];
extern u8 gTexture69EE38[];
extern u8 gTexture69EFE0[];
extern u8 gTextureBoingExclamation[];
extern u8 gTextureKartShadow[];
extern u8 gTextureLightningBolt0[];
extern u8 gTextureLightningBolt1[];

// Appears to load GP Mode race staging balloons and kart shadows.
void func_8005D290(void) {
    D_8018D488 = dma_textures(gTexture69C80C, 0x400, 0x400);
    D_8018D474 = dma_textures(gTextureKartShadow, 0x1000, 0x1000);
    D_8018D420 = dma_textures(gTexture69B03C, 0x100, 0x100);
    D_8018D424 = dma_textures(gTexture69B140, 0x400, 0x400);
    D_8018D478 = dma_textures(gTexture69C1E8, 0x200, 0x200);
    D_8018D480 = dma_textures(gTexture69BA28, 0x400, 0x400);
    D_8018D484 = dma_textures(gTexture69B960, 0x400, 0x400);
    D_8018D48C = dma_textures(gTexture69C354, 0x400, 0x400);
    D_8018D494 = dma_textures(gTexture69C4E4, 0x400, 0x400);
    D_8018D490 = D_8018D48C;
    D_8018D498 = dma_textures(gTexture69B378, 0x1000, 0x1000);
    D_8018D4BC = dma_textures(D_0F05E19C, 0x800, 0x800);
    D_8018D4C0 = dma_textures(D_0F05E3E0, 0x800, 0x800);
    D_8018D49C = dma_textures(gTexture69C9C4, 0x200, 0x200);
    D_8018D4A0 = dma_textures(gTextureBoingExclamation, 0x800, 0x800);
    D_8018D4A4 = dma_textures(D_0F05DDFC, 0x800, 0x800);
    D_8018D4A8 = dma_textures(D_0F05DFC0, 0x800, 0x800);
    D_8018D4AC = dma_textures(D_0F05D674, 0x800, 0x800);
    D_8018D4B0 = dma_textures(D_0F05DA50, 0x800, 0x800);
    D_8018D4B4 = dma_textures(D_0F05D1E8, 0x800, 0x800);
    D_8018D4B8 = dma_textures(D_0F05D420, 0x800, 0x800);
    D_8018D438 = dma_textures(gTexture69CB84, 0x800, 0x800);
    D_8018D43C = dma_textures(gTexture69CCEC, 0x800, 0x800);
    D_8018D440 = dma_textures(gTexture69CEB8, 0x800, 0x800);
    D_8018D444 = dma_textures(gTexture69D148, 0x800, 0x800);
    D_8018D448 = dma_textures(gTexture69D4E0, 0x800, 0x800);
    D_8018D44C = dma_textures(gTexture69D8FC, 0x800, 0x800);
    D_8018D450 = dma_textures(gTexture69DCB4, 0x800, 0x800);
    D_8018D454 = dma_textures(gTexture69DFA0, 0x800, 0x800);
    D_8018D458 = dma_textures(gTexture69E25C, 0x800, 0x800);
    D_8018D45C = dma_textures(gTexture69E518, 0x800, 0x800);
    D_8018D460 = dma_textures(gTexture69E7A8, 0x800, 0x800);
    D_8018D464 = dma_textures(gTexture69EA18, 0x800, 0x800);
    D_8018D468 = dma_textures(gTexture69EC54, 0x800, 0x800);
    D_8018D46C = dma_textures(gTexture69EE38, 0x800, 0x800);
    D_8018D470 = dma_textures(gTexture69EFE0, 0x800, 0x800);
    D_8018D4C4 = dma_textures(gTextureLightningBolt0, 0x800, 0x800);
    D_8018D4C8 = dma_textures(gTextureLightningBolt1, 0x800, 0x800);
}

void func_8005D6C0(Player* player) {
    s32 temp_v0;

    for (temp_v0 = 0; temp_v0 < 10; ++temp_v0)
    {
        player->unk_258[temp_v0].unk_01C = 0;
        player->unk_258[temp_v0].unk_01E = 0;
        player->unk_258[temp_v0].unk_012 = 0;
    }

    for (temp_v0 = 0; temp_v0 < 10; ++temp_v0)
    {
        player->unk_258[30 + temp_v0].unk_01C = 0;
        player->unk_258[30 + temp_v0].unk_01E = 0;
        player->unk_258[30 + temp_v0].unk_012 = 0;
    }

    for (temp_v0 = 0; temp_v0 < 10; ++temp_v0)
    {
        player->unk_258[10 + temp_v0].unk_01C = 0;
        player->unk_258[10 + temp_v0].unk_01E = 0;
        player->unk_258[10 + temp_v0].unk_012 = 0;
    }

    for (temp_v0 = 0; temp_v0 < 10; ++temp_v0)
    {
        player->unk_258[20 + temp_v0].unk_01C = 0;
        player->unk_258[20 + temp_v0].unk_01E = 0;
        player->unk_258[20 + temp_v0].unk_012 = 0;
    }
}

void func_8005D794(Player* player, UnkPlayerStruct258* arg1, f32 arg2, f32 arg3, f32 arg4, s8 arg5, s8 arg6) {
    arg1->unk_000[2] = arg4;
    arg1->unk_000[0] = arg2;
    arg1->unk_000[1] = arg3;
    arg1->unk_020 = -player->unk_02C[1];
    arg1->unk_014 = arg5;
    arg1->unk_010 = arg6;
}

s32 func_8005D7D8(UnkPlayerStruct258* arg0, s8 arg1, f32 arg2) {
    arg0->unk_01C = 1;
    arg0->unk_012 = arg1;
    arg0->unk_01E = 0;
    arg0->unk_00C = arg2;
}

s32 func_8005D800(UnkPlayerStruct258* arg0, s32 arg1, s16 arg2) {
    arg0->unk_038 = (u8) (arg1 >> 16);
    arg0->unk_03A = (u8) (arg1 >> 8);
    arg0->unk_03C = (u8)  arg1;
    arg0->unk_03E = arg2;
}

s32 func_8005D82C(UnkPlayerStruct258* arg0, s32 arg1, s16 arg2) {
    s32 temp_v0;
    temp_v0 = random_int(0x30);

    arg0->unk_038 = (u8) ((u8) (arg1 >> 0x10) - temp_v0) ;
    arg0->unk_03A = (u8) ((u8) (arg1 >> 8) - temp_v0) ;
    arg0->unk_03C = (u8) ((u8)  arg1 - temp_v0) ;
    arg0->unk_03E = arg2;
}

void func_8005D898(Player* player, s16 arg1, UNUSED s32 arg2, UNUSED s8 arg3, UNUSED s8 arg4) {
    s32 temp_lo;

    if (player->unk_0C0 >= 0) {
        func_8005D794(player, &player->unk_258[10 + arg1], player->boundingBoxCorners[2].cornerPos[0], player->boundingBoxCorners[2].cornerGroundY + 2.0f, player->boundingBoxCorners[2].cornerPos[2], player->boundingBoxCorners[2].surfaceType, 1);
    } else {
        func_8005D794(player, &player->unk_258[10 + arg1], player->boundingBoxCorners[3].cornerPos[0], player->boundingBoxCorners[3].cornerGroundY + 2.0f, player->boundingBoxCorners[3].cornerPos[2],  player->boundingBoxCorners[3].surfaceType, 0);
    }

    temp_lo = player->unk_0C0 / 182;
    if ((temp_lo >= 7) || (temp_lo < -6)) {
        func_8005D7D8(&player->unk_258[10 + arg1], 1, 0.35f);
        if (player->unk_22A == 0) {
            func_8005D800(&player->unk_258[10 + arg1], 0xFFFFFF, 0x70);
        }

        if (player->unk_22A == 1) {
            func_8005D800(&player->unk_258[10 + arg1], 0xFFFF00, 0x70);
  
        }

        if (player->unk_22A >= 2) {
            func_8005D800(&player->unk_258[10 + arg1], 0xFF9600, 0x70);
        }

        if (player->unk_22A >= 2) {
            // Why not put this in previous if statement?
            player->unk_258[10 + arg1].unk_040 = 2;
            return;
        }

        player->unk_258[10 + arg1].unk_040 = player->unk_22A;
    }
}

void func_8005DA30(Player *player, s16 arg1, s32 arg2, s8 arg3, s8 arg4) {
    if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E >= 3) || (player->unk_258[10 + arg2].unk_01C == 0))) {
        func_8005D898(player, arg1, arg2, arg3, arg4);
    } else if (player->unk_258[10 + arg2].unk_01E >= 3) {
        func_8005D898(player, arg1, arg2, arg3, arg4);
    }
}

UNUSED void func_8005DAD0(void) {

}

void func_8005DAD8(UnkPlayerStruct258* arg0, s16 arg1, s16 arg2, s16 arg3) {
    arg0->unk_038 = arg1;
    arg0->unk_03E = arg3;
    arg0->unk_040 = arg2;
}

void func_8005DAF4(Player *player, s16 arg1, s32 arg2, s32 arg3) {
    s32 stackPadding;
    s32 var_t1;
    s32 var_t3;
    f32 var_f2;
    f32 var_f12;
    f32 var_f14;
    s32 temp_v0;
    static s32 test = 8;

    var_t1 = 0x000000FF;
    temp_v0 = random_int(test);
    if ((temp_v0 == 0) || (temp_v0 == 4)) {
        var_f2  = player->boundingBoxCorners[2].cornerPos[0];
        var_f12 = player->boundingBoxCorners[2].cornerGroundY + 2.0f;
        var_f14 = player->boundingBoxCorners[2].cornerPos[2];
        var_t3 = 1;
        var_t1 = player->boundingBoxCorners[2].surfaceType;
    }
    if ((temp_v0 == 2) || (temp_v0 == 6)) {
        var_f2  = player->boundingBoxCorners[3].cornerPos[0];
        var_f12 = player->boundingBoxCorners[3].cornerGroundY + 2.0f;
        var_f14 = player->boundingBoxCorners[3].cornerPos[2];
        var_t3 = 0;
        var_t1 = player->boundingBoxCorners[3].surfaceType;
    }
    switch (var_t1) {
    case 2:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            if (((player->unk_094 / 18.0f) * 216.0f) >= 10.0f) {
                func_8005D794(player, &player->unk_258[10 + arg1], var_f2, var_f12, var_f14, (s8) var_t1, (s8) var_t3);
                func_8005D7D8(&player->unk_258[10 + arg1], 2, 0.46f);
                if ((gCurrentCourseId == COURSE_CHOCO_MOUNTAIN) || (gCurrentCourseId == COURSE_ROYAL_RACEWAY)) {
                    func_8005DAD8(&player->unk_258[10 + arg1], 1, 0, 0x0080);
                }
                if (gCurrentCourseId == COURSE_KALAMARI_DESERT) {
                    func_8005DAD8(&player->unk_258[10 + arg1], 7, 0, 0x0080);
                }
                if (gCurrentCourseId == COURSE_MOO_MOO_FARM) {
                    func_8005DAD8(&player->unk_258[10 + arg1], 8, 0, 0x0080);
                }
                if (gCurrentCourseId == COURSE_WARIO_STADIUM) {
                    func_8005DAD8(&player->unk_258[10 + arg1], 9, 0, 0x0080);
                }
                if (gCurrentCourseId == COURSE_YOSHI_VALLEY) {
                    func_8005DAD8(&player->unk_258[10 + arg1], 10, 0, 0x0080);
                }
                if (gCurrentCourseId == COURSE_DK_JUNGLE) {
                    func_8005DAD8(&player->unk_258[10 + arg1], 11, 0, 0x0080);
                }
                player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
            }
        } else if ((player->unk_258[10 + arg2].unk_01E > 0) && (((player->unk_094 / 18.0f) * 216.0f) >= 10.0f)) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f2, var_f12, var_f14, (s8) var_t1, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 2, 0.46f);
            if ((gCurrentCourseId == COURSE_CHOCO_MOUNTAIN) || (gCurrentCourseId == COURSE_ROYAL_RACEWAY)) {
                func_8005DAD8(&player->unk_258[10 + arg1], 1, 0, 0x0080);
            }
            if (gCurrentCourseId == COURSE_KALAMARI_DESERT) {
                func_8005DAD8(&player->unk_258[10 + arg1], 7, 0, 0x0080);
            }
            if (gCurrentCourseId == COURSE_MOO_MOO_FARM) {
                func_8005DAD8(&player->unk_258[10 + arg1], 8, 0, 0x0080);
            }
            if (gCurrentCourseId == COURSE_WARIO_STADIUM) {
                func_8005DAD8(&player->unk_258[10 + arg1], 9, 0, 0x0080);
            }
            if (gCurrentCourseId == COURSE_YOSHI_VALLEY) {
                func_8005DAD8(&player->unk_258[10 + arg1], 10, 0, 0x0080);
            }
            if (gCurrentCourseId == COURSE_DK_JUNGLE) {
                func_8005DAD8(&player->unk_258[10 + arg1], 11, 0, 0x0080);
            }
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    case 8:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            if (((player->unk_094 / 18.0f) * 216.0f) >= 10.0f) {
                func_8005D794(player, &player->unk_258[10 + arg1], var_f2, var_f12, var_f14, (s8) var_t1, (s8) var_t3);
                func_8005D7D8(&player->unk_258[10 + arg1], 3, 1.0f);
                func_8005D800(&player->unk_258[10 + arg1], 0x00FFFFFF, 0x00FF);
                player->unk_258[10 + arg1].unk_038 -= arg1 * 8;
                player->unk_258[10 + arg1].unk_03A -= arg1 * 8;
                player->unk_258[10 + arg1].unk_03C -= arg1 * 8;
            }
        } else if ((player->unk_258[10 + arg2].unk_01E > 0) && (((player->unk_094 / 18.0f) * 216.0f) >= 10.0f)) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f2, var_f12, var_f14, (s8) var_t1, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 3, 1.0f);
            func_8005D800(&player->unk_258[10 + arg1], 0x00FFFFFF, 0x00FF);
            player->unk_258[10 + arg1].unk_038 -= arg1 * 8;
            player->unk_258[10 + arg1].unk_03A -= arg1 * 8;
            player->unk_258[10 + arg1].unk_03C -= arg1 * 8;
        }
        player->unk_258[10 + arg1].unk_000[1] -= 1.5;
        break;
    case 7:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            if (((player->unk_094 / 18.0f) * 216.0f) >= 10.0f) {
                func_8005D794(player, &player->unk_258[10 + arg1], var_f2, var_f12, var_f14, (s8) var_t1, (s8) var_t3);
                func_8005D7D8(&player->unk_258[10 + arg1], 2, 0.46f);
                func_8005DAD8(&player->unk_258[10 + arg1], 2, 1, 0x00A8);
                player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
            }
        } else if ((player->unk_258[10 + arg2].unk_01E > 0) && (((player->unk_094 / 18.0f) * 216.0f) >= 10.0f)) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f2, var_f12, var_f14, (s8) var_t1, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 2, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 2, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    case 3:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            if (((player->unk_094 / 18.0f) * 216.0f) >= 10.0f) {
                func_8005D794(player, &player->unk_258[10 + arg1], var_f2, var_f12, var_f14, (s8) var_t1, (s8) var_t3);
                func_8005D7D8(&player->unk_258[10 + arg1], 2, 0.46f);
                func_8005DAD8(&player->unk_258[10 + arg1], 3, 1, 0x00A8);
                player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
            }
        } else if ((player->unk_258[10 + arg2].unk_01E > 0) && (((player->unk_094 / 18.0f) * 216.0f) >= 10.0f)) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f2, var_f12, var_f14, (s8) var_t1, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 2, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 3, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    case 10:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            if (((player->unk_094 / 18.0f) * 216.0f) >= 10.0f) {
                func_8005D794(player, &player->unk_258[10 + arg1], var_f2, var_f12, var_f14, (s8) var_t1, (s8) var_t3);
                func_8005D7D8(&player->unk_258[10 + arg1], 2, 0.46f);
                func_8005DAD8(&player->unk_258[10 + arg1], 4, 1, 0x00A8);
                player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
            }
        } else if ((player->unk_258[10 + arg2].unk_01E > 0) && (((player->unk_094 / 18.0f) * 216.0f) >= 10.0f)) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f2, var_f12, var_f14, (s8) var_t1, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 2, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 4, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    case 13:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            if (((player->unk_094 / 18.0f) * 216.0f) >= 10.0f) {
                func_8005D794(player, &player->unk_258[10 + arg1], var_f2, var_f12, var_f14, (s8) var_t1, (s8) var_t3);
                func_8005D7D8(&player->unk_258[10 + arg1], 2, 0.46f);
                func_8005DAD8(&player->unk_258[10 + arg1], 5, 1, 0x00A8);
                player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
            }
        } else if ((player->unk_258[10 + arg2].unk_01E > 0) && (((player->unk_094 / 18.0f) * 216.0f) >= 10.0f)) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f2, var_f12, var_f14, (s8) var_t1, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 2, 0.46f);
            func_8005D82C(&player->unk_258[10 + arg1], 0x00FFA54F, 0x00AF);
            func_8005DAD8(&player->unk_258[10 + arg1], 5, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    case 5:
    case 11:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            if (((player->unk_094 / 18.0f) * 216.0f) >= 10.0f) {
                func_8005D794(player, &player->unk_258[10 + arg1], var_f2, var_f12, var_f14, (s8) var_t1, (s8) var_t3);
                func_8005D7D8(&player->unk_258[10 + arg1], 2, 0.46f);
                func_8005DAD8(&player->unk_258[10 + arg1], 6, 1, 0x00A8);
                player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
            }
        } else if ((player->unk_258[10 + arg2].unk_01E > 0) && (((player->unk_094 / 18.0f) * 216.0f) >= 10.0f)) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f2, var_f12, var_f14, (s8) var_t1, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 2, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 6, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    case 1:
    case 4:
    case 6:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            if ((((player->unk_094 / 18.0f) * 216.0f) >= 30.0f) && ((((player->unk_0C0 / 182) > 0x14) || ((player->unk_0C0 / 182) < (-0x14)))) || ((player->unk_22C - player->unk_094) >= 0.04)) {
                func_8005D794(player, &player->unk_258[10 + arg1], var_f2, var_f12, var_f14, (s8) var_t1, (s8) var_t3);
                func_8005D7D8(&player->unk_258[10 + arg1], 2, 0.46f);
                func_8005DAD8(&player->unk_258[10 + arg1], 0, 0, 0x0080);
                player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
            }
        } else if ((player->unk_258[10 + arg2].unk_01E > 0) && ((((player->unk_094 / 18.0f) * 216.0f) >= 30.0f) && (((player->unk_0C0 / 182) >= 0x15) || ((player->unk_0C0 / 182) < -0x14)) || ((player->unk_22C - player->unk_094) >= 0.04))) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f2, var_f12, var_f14, (s8) var_t1, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 2, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 0, 0, 0x0080);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    default:
        break;
    }
}

void func_8005EA94(Player *player, s16 arg1, s32 arg2, s8 arg3) {
    s32 temp_v0;
    s32 var_t0;
    s32 var_t1;
    f32 var_f2;
    f32 var_f12;
    f32 var_f14;
    static s32 test = 10;

    var_t0 = 0x000000FF;
    temp_v0 = random_int(test);
    if ((temp_v0 == 0) || (temp_v0 == 8)) {
        if ((D_801652A0[arg3] - player->boundingBoxCorners[2].cornerGroundY) >= 3.5) {
            var_f2 = player->boundingBoxCorners[2].cornerPos[0];
            var_f12 = player->boundingBoxCorners[2].cornerGroundY + 2.0f;
            var_f14 = player->boundingBoxCorners[2].cornerPos[2];
            var_t1 = 1;
            var_t0 = 0;
        }
    }
    if ((temp_v0 == 2) || (temp_v0 == 6)) {
        if ((D_801652A0[arg3] - player->boundingBoxCorners[3].cornerGroundY) >= 3.5) {
            var_f2 = player->boundingBoxCorners[3].cornerPos[0];
            var_f12 = player->boundingBoxCorners[3].cornerGroundY + 2.0f;
            var_f14 = player->boundingBoxCorners[3].cornerPos[2];
            var_t1 = 0;
            var_t0 = 0;
        }
    }
    if (1) {}
    if (var_t0 == 0) {
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            if (((player->unk_094 / 18.0f) * 216.0f) >= 10.0f) {
                func_8005D794(player, &player->unk_258[10 + arg1], var_f2, var_f12, var_f14, var_t0, var_t1);
                func_8005D7D8(&player->unk_258[10 + arg1], 9, 0.8f);
                func_8005D800(&player->unk_258[10 + arg1], 0x00FFFFFF, 0x00AF);
            }
        } else if ((player->unk_258[10 + arg2].unk_01E > 0) && (((player->unk_094 / 18.0f) * 216.0f) >= 10.0f)) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f2, var_f12, var_f14, var_t0, var_t1);
            func_8005D7D8(&player->unk_258[10 + arg1], 9, 0.8f);
            func_8005D800(&player->unk_258[10 + arg1], 0x00FFFFFF, 0x00AF);
        }
    }
}

void func_8005ED48(Player *player, s16 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_t2;
    s32 var_t3;
    f32 var_f0;
    f32 var_f2;
    f32 var_f12;
    static s32 test = 8;

    var_t2 = 0x000000FF;
    temp_v0 = random_int(test);
    if ((temp_v0 == 2) || (temp_v0 == 4)) {
        var_f0 = player->boundingBoxCorners[2].cornerPos[0];
        var_f2 = player->boundingBoxCorners[2].cornerGroundY + 2.0f;
        var_f12 = player->boundingBoxCorners[2].cornerPos[2];
        var_t3 = 1;
        var_t2 = player->boundingBoxCorners[2].surfaceType;
    }
    if ((temp_v0 == 0) || (temp_v0 == 6)) {
        var_f0 = player->boundingBoxCorners[3].cornerPos[0];
        var_f2 = player->boundingBoxCorners[3].cornerGroundY + 2.0f;
        var_f12 = player->boundingBoxCorners[3].cornerPos[2];
        var_t3 = 0;
        var_t2 = player->boundingBoxCorners[3].surfaceType;
    }
    switch (var_t2) {
    case 2:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, var_t2, var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 5, 0.46f);
            if ((gCurrentCourseId == COURSE_CHOCO_MOUNTAIN) || (gCurrentCourseId == COURSE_ROYAL_RACEWAY)) {
                func_8005DAD8(&player->unk_258[10 + arg1], 1, 0, 0x0080);
            }
            if (gCurrentCourseId == COURSE_KALAMARI_DESERT) {
                func_8005DAD8(&player->unk_258[10 + arg1], 7, 0, 0x0080);
            }
            if (gCurrentCourseId == COURSE_MOO_MOO_FARM) {
                func_8005DAD8(&player->unk_258[10 + arg1], 8, 0, 0x0080);
            }
            if (gCurrentCourseId == COURSE_WARIO_STADIUM) {
                func_8005DAD8(&player->unk_258[10 + arg1], 9, 0, 0x0080);
            }
            if (gCurrentCourseId == COURSE_YOSHI_VALLEY) {
                func_8005DAD8(&player->unk_258[10 + arg1], 10, 0, 0x0080);
            }
            if (gCurrentCourseId == COURSE_DK_JUNGLE) {
                func_8005DAD8(&player->unk_258[10 + arg1], 11, 0, 0x0080);
            }
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        } else if (player->unk_258[10 + arg2].unk_01E > 0) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, var_t2, var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 5, 0.46f);
            if ((gCurrentCourseId == COURSE_CHOCO_MOUNTAIN) || (gCurrentCourseId == COURSE_ROYAL_RACEWAY)) {
                func_8005DAD8(&player->unk_258[10 + arg1], 1, 0, 0x0080);
            }
            if (gCurrentCourseId == COURSE_KALAMARI_DESERT) {
                func_8005DAD8(&player->unk_258[10 + arg1], 7, 0, 0x0080);
            }
            if (gCurrentCourseId == COURSE_MOO_MOO_FARM) {
                func_8005DAD8(&player->unk_258[10 + arg1], 8, 0, 0x0080);
            }
            if (gCurrentCourseId == COURSE_WARIO_STADIUM) {
                func_8005DAD8(&player->unk_258[10 + arg1], 9, 0, 0x0080);
            }
            if (gCurrentCourseId == COURSE_YOSHI_VALLEY) {
                func_8005DAD8(&player->unk_258[10 + arg1], 0x000A, 0, 0x0080);
            }
            if (gCurrentCourseId == COURSE_DK_JUNGLE) {
                func_8005DAD8(&player->unk_258[10 + arg1], 0x000B, 0, 0x0080);
            }
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    case 8:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, (s8) var_t2, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 5, 0.1f);
            func_8005D800(&player->unk_258[10 + arg1], 0x00FFFFFF, 0x00FF);
            player->unk_258[10 + arg1].unk_038 -= arg1 * 8;
            player->unk_258[10 + arg1].unk_03A -= arg1 * 8;
            player->unk_258[10 + arg1].unk_03C -= arg1 * 8;
        } else if (player->unk_258[10 + arg2].unk_01E > 0) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, (s8) var_t2, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 5, 0.1f);
            func_8005D800(&player->unk_258[10 + arg1], 0x00FFFFFF, 0x00FF);
            player->unk_258[10 + arg1].unk_038 -= arg1 * 8;
            player->unk_258[10 + arg1].unk_03A -= arg1 * 8;
            player->unk_258[10 + arg1].unk_03C -= arg1 * 8;
        }
        player->unk_258[10 + arg1].unk_000[1] -= 1.5;
        break;
    case 7:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, (s8) var_t2, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 5, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 2, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        } else if (player->unk_258[10 + arg2].unk_01E > 0) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, (s8) var_t2, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 5, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 2, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    case 3:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, (s8) var_t2, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 5, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 3, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        } else if (player->unk_258[10 + arg2].unk_01E > 0) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, (s8) var_t2, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 5, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 3, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    case 10:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, (s8) var_t2, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 5, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 4, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        } else if (player->unk_258[10 + arg2].unk_01E > 0) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, (s8) var_t2, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 5, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 4, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    case 13:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, (s8) var_t2, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 5, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 5, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        } else if (player->unk_258[10 + arg2].unk_01E > 0) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, (s8) var_t2, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 5, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 5, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    case 5:
    case 11:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, (s8) var_t2, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 5, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 6, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        } else if (player->unk_258[10 + arg2].unk_01E > 0) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, (s8) var_t2, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 5, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 6, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    case 1:
    case 4:
    case 6:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, (s8) var_t2, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 5, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 0, 0, 0x0080);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        } else if (player->unk_258[10 + arg2].unk_01E > 0) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, (s8) var_t2, (s8) var_t3);
            func_8005D7D8(&player->unk_258[10 + arg1], 5, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 0, 0, 0x0080);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    default:
        break;
    }
}

#ifdef NON_MATCHING
// Its close, there's some register allocation issue though
// Permuter hasn't found anything
// https://decomp.me/scratch/WjMqd

void func_8005F90C(Player *player, s16 arg1, s32 arg2, s32 arg3) {
    s32 var_t1;
    u8 var_v0;
    f32 var_f0;
    f32 var_f2;
    f32 var_f12;

    var_t1 = 0;
    if ((player->effects & 0x80) == 0x80) {
        var_f0 = player->pos[0];
        var_f2 = player->pos[1] - player->boundingBoxSize;
        var_f12 = player->pos[2];
        var_t1 = 1;
        var_v0 = player->boundingBoxCorners[2].surfaceType;
    } else {
        var_f0 = player->pos[0];
        var_f2 = player->pos[1] - player->boundingBoxSize;
        var_f12 = player->pos[2];
        var_v0 = player->boundingBoxCorners[3].surfaceType;
    }
    switch (var_v0) {
    case 2:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, var_v0, var_t1);
            func_8005D7D8(&player->unk_258[10 + arg1], 4, 0.46f);
            if ((gCurrentCourseId == 1) || (gCurrentCourseId == 7)) {
                func_8005DAD8(&player->unk_258[10 + arg1], 1, 0, 0x0080);
            }
            if (gCurrentCourseId == 0x000B) {
                func_8005DAD8(&player->unk_258[10 + arg1], 7, 0, 0x0080);
            }
            if (gCurrentCourseId == 9) {
                func_8005DAD8(&player->unk_258[10 + arg1], 8, 0, 0x0080);
            }
            if (gCurrentCourseId == 0x000E) {
                func_8005DAD8(&player->unk_258[10 + arg1], 9, 0, 0x0080);
            }
            if (gCurrentCourseId == 4) {
                func_8005DAD8(&player->unk_258[10 + arg1], 0x000A, 0, 0x0080);
            }
            if (gCurrentCourseId == 0x0012) {
                func_8005DAD8(&player->unk_258[10 + arg1], 0x000B, 0, 0x0080);
            }
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        } else if (player->unk_258[10 + arg2].unk_01E > 0) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, var_v0, var_t1);
            func_8005D7D8(&player->unk_258[10 + arg1], 4, 0.46f);
            if ((gCurrentCourseId == 1) || (gCurrentCourseId == 7)) {
                func_8005DAD8(&player->unk_258[10 + arg1], 1, 0, 0x0080);
            }
            if (gCurrentCourseId == 0x000B) {
                func_8005DAD8(&player->unk_258[10 + arg1], 7, 0, 0x0080);
            }
            if (gCurrentCourseId == 9) {
                func_8005DAD8(&player->unk_258[10 + arg1], 8, 0, 0x0080);
            }
            if (gCurrentCourseId == 0x000E) {
                func_8005DAD8(&player->unk_258[10 + arg1], 9, 0, 0x0080);
            }
            if (gCurrentCourseId == 4) {
                func_8005DAD8(&player->unk_258[10 + arg1], 0x000A, 0, 0x0080);
            }
            if (gCurrentCourseId == 0x0012) {
                func_8005DAD8(&player->unk_258[10 + arg1], 0x000B, 0, 0x0080);
            }
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    case 8:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, var_v0, var_t1);
            func_8005D7D8(&player->unk_258[10 + arg1], 4, 0.1f);
            func_8005D800(&player->unk_258[10 + arg1], 0x00FFFFFF, 0x00FF);
            player->unk_258[10 + arg1].unk_038 -= arg1 * 8;
            player->unk_258[10 + arg1].unk_03A -= arg1 * 8;
            player->unk_258[10 + arg1].unk_03C -= arg1 * 8;
        } else if (player->unk_258[10 + arg2].unk_01E > 0) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, var_v0, var_t1);
            func_8005D7D8(&player->unk_258[10 + arg1], 4, 0.1f);
            func_8005D800(&player->unk_258[10 + arg1], 0x00FFFFFF, 0x00FF);
            player->unk_258[10 + arg1].unk_038 -= arg1 * 8;
            player->unk_258[10 + arg1].unk_03A -= arg1 * 8;
            player->unk_258[10 + arg1].unk_03C -= arg1 * 8;
        }
        player->unk_258[10 + arg1].unk_000[1] -= 1.5;
        break;
    case 7:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, var_v0, var_t1);
            func_8005D7D8(&player->unk_258[10 + arg1], 4, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 2, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        } else if (player->unk_258[10 + arg2].unk_01E > 0) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, var_v0, var_t1);
            func_8005D7D8(&player->unk_258[10 + arg1], 4, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 2, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    case 3:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, var_v0, var_t1);
            func_8005D7D8(&player->unk_258[10 + arg1], 4, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 3, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        } else if (player->unk_258[10 + arg2].unk_01E > 0) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, var_v0, var_t1);
            func_8005D7D8(&player->unk_258[10 + arg1], 4, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 3, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    case 10:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, var_v0, var_t1);
            func_8005D7D8(&player->unk_258[10 + arg1], 4, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 4, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        } else if (player->unk_258[10 + arg2].unk_01E > 0) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, var_v0, var_t1);
            func_8005D7D8(&player->unk_258[10 + arg1], 4, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 4, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    case 13:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, var_v0, var_t1);
            func_8005D7D8(&player->unk_258[10 + arg1], 4, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 5, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        } else if (player->unk_258[10 + arg2].unk_01E > 0) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, var_v0, var_t1);
            func_8005D7D8(&player->unk_258[10 + arg1], 4, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 5, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    case 5:
    case 11:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, var_v0, var_t1);
            func_8005D7D8(&player->unk_258[10 + arg1], 4, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 6, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        } else if (player->unk_258[10 + arg2].unk_01E > 0) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, var_v0, var_t1);
            func_8005D7D8(&player->unk_258[10 + arg1], 4, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 6, 1, 0x00A8);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    case 1:
    case 4:
    case 6:
        if ((arg1 == 0) && ((player->unk_258[10 + arg2].unk_01E > 0) || (player->unk_258[10 + arg2].unk_01C == 0))) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, var_v0, var_t1);
            func_8005D7D8(&player->unk_258[10 + arg1], 4, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 0, 0, 0x0080);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        } else if (player->unk_258[10 + arg2].unk_01E > 0) {
            func_8005D794(player, &player->unk_258[10 + arg1], var_f0, var_f2, var_f12, var_v0, var_t1);
            func_8005D7D8(&player->unk_258[10 + arg1], 4, 0.46f);
            func_8005DAD8(&player->unk_258[10 + arg1], 0, 0, 0x0080);
            player->unk_258[10 + arg1].unk_03A = random_int(0x0010U);
        }
        break;
    default:
        break;
    }
}
#else
GLOBAL_ASM("asm/non_matchings/code_80057C60/func_8005F90C.s")
#endif

void func_80060504(Player *player, s16 arg1, s32 arg2, s32 arg3) {
    s32 thing1;
    s16 thing2;
    s32 thing3;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 var_f0;
    s32 var_v0;
    s32 temp_v0;
    s32 test;

    if ((player->unk_044 & 0x20) == 0x20) {
        var_v0 = 5;
    } else {
        var_v0 = 0xE;
    }
    temp_v0 = random_int(var_v0);
    if ((temp_v0 == 1) || (temp_v0 == 2) || (temp_v0 == 3)) {
        if ((arg1 == 0) && ((player->unk_258[arg2].unk_01E > 0) || (player->unk_258[arg2].unk_01C == 0))) {
            sp4C = player->pos[1] - 2.5;
            sp48 = player->pos[2];
            sp50 = player->pos[0];
            func_8005D794(player, &player->unk_258[arg1], sp50, sp4C, sp48, 0, 0);
            func_8005D7D8(&player->unk_258[arg1], 1, 0.5f);
        } else if (player->unk_258[arg2].unk_01E > 0) {
            sp4C = player->pos[1] - 2.5;
            sp48 = player->pos[2];
            sp50 = player->pos[0];
            func_8005D794(player, &player->unk_258[arg1], sp50, sp4C, sp48, 0, 0);
            func_8005D7D8(&player->unk_258[arg1], 1, 0.5f);
        }
    }
    player->unk_258[arg1].unk_024 = 0.0f;
    if ((player->unk_044 & 0x20) == 0x20) {
        player->unk_258[arg1].unk_040 = 0;
        if ((player->effects & 0x2000) == 0x2000) {
            func_8005D800(&player->unk_258[arg1], 0x00FFFF00, 0x0080);
            player->unk_258[arg1].unk_038 = 1;
        } else {
            func_8005D800(&player->unk_258[arg1], 0x00FFFFFF, 0x0070);
            player->unk_258[arg1].unk_038 = 0;
        }
    } else {
        player->unk_258[arg1].unk_040 = 1;
        if ((player->effects & 0x2000) == 0x2000) {
            func_8005D800(&player->unk_258[arg1], 0x00FFFF00, 0x0080);
            player->unk_258[arg1].unk_038 = 1;
        } else {
            func_8005D800(&player->unk_258[arg1], 0x00FFFFFF, 0x0070);
            player->unk_258[arg1].unk_038 = 0;
        }
    }
    thing2 = (player->unk_258[arg1].unk_020 - (player->unk_0C0 / 2));
    if (player->unk_258[arg1].unk_040 == 0) {
        var_f0 = -((player->unk_098 / 3000.0f) + 0.1);
    } else {
        var_f0 = -((player->unk_098 / 5000.0f) + 0.1);
    }
    func_80062B18(&sp50, &sp4C, &sp48, 0.0f, 4.5f, (player->unk_258[arg1].unk_01E * var_f0) + -5.5, -thing2, -player->unk_206 * 2);
    player->unk_258[arg1].unk_000[0] = player->pos[0] + sp50;
    sp4C = sp4C + (player->pos[1] - player->boundingBoxSize);
    player->unk_258[arg1].unk_000[2] = player->pos[2] + sp48;
    player->unk_258[arg1].unk_000[1] = player->unk_258[arg1].unk_024 + sp4C;
    player->unk_258[arg1].unk_010 = 0;
}

void func_800608E0(Player *player, s16 arg1, UNUSED s32 arg2, s8 arg3, UNUSED s8 arg4) {
    f32 var_f0;
    f32 sp50;
    f32 sp4C;
    f32 sp48;

    var_f0 = 8.0f - (D_801652A0[arg3] - player->pos[1]);
    if ((f64) var_f0 <= 0.0) {
        var_f0 = 0.0f;
    }
    sp4C = (D_801652A0[arg3] - player->pos[1]) - 3.0f;
    if ((player->unk_0DE & 1) && (gCurrentCourseId != COURSE_KOOPA_BEACH)) {
        var_f0 = 2.5f;
        sp4C = (f32) ((f64) (D_801652A0[arg3] - player->pos[1]) + 0.1);
    }
    func_8005D794(player, &player->unk_258[arg1], 0.0f, 0.0f, 0.0f, (s8) 0, (s8) 0);
    func_8005D7D8(&player->unk_258[arg1], 3, var_f0);
    if ((gCurrentCourseId == COURSE_BOWSER_CASTLE) || (gCurrentCourseId == COURSE_BIG_DONUT)) {
        func_8005D800(&player->unk_258[arg1], 0, 0x00AF);
    } else {
        func_8005D800(&player->unk_258[arg1], 0x00FFFFFF, 0x00CF);
    }
    func_80062B18(&sp50, &sp4C, &sp48, 0.0f, sp4C, ((-player->unk_258[arg1].unk_01E * (player->unk_094 / 18.0f) * 216.0f) / 10.0f) + -4.0f, -player->unk_258[arg1].unk_020, -player->unk_206 * 2);
    player->unk_258[arg1].unk_000[0] = player->pos[0] + sp50;
    player->unk_258[arg1].unk_000[2] = player->pos[2] + sp48;
    player->unk_258[arg1].unk_000[1] = player->pos[1] + sp4C;
}

void func_80060B14(Player *player, s16 arg1, s32 arg2, s8 arg3, s8 arg4) {
    if ((gCurrentCourseId != COURSE_SKYSCRAPER) && (gCurrentCourseId != COURSE_RAINBOW_ROAD)) {
        if ((arg1 == 0) && ((player->unk_258[arg2].unk_01E > 0) || (player->unk_258[arg2].unk_01C == 0))) {
            func_800608E0(player, arg1, arg2, arg3, arg4);
        } else if (player->unk_258[arg2].unk_01E > 0) {
            func_800608E0(player, arg1, arg2, arg3, arg4);
        }
    }
}

void func_80060BCC(Player *player, s16 arg1, s32 arg2, UNUSED s32 arg3) {
    s32 sp54;
    UNUSED s32 pad;
    s32 sp4C;
    f32 sp48;
    f32 sp44;

    if (gCurrentCourseId == COURSE_SKYSCRAPER) return;
    if (gCurrentCourseId == COURSE_RAINBOW_ROAD) return;
    sp54 = random_int(0x0168U) - 0xB4;
    sp4C = random_int(6U);
    sp44 = random_int(6U);
    sp48 = random_int(3U);
    if (player != gPlayerOne) return;
    if ((arg1 == 0) && ((player->unk_258[arg2 + 10].unk_01E > 0) || (player->unk_258[arg2 + 10].unk_01C == 0))) {
        func_8005D794(player, &player->unk_258[arg1 + 10], 0.0f, 0.0f, 0.0f, (s8) 0, (s8) 0);
        func_8005D7D8(&player->unk_258[arg1 + 10], 0x0B, 0.4f);
        func_8005D800(&player->unk_258[arg1 + 10], 0x00FFFFFF, 0x00FF);
        player->unk_258[arg1 + 10].unk_000[2] = player->pos[2] + (coss(sp54 * 0xB6) * -1.8);
        player->unk_258[arg1 + 10].unk_000[0] = player->pos[0] + (sins(sp54 * 0xB6) * -1.8);
        player->unk_258[arg1 + 10].unk_000[1] = (player->pos[1] - player->boundingBoxSize) + sp4C + 2.0f;
        player->unk_258[arg1 + 10].unk_018 = sp44 + 1.0f;
        player->unk_258[arg1 + 10].unk_00C = (sp48 + 2.0f) / 10.0f;
    }
    else if (player->unk_258[arg2 + 10].unk_01E > 0) {
        func_8005D794(player, &player->unk_258[arg1 + 10], 0.0f, 0.0f, 0.0f, (s8) 0, (s8) 0);
        func_8005D7D8(&player->unk_258[arg1 + 10], 0x0B, 0.4f);
        func_8005D800(&player->unk_258[arg1 + 10], 0x00FFFFFF, 0x00FF);
        player->unk_258[arg1 + 10].unk_000[2] = player->pos[2] + (coss(sp54 * 0xB6) * -1.8);
        player->unk_258[arg1 + 10].unk_000[0] = player->pos[0] + (sins(sp54 * 0xB6) * -1.8);
        player->unk_258[arg1 + 10].unk_000[1] = (player->pos[1] - player->boundingBoxSize) + sp4C + 2.0f;
        player->unk_258[arg1 + 10].unk_018 = sp44 + 1.0f;
        player->unk_258[arg1 + 10].unk_00C = (sp48 + 2.0f) / 10.0f;
    }
}

void func_80060F50(Player* player, s16 arg1, UNUSED s8 arg2, s8 arg3, UNUSED s8 arg4) {
    func_8005D794(player, &player->unk_258[arg1], 0.0f, 0.0f, 0.0f, 0, 0);
    func_8005D7D8(&player->unk_258[arg1], 5, 4.0f);

    if ((gCurrentCourseId == COURSE_BOWSER_CASTLE) || (gCurrentCourseId == COURSE_BIG_DONUT)) {
        func_8005D800(&player->unk_258[arg1], 0xFF0000, 0xFF);
    } else {
        func_8005D800(&player->unk_258[arg1], 0xFFFFFF, 0xFF);
    }

    player->unk_258[arg1].unk_000[2] = player->pos[2] + (coss(player->unk_258[arg1].unk_020) * -5.8);
    player->unk_258[arg1].unk_000[0] = player->pos[0] + (sins(player->unk_258[arg1].unk_020) * -5.8);
    player->unk_258[arg1].unk_000[1] = D_801652A0[arg3];
    player->unk_0DE &= ~0x0008;
}

void func_80061094(Player* player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3, UNUSED s8 arg4) {
    if (arg1 == 0) {
        func_8005D794(player, &player->unk_258[arg1], 0.0f, 0.0f, 0.0f, 0, 0);
        func_8005D7D8(&player->unk_258[arg1], 6, 3.8f);
        func_8005D800(&player->unk_258[arg1], 0xFFFFFF, 0xFF);
        player->unk_258[arg1].unk_038 = 0;
        player->unk_258[arg1].unk_03A = 0;
        player->unk_258[arg1].unk_03C = 0;
    }
}

void func_80061130(Player* player, s16 arg1, UNUSED s32 arg2, UNUSED s8 arg3, UNUSED s8 arg4) {
    func_8005D794(player, &player->unk_258[arg1], 0.0f, 0.0f, 0.0f, 0, 0);
    func_8005D7D8(&player->unk_258[arg1], 7, 0.6f);
    func_8005D800(&player->unk_258[arg1], 0xFFFFFF, 0xD0);

    player->unk_258[arg1].unk_000[2] = player->pos[2] +(coss(player->unk_258[arg1].unk_020) * 6.0f);
    player->unk_258[arg1].unk_000[0] = player->pos[0] + (sins(player->unk_258[arg1].unk_020) * 6.0f);
    player->unk_258[arg1].unk_000[1] = player->pos[1] - 5.0f;
    player->unk_258[arg1].unk_040 = 0;
    player->unk_258[arg1].unk_024 = 0.0f;
}

void func_80061224(Player *player, s16 arg1, s32 arg2, s8 arg3, s8 arg4) {
    if ((arg1 == 0) && ((player->unk_258[arg2].unk_01E > 0) || (player->unk_258[arg1].unk_01C == 0))) {
        func_80061130(player, arg1, arg2, arg3, arg4);
    }
    else if (player->unk_258[arg2].unk_01E >= 2) {
        func_80061130(player, arg1, arg2, arg3, arg4);
        if (arg1 == 9) {
            player->unk_044 &= ~0x0200;
        }
    }
}

void func_800612F8(Player *player, UNUSED s32 arg1, UNUSED s32 arg2, UNUSED s8 arg3) {
    s32 var_s2;

    for (var_s2 = 0; var_s2 < 10; var_s2++){
        player->unk_258[0x1E + var_s2].unk_01C = 1;
        player->unk_258[0x1E + var_s2].unk_028 = player->pos[1] + 5.0f;
        player->unk_258[0x1E + var_s2].unk_020 = (0x1C70 * var_s2) - player->unk_02C[1];
        player->unk_258[0x1E + var_s2].unk_024 = (random_int(0x0064U) / 100.0f) + 1.5;
        player->unk_258[0x1E + var_s2].unk_03A = 0;
        player->unk_258[0x1E + var_s2].unk_012 = 1;
        player->unk_258[0x1E + var_s2].unk_01E = 0;
        player->unk_258[0x1E + var_s2].unk_03E = 0x00FF;
        player->unk_258[0x1E + var_s2].unk_000[2] = player->pos[2];
        player->unk_258[0x1E + var_s2].unk_000[0] = player->pos[0];
    }
    player->unk_046 &= ~0x0008;
}

void func_80061430(Player *player, UNUSED s32 arg1, UNUSED s32 arg2, UNUSED s8 arg3) {
    s32 var_s2;

    for (var_s2 = 0; var_s2 < 7; var_s2++){
        player->unk_258[0x1E + var_s2].unk_01C = 1;
        player->unk_258[0x1E + var_s2].unk_028 = player->pos[1] - 4.0f;
        player->unk_258[0x1E + var_s2].unk_020 = (0x1C70 * var_s2) - player->unk_02C[1];
        // ???
        player->unk_258[0x1E + var_s2].unk_024 = (random_int(0x0064U) / 100.0f) + 1.9;
        player->unk_258[0x1E + var_s2].unk_024 = (random_int(0x0064U) / 100.0f) + 1.5;
        player->unk_258[0x1E + var_s2].unk_03A = 0;
        player->unk_258[0x1E + var_s2].unk_012 = 9;
        player->unk_258[0x1E + var_s2].unk_01E = 0;
        player->unk_258[0x1E + var_s2].unk_03E = 0x00FF;
        player->unk_258[0x1E + var_s2].unk_000[2] = player->pos[2];
        player->unk_258[0x1E + var_s2].unk_000[0] = player->pos[0];
    }
    player->unk_044 &= ~0x1000;
}

void func_800615AC(Player *player, s16 arg1, s32 arg2, s8 arg3) {
    s32 test = 2;
    s32 stackPadding0;
    s32 stackPadding1;
    f32 temp_f0;
    f32 sp28[10] = { -182.0f, 182.0f, 364.0f, -364.0f, 546.0f, -546.0f, 728.0f, -728.0f, 910.0f, -910.0f };

    if (random_int(3U) == 2.0f) {
        player->unk_258[0x1E + arg1].unk_01C = 1;
        player->unk_258[0x1E + arg1].unk_000[0] = player->pos[0];
        player->unk_258[0x1E + arg1].unk_000[2] = player->pos[2];
        player->unk_258[0x1E + arg1].unk_020 = -player->unk_02C[1] + sp28[arg1];
        player->unk_258[0x1E + arg1].unk_018 = random_int(1U) + 2.0f;
        temp_f0 = random_int(4U);
        temp_f0 -= test;
        player->unk_258[0x1E + arg1].unk_014 = temp_f0;
        player->unk_258[0x1E + arg1].unk_000[1] = player->pos[1] + temp_f0;
        player->unk_258[0x1E + arg1].unk_00C = 0.15f;
        player->unk_258[0x1E + arg1].unk_012 = 5;
        player->unk_258[0x1E + arg1].unk_01E = 0;
        player->unk_258[0x1E + arg1].unk_03E = 0x00FF;
        player->unk_258[0x1E + arg1].unk_038 = 0;
    }
}

void func_80061754(Player *player, s16 arg1, UNUSED s32 arg2, UNUSED s32 arg3, UNUSED s32 arg4) {
    s32 sp54;
    s16 temp_s1;
    s32 sp4C;
    f32 sp48;
    f32 sp44;

    sp54 = random_int(0x0168U) - 0xB4;
    sp4C = random_int(6U);
    temp_s1 = random_int(0x0060U);
    sp44 = random_int(6U);
    sp48 = random_int(2U);
    func_8005D794(player, &player->unk_258[0x1E + arg1], 0.0f, 0.0f, 0.0f, (s8) 0, (s8) 0);
    func_8005D7D8(&player->unk_258[0x1E + arg1], 6, 1.0f);
    if ((player->effects & 0x02000000) || ((player->effects) & 0x01000000) || ((player->effects) & 0x400) || ((player->effects) & 0x80000000)) {
        func_8005D800(&player->unk_258[0x1E + arg1], 0x00FFFFFF, 0x00A0);
        player->unk_258[0x1E + arg1].unk_038 -= temp_s1;
        player->unk_258[0x1E + arg1].unk_03A -= temp_s1;
        player->unk_258[0x1E + arg1].unk_03C -= temp_s1;
    } else {
        func_8005D800(&player->unk_258[0x1E + arg1], 0, 0x00A0);
        player->unk_258[0x1E + arg1].unk_038 += temp_s1;
        player->unk_258[0x1E + arg1].unk_03A += temp_s1;
        player->unk_258[0x1E + arg1].unk_03C += temp_s1;
    }
    player->unk_258[0x1E + arg1].unk_000[2] = player->pos[2] + (coss(sp54 * 0xB6) * -5.0f);
    player->unk_258[0x1E + arg1].unk_000[0] = player->pos[0] + (sins(sp54 * 0xB6) * -5.0f);
    player->unk_258[0x1E + arg1].unk_000[1] = (player->pos[1] - player->boundingBoxSize) + sp4C + 2.0f;
    player->unk_258[0x1E + arg1].unk_018 = sp44 + 1.0f;
    player->unk_258[0x1E + arg1].unk_00C = sp48 + 1.0f;
}

void func_8006199C(Player *player, s16 arg1, s32 arg2, s8 arg3, s8 arg4) {
    if ((arg1 == 0) && ((player->unk_258[0x1E + arg2].unk_01E > 0) || (player->unk_258[0x1E + arg2].unk_01C == 0))) {
        func_80061754(player, arg1, arg2, (s32) arg3, arg4);
    } else if (player->unk_258[0x1E + arg2].unk_01E > 0) {
        func_80061754(player, arg1, arg2, (s32) arg3, arg4);
    }
}

void func_80061A34(Player *player, s16 arg1, s32 arg2, UNUSED s8 arg3) {
    s32 sp54;
    UNUSED s32 stackPadding0;
    s32 sp4C;
    f32 sp48;
    UNUSED s32 stackPadding1;

    sp54 = random_int(0x0168U) - 0xB4;
    sp4C = random_int(6U);
    random_int(6U);
    sp48 = (f32) random_int(3U);
    if ((arg1 == 0) && ((player->unk_258[0x1E + arg2].unk_01E > 0) || (player->unk_258[0x1E + arg2].unk_01C == 0))) {
        func_8005D794(player, &player->unk_258[0x1E + arg1], 0.0f, 0.0f, 0.0f, (s8) 0, (s8) 0);
        func_8005D7D8(&player->unk_258[0x1E + arg1], 7, 1.0f);
        func_8005D800(&player->unk_258[0x1E + arg1], 0x00FFFFFF, 0x00FF);
        player->unk_258[0x1E + arg1].unk_000[2] = player->pos[2] + (coss(sp54 * 0xB6) * -2.0);
        player->unk_258[0x1E + arg1].unk_000[0] = player->pos[0] + (sins(sp54 * 0xB6) * -2.0);
        player->unk_258[0x1E + arg1].unk_000[1] = (player->pos[1] - player->boundingBoxSize) + sp4C + 2.0f;
        player->unk_258[0x1E + arg1].unk_00C = (sp48 + 2.0f) / 10.0f;
    } else if (player->unk_258[0x1E + arg2].unk_01E > 0) {
        func_8005D794(player, &player->unk_258[0x1E + arg1], 0.0f, 0.0f, 0.0f, (s8) 0, (s8) 0);
        func_8005D7D8(&player->unk_258[0x1E + arg1], 7, 1.0f);
        func_8005D800(&player->unk_258[0x1E + arg1], 0x00FFFFFF, 0x00FF);
        player->unk_258[0x1E + arg1].unk_000[2] = player->pos[2] + (coss(sp54 * 0xB6) * -2.0);
        player->unk_258[0x1E + arg1].unk_000[0] = player->pos[0] + (sins(sp54 * 0xB6) * -2.0);
        player->unk_258[0x1E + arg1].unk_000[1] = (player->pos[1] - player->boundingBoxSize) + (f32) sp4C + 2.0f;
        player->unk_258[0x1E + arg1].unk_00C = (sp48 + 2.0f) / 10.0f;
    }
}

void func_80061D4C(Player *player, s16 arg1, s32 arg2, s8 arg3) {
    s32 test = 2;
    s32 stackPadding0;
    s32 stackPadding1;
    s32 stackPadding2;
    f32 sp20[10] = { -182.0f, 182.0f, 364.0f, -364.0f, 546.0f, -546.0f, 728.0f, -728.0f, 910.0f, -910.0f };

    if (random_int(3U) == 2.0f) {
        player->unk_258[0x1E + arg1].unk_01C = 1;
        player->unk_258[0x1E + arg1].unk_000[0] = player->pos[0];
        player->unk_258[0x1E + arg1].unk_000[1] = player->pos[1] + 2.0f;
        player->unk_258[0x1E + arg1].unk_000[2] = player->pos[2];
        player->unk_258[0x1E + arg1].unk_020 = -player->unk_02C[1] + sp20[arg1];
        player->unk_258[0x1E + arg1].unk_018 = random_int(3U) + 2.0f;
        player->unk_258[0x1E + arg1].unk_014 = random_int(4U);
        player->unk_258[0x1E + arg1].unk_014 -= test;
        player->unk_258[0x1E + arg1].unk_00C = 0.4f;
        player->unk_258[0x1E + arg1].unk_012 = 2;
        player->unk_258[0x1E + arg1].unk_01E = 0;
        player->unk_258[0x1E + arg1].unk_03E = 0x00FF;
    }
}

void func_80061EF4(Player *player, s16 arg1, s32 arg2, UNUSED s8 arg3) {
    UNUSED s32 stackPadding0;
    s32 var_t0 = 0x000000FF;
    s32 var_t1;
    s32 temp_v1;
    f32 var_f2;
    UNUSED s32 stackPadding1;

    if(1) {};
    temp_v1 = random_int(8U) & 1;
    if (temp_v1 == 1) {
        var_t1 = 1;
        var_t0 = 0;
        var_f2 = player->pos[1];
    }
    if (temp_v1 == 0) {
        var_t1 = 0;
        var_t0 = 0;
        var_f2 = player->pos[1];
    }
    if (var_t0 == 0) {
        if ((arg1 == 0) && ((player->unk_258[0x1E + arg2].unk_01E > 0) || (player->unk_258[0x1E + arg2].unk_01C == 0))) {
            func_8005D794(player, &player->unk_258[0x1E + arg1], 0.0f, var_f2, 0.0f, (s8) var_t0, (s8) var_t1);
            func_8005D7D8(&player->unk_258[0x1E + arg1], 3, 0.5f);
            func_8005D800(&player->unk_258[0x1E + arg1], 0x00FFFFFF, 0x0060);
            player->unk_258[0x1E + arg1].unk_020 = 0;
            if (player->unk_258[0x1E + arg1].unk_010 == 1) {
                player->unk_258[0x1E + arg1].unk_020 += 0x888;
            } else {
                player->unk_258[0x1E + arg1].unk_020 -= 0x888;
            }
            player->unk_258[0x1E + arg1].unk_000[2] = player->pos[2] + (coss(player->unk_258[0x1E + arg1].unk_020 - player->unk_02C[1] - player->unk_0C0) * 5.0f);
            player->unk_258[0x1E + arg1].unk_000[0] = player->pos[0] + (sins(player->unk_258[0x1E + arg1].unk_020 - player->unk_02C[1] - player->unk_0C0) * 5.0f);
        } else if (player->unk_258[0x1E + arg2].unk_01E > 0) {
            func_8005D794(player, &player->unk_258[0x1E + arg1], 0.0f, var_f2, 0.0f, (s8) var_t0, (s8) var_t1);
            func_8005D7D8(&player->unk_258[0x1E + arg1], 3, 0.5f);
            func_8005D800(&player->unk_258[0x1E + arg1], 0x00FFFFFF, 0x0060);
            player->unk_258[0x1E + arg1].unk_020 = 0;
            if (player->unk_258[0x1E + arg1].unk_010 == 1) {
                player->unk_258[0x1E + arg1].unk_020 += 0x888;
            } else {
                player->unk_258[0x1E + arg1].unk_020 -= 0x888;
            }
            player->unk_258[0x1E + arg1].unk_000[2] = player->pos[2] + (coss(player->unk_258[0x1E + arg1].unk_020 - player->unk_02C[1] - player->unk_0C0) * 5.0f);
            player->unk_258[0x1E + arg1].unk_000[0] = player->pos[0] + (sins(player->unk_258[0x1E + arg1].unk_020 - player->unk_02C[1] - player->unk_0C0) * 5.0f);
        }
    }
}

void func_800621BC(Player* player, s16 arg1, s32 arg2, UNUSED s8 arg3) {
    s32 temp_v1;
    s32 phi_t0;
    s32 phi_t1;
    Player *new_var;
    f32 phi_f2;
    Player *new_var2;

    phi_t0 = 0xFF;
    temp_v1 = random_int(8) & 1;
    if (temp_v1 == 1) {
        phi_t1 = 1;
        phi_t0 = 0;
        phi_f2 = player->pos[1];
    }

    if (temp_v1 == 0) {
        phi_t1 = 0;
        if (1) {
            phi_t0 = 0;
        }
        phi_f2 = player->pos[1];
    }

    if (phi_t0 == 0) {
        if ((arg1 == 0) && ((player->unk_258[30 + arg2].unk_01E > 0) || (player->unk_258[30 + arg2].unk_01C == 0))) {
            func_8005D794(player, &player->unk_258[30 + arg1], 0.0f, phi_f2, 0.0f, phi_t0, phi_t1);
            func_8005D7D8(&player->unk_258[30 + arg1], 8, 1.0f);
            func_8005D800(&player->unk_258[30 + arg1], 0xFFFF20, 0xFF);

            player->unk_258[30 + arg1].unk_020 = 0;
            if (player->unk_258[30 + arg1].unk_010 == 1) {
                player->unk_258[30 + arg1].unk_020 += 2184;
            } else {
                player->unk_258[30 + arg1].unk_020 -= 2184;
            }

            player->unk_258[30 + arg1].unk_000[2] = player->pos[2] + (coss((player->unk_258[30 + arg1].unk_020 - player->unk_02C[1]) - player->unk_0C0) * 5.0f);
            player->unk_258[30 + arg1].unk_000[0] = player->pos[0] + (sins((player->unk_258[30 + arg1].unk_020 - player->unk_02C[1]) - player->unk_0C0) * 5.0f);
            return;
        }

        new_var2 = player;
        if (new_var2->unk_258[30 + arg2].unk_01E > 0) {
            func_8005D794(new_var2, &new_var2->unk_258[30 + arg1], 0.0f, phi_f2, 0.0f, phi_t0, phi_t1);
            func_8005D7D8(&new_var2->unk_258[30 + arg1], 8, 1.0f);
            func_8005D800(&new_var2->unk_258[30 + arg1], 0xFFFF20, 0xFF);
            new_var2->unk_258[30 + arg1].unk_020 = 0;
            if (new_var2->unk_258[30 + arg1].unk_010 == 1) {
                new_var2->unk_258[30 + arg1].unk_020 += 2184;
            } else {
                new_var2->unk_258[30 + arg1].unk_020 -= 2184;
            }

            new_var = new_var2;
            new_var->unk_258[30 + arg1].unk_000[2] = new_var->pos[2] + (coss((new_var->unk_258[30 + arg1].unk_020 - new_var->unk_02C[1]) - new_var->unk_0C0) * 5.0f);
            new_var->unk_258[30 + arg1].unk_000[0] = new_var->pos[0] + (sins((new_var->unk_258[30 + arg1].unk_020 - new_var->unk_02C[1]) - new_var->unk_0C0) * 5.0f);
        }
    }
}

void func_80062484(Player* player, UnkPlayerStruct258* arg1, s32 arg2) {
    arg1->unk_01C = 1;
    arg1->unk_000[1] = player->unk_074 + 1.0f;
    arg1->unk_000[2] = player->pos[2];
    arg1->unk_000[0] = player->pos[0];
    arg1->unk_020 = (arg2 * 0x1998) - player->unk_02C[1];
    arg1->unk_012 = 4;
    arg1->unk_01E = 0;
}

void func_800624D8(Player *player, UNUSED s32 arg1, UNUSED s32 arg2, UNUSED s8 arg3) {
    s32 var_s1;

    switch (player->unk_0F8) {
    case 2:
        for (var_s1 = 0; var_s1 < 10; var_s1++) {
            if ((gCurrentCourseId == COURSE_CHOCO_MOUNTAIN) || (gCurrentCourseId == COURSE_ROYAL_RACEWAY)) {
                func_8005DAD8(&player->unk_258[0x1E + var_s1], 1, 0, 0x00A8);
            }
            if (gCurrentCourseId == COURSE_KALAMARI_DESERT) {
                func_8005DAD8(&player->unk_258[0x1E + var_s1], 7, 0, 0x00A8);
            }
            if (gCurrentCourseId == COURSE_MOO_MOO_FARM) {
                func_8005DAD8(&player->unk_258[0x1E + var_s1], 8, 0, 0x00A8);
            }
            if (gCurrentCourseId == COURSE_WARIO_STADIUM) {
                func_8005DAD8(&player->unk_258[0x1E + var_s1], 9, 0, 0x00A8);
            }
            if (gCurrentCourseId == COURSE_YOSHI_VALLEY) {
                func_8005DAD8(&player->unk_258[0x1E + var_s1], 0x000A, 0, 0x00A8);
            }
            if (gCurrentCourseId == COURSE_DK_JUNGLE) {
                func_8005DAD8(&player->unk_258[0x1E + var_s1], 0x000B, 0, 0x00A8);
            }
            func_80062484(player, &player->unk_258[0x1E + var_s1], var_s1);
        }
        player->unk_044 &= ~0x0100;
        break;
    case 8:
        for (var_s1 = 0; var_s1 < 10; var_s1++) {
            func_8005DAD8(&player->unk_258[0x1E + var_s1], 2, 1, 0x00A8);
            func_80062484(player, &player->unk_258[0x1E + var_s1], var_s1);
        }
        player->unk_044 &= ~0x0100;
        break;
    case 7:
        for (var_s1 = 0; var_s1 < 10; var_s1++) {
            func_8005DAD8(&player->unk_258[0x1E + var_s1], 2, 1, 0x00A8);
            func_80062484(player, &player->unk_258[0x1E + var_s1], var_s1);
        }
        player->unk_044 &= ~0x0100;
        break;
    case 3:
        for (var_s1 = 0; var_s1 < 10; var_s1++) {
            func_8005DAD8(&player->unk_258[0x1E + var_s1], 3, 1, 0x00A8);
            func_80062484(player, &player->unk_258[0x1E + var_s1], var_s1);
        }
        player->unk_044 &= ~0x0100;
        break;
    case 10:
        for (var_s1 = 0; var_s1 < 10; var_s1++) {
            func_8005DAD8(&player->unk_258[0x1E + var_s1], 4, 1, 0x00A8);
            func_80062484(player, &player->unk_258[0x1E + var_s1], var_s1);
        }
        player->unk_044 &= ~0x0100;
        break;
    case 13:
        for (var_s1 = 0; var_s1 < 10; var_s1++) {
            func_8005DAD8(&player->unk_258[0x1E + var_s1], 5, 1, 0x00A8);
            func_80062484(player, &player->unk_258[0x1E + var_s1], var_s1);
        }
        player->unk_044 &= ~0x0100;
        break;
    case 5:
    case 11:
        for (var_s1 = 0; var_s1 < 10; var_s1++) {
            func_8005DAD8(&player->unk_258[0x1E + var_s1], 6, 1, 0x00A8);
            func_80062484(player, &player->unk_258[0x1E + var_s1], var_s1);
        }
        player->unk_044 &= ~0x0100;
        break;
    case 1:
    case 4:
    case 6:
        for (var_s1 = 0; var_s1 < 10; var_s1++) {
            func_8005DAD8(&player->unk_258[0x1E + var_s1], 0, 0, 0x00A8);
            func_80062484(player, &player->unk_258[0x1E + var_s1], var_s1);
        }
        player->unk_044 &= ~0x0100;
        break;
    default:
        for (var_s1 = 0; var_s1 < 10; var_s1++) {
            func_8005DAD8(&player->unk_258[0x1E + var_s1], 0, 0, 0x00A8);
            func_80062484(player, &player->unk_258[0x1E + var_s1], var_s1);
        }
        player->unk_044 &= ~0x0100;
        break;
    }
}

void func_800628C0(Player* player, UNUSED s8 arg1, UNUSED s8 arg2, s8 arg3) {
    player->unk_258[20 + arg3].unk_01C = 1;
    player->unk_258[20 + arg3].unk_020 = -player->unk_02C[1];
    player->unk_258[20 + arg3].unk_012 = 2;
    player->unk_258[20 + arg3].unk_01E = 0;
    player->unk_258[20 + arg3].unk_00C =  0.2f;
}

void func_80062914(Player* player, UNUSED s8 arg1, UNUSED s8 arg2, s8 arg3) {
    player->unk_258[20 + arg3].unk_01C = 1;
    player->unk_258[20 + arg3].unk_020 = -player->unk_02C[1];
    player->unk_258[20 + arg3].unk_012 = 4;
    player->unk_258[20 + arg3].unk_01E = 0;
    player->unk_258[20 + arg3].unk_00C = 1.0f;
}

void func_80062968(Player* player, UNUSED s8 arg1, UNUSED s8 arg2, s8 arg3) {
    player->unk_258[20 + arg3].unk_01C = 1;
    player->unk_258[20 + arg3].unk_020 = -player->unk_02C[1];
    player->unk_258[20 + arg3].unk_012 = 5;
    player->unk_258[20 + arg3].unk_01E = 0;
    player->unk_258[20 + arg3].unk_00C = 0.2f;
}

void func_800629BC(Player* player, UNUSED s8 arg1, UNUSED s8 arg2, s8 arg3) {
    player->unk_258[20 + arg3].unk_01C = 1;
    player->unk_258[20 + arg3].unk_020 = -player->unk_02C[1];
    player->unk_258[20 + arg3].unk_012 = 6;
    player->unk_258[20 + arg3].unk_01E = 0;
    player->unk_258[20 + arg3].unk_00C = 0.2f;
    player->unk_258[20 + arg3].unk_000[1] = 0.0f;
}

void func_80062A18(Player* player, s8 arg1, UNUSED s8 arg2, s8 arg3) {
    player->unk_258[20 + arg3].unk_01C = 1;
    player->unk_258[20 + arg3].unk_012 = 3;
    player->unk_258[20 + arg1 /* arg1 instead of arg3 */].unk_00C = 0.2f;
    player->unk_258[20 + arg3].unk_01E = 1;
    player->unk_258[20 + arg3].unk_020 = 0;
    player->unk_0B6 &= ~0x0080;
    player->unk_258[20 + arg3].unk_000[2] = player->pos[2];
    player->unk_258[20 + arg3].unk_000[0] = player->pos[0];
    player->unk_258[20 + arg3].unk_000[1] = (player->pos[1] + 4.0f);
}

void func_80062AA8(Player* player, UNUSED s8 arg1, UNUSED s8 arg2, s8 arg3) {
    player->unk_258[20 + arg3].unk_01C = 1;
    player->unk_258[20 + arg3].unk_012 = 5;
    player->unk_258[20 + arg3].unk_00C = 0.1f;
    player->unk_258[20 + arg3].unk_01E = 0;
    player->unk_258[20 + arg3].unk_000[1] = (player->pos[1] + player->boundingBoxSize) - 2.5;
}

void func_80062B18(f32 *arg0, f32 *arg1, f32 *arg2, f32 arg3, f32 arg4, f32 arg5, u16 arg6, u16 arg7) {
    UNUSED f32 pad;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 temp_f20;

    //  Apply the matrix multiplication:
    //  Matrix is the Jacobian for cartesian to spherical coordinates?
    //  Get the change in r, theta, and phi for a change in x, y, z?
    //
    // | arg0 |     | cos(arg6)*cos(arg7)  cos(arg6)*sin(arg7)   -sin(arg6) |     | arg3 |
    // |      |     |                                                       |     |      |
    // | arg1 |  =  | -sin(arg7)           cos(arg7)                 0      |  X  | arg4 |
    // |      |     |                                                       |     |      |
    // | arg2 |     | sin(arg6)*cos(arg7)  sin(arg6)*sin(arg7)    cos(arg6) |     | arg5 |
    //
    sp28 = sins(arg7);
    sp2C = coss(arg6);
    sp30 = coss(arg7);
    temp_f20 = coss(arg6);
    //    = arg3 * cos(arg6) * cos(arg7) + arg4 * cos(arg6) * sin(arg7) - arg5 * sin(arg6)
    *arg0 = (((arg3 * temp_f20) * sp30) + (arg4 * sp2C) * sp28) - (sins(arg6) * arg5);

    temp_f20 = sins(arg7);
    //    = -arg3 * sin(arg7) + arg4 * cos(arg7)
    *arg1 = (coss(arg7) * arg4) - (arg3 * temp_f20);

    sp28 = sins(arg7);
    sp2C = sins(arg6);
    sp30 = coss(arg7);
    temp_f20 = sins(arg6);
    //    = arg3 * sin(arg6) * cos(arg7) + arg4 * sin(arg6) * sin(arg7) + arg5 * cos(arg6)
    *arg2 = (coss(arg6) * arg5) + (((arg3 * temp_f20) * sp30) + ((arg4 * sp2C) * sp28));
}

void func_80062C74(Player *player, s16 arg1, s32 arg2, s32 arg3) {
    f32 sp48[8] = { 4.5f, 4.5f, 4.5f, 4.5f, 4.5f, 5.5f, 4.5f, 6.5f };
    f32 var_f6;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s16 thing;

    player->unk_258[arg1].unk_01E += 1;
    if (player->unk_258[arg1].unk_01E == 0x000C) {
        player->unk_258[arg1].unk_01C = 0;
        player->unk_258[arg1].unk_01E = 0;
        player->unk_258[arg1].unk_012 = 0;
    }
    player->unk_258[arg1].unk_018 = 2.0f;
    if (player->unk_258[arg1].unk_040 == 0) {
        player->unk_258[arg1].unk_00C = player->unk_258[arg1].unk_00C + 0.07;
        player->unk_258[arg1].unk_024 = player->unk_258[arg1].unk_024 + 0.3;
        if (player->unk_258[arg1].unk_01E >= 3) {
            player->unk_258[arg1].unk_03E -= 3;
        }
        if (player->unk_258[arg1].unk_03E <= 0) {
            player->unk_258[arg1].unk_03E = 0;
        }
    } else {
        player->unk_258[arg1].unk_00C = player->unk_258[arg1].unk_00C + 0.1;
        player->unk_258[arg1].unk_024 = player->unk_258[arg1].unk_024 + 0.3;
        if (player->unk_258[arg1].unk_01E >= 3) {
            player->unk_258[arg1].unk_03E -= 2;
        }
        if (player->unk_258[arg1].unk_03E <= 0) {
            player->unk_258[arg1].unk_03E = 0;
        }
    }
    thing = player->unk_258[arg1].unk_020 - (player->unk_0C0 / 2);
    if (player->unk_258[arg1].unk_040 == 0) {
        var_f6 = -((player->unk_098 / 5000.0f) + 0.1);
    } else {
        var_f6 = -((player->unk_098 / 6000.0f) + 0.1);
    }
    if (((player->effects & 0x2000) == 0x2000) && (player->unk_258[arg1].unk_01E >= 6)) {
        player->unk_258[arg1].unk_00C = player->unk_258[arg1].unk_00C + 0.06;
    }
    player->unk_258[arg1].unk_010++;
    if (player->unk_258[arg1].unk_010 >= 3) {
        player->unk_258[arg1].unk_010 = 0;
    }
    func_80062B18(&sp40, &sp38, &sp3C, 0.0f, sp48[player->characterId], (player->unk_258[arg1].unk_01E * var_f6) + -5.5, -thing, -player->unk_206 * 2);
    player->unk_258[arg1].unk_000[0] = player->pos[0] + sp40;
    sp38 = (player->pos[1] - player->boundingBoxSize) + sp38;
    player->unk_258[arg1].unk_000[2] = player->pos[2] + sp3C;
    player->unk_258[arg1].unk_000[1] = player->unk_258[arg1].unk_024 + sp38;
}

void func_80062F98(Player* player, s16 arg1, s8 arg2, UNUSED s8 arg3) {
    f32 temp_f0;
    
    temp_f0 = player->unk_258[10 + arg1].unk_018 / 10.0f;
    ++player->unk_258[10 + arg1].unk_01E;
    player->unk_258[10 + arg1].unk_000[1] += temp_f0;
    if ((player->unk_0CA & 1) == 1) {
        player->unk_258[10 + arg1].unk_000[1] += (temp_f0 + 0.3);
        if ((player->unk_258[10 + arg1].unk_01E == 0x10) || ((D_801652A0[arg2] - player->unk_258[10 + arg1].unk_000[1]) < 3.0f)) {
            player->unk_258[10 + arg1].unk_01C = 0;
            player->unk_258[10 + arg1].unk_01E = 0;
            player->unk_258[10 + arg1].unk_012 = 0;
        }
    } else if ((player->unk_258[10 + arg1].unk_01E == 0xA) || ((D_801652A0[arg2] - player->unk_258[10 + arg1].unk_000[1]) < 3.0f)) {
        player->unk_258[10 + arg1].unk_01C = 0;
        player->unk_258[10 + arg1].unk_01E = 0;
        player->unk_258[10 + arg1].unk_012 = 0;
    }
}

void func_800630C0(Player* player, s16 arg1, s8 arg2, UNUSED s8 arg3) {
    ++player->unk_258[arg1].unk_01E;
    player->unk_258[arg1].unk_000[2] = player->pos[2] + coss(player->unk_258[arg1].unk_020) * -5.8;
    player->unk_258[arg1].unk_000[0] = player->pos[0] + sins(player->unk_258[arg1].unk_020) * -5.8;
    player->unk_258[arg1].unk_000[1] = D_801652A0[arg2];
    if (player->unk_258[arg1].unk_01E == 15) {
        player->unk_258[arg1].unk_01C = 0;
        player->unk_258[arg1].unk_01E = 0;
        player->unk_258[arg1].unk_012 = 0;
    }
}

void func_800631A8(Player* player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3) {
    ++player->unk_258[arg1].unk_01E;
    if ((s32) player->unk_258[arg1].unk_01E < 9) {
        if ((player->unk_258[arg1].unk_01E & 1) != 0) {
            player->unk_258[arg1].unk_038 = 8;
        } else {
            player->unk_258[arg1].unk_038 = 0;
        }
    } else if (((player->unk_258[arg1].unk_01E & 1) != 0) || ((player->unk_258[arg1].unk_01E >= 9) && (player->unk_258[arg1].unk_01E < 12))) {
        player->unk_258[arg1].unk_038 = 0xFF;
    } else if ((player->unk_258[arg1].unk_01E & 2) != 0) {
        player->unk_258[arg1].unk_038 = 8;
    } else {
        player->unk_258[arg1].unk_038 = 0;
    }
    player->unk_258[arg1].unk_03A = 0;
    player->unk_258[arg1].unk_03C = 0;
    if ((s32) player->unk_258[arg1].unk_01E >= 0x19) {
        player->unk_258[arg1].unk_01C = 0;
        player->unk_258[arg1].unk_01E = 0;
        player->unk_258[arg1].unk_012 = 0;
    }
}

void func_80063268(Player* player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3) {
    if (player->unk_258[arg1].unk_01E >= 0x1E) {
        player->unk_258[arg1].unk_040 += 0x1FFE;
    } else {
        player->unk_258[arg1].unk_040 += 0x1554;
    }

    player->unk_258[arg1].unk_024 += 0.25;
    player->unk_258[arg1].unk_000[2] = player->pos[2] + (coss((player->unk_258[arg1].unk_020 + player->unk_258[arg1].unk_040)) * 5.5);
    player->unk_258[arg1].unk_000[0] = player->pos[0] + (sins((player->unk_258[arg1].unk_020 + player->unk_258[arg1].unk_040)) * 5.5);
    player->unk_258[arg1].unk_000[1] = ((player->pos[1] - 5.0f) + player->unk_258[arg1].unk_024);
    ++player->unk_258[arg1].unk_01E;
    player->unk_258[arg1].unk_00C += 0.05;
    player->unk_258[arg1].unk_03E -= 5;

    if ((s32) player->unk_258[arg1].unk_03E <= 0) {
        player->unk_258[arg1].unk_03E = 0;
    }

    if ((s32) player->unk_258[arg1].unk_01E >= 0x28) {
        player->unk_258[arg1].unk_01C = 0;
        player->unk_258[arg1].unk_01E = 0;
        player->unk_258[arg1].unk_012 = 0;
    }
}

void func_80063408(Player* player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3) {
    if (player->unk_258[10 + arg1].unk_010 == 1) {
        player->unk_258[10 + arg1].unk_000[2] = player->boundingBoxCorners[2].cornerPos[2] + (player->unk_258[10 + arg1].unk_01E * -7) * coss(player->unk_258[10 + arg1].unk_020);
        player->unk_258[10 + arg1].unk_000[0] = player->boundingBoxCorners[2].cornerPos[0] + (player->unk_258[10 + arg1].unk_01E * -7) * sins(player->unk_258[10 + arg1].unk_020);
    } else {
        player->unk_258[10 + arg1].unk_000[2] = player->boundingBoxCorners[3].cornerPos[2] + (player->unk_258[10 + arg1].unk_01E * -7) * coss(player->unk_258[10 + arg1].unk_020);
        player->unk_258[10 + arg1].unk_000[0] = player->boundingBoxCorners[3].cornerPos[0] + (player->unk_258[10 + arg1].unk_01E * -7) * sins(player->unk_258[10 + arg1].unk_020);
    }

    ++player->unk_258[10 + arg1].unk_01E;
    player->unk_258[10 + arg1].unk_000[1] += 1.0f;

    if (((player->effects & 0x80) != 0) || ((player->effects & 0x40) != 0)) {
        player->unk_258[10 + arg1].unk_01C = 0;
        player->unk_258[10 + arg1].unk_01E = 0;
    }

    if (player->unk_258[10 + arg1].unk_01E == 8) {
        player->unk_258[10 + arg1].unk_01E = 0;
        player->unk_258[10 + arg1].unk_01C = 0;
        player->unk_258[10 + arg1].unk_012 = 0;
    }

    player->unk_258[10 + arg1].unk_00C += 0.08;
    if (player->unk_258[10 + arg1].unk_01E >= 4) {
        player->unk_258[10 + arg1].unk_03E -= 16;
    }

    if (player->unk_258[10 + arg1].unk_03E <= 0) {
        player->unk_258[10 + arg1].unk_03E = 0;
    }
}

void func_800635D4(Player* player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;

    if (player->unk_258[10 + arg1].unk_010 == 1) {
        if ((player->effects & LIGHTNING_EFFECT)) {
            func_80062B18(&sp44, &sp40, &sp3C, -2.0f, 0.0f, (-player->unk_258[10 + arg1].unk_01E * (player->unk_094 / 18.0f) * 216.0f) / 16, -player->unk_258[10 + arg1].unk_020, 2 * -player->unk_206);
            player->unk_258[10 + arg1].unk_000[0] = player->boundingBoxCorners[2].cornerPos[0] + sp44;
            player->unk_258[10 + arg1].unk_000[2] = player->boundingBoxCorners[2].cornerPos[2] + sp3C;
        } else {
            player->unk_258[10 + arg1].unk_000[2] = player->boundingBoxCorners[2].cornerPos[2] + ((-player->unk_258[10 + arg1].unk_01E * (player->unk_094 / 18.0f) * 216.0f) / 16) * coss(player->unk_258[10 + arg1].unk_020);
            player->unk_258[10 + arg1].unk_000[0] = player->boundingBoxCorners[2].cornerPos[0] + ((-player->unk_258[10 + arg1].unk_01E * (player->unk_094 / 18.0f) * 216.0f) / 16) * sins(player->unk_258[10 + arg1].unk_020);
        }
    } else if ((player->effects & LIGHTNING_EFFECT)) {
        func_80062B18(&sp44, &sp40, &sp3C, 2.0f, 0.0f,  (-player->unk_258[10 + arg1].unk_01E * (player->unk_094 / 18.0f) * 216.0f) / 16, - player->unk_258[10 + arg1].unk_020,  2 * -player->unk_206);
        player->unk_258[10 + arg1].unk_000[0] = player->boundingBoxCorners[3].cornerPos[0] + sp44;
        player->unk_258[10 + arg1].unk_000[2] = player->boundingBoxCorners[3].cornerPos[2] + sp3C;
    } else {
        player->unk_258[10 + arg1].unk_000[2] = player->boundingBoxCorners[3].cornerPos[2] + ((-player->unk_258[10 + arg1].unk_01E * (player->unk_094 / 18.0f) * 216.0f) / 16) * coss(player->unk_258[10 + arg1].unk_020);
        player->unk_258[10 + arg1].unk_000[0] = player->boundingBoxCorners[3].cornerPos[0] + ((-player->unk_258[10 + arg1].unk_01E * (player->unk_094 / 18.0f) * 216.0f) / 16) * sins(player->unk_258[10 + arg1].unk_020);
    }

    ++player->unk_258[10 + arg1].unk_01E;
    player->unk_258[10 + arg1].unk_000[1] += 0.2;
    if (((player->effects & 0x80) != 0) || ((player->effects & 0x40) != 0)) {
        player->unk_258[10 + arg1].unk_01C = 0;
        player->unk_258[10 + arg1].unk_01E = 0;
    }

    if (player->unk_258[10 + arg1].unk_01E == 8) {
        player->unk_258[10 + arg1].unk_01C = 0;
        player->unk_258[10 + arg1].unk_01E = 0;
        player->unk_258[10 + arg1].unk_012 = 0;
    }

    player->unk_258[10 + arg1].unk_00C += 0.1;
    if (player->unk_258[10 + arg1].unk_040 == 0) {
        if (player->unk_258[10 + arg1].unk_01E >= 4) {
            player->unk_258[10 + arg1].unk_03E -= 12;
        }
        if (player->unk_258[10 + arg1].unk_03E <= 0) {
            player->unk_258[10 + arg1].unk_03E = 0;
        }
    } else {
        if (player->unk_258[10 + arg1].unk_01E >= 4) {
            player->unk_258[10 + arg1].unk_03E -= 16;
        }
        if (player->unk_258[10 + arg1].unk_03E <= 0) {
            player->unk_258[10 + arg1].unk_03E = 0;
        }
    }
}

void func_800639DC(Player* player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3) {
    if (player->unk_258[10 + arg1].unk_010 == 1) {
        player->unk_258[10 + arg1].unk_000[2] = player->boundingBoxCorners[2].cornerPos[2] + (-1.8f * player->unk_258[10 + arg1].unk_01E) * coss(player->unk_258[10 + arg1].unk_020);
        player->unk_258[10 + arg1].unk_000[0] = player->boundingBoxCorners[2].cornerPos[0] + (-1.8f * player->unk_258[10 + arg1].unk_01E) * sins(player->unk_258[10 + arg1].unk_020);
    } else {
        player->unk_258[10 + arg1].unk_000[2] = player->boundingBoxCorners[3].cornerPos[2] + (-1.8f * player->unk_258[10 + arg1].unk_01E) * coss(player->unk_258[10 + arg1].unk_020);
        player->unk_258[10 + arg1].unk_000[0] = player->boundingBoxCorners[3].cornerPos[0] + (-1.8f * player->unk_258[10 + arg1].unk_01E) * sins(player->unk_258[10 + arg1].unk_020);
    }
    ++player->unk_258[10 + arg1].unk_01E;
    player->unk_258[10 + arg1].unk_000[1] += 0.3;
    if (player->unk_258[10 + arg1].unk_01E == 8) {
        player->unk_258[10 + arg1].unk_01C = 0;
        player->unk_258[10 + arg1].unk_01E = 0;
        player->unk_258[10 + arg1].unk_012 = 0;
    }

    player->unk_258[10 + arg1].unk_00C += 0.15;
    if (player->unk_258[10 + arg1].unk_040 == 0) {
        if ((s32) player->unk_258[10 + arg1].unk_01E >= 4) {
            --player->unk_258[10 + arg1].unk_03E;
        }
        if ((s32) player->unk_258[10 + arg1].unk_03E <= 0) {
            player->unk_258[10 + arg1].unk_03E = 0;
        }
    } else {
        if ((s32) player->unk_258[10 + arg1].unk_01E >= 4) {
            player->unk_258[10 + arg1].unk_03E -= 16;
        }
        if ((s32) player->unk_258[10 + arg1].unk_03E <= 0) {

            player->unk_258[10 + arg1].unk_03E = 0;
        }
    }
}

void func_80063BD4(Player* player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3) {
    if (player->unk_258[10 + arg1].unk_010 == 1) {
        player->unk_258[10 + arg1].unk_000[2] = player->boundingBoxCorners[2].cornerPos[2] + (-2 * player->unk_258[10 + arg1].unk_01E * coss(player->unk_258[10 + arg1].unk_020));
        player->unk_258[10 + arg1].unk_000[0] = player->boundingBoxCorners[2].cornerPos[0] + (-2 * player->unk_258[10 + arg1].unk_01E * sins(player->unk_258[10 + arg1].unk_020));
    } else {
        player->unk_258[10 + arg1].unk_000[2] = player->boundingBoxCorners[3].cornerPos[2] + (-2 * player->unk_258[10 + arg1].unk_01E * coss(player->unk_258[10 + arg1].unk_020));
        player->unk_258[10 + arg1].unk_000[0] = player->boundingBoxCorners[3].cornerPos[0] + (-2 * player->unk_258[10 + arg1].unk_01E * sins(player->unk_258[10 + arg1].unk_020));
    }

    ++player->unk_258[10 + arg1].unk_01E;
    player->unk_258[10 + arg1].unk_000[1] += 0.2;
    if (player->unk_258[10 + arg1].unk_01E == 8) {
        player->unk_258[10 + arg1].unk_01C = 0;
        player->unk_258[10 + arg1].unk_01E = 0;
        player->unk_258[10 + arg1].unk_012 = 0;
    }

    player->unk_258[10 + arg1].unk_018 = 2.0f;
    player->unk_258[10 + arg1].unk_00C -= 0.06;
}

void func_80063D58(Player* player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3) {
    if (player->unk_258[10 + arg1].unk_010 == 1) {
        player->unk_258[10 + arg1].unk_000[2] = player->boundingBoxCorners[2].cornerPos[2] + ((-player->unk_258[10 + arg1].unk_01E * (player->unk_094 / 18.0f) * 216.0f) / 20.0f) * coss(player->unk_258[10 + arg1].unk_020);
        player->unk_258[10 + arg1].unk_000[0] = player->boundingBoxCorners[2].cornerPos[0] + ((-player->unk_258[10 + arg1].unk_01E * (player->unk_094 / 18.0f) * 216.0f) / 20.0f) * sins(player->unk_258[10 + arg1].unk_020);
    } else {
        player->unk_258[10 + arg1].unk_000[2] = player->boundingBoxCorners[3].cornerPos[2] + ((-player->unk_258[10 + arg1].unk_01E * (player->unk_094 / 18.0f) * 216.0f) / 20.0f) * coss(player->unk_258[10 + arg1].unk_020);
        player->unk_258[10 + arg1].unk_000[0] = player->boundingBoxCorners[3].cornerPos[0] + ((-player->unk_258[10 + arg1].unk_01E * (player->unk_094 / 18.0f) * 216.0f) / 20.0f) * sins(player->unk_258[10 + arg1].unk_020);
    }

    ++player->unk_258[10 + arg1].unk_01E;
    if (player->unk_258[10 + arg1].unk_01E == 8) {
        player->unk_258[10 + arg1].unk_01E = 0;
        player->unk_258[10 + arg1].unk_01C = 0;
        player->unk_258[10 + arg1].unk_012 = 0;
    }

    player->unk_258[10 + arg1].unk_00C += 0.2;
    if (player->unk_258[10 + arg1].unk_01E >= 4) {
        player->unk_258[10 + arg1].unk_03E -= 18;
        player->unk_258[10 + arg1].unk_000[1] -= 0.1;
    } else {
        player->unk_258[10 + arg1].unk_000[1] += 0.4;
    }
    
    if (player->unk_258[10 + arg1].unk_03E <= 0) {
        player->unk_258[10 + arg1].unk_03E = 0;
    }
}

void func_80063FBC(Player *player, s16 arg1, UNUSED s32 arg2, UNUSED s32 arg3) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;

    if (player->unk_258[10 + arg1].unk_010 == 1) {
        func_80062B18(&sp3C, &sp34, &sp38, 3.0f, 0.0f, -5.5 - (player->unk_258[10 + arg1].unk_01E * (((player->unk_094 / 18.0f) * 216.0f) / 15.0f)), -player->unk_258[10 + arg1].unk_020, 0);
    } else {
        func_80062B18(&sp3C, &sp34, &sp38, -3.0f, 0.0f, -5.5 - (player->unk_258[10 + arg1].unk_01E * (((player->unk_094 / 18.0f) * 216.0f) / 15.0f)), -player->unk_258[10 + arg1].unk_020, 0);
    }
    player->unk_258[10 + arg1].unk_000[0] = player->pos[0] + sp3C;
    player->unk_258[10 + arg1].unk_000[2] = player->pos[2] + sp38;
    player->unk_258[10 + arg1].unk_000[1] = (player->pos[1] - player->boundingBoxSize) + sp34;
    player->unk_258[10 + arg1].unk_01E++;
    if (player->unk_258[10 + arg1].unk_01E == 6) {
        player->unk_258[10 + arg1].unk_01C = 0;
        player->unk_258[10 + arg1].unk_01E = 0;
        player->unk_258[10 + arg1].unk_012 = 0;
    }
}

void func_80064184(Player* player, s16 arg1, s8 arg2, UNUSED s8 arg3) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;

    sp40 = D_801652A0[arg2] - player->pos[1] - 3.0f;
    if (((player->unk_0DE & 1) != 0) && (gCurrentCourseId != COURSE_KOOPA_BEACH)) {
        sp40 = D_801652A0[arg2] - player->pos[1] + 0.1;
    }

    func_80062B18(&sp44, &sp40, &sp3C, 0.0f, sp40, -4.0f + ((-player->unk_258[arg1].unk_01E * (player->unk_094 / 18.0f) * 216.0f) / 10.0f), -player->unk_258[arg1].unk_020, 2 * -player->unk_206);
    player->unk_258[arg1].unk_000[0] = player->pos[0] + sp44;
    player->unk_258[arg1].unk_000[2] = player->pos[2] + sp3C;
    player->unk_258[arg1].unk_000[1] = player->pos[1] + sp40;
    ++player->unk_258[arg1].unk_01E;
    if ((player->unk_258[arg1].unk_01E == 12) || (D_801652A0[arg2] <= (player->pos[1] - player->boundingBoxSize))) {
        player->unk_258[arg1].unk_01C = 0;
        player->unk_258[arg1].unk_01E = 0;
        player->unk_258[arg1].unk_012 = 0;
    }
    player->unk_258[arg1].unk_018 = 2.0f;
    player->unk_258[arg1].unk_00C -= 0.35;
    if (player->unk_258[arg1].unk_00C < 0.0f) {
        player->unk_258[arg1].unk_00C = 0.0f;
    }

    player->unk_258[arg1].unk_03E -= 22;
    if (player->unk_258[arg1].unk_03E <= 0) {
        player->unk_258[arg1].unk_03E = 0;
    }
}

void func_800643A8(Player* player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3) {
    player->unk_258[10 + arg1].unk_000[2] = player->pos[2] + (-1.2 * player->unk_258[10 + arg1].unk_01E * coss(player->unk_258[10 + arg1].unk_020));
    player->unk_258[10 + arg1].unk_000[0] = player->pos[0] + (-1.2 * player->unk_258[10 + arg1].unk_01E * sins(player->unk_258[10 + arg1].unk_020));
    player->unk_258[10 + arg1].unk_000[1] = player->unk_258[10 + arg1].unk_000[1] + 0.5;

    ++player->unk_258[10 + arg1].unk_01E;
    if (player->unk_258[10 + arg1].unk_01E == 10) {
        player->unk_258[10 + arg1].unk_01C = 0;
        player->unk_258[10 + arg1].unk_01E = 0;
        player->unk_258[10 + arg1].unk_012 = 0;
    }
    
    player->unk_258[10 + arg1].unk_00C += 0.2;
    player->unk_258[10 + arg1].unk_03E -= 8;
    if (player->unk_258[10 + arg1].unk_03E <= 0) {
        player->unk_258[10 + arg1].unk_03E = 0;
    }
}

void func_800644E8(Player *player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3) {
    f32 thing2;
    UNUSED s32 stackPadding0;
    s32 thing;
    UNUSED s32 stackPadding1;

    if (player->unk_258[30 + arg1].unk_01E >= 9) {
        player->unk_258[30 + arg1].unk_01E = 9;
    }
    thing2 = player->unk_258[30 + arg1].unk_024;
    thing = player->unk_258[30 + arg1].unk_01E;
    player->unk_258[30 + arg1].unk_000[2] = player->pos[2] + (coss(player->unk_258[30 + arg1].unk_020) * (-0.7 * thing));
    player->unk_258[30 + arg1].unk_000[0] = player->pos[0] + (sins(player->unk_258[30 + arg1].unk_020) * (-0.7 * thing));
    player->unk_258[30 + arg1].unk_01E++;
    player->unk_258[30 + arg1].unk_000[1] = player->unk_258[30 + arg1].unk_028 + (f32) ((thing * thing2) - (0.2 * (thing * thing)));
    if (player->unk_258[30 + arg1].unk_01E == 0x000A) {
        player->unk_258[30 + arg1].unk_01E = 0;
        player->unk_258[30 + arg1].unk_01C = 0;
        player->unk_258[30 + arg1].unk_012 = 0;
    }
    if (player->unk_258[30 + arg1].unk_01E >= 7) {
        player->unk_258[30 + arg1].unk_03E -= 0x60;
        if (player->unk_258[30 + arg1].unk_03E <= 0) {
            player->unk_258[30 + arg1].unk_03E = 0;
        }
    }
}

void func_80064664(Player *player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3) {
    f32 temp_f4;
    UNUSED s32 stackPadding0;
    s32 temp_v1;
    UNUSED s32 stackPadding1;

    temp_v1 = player->unk_258[30 + arg1].unk_01E;
    temp_f4 = player->unk_258[30 + arg1].unk_024;
    player->unk_258[30 + arg1].unk_000[2] = player->pos[2] + (coss(player->unk_258[30 + arg1].unk_020) * (-0.6 * temp_v1));
    player->unk_258[30 + arg1].unk_000[0] = player->pos[0] + (sins(player->unk_258[30 + arg1].unk_020) * (-0.6 * temp_v1));
    player->unk_258[30 + arg1].unk_01E++;
    player->unk_258[30 + arg1].unk_000[1] = player->unk_258[30 + arg1].unk_028 + (f32) ((temp_v1 * temp_f4) - (0.1 * (temp_v1 * temp_v1)));
    if (player->unk_258[30 + arg1].unk_01E == 0x0019) {
        player->unk_258[30 + arg1].unk_01E = 0;
        player->unk_258[30 + arg1].unk_01C = 0;
        player->unk_258[30 + arg1].unk_012 = 0;
    }
    if (player->unk_258[30 + arg1].unk_01E >= 7) {
        player->unk_258[30 + arg1].unk_03E -= 0x6;
        if (player->unk_258[30 + arg1].unk_03E <= 0) {
            player->unk_258[30 + arg1].unk_03E = 0;
        }
    }
}

void func_800647C8(Player* player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3) {

    ++player->unk_258[30 + arg1].unk_01E;
    player->unk_258[30 + arg1].unk_000[2] = player->pos[2] + ((-0.8 * (player->unk_258[30 + arg1].unk_01E)) * coss(player->unk_258[30 + arg1].unk_020));
    player->unk_258[30 + arg1].unk_000[0] = player->pos[0] + ((-0.8 * (player->unk_258[30 + arg1].unk_01E)) * sins(player->unk_258[30 + arg1].unk_020));
    player->unk_258[30 + arg1].unk_000[1] =  (player->unk_074 + 2.0f);

    if (player->unk_258[30 + arg1].unk_01E == 14) {
        player->unk_258[30 + arg1].unk_01C = 0;
        player->unk_258[30 + arg1].unk_01E = 0;
        player->unk_258[30 + arg1].unk_012 = 0;
    }

    player->unk_258[30 + arg1].unk_03E -= 12;
    if (player->unk_258[30 + arg1].unk_03E <= 0) {
       player->unk_258[30 + arg1].unk_03E = 0;
    }
}

void func_800648E4(Player* player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3) {
    ++player->unk_258[30 + arg1].unk_01E;
    player->unk_258[30 + arg1].unk_00C -=  0.06;
    player->unk_258[30 + arg1].unk_000[1] += 0.1;
    player->unk_258[30 + arg1].unk_03E -= 12;
    
    if (player->unk_258[30 + arg1].unk_03E <= 0) {
        player->unk_258[30 + arg1].unk_03E = 0;
    }
    
    if (player->unk_258[30 + arg1].unk_01E == 10) {
        player->unk_258[30 + arg1].unk_01C = 0;
        player->unk_258[30 + arg1].unk_01E = 0;
        player->unk_258[30 + arg1].unk_012 = 0;
    }
}

void func_80064988(Player* player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3) {
    ++player->unk_258[30 + arg1].unk_01E;
    player->unk_258[30 + arg1].unk_000[1] -= 0.3;

    if (player->unk_258[30 + arg1].unk_01E == 10) {
        player->unk_258[30 + arg1].unk_01C = 0;
        player->unk_258[30 + arg1].unk_01E = 0;
        player->unk_258[30 + arg1].unk_012 = 0;
    }
}

void func_800649F4(Player* player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3) {
    f32 temp;
    temp = player->unk_258[30 + arg1].unk_018;
   
  player->unk_258[30 + arg1].unk_000[2] = player->unk_21C + (((-temp) * player->unk_258[30 + arg1].unk_01E) * coss(player->unk_258[30 + arg1].unk_020));
  player->unk_258[30 + arg1].unk_000[0] = player->unk_218 + (((-temp) * player->unk_258[30 + arg1].unk_01E) * sins(player->unk_258[30 + arg1].unk_020));
  player->unk_258[30 + arg1].unk_000[1] = player->pos[1] + player->unk_258[30 + arg1].unk_014;
    player->unk_258[30 + arg1].unk_00C += 0.04;

    ++player->unk_258[30 + arg1].unk_01E;
    if (player->unk_258[30 + arg1].unk_01E == 12) {
        player->unk_258[30 + arg1].unk_01E = 0;
        player->unk_258[30 + arg1].unk_01C = 0;
        player->unk_258[30 + arg1].unk_012 = 0;
    }
    
    if (player->unk_258[30 + arg1].unk_01E >= 9) {
        player->unk_258[30 + arg1].unk_03E -= 0x10;
        if (player->unk_258[30 + arg1].unk_03E <= 0) {
            player->unk_258[30 + arg1].unk_03E = 0;
        }
    }
}

void func_80064B30(Player* player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3) {
    f32 temp;
    temp = player->unk_258[30 + arg1].unk_018 * 1.2;

    player->unk_258[30 + arg1].unk_000[2] = (player->pos[2] + (-temp * player->unk_258[30 + arg1].unk_01E) * (coss(player->unk_258[30 + arg1].unk_020)));
    player->unk_258[30 + arg1].unk_000[0] = (player->pos[0] + (-temp * player->unk_258[30 + arg1].unk_01E) * (sins(player->unk_258[30 + arg1].unk_020)));
    player->unk_258[30 + arg1].unk_000[1] += 0.1;

    ++player->unk_258[30 + arg1].unk_01E;
    if (player->unk_258[30 + arg1].unk_01E == 10) {
        player->unk_258[30 + arg1].unk_01E = 0;
        player->unk_258[30 + arg1].unk_01C = 0;
        player->unk_258[30 + arg1].unk_012 = 0;
    }
    
    player->unk_258[30 + arg1].unk_038 += 1820;
    if (player->unk_258[30 + arg1].unk_01E >= 6) {
        player->unk_258[30 + arg1].unk_03E -= 16;
        if (player->unk_258[30 + arg1].unk_03E <= 0) {
            player->unk_258[30 + arg1].unk_03E = 0;
        }
    }
}

void func_80064C74(Player* player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3) {

    if (player->unk_258[30 + arg1].unk_010 == 1) {
        player->unk_258[30 + arg1].unk_020 += 2184;
    } else {
        player->unk_258[30 + arg1].unk_020 -= 2184;
    }
    
    player->unk_258[30 + arg1].unk_000[2] = player->pos[2] + (coss(player->unk_258[30 + arg1].unk_020 - player->unk_02C[1] - player->unk_0C0) * 5.0f);
    player->unk_258[30 + arg1].unk_000[0] = player->pos[0] + (sins(player->unk_258[30 + arg1].unk_020 - player->unk_02C[1] - player->unk_0C0) * 5.0f);
    player->unk_258[30 + arg1].unk_000[1] = player->pos[1] - 1.0f;
    player->unk_258[30 + arg1].unk_00C += 0.4;
    ++player->unk_258[30 + arg1].unk_01E;

    if (player->unk_258[30 + arg1].unk_01E == 10) {
        player->unk_258[30 + arg1].unk_01E = 0;
        player->unk_258[30 + arg1].unk_01C = 0;
        player->unk_258[30 + arg1].unk_012 = 0;
    }
    if (player->unk_258[30 + arg1].unk_01E >= 5) {
        player->unk_258[30 + arg1].unk_03E -= 20;
        if (player->unk_258[30 + arg1].unk_03E <= 0) {
            player->unk_258[30 + arg1].unk_03E = 0;
        }
    }
}

void func_80064DEC(Player* player, UNUSED s16 arg1, UNUSED s8 arg2, s8 arg3) {

    player->unk_258[20 + arg3].unk_000[1] = player->pos[1];
    ++player->unk_258[20 + arg3].unk_01E;
    
    if (player->unk_258[20 + arg3].unk_01E == 9) {
        player->unk_0B6 &= ~0x0040;
        player->unk_258[20 + arg3].unk_01C = 0;
        player->unk_258[20 + arg3].unk_01E = 0;
        player->unk_258[20 + arg3].unk_012 = 0;
    }
    
    player->unk_258[20 + arg3].unk_00C += 0.8;
    if (player->unk_258[20 + arg3].unk_00C >= (f64) 2.5) {
        player->unk_258[20 + arg3].unk_00C = 2.5f;
    }
}

void func_80064EA4(Player* player, UNUSED s16 arg1, UNUSED s8 arg2, s8 arg3) {
    ++player->unk_258[20 + arg3].unk_01E;
    if (player->unk_258[20 + arg3].unk_01E < 4) {
        player->unk_258[20 + arg3].unk_00C += 1.2;
        if (player->unk_258[20 + arg3].unk_00C >= 3.5) {
            player->unk_258[20 + arg3].unk_00C = 3.5f;
        }
    } else {
        player->unk_258[20 + arg3].unk_00C -= 1.8;
        if (player->unk_258[20 + arg3].unk_00C <= 0.0f) {
            player->unk_0B6 &= ~0x1000;
            player->unk_258[20 + arg3].unk_01C = 0;
            player->unk_258[20 + arg3].unk_01E = 0;
            player->unk_258[20 + arg3].unk_012 = 0;
        }
    }
}

void func_80064F88(Player* player, UNUSED s16 arg1, UNUSED s8 arg2, s8 arg3) {
    ++player->unk_258[20 + arg3].unk_01E;
    player->unk_258[20 + arg3].unk_00C += 0.15;
    
    if (1.2 <= player->unk_258[20 + arg3].unk_00C) {
        player->unk_258[20 + arg3].unk_00C = 1.2f;
    }
    if (player->unk_258[20 + arg3].unk_01E >= 12) {
        player->unk_0B6 &= ~0x0800;
        player->unk_258[20 + arg3].unk_01C = 0;
        player->unk_258[20 + arg3].unk_01E = 0;
        player->unk_258[20 + arg3].unk_012 = 0;
    }
}

void func_80065030(Player* player, UNUSED s16 arg1, UNUSED s8 arg2, s8 arg3) {
    ++player->unk_258[20 + arg3].unk_01E;

    player->unk_258[20 + arg3].unk_000[1] += 0.8;
    player->unk_258[20 + arg3].unk_00C += 0.4;
    if (player->unk_258[20 + arg3].unk_00C >= (f64) 1.5) {
        player->unk_258[20 + arg3].unk_00C = 1.5f;
    }
    
    if (player->unk_258[20 + arg3].unk_01E >= 12) {
        player->unk_0B6 &= ~0x0100;
        player->unk_258[20 + arg3].unk_01C = 0;
        player->unk_258[20 + arg3].unk_01E = 0;
        player->unk_258[20 + arg3].unk_012 = 0;
    }
}

void func_800650FC(Player* player, UNUSED s16 arg1, UNUSED s8 arg2, s8 arg3) {
    player->unk_258[20 + arg3].unk_000[2] = (f32) player->pos[2];
    player->unk_258[20 + arg3].unk_000[0] = (f32) player->pos[0];
    player->unk_258[20 + arg3].unk_000[1] = (f32) (player->pos[1] + 4.0f);
    if ((player->effects & 0x80) == 0x80) {
        player->unk_258[20 + arg3].unk_020 += 4732;
    } else {
         player->unk_258[20 + arg3].unk_020 -= 4732;
    }

    if (((player->effects & 0x80) != 0x80) && ((player->effects & 0x40) != 0x40)) {
        player->unk_258[20 + arg3].unk_01C = 0;
        player->unk_258[20 + arg3].unk_01E = 0;
        player->unk_258[20 + arg3].unk_012 = 0;
    }

    player->unk_258[20 + arg3].unk_00C += 0.08;
    if (player->unk_258[20 + arg3].unk_00C >= 1.5) {
        player->unk_258[20 + arg3].unk_00C = 1.5f;
    }
}

void func_800651F4(Player* player, UNUSED s16 arg1, UNUSED s8 arg2, s8 arg3) {
    ++player->unk_258[20 + arg3].unk_01E;
    if (player->unk_258[20 + arg3].unk_01E < 8) {
        player->unk_258[20 + arg3].unk_00C += 0.2;
        if (1.2 <= player->unk_258[20 + arg3].unk_00C) {
            player->unk_258[20 + arg3].unk_00C = 1.2f;
        }
    } else {
        player->unk_258[20 + arg3].unk_00C -= 0.4;
        if (player->unk_258[20 + arg3].unk_00C <= 0.0f) {
            player->unk_0B6 &= ~0x0020;
            player->unk_258[20 + arg3].unk_01C = 0;
            player->unk_258[20 + arg3].unk_01E = 0;
            player->unk_258[20 + arg3].unk_012 = 0;
        }
    }
}

void func_800652D4(Vec3f arg0, Vec3s arg1, f32 arg2) {
    Mat4 sp20;

    mtxf_translate_rotate(sp20, arg0, arg1);
    mtxf_scale2(sp20, arg2);
    convert_to_fixed_point_matrix(&gGfxPool->mtxEffect[gMatrixEffectCount], sp20);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&gGfxPool->mtxEffect[gMatrixEffectCount]), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
}

void func_8006538C(Player *player, s8 arg1, s16 arg2, s8 arg3) {
    Vec3f spB4;
    Vec3s spAC;
    s32 primColors[] = { MAKE_RGB(0xFB, 0xFF, 0xFB), MAKE_RGB(0xFF, 0xFB, 0x86) };
    s32 envColors[]  = { MAKE_RGB(0x89, 0x62, 0x8F), MAKE_RGB(0xFE, 0x01, 0x09) };
    s16 primRed;
    s16 primGreen;
    s16 primBlue;
    s16 primAlpha;
    s16 envRed;
    s16 envGreen;
    s16 envBlue;

    if (player->unk_258[arg2].unk_01C == 1) {
        spB4[0] = player->unk_258[arg2].unk_000[0];
        spB4[1] = player->unk_258[arg2].unk_000[1];
        spB4[2] = player->unk_258[arg2].unk_000[2];
        spAC[0] = 0;
        spAC[1] = player->unk_048[arg3];
        spAC[2] = 0;
        if ((player->effects & 0x200) && (((s32) gCourseTimer - D_8018D930[arg1]) < 9)) {
            primRed   = (primColors[1] >> 0x10) & 0xFF;
            primGreen = (primColors[1] >> 0x08) & 0xFF;
            primBlue  = (primColors[1] >> 0x00) & 0xFF;
            envRed    = ( envColors[1] >> 0x10) & 0xFF;
            envGreen  = ( envColors[1] >> 0x08) & 0xFF;
            envBlue   = ( envColors[1] >> 0x00) & 0xFF;
            primAlpha = player->unk_258[arg2].unk_03E;
            func_800652D4(spB4, spAC, ((player->unk_258[arg2].unk_00C * player->size) * 1.4));
            gSPDisplayList(gDisplayListHead++, D_0D008DB8);
            gDPLoadTextureBlock(gDisplayListHead++, D_0D02BC58[player->unk_258[arg2].unk_010], G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
            func_8004B72C(primRed, primGreen, primBlue, envRed, envGreen, envBlue, primAlpha);
            gDPSetAlphaCompare(gDisplayListHead++, G_AC_DITHER);
            gSPDisplayList(gDisplayListHead++, D_0D008E48);
        } else {
            primRed   = (primColors[player->unk_258[arg2].unk_038] >> 0x10) & 0xFF;
            primGreen = (primColors[player->unk_258[arg2].unk_038] >> 0x08) & 0xFF;
            primBlue  = (primColors[player->unk_258[arg2].unk_038] >> 0x00) & 0xFF;
            envRed    = ( envColors[player->unk_258[arg2].unk_038] >> 0x10) & 0xFF;
            envGreen  = ( envColors[player->unk_258[arg2].unk_038] >> 0x08) & 0xFF;
            envBlue   = ( envColors[player->unk_258[arg2].unk_038] >> 0x00) & 0xFF;
            primAlpha = player->unk_258[arg2].unk_03E;
            func_800652D4(spB4, spAC, player->unk_258[arg2].unk_00C * player->size);
            gSPDisplayList(gDisplayListHead++, D_0D008DB8);
            gDPLoadTextureBlock(gDisplayListHead++, D_0D02BC58[player->unk_258[arg2].unk_010], G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
            func_8004B72C(primRed, primGreen, primBlue, envRed, envGreen, envBlue, primAlpha);
            gSPDisplayList(gDisplayListHead++, D_0D008E48);
        }
        gMatrixEffectCount += 1;
    }
}

void func_800658A0(Player *player, UNUSED s8 arg1, s16 arg2, s8 arg3) {
    Vec3f sp54;
    Vec3s sp4C;
    s16 red;
    s16 green;
    s16 blue;
    s16 alpha;

    if (player->unk_258[arg2].unk_01C == 1) {
        red = player->unk_258[arg2].unk_038;
        green = player->unk_258[arg2].unk_03A;
        blue = player->unk_258[arg2].unk_03C;
        alpha = player->unk_258[arg2].unk_03E;
        sp54[0] = player->unk_258[arg2].unk_000[0];
        sp54[1] = player->unk_258[arg2].unk_000[1];
        sp54[2] = player->unk_258[arg2].unk_000[2];
        sp4C[0] = 0;
        sp4C[1] = player->unk_048[arg3];
        sp4C[2] = 0;
        func_800652D4(sp54, sp4C, player->unk_258[arg2].unk_00C * player->size);
        gSPDisplayList(gDisplayListHead++, D_0D008DB8);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D48C, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        func_8004B35C(red, green, blue, alpha);
        gSPDisplayList(gDisplayListHead++, D_0D008E48);
        gMatrixEffectCount += 1;
    }
}

#ifdef NON_MATCHING
// Something about the handling of the prim/env colors is off,
// its causing a huge diff. Can't figure out what's up.
void func_80065AB0(Player *player, s8 arg1, s16 arg2, s8 arg3) {
    Vec3f spB4;
    Vec3s spAC;
    s32 var_s0;
    s16 primRed;
    s16 primGreen;
    s16 primBlue;
    s16 primAlpha;
    s16 envRed;
    s16 envGreen;
    s16 envBlue;
    s32 envColors[] = { MAKE_RGB(0xFF, 0xFF, 0xFF), MAKE_RGB(0xFF, 0xFF, 0x00), MAKE_RGB(0xFF, 0x96, 0x00) };

    if (player->unk_258[10 + arg2].unk_01C == 1) {
        if (player->unk_204 >= 0x32) {
            var_s0 = 1;
        } else {
            var_s0 = 0;
        }
        primRed   = player->unk_258[10 + arg2].unk_038;
        primGreen = player->unk_258[10 + arg2].unk_03A;
        primBlue  = player->unk_258[10 + arg2].unk_03C;
        primAlpha = player->unk_258[10 + arg2].unk_03E;
        envRed    = (envColors[player->unk_258[10 + arg2].unk_040] >> 0x10) & 0xFF;
        envGreen  = (envColors[player->unk_258[10 + arg2].unk_040] >> 0x08) & 0xFF;
        envBlue   = (envColors[player->unk_258[10 + arg2].unk_040] >> 0x00) & 0xFF;
        spB4[0] = player->unk_258[10 + arg2].unk_000[0];
        spB4[1] = player->unk_258[10 + arg2].unk_000[1];
        spB4[2] = player->unk_258[10 + arg2].unk_000[2];
        spAC[0] = 0;
        spAC[1] = player->unk_048[arg3];
        spAC[2] = 0;
        func_800652D4(spB4, spAC, player->unk_258[10 + arg2].unk_00C * player->size);
        if (var_s0 == 0) {
            gSPDisplayList(gDisplayListHead++, D_0D008DB8);
            gDPLoadTextureBlock(gDisplayListHead++, D_800E4770[var_s0], G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
            func_8004B72C(primRed, primGreen, primBlue, envRed, envGreen, envBlue, primAlpha);
            gDPSetRenderMode(gDisplayListHead++, G_RM_ZB_XLU_SURF, G_RM_ZB_XLU_SURF2);
            gSPDisplayList(gDisplayListHead++, D_0D008DF8);
        } else {
            gSPDisplayList(gDisplayListHead++, D_0D008DB8);
            gDPLoadTextureBlock(gDisplayListHead++, D_800E4770[var_s0], G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
            func_8004B72C(primRed, primGreen, primBlue, envRed, envGreen, envBlue, primAlpha);
            gDPSetRenderMode(gDisplayListHead++, G_RM_ZB_XLU_SURF, G_RM_ZB_XLU_SURF2);
            gSPDisplayList(gDisplayListHead++, D_0D008E48);
        }
        gMatrixEffectCount += 1;
    }
}
#else
GLOBAL_ASM("asm/non_matchings/code_80057C60/func_80065AB0.s")
#endif

#ifdef MIPS_TO_C
//generated by m2c commit 08138748803d75e73e4a94bb0c619a273754ee9c on Oct-09-2023
extern ? D_05FF8DB8;
extern ? D_800E47DC;
extern ? D_800E480C;
extern ? D_800E8C00;

void func_80065F0C(Player *player, s32 arg1, s16 arg2, s8 arg3) {
    f32 spE4;
    f32 spE0;
    f32 spDC;
    s16 spD8;
    s16 spD6;
    s16 spD4;
    s16 spCC;
    s16 spCA;
    s16 spC8;
    s16 spC6;
    void *sp44;
    Gfx *temp_s0;
    Gfx *temp_s0_10;
    Gfx *temp_s0_11;
    Gfx *temp_s0_12;
    Gfx *temp_s0_13;
    Gfx *temp_s0_14;
    Gfx *temp_s0_15;
    Gfx *temp_s0_16;
    Gfx *temp_s0_17;
    Gfx *temp_s0_18;
    Gfx *temp_s0_19;
    Gfx *temp_s0_20;
    Gfx *temp_s0_21;
    Gfx *temp_s0_22;
    Gfx *temp_s0_23;
    Gfx *temp_s0_24;
    Gfx *temp_s0_25;
    Gfx *temp_s0_26;
    Gfx *temp_s0_27;
    Gfx *temp_s0_28;
    Gfx *temp_s0_29;
    Gfx *temp_s0_2;
    Gfx *temp_s0_30;
    Gfx *temp_s0_31;
    Gfx *temp_s0_3;
    Gfx *temp_s0_4;
    Gfx *temp_s0_5;
    Gfx *temp_s0_6;
    Gfx *temp_s0_7;
    Gfx *temp_s0_8;
    Gfx *temp_s0_9;
    s16 temp_a0;
    s16 temp_ra;
    s16 temp_s2;
    s16 temp_s3;
    s32 temp_a2;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_v0 = player + (arg2 * 0x48);
    if ((temp_v0->unk544 == 1) && (temp_v0->unk546 != 0)) {
        spDC = temp_v0->unk528;
        spE0 = temp_v0->unk52C;
        spD4 = 0;
        spE4 = temp_v0->unk530;
        spD8 = 0;
        spD6 = player->unk_048[arg3];
        sp44 = temp_v0;
        func_800652D4(&spDC, &spD4, temp_v0->unk534 * player->size);
        if ((s32) sp44->unk53C != 8) {
            temp_a0 = sp44->unk562;
            temp_t6 = sp44->unk560 * 4;
            temp_v1 = *(&D_800E47DC + temp_t6);
            temp_ra = ((temp_v1 >> 0x10) & 0xFF) - temp_a0;
            temp_a2 = *(&D_800E480C + temp_t6);
            temp_s2 = ((temp_v1 >> 8) & 0xFF) - temp_a0;
            temp_s3 = (temp_v1 & 0xFF) - temp_a0;
            spCA = ((temp_a2 >> 0x10) & 0xFF) - temp_a0;
            spC8 = ((temp_a2 >> 8) & 0xFF) - temp_a0;
            spC6 = (temp_a2 & 0xFF) - temp_a0;
            spCC = sp44->unk566;
            if (sp44->unk568 == 0) {
                temp_s0 = gDisplayListHead;
                gDisplayListHead = temp_s0 + 8;
                temp_s0->words.w1 = (u32) D_0D008DB8;
                temp_s0->words.w0 = 0x06000000;
                temp_s0_2 = gDisplayListHead;
                gDisplayListHead = temp_s0_2 + 8;
                temp_s0_2->words.w0 = 0xFD900000;
                temp_s0_2->words.w1 = (u32) D_8018D494;
                temp_s0_3 = gDisplayListHead;
                gDisplayListHead = temp_s0_3 + 8;
                temp_s0_3->words.w1 = 0x07000000;
                temp_s0_3->words.w0 = 0xF5900000;
                temp_s0_4 = gDisplayListHead;
                gDisplayListHead = temp_s0_4 + 8;
                temp_s0_4->words.w1 = 0;
                temp_s0_4->words.w0 = 0xE6000000;
                temp_s0_5 = gDisplayListHead;
                gDisplayListHead = temp_s0_5 + 8;
                temp_s0_5->words.w1 = 0x071FF200;
                temp_s0_5->words.w0 = 0xF3000000;
                temp_s0_6 = gDisplayListHead;
                gDisplayListHead = temp_s0_6 + 8;
                temp_s0_6->words.w1 = 0;
                temp_s0_6->words.w0 = 0xE7000000;
                temp_s0_7 = gDisplayListHead;
                gDisplayListHead = temp_s0_7 + 8;
                temp_s0_7->words.w1 = 0;
                temp_s0_7->words.w0 = 0xF5880800;
                temp_s0_8 = gDisplayListHead;
                gDisplayListHead = temp_s0_8 + 8;
                temp_s0_8->words.w1 = 0x0007C07C;
                temp_s0_8->words.w0 = 0xF2000000;
                func_8004B72C((s32) temp_ra, (s32) temp_s2, (s32) temp_s3, (s32) spCA, (s32) spC8, (s32) spC6, (s32) spCC);
                temp_s0_9 = gDisplayListHead;
                gDisplayListHead = temp_s0_9 + 8;
                temp_s0_9->words.w0 = (u32) &D_05FF8DB8;
                temp_s0_9->words.w1 = (u32) D_0D008E48;
            } else {
                temp_s0_10 = gDisplayListHead;
                gDisplayListHead = temp_s0_10 + 8;
                temp_s0_10->words.w1 = 0x0D010000;
                temp_s0_10->words.w0 = 0x06000000;
                temp_s0_11 = gDisplayListHead;
                gDisplayListHead = temp_s0_11 + 8;
                temp_s0_11->words.w0 = 0xFD900000;
                temp_s0_11->words.w1 = (u32) D_8018D494;
                temp_s0_12 = gDisplayListHead;
                gDisplayListHead = temp_s0_12 + 8;
                temp_s0_12->words.w1 = 0x07000000;
                temp_s0_12->words.w0 = 0xF5900000;
                temp_s0_13 = gDisplayListHead;
                gDisplayListHead = temp_s0_13 + 8;
                temp_s0_13->words.w1 = 0;
                temp_s0_13->words.w0 = 0xE6000000;
                temp_s0_14 = gDisplayListHead;
                gDisplayListHead = temp_s0_14 + 8;
                temp_s0_14->words.w1 = 0x071FF200;
                temp_s0_14->words.w0 = 0xF3000000;
                temp_s0_15 = gDisplayListHead;
                gDisplayListHead = temp_s0_15 + 8;
                temp_s0_15->words.w1 = 0;
                temp_s0_15->words.w0 = 0xE7000000;
                temp_s0_16 = gDisplayListHead;
                gDisplayListHead = temp_s0_16 + 8;
                temp_s0_16->words.w1 = 0;
                temp_s0_16->words.w0 = 0xF5880800;
                temp_s0_17 = gDisplayListHead;
                gDisplayListHead = temp_s0_17 + 8;
                temp_s0_17->words.w1 = 0x0007C07C;
                temp_s0_17->words.w0 = 0xF2000000;
                func_8004B72C((s32) temp_ra, (s32) temp_s2, (s32) temp_s3, (s32) spCA, (s32) spC8, (s32) spC6, (s32) spCC);
                temp_s0_18 = gDisplayListHead;
                gDisplayListHead = temp_s0_18 + 8;
                temp_s0_18->words.w1 = 3;
                temp_s0_18->words.w0 = 0xB9000002;
                temp_s0_19 = gDisplayListHead;
                gDisplayListHead = temp_s0_19 + 8;
                temp_s0_19->words.w0 = 0x06000000;
                temp_s0_19->words.w1 = (u32) D_0D008E48;
            }
        } else {
            temp_s0_20 = gDisplayListHead;
            gDisplayListHead = temp_s0_20 + 8;
            temp_s0_20->words.w1 = (u32) D_0D008C90;
            temp_s0_20->words.w0 = 0x06000000;
            temp_s0_21 = gDisplayListHead;
            gDisplayListHead = temp_s0_21 + 8;
            temp_s0_21->words.w1 = 0;
            temp_s0_21->words.w0 = 0xBA000E02;
            temp_s0_22 = gDisplayListHead;
            gDisplayListHead = temp_s0_22 + 8;
            temp_s0_22->words.w0 = 0xFD100000;
            temp_s0_22->words.w1 = (u32) D_8018D498;
            temp_s0_23 = gDisplayListHead;
            gDisplayListHead = temp_s0_23 + 8;
            temp_s0_23->words.w1 = 0x07080200;
            temp_s0_23->words.w0 = 0xF5100000;
            temp_s0_24 = gDisplayListHead;
            gDisplayListHead = temp_s0_24 + 8;
            temp_s0_24->words.w1 = 0;
            temp_s0_24->words.w0 = 0xE6000000;
            temp_s0_25 = gDisplayListHead;
            gDisplayListHead = temp_s0_25 + 8;
            temp_s0_25->words.w1 = 0x077FF100;
            temp_s0_25->words.w0 = 0xF3000000;
            temp_s0_26 = gDisplayListHead;
            gDisplayListHead = temp_s0_26 + 8;
            temp_s0_26->words.w1 = 0;
            temp_s0_26->words.w0 = 0xE7000000;
            temp_s0_27 = gDisplayListHead;
            gDisplayListHead = temp_s0_27 + 8;
            temp_s0_27->words.w0 = 0xF5101000;
            temp_s0_27->words.w1 = 0x00080200;
            temp_s0_28 = gDisplayListHead;
            gDisplayListHead = temp_s0_28 + 8;
            temp_s0_28->words.w0 = 0xF2000000;
            temp_s0_28->words.w1 = 0x0007C0FC;
            func_8004B35C((s32) sp44->unk560, (s32) sp44->unk562, (s32) sp44->unk564, 0x000000FF);
            temp_s0_29 = gDisplayListHead;
            gDisplayListHead = temp_s0_29 + 8;
            temp_s0_29->words.w0 = 0xB900031D;
            temp_s0_29->words.w1 = 0x00553078;
            temp_s0_30 = gDisplayListHead;
            gDisplayListHead = temp_s0_30 + 8;
            temp_s0_30->words.w1 = (u32) &D_800E8C00;
            temp_s0_30->words.w0 = 0x0400103F;
            temp_s0_31 = gDisplayListHead;
            gDisplayListHead = temp_s0_31 + 8;
            temp_s0_31->words.w0 = 0x06000000;
            temp_s0_31->words.w1 = (u32) D_0D008DA0;
        }
        gMatrixEffectCount += 1;
    }
}
#else
GLOBAL_ASM("asm/non_matchings/code_80057C60/func_80065F0C.s")
#endif

void func_800664E0(Player *player, s8 arg1, s16 arg2, s8 arg3) {
    Vec3f sp54;
    Vec3s sp4C;
    s16 red;
    s16 green;
    s16 blue;
    s16 alpha;

    if (player->unk_258[10 + arg2].unk_01C == 1) {
        red   = player->unk_258[10 + arg2].unk_038;
        green = player->unk_258[10 + arg2].unk_03A;
        blue  = player->unk_258[10 + arg2].unk_03C;
        alpha = player->unk_258[10 + arg2].unk_03E;
        sp54[0] = player->unk_258[10 + arg2].unk_000[0];
        sp54[1] = player->unk_258[10 + arg2].unk_000[1];
        sp54[2] = player->unk_258[10 + arg2].unk_000[2];
        sp4C[0] = 0;
        sp4C[1] = player->unk_048[arg3];
        sp4C[2] = 0;
        func_800652D4(sp54, sp4C, player->unk_258[10 + arg2].unk_00C * player->size);
        gSPDisplayList(gDisplayListHead++, D_0D008DB8);
        gDPSetAlphaCompare(gDisplayListHead++, G_AC_DITHER);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D48C, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        func_8004B35C(red, green, blue, alpha);
        gSPDisplayList(gDisplayListHead++, D_0D008E48);
        gMatrixEffectCount += 1;
    }
}

void func_80066714(Player *player, s32 arg1, s16 arg2, s8 arg3) {
    Vec3f sp5C;
    Vec3s sp54;
    s16 red;
    s16 green;
    s16 blue;
    s16 alpha;

    if (player->unk_258[10 + arg2].unk_01C == 1) {
        red   = player->unk_258[10 + arg2].unk_038;
        green = player->unk_258[10 + arg2].unk_03A;
        blue  = player->unk_258[10 + arg2].unk_03C;
        alpha = player->unk_258[10 + arg2].unk_03E;
        sp5C[0] = player->unk_258[10 + arg2].unk_000[0];
        sp5C[1] = player->unk_258[10 + arg2].unk_000[1];
        sp5C[2] = player->unk_258[10 + arg2].unk_000[2];
        sp54[0] = 0;
        sp54[1] = player->unk_048[arg3];
        sp54[2] = 0;
        func_800652D4(sp5C, sp54, player->unk_258[10 + arg2].unk_00C * player->size);
        gSPDisplayList(gDisplayListHead++, D_0D008C90);
        gDPSetTextureLUT(gDisplayListHead++, G_TT_NONE);
        gDPLoadTextureBlock(gDisplayListHead++, D_0D000200, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        func_8004B35C(red, green, blue, alpha);
        gDPSetRenderMode(gDisplayListHead++, G_RM_ZB_XLU_SURF, G_RM_ZB_XLU_SURF2);
        gSPVertex(gDisplayListHead++, D_800E8B00, 4, 0);
        gSPDisplayList(gDisplayListHead++, D_0D008DA0);
        gMatrixEffectCount += 1;
    }
}

void func_80066998(Player *player, s8 arg1, s16 arg2, s8 arg3) {
    Vec3f sp54;
    Vec3s sp4C;
    s16 red;
    s16 green;
    s16 blue;
    s16 alpha;

    if (player->unk_258[arg2].unk_01C == 1) {
        red   = player->unk_258[arg2].unk_038;
        green = player->unk_258[arg2].unk_03A;
        blue  = player->unk_258[arg2].unk_03C;
        alpha = player->unk_258[arg2].unk_03E;
        sp54[0] = player->unk_258[arg2].unk_000[0];
        sp54[1] = player->unk_258[arg2].unk_000[1];
        sp54[2] = player->unk_258[arg2].unk_000[2];
        sp4C[0] = 0x4000;
        sp4C[1] = player->unk_048[arg3];
        sp4C[2] = 0;
        func_800652D4(sp54, sp4C, player->unk_258[arg2].unk_00C * player->size);
        gSPDisplayList(gDisplayListHead++, D_0D008DB8);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D48C, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        func_8004B35C(red, green, blue, alpha);
        gSPDisplayList(gDisplayListHead++, D_0D008E48);
        gMatrixEffectCount += 1;
    }
}

void func_80066BAC(Player *player, s8 arg1, s16 arg2, s8 arg3) {
    Vec3f spDC;
    Vec3s spD4;
    s32 stackPadding;

    if ((player->unk_258[arg2].unk_01C == 1) && (player->unk_258[arg2].unk_038 != 0x00FF)) {
        if (player->unk_110.unk3C[2] >= 300.0f) {
            spDC[1] = player->pos[1] + 5.0f;
        } else {
            spDC[1] = player->pos[1] - 3.0f;
        }
        spDC[2] = player->pos[2] + (coss(player->unk_048[arg3]) * -10.0f);
        spDC[0] = player->pos[0] + (sins(player->unk_048[arg3]) * -10.0f);
        if (player->unk_110.unk3C[2] >= 300.0f) {
            spD4[0] = cameras[arg3].rot[0] - 0x4000;
        } else {
            spD4[0] = 0;
        }
        spD4[1] = player->unk_048[arg3];
        spD4[2] = 0;
        func_800652D4(spDC, spD4, player->unk_258[arg2].unk_00C * player->size);
        if (player->unk_258[arg2].unk_038 == 0) {
            gSPDisplayList(gDisplayListHead++, D_0D008DB8);
            gDPSetCombineMode(gDisplayListHead++, G_CC_MODULATEIDECALA, G_CC_MODULATEIDECALA);
            gDPSetRenderMode(gDisplayListHead++, G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2);
            gDPLoadTextureBlock(gDisplayListHead++, D_8018D4C4, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
            gSPVertex(gDisplayListHead++, &D_800E8900[0][player->unk_258[arg2].unk_038], 4, 0);
            gSPDisplayList(gDisplayListHead++, common_square_plain_render);
            gDPLoadTextureBlock(gDisplayListHead++, D_8018D4C8, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
            gSPVertex(gDisplayListHead++, &D_800E8900[1][player->unk_258[arg2].unk_038], 4, 0);
            gSPDisplayList(gDisplayListHead++, D_0D008DA0);
        } else {
            gSPDisplayList(gDisplayListHead++, D_0D008DB8);
            gDPSetCombineMode(gDisplayListHead++, G_CC_MODULATEIDECALA, G_CC_MODULATEIDECALA);
            gDPSetRenderMode(gDisplayListHead++, G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2);
            gDPLoadTextureBlock(gDisplayListHead++, D_8018D4C8, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
            gSPVertex(gDisplayListHead++, &D_800E8900[0][player->unk_258[arg2].unk_038], 4, 0);
            gSPDisplayList(gDisplayListHead++, common_square_plain_render);
            gDPLoadTextureBlock(gDisplayListHead++, D_8018D4C4, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
            gSPVertex(gDisplayListHead++, &D_800E8900[1][player->unk_258[arg2].unk_038], 4, 0);
            gSPDisplayList(gDisplayListHead++, D_0D008DA0);
        }
        gMatrixEffectCount += 1;
    }
}

void func_80067280(Player *player, s8 arg1, s16 arg2, s8 arg3) {
    Vec3f sp7C;
    Vec3s sp74;
    s16 red;
    s16 green;
    s16 blue;
    s16 alpha;

    if (player->unk_258[30 + arg2].unk_01C == 1) {
        red   = player->unk_258[30 + arg2].unk_038;
        green = player->unk_258[30 + arg2].unk_03A;
        blue  = player->unk_258[30 + arg2].unk_03C;
        alpha = player->unk_258[30 + arg2].unk_03E;
        sp7C[0] = player->unk_258[30 + arg2].unk_000[0];
        sp7C[1] = player->unk_258[30 + arg2].unk_000[1];
        sp7C[2] = player->unk_258[30 + arg2].unk_000[2];
        sp74[0] = -0x071C;
        sp74[2] = 0;
        if (player->unk_258[30 + arg2].unk_010 == 1) {
            sp74[1] = player->unk_048[arg3] - 0x2000;
            func_800652D4(sp7C, sp74, player->unk_258[30 + arg2].unk_00C * player->size);
            gSPDisplayList(gDisplayListHead++, D_0D008DB8);
            gDPLoadTextureBlock(gDisplayListHead++, D_8018D48C, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
            func_8004B35C(red, green, blue, alpha);
            gSPDisplayList(gDisplayListHead++, D_0D008E70);
        } else {
            sp74[1] = player->unk_048[arg3] + 0x2000;
            func_800652D4(sp7C, sp74, player->unk_258[30 + arg2].unk_00C * player->size);
            gSPDisplayList(gDisplayListHead++, D_0D008DB8);
            gDPLoadTextureBlock(gDisplayListHead++, D_8018D48C, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
            func_8004B35C(red, green, blue, alpha & 0xFFFFFFFF); // huh?
            gSPDisplayList(gDisplayListHead++, D_0D008E48);
        }
        gMatrixEffectCount += 1;
    }
}

#ifdef NON_MATCHING

void func_80067604(Player *player, s8 arg1, s16 arg2, s8 arg3) {
    Vec3f sp8C;
    Vec3s sp84;
    s32 stackPadding[4];

    if (player->unk_258[30 + arg2].unk_01C == 1) {
        sp8C[0] = player->unk_258[30 + arg2].unk_000[0];
        sp8C[1] = player->unk_258[30 + arg2].unk_000[1];
        sp8C[2] = player->unk_258[30 + arg2].unk_000[2];
        sp84[0] = 0;
        sp84[1] = player->unk_048[arg3];
        sp84[2] = 0;
        func_800652D4(sp8C, sp84, player->unk_258[30 + arg2].unk_00C * player->size);
        if (player->unk_258[30 + arg2].unk_010 == 1) {
            gSPDisplayList(gDisplayListHead++, D_0D008DB8);
            gDPLoadTextureBlock(gDisplayListHead++, D_0D02AC58, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
            func_8004B72C(0x000000FF, 0x000000FF, 0x000000DF, 0x000000FF, 0x0000005F, 0, 0x00000060);
            // temp_v0_10 = gDisplayListHead;
            // gDisplayListHead = temp_v0_10 + 8;
            // temp_v0_10->words.w0 = (u32) &D_05FF8DB8;
            // temp_v0_10->words.w1 = (u32) D_0D008E70;
            // I have no idea what's going on here.
            // D_05FF8DB8 is clearly a fake variable, but there's not Gfx command
            // that matches w0 = 05FF8DB8, w1 = 0D008E70
        } else {
            gSPDisplayList(gDisplayListHead++, 0x0D010000);
            gDPLoadTextureBlock(gDisplayListHead++, D_0D02AC58, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
            func_8004B72C(0x000000FF, 0x000000FF, 0x000000DF, 0x000000FF, 0x0000005F, 0, 0x00000060);
            gSPDisplayList(gDisplayListHead++, D_0D008E48);
        }
        gMatrixEffectCount += 1;
    }
}
#else
GLOBAL_ASM("asm/non_matchings/code_80057C60/func_80067604.s")
#endif

// data/data_code_80071F00_2.s
extern u8 D_800E52D0[];

void func_80067964(Player *player, s8 arg1, f32 arg2, s8 arg3, s8 arg4) {
    Vec3f sp9C;
    Vec3s sp94;
    s32 stackPadding[2];

    if (player->unk_258[20 + arg4].unk_01C == 1) {
        sp9C[0] = player->unk_258[20 + arg4].unk_000[0];
        sp9C[1] = player->unk_258[20 + arg4].unk_000[1];
        sp9C[2] = player->unk_258[20 + arg4].unk_000[2];
        sp94[0] = 0;
        sp94[1] = player->unk_258[20 + arg4].unk_020;
        sp94[2] = 0;
        func_800652D4(sp9C, sp94, player->size * arg2);
        gSPDisplayList(gDisplayListHead++, D_0D008C90);
        gSPClearGeometryMode(gDisplayListHead++, G_CULL_BOTH);
        gDPLoadTLUT_pal256(gDisplayListHead++, D_800E52D0);
        gDPSetTextureLUT(gDisplayListHead++, G_TT_RGBA16);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D4AC, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        gSPVertex(gDisplayListHead++, D_800E8840, 4, 0);
        gSPDisplayList(gDisplayListHead++, common_square_plain_render);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D4B0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        gSPVertex(gDisplayListHead++, D_800E8800, 4, 0);
        gSPDisplayList(gDisplayListHead++, D_0D008DA0);
        gMatrixEffectCount += 1;
    }
}

void func_80067D3C(Player *player, s8 arg1, u8 *texture, s8 arg3, f32 arg4, s32 arg5) {
    Vec3f sp7C;
    Vec3s sp74;
    f32 sp54[8] = { 0.0f, -1.2f, 0.1f, 1.2f, -1.7f, -0.8f, -0.2f, -1.9f };
    // ????????????????????????????????????????
    s16 red   = ((arg5 >> 0x10) & 0xFF) & 0xFF;
    s16 green = ((arg5 >> 0x08) & 0xFF) & 0xFF;
    s16 blue  = ((arg5 >> 0x00) & 0xFF) & 0xFF;
    // ????????????????????????????????????????

    if (player->unk_258[20 + arg3].unk_01C == 1) {
        sp74[0] = 0;
        sp74[1] = player->unk_048[arg1];
        sp74[2] = 0;
        sp7C[0] = player->pos[0] + (sins((0x4000 & 0xFFFFFFFF) - (player->unk_02C[1] + player->unk_0C0)) * arg4);
        sp7C[1] = player->pos[1] + player->boundingBoxSize - sp54[player->characterId] - 2.0f;
        sp7C[2] = player->pos[2] + (coss((0x4000 & 0xFFFFFFFF) - (player->unk_02C[1] + player->unk_0C0)) * arg4);
        func_800652D4(sp7C, sp74, player->unk_258[20 + arg3].unk_00C * player->size);
        gSPDisplayList(gDisplayListHead++, D_0D008DB8);
        gDPLoadTextureBlock(gDisplayListHead++, texture, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

        func_8004B414(red, green, blue, 0x000000FF);
        gSPDisplayList(gDisplayListHead++, D_0D008E20);
        gMatrixEffectCount += 1;
    }
}

void func_8006801C(Player *player, s8 arg1, u8 *texture, s8 arg3, f32 arg4, s32 arg5) {
    Vec3f sp7C;
    Vec3s sp74;
    f32 sp54[8] = { -0.7f, -1.9f, -0.6f, 0.4f, -2.5f, -1.6f, -0.95f, -2.7f };
    // ????????????????????????????????????????
    s16 red   = ((arg5 >> 0x10) & 0xFF) & 0xFF;
    s16 green = ((arg5 >> 0x08) & 0xFF) & 0xFF;
    s16 blue  = ((arg5 >> 0x00) & 0xFF) & 0xFF;
    // ????????????????????????????????????????

    if (player->unk_258[20 + arg3].unk_01C == 1) {
        sp74[0] = 0;
        sp74[1] = player->unk_048[arg1];
        sp74[2] = 0;
        sp7C[0] = player->pos[0] + (sins((0x4000 & 0xFFFFFFFF) - (player->unk_02C[1] + player->unk_0C0)) * arg4);
        sp7C[1] = player->pos[1] + player->boundingBoxSize - sp54[player->characterId] - 2.0f;
        sp7C[2] = player->pos[2] + (coss((0x4000 & 0xFFFFFFFF) - (player->unk_02C[1] + player->unk_0C0)) * arg4);
        func_800652D4(sp7C, sp74, player->unk_258[20 + arg3].unk_00C * player->size * 0.8);
        gSPDisplayList(gDisplayListHead++, D_0D008DB8);
        gDPLoadTextureBlock(gDisplayListHead++, texture, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

        func_8004B414(red, green, blue, 0x000000FF);
        gSPDisplayList(gDisplayListHead++, D_0D008E20);
        gMatrixEffectCount += 1;
    }
}

// data/data_code_80071F00_2.s
extern u8 D_800E52D0[];

void func_80068310(Player *player, s8 arg1, f32 arg2, s8 arg3, s8 arg4) {
    s32 stackPadding[16]; // huh?
    Vec3f sp9C;
    Vec3s sp94;

    if (player->unk_258[20 + arg4].unk_01C == 1) {
        sp9C[1] = player->unk_258[20 + arg4].unk_000[1];
        sp9C[2] = player->pos[2] + (coss(player->unk_048[arg3]) * -10.0f);
        sp9C[0] = player->pos[0] + (sins(player->unk_048[arg3]) * -10.0f);
        sp94[0] = 0;
        sp94[1] = player->unk_048[arg3];
        sp94[2] = 0;
        func_800652D4(sp9C, sp94, player->unk_258[20 + arg4].unk_00C * player->size);
        gSPDisplayList(gDisplayListHead++, D_0D008C90);
        gDPLoadTLUT_pal256(gDisplayListHead++, D_800E52D0);
        gDPSetTextureLUT(gDisplayListHead++, G_TT_RGBA16);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D4B4, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        gSPVertex(gDisplayListHead++, D_800E8880, 4, 0);
        gSPDisplayList(gDisplayListHead++, common_square_plain_render);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D4B8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        gSPVertex(gDisplayListHead++, D_800E88C0, 4, 0);
        gSPDisplayList(gDisplayListHead++, D_0D008DA0);
        gMatrixEffectCount += 1;
    }
}

void func_80068724(Player *player, s8 arg1, f32 arg2, s8 arg3, s8 arg4) {
    s32 stackPadding[16]; // huh?
    Vec3f sp84;
    Vec3s sp7C;

    if (player->unk_258[20 + arg4].unk_01C == 1) {
        sp84[1] = player->pos[1] - 3.0f;
        sp84[2] = player->pos[2] + (coss(player->unk_048[arg3]) * -10.0f);
        sp84[0] = player->pos[0] + (sins(player->unk_048[arg3]) * -10.0f);
        sp7C[0] = 0;
        sp7C[1] = player->unk_048[arg3];
        sp7C[2] = 0;
        func_800652D4(sp84, sp7C, player->unk_258[20 + arg4].unk_00C * player->size);
        gSPDisplayList(gDisplayListHead++, D_0D008DB8);
        gDPSetCombineMode(gDisplayListHead++, G_CC_MODULATEIDECALA, G_CC_MODULATEIDECALA);
        gDPSetRenderMode(gDisplayListHead++, G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D4C4, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        gSPVertex(gDisplayListHead++, D_800E8A00, 4, 0);
        gSPDisplayList(gDisplayListHead++, common_square_plain_render);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D4C8, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        gSPVertex(gDisplayListHead++, D_800E8A40, 4, 0);
        gSPDisplayList(gDisplayListHead++, D_0D008DA0);
        gMatrixEffectCount += 1;
    }
}

void func_80068AA4(Player *player, s8 arg1, f32 arg2, s8 arg3, s8 arg4) {
    Vec3f sp64;
    Vec3s sp5C;

    if ((player->unk_258[20 + arg4].unk_01C == 1) && (player->animFrameSelector[arg3] < 0xD)) {
        sp64[1] = player->pos[1] - 3.0f;
        sp64[2] = player->pos[2] + ((-2.5 * player->unk_258[20 + arg4].unk_01E) * coss(player->unk_048[arg3]));
        sp64[0] = player->pos[0] + ((-2.5 * player->unk_258[20 + arg4].unk_01E) * sins(player->unk_048[arg3]));
        sp5C[0] = 0;
        sp5C[1] = player->unk_048[arg3];
        sp5C[2] = 0;
        func_800652D4(sp64, sp5C, player->unk_258[20 + arg4].unk_00C * player->size);
        gSPDisplayList(gDisplayListHead++, D_0D008D58);
        gDPSetTextureLUT(gDisplayListHead++, G_TT_NONE);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D4A0, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        func_8004B35C(0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
        gDPSetRenderMode(gDisplayListHead++, G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2);
        gSPVertex(gDisplayListHead++, D_800E8B40, 4, 0);
        gSPDisplayList(gDisplayListHead++, D_0D008DA0);
        gMatrixEffectCount += 1;
    }
}

// data/data_code_80071F00_2.s
extern u8 D_800E52D0[];

void func_80068DA0(Player *player, s8 arg1, f32 arg2, s8 arg3, s8 arg4) {
    Vec3f sp9C;
    Vec3s sp94;

    if ((player->unk_258[20 + arg4].unk_01C == 1) && ((s32) player->animFrameSelector[arg3] < 0xD)) {
        sp9C[1] = (player->pos[1] - 3.0f) + player->unk_258[20 + arg4].unk_000[1];
        sp9C[2] = player->pos[2] + (coss(player->unk_048[arg3]) * -10.0f);
        sp9C[0] = player->pos[0] + (sins(player->unk_048[arg3]) * -10.0f);
        sp94[0] = 0;
        sp94[1] = player->unk_048[arg3];
        sp94[2] = 0;
        func_800652D4(sp9C, sp94, player->unk_258[20 + arg4].unk_00C * player->size);
        gSPDisplayList(gDisplayListHead++, D_0D008C90);
        gDPLoadTLUT_pal256(gDisplayListHead++, D_800E52D0);
        gDPSetTextureLUT(gDisplayListHead++, G_TT_RGBA16);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D4A4, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        gSPVertex(gDisplayListHead++, D_800E8B80, 4, 0);
        gSPDisplayList(gDisplayListHead++, common_square_plain_render);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D4A8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        gSPVertex(gDisplayListHead++, D_800E8BC0, 4, 0);
        gSPDisplayList(gDisplayListHead++, D_0D008DA0);
        gMatrixEffectCount += 1;
    }
}

void func_800691B8(Player *player, s8 arg1, s16 arg2, s8 arg3) {
    Vec3f sp5C;
    Vec3s sp54;
    s16 alpha;

    if (player->unk_258[30 + arg2].unk_01C == 1) {
        alpha = player->unk_258[30 + arg2].unk_03E;
        sp5C[0] = player->unk_258[30 + arg2].unk_000[0];
        sp5C[1] = player->unk_258[30 + arg2].unk_000[1];
        sp5C[2] = player->unk_258[30 + arg2].unk_000[2];
        sp54[0] = 0;
        sp54[1] = player->unk_048[arg3];
        player->unk_258[30 + arg2].unk_03A += 0x1C71;
        sp54[2] = player->unk_258[30 + arg2].unk_03A;
        func_800652D4(sp5C, sp54, player->size * 0.5);
        gSPDisplayList(gDisplayListHead++, D_0D008D58);
        gDPSetTextureLUT(gDisplayListHead++, G_TT_NONE);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D488, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        func_8004B35C(0xFF, 0xFF, 0, alpha);
        gDPSetRenderMode(gDisplayListHead++, G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2);
        gSPVertex(gDisplayListHead++, D_800E87C0, 4, 0);
        gSPDisplayList(gDisplayListHead++, D_0D008DA0);
        gMatrixEffectCount++;
    }
}

void func_80069444(Player *player, s8 arg1, s16 arg2, s8 arg3) {
    Vec3f sp74;
    Vec3s sp6C;
    s16 primRed;
    s16 primGreen;
    s16 primBlue;
    s16 primAlpha;
    s16 envRed;
    s16 envGreen;
    s16 envBlue;
    u16 test;
    if (player->unk_258[30 + arg2].unk_01C == 1) {
        primRed = (D_800E47DC[player->unk_258[30 + arg2].unk_038] >> 0x10) & 0xFF;
        primGreen = (D_800E47DC[player->unk_258[30 + arg2].unk_038] >> 8) & 0xFF;
        primBlue = D_800E47DC[player->unk_258[30 + arg2].unk_038] & 0xFF;

        envRed = (D_800E480C[player->unk_258[30 + arg2].unk_038] >> 0x10) & 0xFF;
        envGreen = (D_800E480C[player->unk_258[30 + arg2].unk_038] >> 8) & 0xFF;
        envBlue = D_800E480C[player->unk_258[30 + arg2].unk_038] & 0xFF;
        primAlpha = player->unk_258[30 + arg2].unk_03E;

        sp74[0] = player->unk_258[30 + arg2].unk_000[0];
        sp74[1] = player->unk_258[30 + arg2].unk_000[1];
        sp74[2] = player->unk_258[30 + arg2].unk_000[2];
        sp6C[0] = 0;
        sp6C[1] = player->unk_048[arg3];
        sp6C[2] = 0;
        func_800652D4(sp74, sp6C, player->size * 1.5);
        gSPDisplayList(gDisplayListHead++, D_0D008DB8);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D494, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        // `test` MUST be a u16
        // `test` MUST be set to `envRed`s value
        // `test` MUST be typecast to s16 when passed as a function parameter
        // What. the. fuck.
        test = envRed;
        func_8004B72C(primRed, primGreen, primBlue, (s16)test, envGreen, envBlue, primAlpha);
        gSPDisplayList(gDisplayListHead++, D_0D008E48);
        gMatrixEffectCount += 1;
    }
}

void func_800696CC(Player *player, s8 arg1, s16 arg2, s8 arg3, f32 arg4) {
    Vec3f sp5C;
    Vec3s sp54;
    s16 alpha;

    if (player->unk_258[30 + arg2].unk_01C == 1) {
        alpha = player->unk_258[30 + arg2].unk_03E;
        sp5C[0] = player->unk_258[30 + arg2].unk_000[0];
        sp5C[1] = player->unk_258[30 + arg2].unk_000[1];
        sp5C[2] = player->unk_258[30 + arg2].unk_000[2];
        sp54[0] = 0;
        sp54[1] = player->unk_048[arg3];
        sp54[2] = 0;
        func_800652D4(sp5C, sp54, player->size * arg4);
        gSPDisplayList(gDisplayListHead++, D_0D008D58);
        gDPSetTextureLUT(gDisplayListHead++, G_TT_NONE);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D488, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        func_8004B35C(0x000000FF, 0x000000FF, 0, alpha);
        gDPSetRenderMode(gDisplayListHead++, G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2);
        gSPVertex(gDisplayListHead++, D_800E87C0, 4, 0);
        gSPDisplayList(gDisplayListHead++, D_0D008DA0);
        gMatrixEffectCount += 1;
    }
}

void func_80069938(Player *player, s8 arg1, s16 arg2, s8 arg3) {
    Vec3f sp5C;
    Vec3s sp54;
    s16 alpha;

    if (player->unk_258[30 + arg2].unk_01C == 1) {
        alpha = player->unk_258[30 + arg2].unk_03E;
        sp5C[0] = player->unk_258[30 + arg2].unk_000[0];
        sp5C[1] = player->unk_258[30 + arg2].unk_000[1];
        sp5C[2] = player->unk_258[30 + arg2].unk_000[2];
        sp54[0] = 0;
        sp54[1] = player->unk_048[arg3];
        sp54[2] = player->unk_258[30 + arg2].unk_038;
        func_800652D4(sp5C, sp54, player->unk_258[30 + arg2].unk_00C * player->size);
        gSPDisplayList(gDisplayListHead++, D_0D008D58);
        gDPSetTextureLUT(gDisplayListHead++, G_TT_NONE);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D488, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        func_8004B35C(0x000000FF, 0x000000FF, 0, alpha);
        gDPSetRenderMode(gDisplayListHead++, G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2);
        gSPVertex(gDisplayListHead++, D_800E87C0, 4, 0);
        gSPDisplayList(gDisplayListHead++, D_0D008DA0);
        gMatrixEffectCount += 1;
    }
}

void func_80069BA8(Player *player, s8 arg1, s16 arg2, s8 arg3) {
    Vec3f sp54;
    Vec3s sp4C;
    s16 red;
    s16 green;
    s16 blue;
    s16 alpha;

    if (player->unk_258[30 + arg2].unk_01C == 1) {
        red   = player->unk_258[30 + arg2].unk_038;
        green = player->unk_258[30 + arg2].unk_03A;
        blue  = player->unk_258[30 + arg2].unk_03C;
        alpha = player->unk_258[30 + arg2].unk_03E;
        sp54[0] = player->unk_258[30 + arg2].unk_000[0];
        sp54[1] = player->unk_258[30 + arg2].unk_000[1];
        sp54[2] = player->unk_258[30 + arg2].unk_000[2];
        sp4C[0] = 0;
        sp4C[1] = player->unk_048[arg3];
        sp4C[2] = 0;
        func_800652D4(sp54, sp4C, player->unk_258[30 + arg2].unk_00C * player->size);
        gSPDisplayList(gDisplayListHead++, D_0D008DB8);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D48C, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        func_8004B35C(red, green, blue, alpha);
        gSPDisplayList(gDisplayListHead++, D_0D008E48);
        gMatrixEffectCount += 1;
    }
}

void func_80069DB8(Player *player, s8 arg1, s16 arg2, s8 arg3) {
    Vec3f sp5C;
    Vec3s sp54;
    s32 stackPadding[2];

    if (player->unk_258[30 + arg2].unk_01C == 1) {
        sp5C[0] = player->unk_258[30 + arg2].unk_000[0];
        sp5C[1] = player->unk_258[30 + arg2].unk_000[1];
        sp5C[2] = player->unk_258[30 + arg2].unk_000[2];
        sp54[0] = 0;
        sp54[1] = player->unk_048[arg3];
        sp54[2] = 0;
        func_800652D4(sp5C, sp54, player->unk_258[30 + arg2].unk_00C * player->size);
        gSPDisplayList(gDisplayListHead++, D_0D008D58);
        gDPSetTextureLUT(gDisplayListHead++, G_TT_NONE);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D49C, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        func_8004B35C(0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
        gDPSetRenderMode(gDisplayListHead++, G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2);
        gSPVertex(gDisplayListHead++, D_800E8740, 4, 0);
        gSPDisplayList(gDisplayListHead++, D_0D008DA0);
        gMatrixEffectCount += 1;
    }
}

void func_8006A01C(Player *player, s8 arg1, s16 arg2, s8 arg3) {
    Vec3f sp54;
    Vec3s sp4C;

    if (player->unk_258[arg2].unk_01C == 1) {
        sp54[0] = player->unk_258[10 + arg2].unk_000[0];
        sp54[1] = player->unk_258[10 + arg2].unk_000[1];
        sp54[2] = player->unk_258[10 + arg2].unk_000[2];
        sp4C[0] = 0;
        sp4C[1] = player->unk_048[arg3];
        sp4C[2] = 0;
        func_800652D4(sp54, sp4C, player->unk_258[10 + arg2].unk_00C * player->size);

        gSPDisplayList(gDisplayListHead++, D_0D008D58);
        gDPSetTextureLUT(gDisplayListHead++, G_TT_NONE);
        gDPLoadTextureBlock(gDisplayListHead++, D_8018D49C, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        func_8004B35C(0xFF, 0xFF, 0xFF, 0xFF);
        gDPSetRenderMode(gDisplayListHead++, G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2);
        gSPVertex(gDisplayListHead++, D_0D008B78, 4, 0);
        gSPDisplayList(gDisplayListHead++, D_0D008DA0);
        gMatrixEffectCount++;
    }
}

void func_8006A280(Player *player, s8 arg1, s16 arg2, s8 arg3) {
    Vec3f sp5C;
    Vec3s sp54;
    s16 red;
    s16 green;
    s16 blue;

    if (player->unk_258[arg2].unk_01C == 1) {
        red   = player->unk_258[arg2].unk_038;
        green = player->unk_258[arg2].unk_03A;
        blue  = player->unk_258[arg2].unk_03C;
        sp5C[0] = player->unk_258[arg2].unk_000[0];
        sp5C[1] = player->unk_258[arg2].unk_000[1];
        sp5C[2] = player->unk_258[arg2].unk_000[2];
        sp54[0] = 0;
        sp54[1] = player->unk_048[arg3];
        sp54[2] = 0;
        func_800652D4(sp5C, sp54, player->unk_258[arg2].unk_00C * player->size);
        gSPDisplayList(gDisplayListHead++, D_0D008D58);
        gDPSetTextureLUT(gDisplayListHead++, G_TT_NONE);
        gDPLoadTextureBlock_4b(gDisplayListHead++, *D_800E47A0[player->unk_258[arg2].unk_01E], G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        func_8004B414(red, green, blue, 0x000000FF);
        gDPSetRenderMode(gDisplayListHead++, G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2);
        gSPVertex(gDisplayListHead++, D_800E8780, 4, 0);
        gSPDisplayList(gDisplayListHead++, D_0D008DA0);
        gMatrixEffectCount += 1;
    }
}

#ifdef MIPS_TO_C
//generated by m2c commit b7eac665cffd02361f73cec283ef16d0a35a0e5b
extern ? D_8018D4D0;
extern ? D_8018D530;
extern ? D_8018D590;
extern ? D_8018D620;
extern ? D_8018D650;
extern ? D_8018D6B0;
extern ? D_8018D710;
extern ? D_8018D770;
extern ? D_8018D7A0;
extern ? D_8018D7D0;
extern ? D_8018D800;
extern ? D_8018D830;
extern ? D_8018D860;
extern ? D_8018D890;
extern ? gPlayerBalloonStatus;

void func_8006A50C(Player *player, f32 arg1, f32 arg2, s8 arg3, s8 arg4, s16 arg5) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    s32 sp38;
    u16 *sp34;
    s32 sp30;
    s32 temp_v0;
    s32 temp_v1;
    u16 *temp_t0;

    temp_v0 = arg4 * 2;
    temp_t0 = (arg3 * 6) + temp_v0 + &gPlayerBalloonStatus;
    *temp_t0 = 0;
    temp_v1 = arg4 * 4;
    *(&D_8018D650 + ((arg3 * 0xC) + temp_v1)) = 0.1f;
    *(&D_8018D6B0 + ((arg3 * 0xC) + temp_v1)) = 0.0f;
    *(&D_8018D710 + ((arg3 * 0xC) + temp_v1)) = 0.0f;
    *(&D_8018D770 + ((arg3 * 6) + temp_v0)) = 0;
    *(&D_8018D7A0 + ((arg3 * 6) + temp_v0)) = 0;
    *(&D_8018D7D0 + ((arg3 * 6) + temp_v0)) = 0;
    *(&D_8018D800 + ((arg3 * 6) + temp_v0)) = 5;
    *(&D_8018D830 + ((arg3 * 6) + temp_v0)) = 1;
    *(&D_8018D620 + ((arg3 * 6) + temp_v0)) = -player->unk_02C[1] - player->unk_0C0;
    sp34 = temp_t0;
    sp30 = temp_v1;
    sp38 = temp_v0;
    func_80062B18(&sp44, &sp40, &sp3C, arg1, 4.0f, (f32) ((f64) arg2 + -3.8), (u16) (s32) -player->unk_02C[1], (u16) 0);
    *(&D_8018D4D0 + ((arg3 * 0xC) + sp30)) = player->pos[0] + sp44;
    *(&D_8018D590 + ((arg3 * 0xC) + sp30)) = player->pos[2] + sp3C;
    *(&D_8018D530 + ((arg3 * 0xC) + sp30)) = (player->pos[1] - player->boundingBoxSize) + sp40;
    *sp34 |= 1;
    *(&D_8018D860 + ((arg3 * 6) + sp38)) = arg5;
    *(&D_8018D890 + ((arg3 * 6) + sp38)) = 0;
}
#else
GLOBAL_ASM("asm/non_matchings/code_80057C60/func_8006A50C.s")
#endif

#ifdef MIPS_TO_C
//generated by m2c commit b7eac665cffd02361f73cec283ef16d0a35a0e5b
extern ? D_8018D4D0;
extern ? D_8018D530;
extern ? D_8018D590;
extern ? D_8018D620;
extern ? D_8018D650;
extern ? D_8018D6B0;
extern ? D_8018D710;
extern ? D_8018D770;
extern ? D_8018D7A0;
extern ? D_8018D7D0;
extern ? D_8018D800;
extern ? D_8018D830;
extern ? D_8018D860;
extern ? D_8018D890;
extern ? D_8018D8D0;
extern ? gPlayerBalloonStatus;
static ? D_800E4914;                                /* unable to generate initializer */

void func_8006A7C0(Player *player, f32 arg1, f32 arg2, s8 arg3, s8 arg4) {
    ? sp80;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 *sp60;
    s32 sp5C;
    u16 *sp58;
    s32 sp54;
    f32 *sp50;
    f32 *sp4C;
    s16 *sp3C;
    s16 *sp34;
    f32 *temp_a1;
    f32 *temp_t2;
    f32 *temp_v0_2;
    f32 *temp_v1;
    f32 *temp_v1_2;
    f32 *temp_v1_3;
    f32 *var_t2;
    f32 temp_f8;
    f32 var_f12;
    f64 var_f0;
    f64 var_f0_2;
    s16 *temp_a0;
    s16 *temp_a2;
    s16 *temp_v0;
    s16 *var_a1;
    s16 *var_v0;
    s32 temp_t1;
    s32 temp_t8;
    s32 var_t0;
    s32 var_t1;
    u16 *temp_t7;

    sp80.unk0 = (s32) D_800E4914.unk0;
    sp80.unk4 = (s32) D_800E4914.unk4;
    sp80.unk8 = (s32) D_800E4914.unk8;
    sp80.unkC = (s32) D_800E4914.unkC;
    sp80.unk10 = (s32) D_800E4914.unk10;
    sp80.unk14 = (s32) D_800E4914.unk14;
    sp80.unk18 = (s32) D_800E4914.unk18;
    sp80.unk1C = (s32) D_800E4914.unk1C;
    var_f12 = player->unk_094;
    var_t0 = arg4 * 2;
    temp_t7 = (arg3 * 6) + var_t0 + &gPlayerBalloonStatus;
    sp58 = temp_t7;
    temp_t1 = arg4 * 4;
    sp6C = (-(var_f12 / 18.0f) * 216.0f) / 10.0f;
    if ((*temp_t7 & 2) != 2) {
        temp_a1 = (arg3 * 0xC) + temp_t1 + &D_8018D650;
        *temp_a1 = (f32) ((f64) *temp_a1 + (-0.003 + ((f64) -var_f12 * 0.0006)));
        var_f0 = (f64) *temp_a1;
        temp_v1 = (arg3 * 0xC) + temp_t1 + &D_8018D6B0;
        temp_t2 = (arg3 * 0xC) + temp_t1 + &D_8018D710;
        if (var_f0 >= 0.05) {
            *temp_a1 = 0.05f;
            var_f0 = (f64) *temp_a1;
        }
        if (var_f0 <= -0.05) {
            *temp_a1 = -0.05f;
        }
        *temp_v1 += *temp_a1;
        var_f0_2 = (f64) *temp_v1;
        if (var_f0_2 >= 0.06) {
            *temp_v1 = 0.06f;
            var_f0_2 = (f64) *temp_v1;
        }
        if (var_f0_2 <= -0.06) {
            *temp_v1 = -0.06f;
        }
        *temp_t2 += *temp_v1;
        if (*temp_t2 < 0.0f) {
            sp60 = temp_v1;
            sp50 = temp_a1;
            sp5C = var_t0;
            sp4C = temp_t2;
            temp_f8 = (f32) (random_int(0x000BU) / 10);
            *temp_v1 = 0.0f;
            *temp_t2 = 0.0f;
            *temp_a1 = temp_f8;
        }
        *(&D_8018D620 + ((arg3 * 6) + var_t0)) = -player->unk_02C[1] - player->unk_0C0;
        sp5C = var_t0;
        move_s16_towards((arg3 * 6) + var_t0 + &D_8018D890, (s16) (s32) (player->unk_094 * 182.0f), 0.1f);
        var_f12 = player->unk_094;
    }
    temp_a2 = (arg3 * 6) + var_t0 + &D_8018D830;
    temp_t8 = arg4 * 4;
    var_t1 = temp_t8;
    sp50 = (arg3 * 6) + var_t0 + &D_8018D620;
    var_t2 = (arg3 * 0xC) + temp_t8 + &D_8018D710;
    if (*temp_a2 == 1) {
        var_a1 = (arg3 * 6) + var_t0 + &D_8018D800;
        var_v0 = (arg3 * 6) + var_t0 + &D_8018D770;
        *var_v0 = (s16) (s32) ((f32) *var_v0 + ((f32) *var_a1 - var_f12));
    } else {
        var_a1 = (arg3 * 6) + var_t0 + &D_8018D800;
        var_v0 = (arg3 * 6) + var_t0 + &D_8018D770;
        *var_v0 = (s16) (s32) ((f32) *var_v0 + ((f32) *var_a1 + var_f12));
    }
    if (*var_v0 >= 0xB) {
        *var_v0 = 0x000B;
    }
    if (*var_v0 < -0xA) {
        *var_v0 = -0x000B;
    }
    temp_v0 = (arg3 * 6) + var_t0 + &D_8018D7A0;
    *temp_v0 += *var_v0;
    if (*temp_v0 >= 0x29) {
        *temp_v0 = 0x0029;
    }
    if (*temp_v0 < -0x28) {
        *temp_v0 = -0x0029;
    }
    temp_v1_2 = (arg3 * 6) + var_t0 + &D_8018D7D0;
    *temp_v1_2 = (s16) (*temp_v1_2 + *temp_v0);
    if (*temp_v1_2 >= 0x38E) {
        sp60 = temp_v1_2;
        sp34 = var_a1;
        sp3C = temp_a2;
        sp5C = var_t0;
        sp54 = var_t1;
        sp4C = var_t2;
        *var_a1 = -random_int(8U);
        if (*temp_a2 != 1) {
            *temp_a2 = 1;
        }
    }
    if (*temp_v1_2 < -0x38D) {
        sp34 = var_a1;
        sp3C = temp_a2;
        sp5C = var_t0;
        sp54 = var_t1;
        sp4C = var_t2;
        *var_a1 = random_int(8U);
        if (*temp_a2 != -1) {
            *temp_a2 = -1;
        }
    }
    sp54 = var_t1;
    sp5C = var_t0;
    func_80062B18(&sp78, &sp74, &sp70, arg1, (sp + (player->characterId * 4))->unk80 - *var_t2, (f32) ((f64) arg2 + -3.2 + (f64) (sp6C * 1.0f)), (u16) (s32) -*sp50, (u16) (player->unk_206 * -2));
    if ((*sp58 & 2) != 2) {
        *(&D_8018D530 + ((arg3 * 0xC) + sp54)) = (player->pos[1] - player->boundingBoxSize) + sp74;
        *(&D_8018D4D0 + ((arg3 * 0xC) + sp54)) = player->pos[0] + sp78;
        *(&D_8018D590 + ((arg3 * 0xC) + sp54)) = player->pos[2] + sp70;
        *(&D_8018D8D0 + ((arg3 * 6) + sp5C)) = 0;
        return;
    }
    temp_v0_2 = (arg3 * 0xC) + sp54 + &D_8018D530;
    temp_v1_3 = (arg3 * 6) + sp5C + &D_8018D8D0;
    *temp_v0_2 = (f32) ((f64) *temp_v0_2 + 0.2);
    *temp_v1_3 = (s16) (*temp_v1_3 + 1);
    temp_a0 = (arg3 * 6) + sp5C + &D_8018D890;
    sp60 = temp_v1_3;
    sp5C = sp5C;
    move_s16_towards(temp_a0, 0, 0.1f);
    move_s16_towards((arg3 * 6) + sp5C + &D_8018D860, 0, 0.1f);
    if (*temp_v1_3 >= 0x78) {
        func_8006B974((s32) player, arg3, arg4);
    }
}
#else
GLOBAL_ASM("asm/non_matchings/code_80057C60/func_8006A7C0.s")
#endif

#ifdef MIPS_TO_C
//generated by m2c commit b7eac665cffd02361f73cec283ef16d0a35a0e5b
extern u32 D_8018D4BC;
extern s32 D_8018D4C0;
extern ? D_8018D4D0;
extern ? D_8018D530;
extern ? D_8018D590;
extern ? D_8018D7D0;
extern ? D_8018D860;
extern ? D_8018D890;
static ? D_800E4934;                                /* unable to generate initializer */
static ? D_800E4954;                                /* unable to generate initializer */
static ? gBalloonVertexPlane1;                                /* unable to generate initializer */
static ? gBalloonVertexPlane2;                                /* unable to generate initializer */
static ? D_800E52D0;                                /* unable to generate initializer */

void func_8006AFD0(Player *player, s16 arg1, s8 arg2, s8 arg3) {
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    s16 sp130;
    s16 sp12E;
    s16 sp12C;
    s16 sp128;
    s16 sp126;
    s16 sp124;
    s16 sp122;
    s16 sp120;
    s16 sp11E;
    s16 sp11C;
    Gfx *spB0;
    Gfx *spAC;
    f32 sp58;
    void *sp54;
    s32 sp44;
    s32 sp40;
    s16 *sp3C;
    Camera *temp_v0_2;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_22;
    Gfx *temp_v0_23;
    Gfx *temp_v0_24;
    Gfx *temp_v0_25;
    Gfx *temp_v0_26;
    Gfx *temp_v0_27;
    Gfx *temp_v0_28;
    Gfx *temp_v0_29;
    Gfx *temp_v0_30;
    Gfx *temp_v0_31;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    f32 temp_f0;
    f32 temp_f20;
    f32 var_f20;
    f64 var_f0;
    s16 *temp_v1_2;
    s16 temp_t1;
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_v0;
    s32 temp_v1;
    u16 temp_t0;

    spF0[0].unk0 = D_800E4934.unk0;
    spF0[0].unk4 = (s32) D_800E4934.unk4;
    spF0[0].unk8 = (s32) D_800E4934.unk8;
    spF0[0].unkC = (s32) D_800E4934.unkC;
    spF0[0].unk10 = (s32) D_800E4934.unk10;
    spF0[0].unk14 = (s32) D_800E4934.unk14;
    spF0[0].unk18 = (s32) D_800E4934.unk18;
    spF0[0].unk1C = (s32) D_800E4934.unk1C;
    spD0[0].unk0 = D_800E4954.unk0;
    spD0[0].unk4 = (s32) D_800E4954.unk4;
    spD0[0].unk8 = (s32) D_800E4954.unk8;
    spD0[0].unkC = (s32) D_800E4954.unkC;
    spD0[0].unk10 = (s32) D_800E4954.unk10;
    spD0[0].unk14 = (s32) D_800E4954.unk14;
    spD0[0].unk18 = (s32) D_800E4954.unk18;
    spD0[0].unk1C = (s32) D_800E4954.unk1C;
    temp_t0 = player->characterId;
    temp_v0 = (&spF0[0])[temp_t0];
    sp128 = (temp_v0 >> 0x10) & 0xFF;
    sp126 = (temp_v0 >> 8) & 0xFF;
    sp124 = temp_v0 & 0xFF;
    temp_v1 = (&spD0[0])[temp_t0];
    sp122 = (temp_v1 >> 0x10) & 0xFF;
    sp120 = (temp_v1 >> 8) & 0xFF;
    sp11E = temp_v1 & 0xFF;
    sp54 = player + (arg3 * 2);
    temp_t1 = ((s32) ((player->unk_02C[1] + player->unk_048[arg3] + player->unk_0C0) & 0xFFFF) / 128) << 7;
    if (arg3 == (s8) arg1) {
        var_f20 = 0.3f;
    } else {
        temp_v0_2 = &cameras[arg3];
        temp_f20 = player->pos[0] - temp_v0_2->pos[0];
        temp_f0 = player->pos[2] - temp_v0_2->pos[2];
        if (gActiveScreenMode != SCREEN_MODE_3P_4P_SPLITSCREEN) {
            sp11C = temp_t1;
            var_f20 = sqrtf((temp_f20 * temp_f20) + (temp_f0 * temp_f0)) / 300.0f;
        } else {
            sp11C = temp_t1;
            var_f20 = sqrtf((temp_f20 * temp_f20) + (temp_f0 * temp_f0)) / 200.0f;
        }
        var_f0 = (f64) var_f20;
        if (var_f0 >= 1.8) {
            var_f20 = 1.8f;
            var_f0 = (f64) 1.8f;
        }
        if (var_f0 <= 0.3) {
            var_f20 = 0.3f;
        }
    }
    temp_t7 = (s16) arg2 * 4;
    temp_a0 = temp_t1 & 0xFFFF;
    sp44 = temp_a0;
    sp134 = *(&D_8018D4D0 + (((s8) arg1 * 0xC) + temp_t7));
    sp138 = *(&D_8018D530 + (((s8) arg1 * 0xC) + temp_t7));
    sp13C = *(&D_8018D590 + (((s8) arg1 * 0xC) + temp_t7));
    temp_t6 = (s16) arg2 * 2;
    temp_v1_2 = ((s8) arg1 * 6) + temp_t6 + &D_8018D890;
    sp12C = (s16) (s32) -(coss((u16) temp_a0) * (f32) (*temp_v1_2 * 4));
    sp3C = temp_v1_2;
    sp40 = temp_t6;
    sp12E = sp54->unk48;
    sp58 = coss(unksp46);
    sp130 = (s16) (s32) (((f32) *(&D_8018D7D0 + (((s8) arg1 * 6) + temp_t6)) - ((f32) *(&D_8018D860 + (((s8) arg1 * 6) + temp_t6)) * sp58)) - (sins(unksp46) * (f32) (*sp3C * 8)));
    mtxf_translate_rotate((f32 (*)[4]) &sp140[0], &sp134, &sp12C);
    mtxf_scale2((f32 (*)[4]) &sp140[0], var_f20);
    convert_to_fixed_point_matrix(&gGfxPool->mtxEffect[gMatrixEffectCount], (f32 (*)[4]) &sp140[0]);

    gSPMatrix(gDisplayListHead++, PHYSICAL_TO_VIRTUAL(&gGfxPool->mtxEffect[gMatrixEffectCount], G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    gSPDisplayList(gDisplayListHead++, D_0D008DB8);
    gDPLoadTLUT_pal256(gDisplayListHead++, 0x800E52D0);
    gDPSetTextureLUT(gDisplayListHead++, G_TT_RGBA16);

    func_8004B614((s32) sp128, (s32) sp126, (s32) sp124, (s32) sp122, (s32) sp120, (s32) sp11E, 0x000000D8);
    
    gDPSetRenderMode(gDisplayListHead++, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_WRAP | ZMODE_XLU | CVG_X_ALPHA | FORCE_BL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA), AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_WRAP | ZMODE_XLU | CVG_X_ALPHA | FORCE_BL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA));
    gDPLoadTextureBlock(gDisplayListHead++, D_8018D4BC, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPVertex(gDisplayListHead++, gBalloonVertexPlane1, 4, 0);
    gSPDisplayList(gDisplayListHead++, common_square_plain_render);
    gDPLoadTextureBlock(gDisplayListHead++, D_8018D4C0 - 0x40, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPVertex(gDisplayListHead++, gBalloonVertexPlane2, 4, 0);
    gSPDisplayList(gDisplayListHead++, common_square_plain_render);
    gSPTexture(gDisplayListHead++, 0x0001, 0x0001, 0, G_TX_RENDERTILE, G_OFF);
    gMatrixEffectCount++;
}
#else
GLOBAL_ASM("asm/non_matchings/code_80057C60/func_8006AFD0.s")
#endif

extern void func_8006A50C(Player*, f32, f32, s8, s8, s16);

void func_8006B7E4(Player* player, s8 arg1) {
    func_8006A50C(player, 0.0f, 0.0f, arg1, (s8) 0, (s16) 0);
    func_8006A50C(player, 1.5f, 2.0f, arg1, (s8) 1, (s16) 0x1C70);
    func_8006A50C(player, -1.5f, 2.0f, arg1, (s8) 2, (s16) -0x1C70);
    gPlayerBalloonCount[arg1] = 2;
}

void func_8006B87C(UNUSED Player *player, s8 playerIndex) {
    gPlayerBalloonStatus[playerIndex][0] = BALLOON_STATUS_GONE;
    gPlayerBalloonStatus[playerIndex][1] = BALLOON_STATUS_GONE;
    gPlayerBalloonStatus[playerIndex][2] = BALLOON_STATUS_GONE;
}

void func_8006B8B4(Player *player, s8 playerIndex) {
    if (gPlayerBalloonCount[playerIndex] >= 0) {
        gPlayerBalloonStatus[playerIndex][gPlayerBalloonCount[playerIndex]] &= ~1;
        gPlayerBalloonStatus[playerIndex][gPlayerBalloonCount[playerIndex]] |= 2;
        gPlayerBalloonCount[playerIndex]--;
        func_800C9060(playerIndex, 0x19009051U);
        if (gPlayerBalloonCount[playerIndex] < 0) {
            func_8008FD4C(player, playerIndex);
        }
    }
}

void func_8006B974(UNUSED s32 arg0, s8 playerIndex, s8 balloonIndex) {
    if (gPlayerBalloonCount[playerIndex] >= 0) {
        gPlayerBalloonStatus[playerIndex][balloonIndex] = BALLOON_STATUS_GONE;
    }
}

void func_8006B9CC(Player* player, s8 arg1) {
    if (gPlayerBalloonStatus[arg1][0] != 0) {
        func_8006A7C0(player, 0.0f, 0.0f, arg1, 0);
    }

    if (gPlayerBalloonStatus[arg1][1] != 0) {

        func_8006A7C0(player, 1.8f, 2.6f, arg1, 1);
    }

    if (gPlayerBalloonStatus[arg1][2] != 0) {
        func_8006A7C0(player, -1.8f, 2.6f, arg1, 2);
    }
}

void func_8006BA94(Player* player, s8 playerIndex, s8 arg2) {
    if (gPlayerBalloonStatus[playerIndex][0] != BALLOON_STATUS_GONE) {
        func_8006AFD0(player, playerIndex, 0, arg2);
    }
    if (gPlayerBalloonStatus[playerIndex][1] != BALLOON_STATUS_GONE) {
        func_8006AFD0(player, playerIndex, 1, arg2);
    }
    if (gPlayerBalloonStatus[playerIndex][2] != BALLOON_STATUS_GONE) {
        func_8006AFD0(player, playerIndex, 2, arg2);
    }
}

// data/data_code_80071F00_2.s
extern Vtx gBalloonVertexPlane1[];
extern Vtx gBalloonVertexPlane2[];
extern u8 D_800E52D0[];

void render_balloon(Vec3f arg0, f32 arg1, s16 arg2, s16 arg3) {
    Mat4 sp108;
    Vec3f spFC;
    Vec3s spF4;
    s16 stackPadding;
    s16 primRed;
    s16 primGreen;
    s16 primBlue;
    s16 envRed;
    s16 envGreen;
    s16 envBlue;
    s32 primColors[] = {
        MAKE_RGB(0xC8, 0x01, 0x00), MAKE_RGB(0x00, 0x70, 0x01), MAKE_RGB(0x10, 0x79, 0x51), MAKE_RGB(0x00, 0x59, 0x70),
        MAKE_RGB(0x70, 0x55, 0x00), MAKE_RGB(0x7A, 0x7E, 0x00), MAKE_RGB(0x77, 0x2C, 0x24), MAKE_RGB(0x30, 0x14, 0x58),
    };
    s32 envColors[] = {
        MAKE_RGB(0xDC, 0x00, 0x00), MAKE_RGB(0x00, 0x8C, 0x06), MAKE_RGB(0x00, 0x00, 0x51), MAKE_RGB(0x00, 0x00, 0x00),
        MAKE_RGB(0x00, 0x00, 0x00), MAKE_RGB(0x00, 0x00, 0x00), MAKE_RGB(0x00, 0x00, 0x00), MAKE_RGB(0x00, 0x00, 0x00),
    };

    primRed   = (primColors[arg3] >> 0x10) & 0xFF;
    primGreen = (primColors[arg3] >> 0x08) & 0xFF;
    primBlue  = (primColors[arg3] >> 0x00) & 0xFF;
    envRed    = ( envColors[arg3] >> 0x10) & 0xFF;
    envGreen  = ( envColors[arg3] >> 0x08) & 0xFF;
    envBlue   = ( envColors[arg3] >> 0x00) & 0xFF;
    spFC[0] = arg0[0];
    spFC[1] = arg0[1];
    spFC[2] = arg0[2];
    spF4[0] = 0;
    spF4[1] = camera1->rot[1];
    spF4[2] = arg2;
    mtxf_translate_rotate(sp108[0], spFC, spF4);
    mtxf_scale2(sp108[0], arg1);
    convert_to_fixed_point_matrix(&gGfxPool->mtxEffect[gMatrixEffectCount], sp108);
    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&gGfxPool->mtxEffect[gMatrixEffectCount]), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    gSPDisplayList(gDisplayListHead++, D_0D008DB8);
    gDPLoadTLUT_pal256(gDisplayListHead++, D_800E52D0);
    gDPSetTextureLUT(gDisplayListHead++, G_TT_RGBA16);
    func_8004B614(primRed, primGreen, primBlue, envRed, envGreen, envBlue, 0x000000D8);
    gDPSetRenderMode(gDisplayListHead++, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_WRAP | ZMODE_XLU | CVG_X_ALPHA | FORCE_BL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA), AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_WRAP | ZMODE_XLU | CVG_X_ALPHA | FORCE_BL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA));
    gDPLoadTextureBlock(gDisplayListHead++, D_8018D4BC, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPVertex(gDisplayListHead++, gBalloonVertexPlane1, 4, 0);
    gSPDisplayList(gDisplayListHead++, common_square_plain_render);
    // D_8018D4C0 is correct. But interestingly, IDO seems to set "-0x40" to a different register so the texture still looks fine.
    gDPLoadTextureBlock(gDisplayListHead++, D_8018D4C0 - 0x40, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPVertex(gDisplayListHead++, gBalloonVertexPlane2, 4, 0);
    gSPDisplayList(gDisplayListHead++, common_square_plain_render);
    gSPTexture(gDisplayListHead++, 1, 1, 0, G_TX_RENDERTILE, G_OFF);
    gMatrixEffectCount += 1;
}

void func_8006C0C8(Vec3f arg0, f32 arg1, s32 rgb, s16 alpha) {
    Vec3f sp4C;
    Vec3s sp44;
    s16 red;
    s16 green;
    s16 blue;

    sp4C[0] = arg0[0];
    sp4C[1] = arg0[1];
    sp4C[2] = arg0[2];
    sp44[0] = 0;
    sp44[1] = camera1->rot[1];
    sp44[2] = 0;
    func_800652D4(sp4C, sp44, arg1);
    gSPDisplayList(gDisplayListHead++, D_0D008DB8);
    gDPLoadTextureBlock(gDisplayListHead++, D_8018D48C, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0,
        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    // ???????????????????????????????????
    red   = ((rgb >> 0x10) & 0xFF) & 0xFF;
    green = ((rgb >> 0x08) & 0xFF) & 0xFF;
    blue  = ((rgb >> 0x00) & 0xFF) & 0xFF;
    // ???????????????????????????????????
    func_8004B35C(red, green, blue, alpha);
    gSPDisplayList(gDisplayListHead++, D_0D008E48);
    gMatrixEffectCount += 1;
}

void func_8006C294(Vec3f arg0, f32 arg1, s32 rgb, s16 alpha) {
    Vec3f sp5C;
    Vec3s sp54;
    // ???????????????????????????????????????
    s16 red   = ((rgb >> 0x10) & 0xFF) & 0xFF;
    s16 green = ((rgb >> 0x08) & 0xFF) & 0xFF;
    s16 blue  = ((rgb >> 0x00) & 0xFF) & 0xFF;
    // ???????????????????????????????????????

    sp5C[0] = arg0[0];
    sp5C[1] = arg0[1];
    sp5C[2] = arg0[2];
    sp54[0] = 0;
    sp54[1] = camera1->rot[1];
    sp54[2] = 0;
    func_800652D4(sp5C, sp54, arg1);
    gSPDisplayList(gDisplayListHead++, D_0D008D58);
    gDPSetTextureLUT(gDisplayListHead++, G_TT_NONE);
    gDPLoadTextureBlock(gDisplayListHead++, D_8018D488, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    func_8004B35C(red, green, blue, alpha);
    gDPSetRenderMode(gDisplayListHead++, G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2);
    gSPVertex(gDisplayListHead++, D_800E87C0, 4, 0);
    gSPDisplayList(gDisplayListHead++, D_0D008DA0);
    gMatrixEffectCount += 1;
}

void func_8006C4D4(Vec3f arg0, f32 arg1, s32 rgb, s16 alpha, s16 arg4) {
    Vec3f sp4C;
    Vec3s sp44;
    // ???????????????????????????????????????
    s16 red   = ((rgb >> 0x10) & 0xFF) & 0xFF;
    s16 green = ((rgb >> 0x08) & 0xFF) & 0xFF;
    s16 blue  = ((rgb >> 0x00) & 0xFF) & 0xFF;
    // ???????????????????????????????????????

    sp4C[0] = arg0[0];
    sp4C[1] = arg0[1];
    sp4C[2] = arg0[2];
    sp44[0] = 0;
    sp44[1] = camera1->rot[1];
    sp44[2] = 0;
    func_800652D4(sp4C, sp44, arg1);
    gSPDisplayList(gDisplayListHead++, D_0D008DB8);
    gDPLoadTextureBlock(gDisplayListHead++, D_0D02AC58[arg4], G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    func_8004B414(red, green, blue, alpha);
    gSPDisplayList(gDisplayListHead++, D_0D008E48);
    gMatrixEffectCount += 1;
}

#ifdef NON_MATCHING
/**
 * Similar to func_8006C9B8, something about arg3 is very
 * weird here.
 * It seems plausible that several functions called by this one
 * actually take one more argument than they are currently expected to?
**/
void func_8006C6AC(Player *player, s16 arg1, s8 arg2, s8 arg3) {
    s32 sp28;

    sp28 = arg1 - 1;
    if (sp28 < 0) {
        sp28 = 9;
    }
    if (player->unk_258[10 + arg1].unk_01C == 1) {
        switch (player->unk_258[10 + arg1].unk_012) {
        case 1:
            func_80063408(player, arg1, arg2, arg3);
            break;
        case 2:
            func_800635D4(player, arg1, arg2, arg3);
            break;
        case 3:
            func_80063BD4(player, arg1, arg2, arg3);
            break;
        case 4:
            func_800643A8(player, arg1, arg2, arg3);
            break;
        case 5:
            func_800639DC(player, arg1, arg2, arg3);
            break;
        case 9:
            func_80063D58(player, arg1, arg2, arg3);
            break;
        case 11:
            func_80062F98(player, arg1, arg2, arg3);
            break;
        default:
            break;
        }
    } else {
        if (player->unk_0DE & 1) {
            // func_80060BCC(player, arg1, sp28, (s32) arg2, /* extra? */ (s32) arg3);
            func_80060BCC(player, arg1, sp28, (s32) arg2);
        } else if (!(player->effects & 8) && !(player->effects & 2)) {
            if (((player->effects & 0x10) == 0x10) && ((player->type & 0x4000) == 0x4000)) {
                func_8005DA30(player, arg1, sp28, arg2, (s8) (s32) arg3);
            } else if (((f64) (D_801652A0[arg2] - player->boundingBoxCorners[3].cornerGroundY) >= 3.5) || ((f64) (D_801652A0[arg2] - player->boundingBoxCorners[2].cornerGroundY) >= 3.5)) {
                // func_8005EA94(player, arg1, sp28, arg2, /* extra? */ (s32) arg3);
                func_8005EA94(player, arg1, sp28, arg2);
            } else if (((player->effects & 0x80) == 0x80) || ((player->effects & 0x40) == 0x40)) {
                // func_8005F90C(player, arg1, sp28, (s32) arg2, /* extra? */ (s32) arg3);
                func_8005F90C(player, arg1, sp28, (s32) arg2);
            } else if (((player->effects & 0x4000) && !(player->type & PLAYER_STAGING)) || (player->effects & 0x800) || (player->effects & 0x20) || (player->unk_044 & 0x4000)) {
                // func_8005ED48(player, arg1, sp28, (s32) arg2, /* extra? */ (s32) arg3);
                func_8005ED48(player, arg1, sp28, (s32) arg2);
            } else {
                // func_8005DAF4(player, arg1, sp28, (s32) arg2, /* extra? */ (s32) arg3);
                func_8005DAF4(player, arg1, sp28, (s32) arg2);
            }
        }
    }
}
#else
GLOBAL_ASM("asm/non_matchings/code_80057C60/func_8006C6AC.s")
#endif

#ifdef NON_MATCHING
/**
 * https://decomp.me/scratch/pKyCf
 * There's something very very wrong about the handling of arg3
 * In the target assembly arg3 keeps getting (re?)converted to
 * an s8, but in this decomp attempt that never happens.
 * I don't know what's going on.
**/
void func_8006C9B8(Player *player, s16 arg1, s8 arg2, s8 arg3) {
    s32 stackPadding;
    s32 sp28;
    sp28 = arg1 - 1;
    if (sp28 < 0) {
        sp28 = 9;
    }
    if (player->unk_258[30 + arg1].unk_01C == 1) {
        switch (player->unk_258[30 + arg1].unk_012) {
            case 1:
            func_800644E8(player, arg1, arg2, arg3);
            break;
            
            case 2:
            func_800649F4(player, arg1, arg2, arg3);
            break;
            
            case 3:
            func_80064C74(player, arg1, arg2, arg3);
            break;
            
            case 4:
            func_800647C8(player, arg1, arg2, arg3);
            break;
            
            case 5:
            func_80064B30(player, arg1, arg2, arg3);
            break;
            
            case 6:
            func_800648E4(player, arg1, arg2, arg3);
            break;
            
            case 7:
            func_80064988(player, arg1, arg2, arg3);
            break;
            
            case 8:
            func_80064C74(player, arg1, arg2, arg3);
            break;
            
            case 9:
            func_80064664(player, arg1, arg2, arg3);
            break;
            
            default:
            break;
        }
    } else {
        if (player->unk_044 & 0x1000) {
            func_80061430(player, arg1, sp28, arg2);
            player->unk_044 &= ~0x0100;
            return;
        }
        if (((((player->unk_0CA & 0x1000) == 0x1000) || ((player->unk_0E0 < 2) && (player->effects & 0x01000000))) || ((player->unk_0E0 < 2) && (player->effects & 0x02000000))) || (player->effects & 0x400)) {
            func_8006199C(player, arg1, sp28, arg2, arg3);
            player->unk_046 &= ~0x0008;
            player->unk_044 &= ~0x0100;
            return;
        }
        if ((player->unk_0CA & 0x2000) == 0x2000) {
            func_80061A34(player, arg1, sp28, arg2);
            player->unk_046 &= ~0x0008;
            player->unk_044 &= ~0x0100;
            return;
        }
        if ((player->effects & 0x200) && ((((s32) gCourseTimer) - D_8018D930[arg2]) < 9)) {
            func_800615AC(player, arg1, sp28, arg2);
            player->unk_046 &= ~0x0008;
            player->unk_044 &= ~0x0100;
            return;
        }
        if ((player->unk_046 & 8) == 8) {
            func_800612F8(player, arg1, sp28, arg2);
            player->unk_044 &= ~0x0100;
            return;
        }
        if (((player->unk_046 & 0x20) == 0x20) && (((player->unk_094 / 18.0f) * 216.0f) >= 20.0f)) {
            func_80061D4C(player, arg1, sp28, arg2);
            player->unk_046 &= ~0x0008;
            player->unk_044 &= ~0x0100;
            return;
        }
        if ((player->effects & 0x2000) && (player->type & 0x4000)) {
            func_800621BC(player, arg1, sp28, arg2);
            return;
        }
        if (((player->effects & 0x200000) || (player->effects & 0x100000)) && ((player->type & 0x4000) == 0x4000)) {
            func_80061EF4(player, arg1, sp28, arg2);
            player->unk_046 &= ~0x0008;
            player->unk_044 &= ~0x0100;
            return;
        }
        if ((player->unk_044 & 0x100) == 0x100) {
            func_800624D8(player, arg1, sp28, arg2);
            player->unk_046 &= ~0x0008;
        }
    }
}
#else
GLOBAL_ASM("asm/non_matchings/code_80057C60/func_8006C9B8.s")
#endif

#ifdef NON_MATCHING
// Something really wrong with arg3 on these functions, could be fake?
void func_80062C74(Player *player, s16 arg1, s32 arg2, s32 arg3);
void func_80064184(Player* player, s16 arg1, s8 arg2, UNUSED s8 arg3);
void func_800630C0(Player* player, s16 arg1, s8 arg2, UNUSED s8 arg3);
void func_800631A8(Player* player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3);
void func_80063268(Player* player, s16 arg1, UNUSED s8 arg2, UNUSED s8 arg3);

extern s32 gActiveScreenMode;

// Replacing arg3 with 0 seems to make the percentage higher.
// func_80060504 args could be wrong as well.
void func_8006CEC0(Player *arg0, s16 arg1, s8 arg2, s8 arg3) {
    u16 temp_v0_3;
    s32 sp20 = arg1;
    if (--sp20 < 0) {
        sp20 = 9;
    }
    if (arg0->unk_258[arg1].unk_01C == 1) {
        switch (arg0->unk_258[arg1].unk_012)
        {
        case 1:
            func_80062C74(arg0, arg1, arg2, arg3);
            break;
        case 3:
            func_80064184(arg0, arg1, arg2, arg3);
            break;
        case 5:
            func_800630C0(arg0, arg1, arg2, arg3);
            break;
        case 6:
            func_800631A8(arg0, arg1, arg2, arg3);
            break;
        case 7:
            func_80063268(arg0, arg1, arg2, arg3);
            break;
        }
    } else {
        if ((arg0->unk_044 & 0x200) && (arg0->type & 0x4000))  {
            func_80061224(arg0, arg1, sp20, arg2, arg3);
            return;
        } else if (((arg0->effects & 0x40000000) == 0x40000000) && (arg0->unk_0B0 < 0x32))  {
            func_80061094(arg0, arg1, sp20, arg2, arg3);
            return;
        } else if ((arg0->type & 0x4000) == 0x4000)  { 
            if ((arg0->unk_0DE & 8) == 8)  {
                func_80060F50(arg0, arg1, sp20, arg2, arg3);
                return;
            } else if ((arg0->unk_0DE & 2) || (arg0->unk_0DE & 1))  {
                func_80060B14(arg0, arg1, sp20, arg2, arg3);
                return;
            }
        }
        switch (gActiveScreenMode) {
        case SCREEN_MODE_1P:
            if (((arg0->effects & 0x04000000) != 0x04000000)
                && ((arg0->effects & 0x400) != 0x400)
                && ((arg0->effects & 0x01000000) != 0x01000000))  {
                if (((arg0->unk_0CA & 2) != 2) && ((arg0->unk_0CA & 0x10) != 0x10) && !(arg0->unk_0CA & 0x100))  {
                    //func_80060504(arg0, arg1, sp20, arg2, arg3);
                    func_80060504(arg0, sp20, arg2, arg3);
                }
            }
            break;
        default:
            break;
        case SCREEN_MODE_2P_SPLITSCREEN_HORIZONTAL:
        case SCREEN_MODE_2P_SPLITSCREEN_VERTICAL:
        case SCREEN_MODE_3P_4P_SPLITSCREEN:
            if (((arg0->type & 0x4000) != 0)
                && ((arg0->effects & 0x04000000) != 0x04000000)
                && ((arg0->effects & 0x400) != 0x400)
                && ((arg0->effects & 0x01000000) != 0x01000000)) {
                if (((arg0->unk_0CA & 2) != 2) && ((arg0->unk_0CA & 0x10) != 0x10) && !(arg0->unk_0CA & 0x100))  {
                    //func_80060504(arg0, arg1, sp20, arg2, arg3);
                    func_80060504(arg0, sp20, arg2, arg3);
                }
            }
            break;
        }
    }
}
#else
GLOBAL_ASM("asm/non_matchings/code_80057C60/func_8006CEC0.s")
#endif

#ifdef NON_MATCHING
// So, a lot of the functions called by this function have their argument types
// slightly wrong.
// For example, func_80064DEC, arg1 is currently marked as an s16 but based on
// this function it ought to be an s8
void func_8006D194(Player *player, s8 arg1, s8 arg2) {
    if (player->unk_258[0x14].unk_01C == 1) {
        switch (player->unk_258[0x14].unk_012) {
        case 2:
            func_80064DEC(player, arg1, arg2, 0);
            break;
        case 3:
            func_800650FC(player, arg1, arg2, 0);
            break;
        case 4:
            func_80064EA4(player, arg1, arg2, 0);
            break;
        case 5:
            func_80064F88(player, arg1, arg2, 0);
            break;
        case 6:
            func_80065030(player, arg1, arg2, 0);
            break;
        }
    } else {
        if ((player->unk_0B6 & 0x40) == 0x40) {
            func_800628C0(player, arg1, arg2, 0);
        }
        if ((player->unk_0B6 & 0x800) == 0x800) {
            func_80062968(player, arg1, arg2, 0);
        }
        if ((player->unk_0B6 & 0x1000) == 0x1000) {
            func_80062914(player, arg1, arg2, 0);
        }
        if ((player->unk_0B6 & 0x80) == 0x80) {
            func_80062A18(player, arg1, arg2, 0);
        }
        if ((player->unk_0B6 & 0x100) == 0x100) {
            func_800629BC(player, arg1, arg2, 0);
        }
    }
    if (player->unk_258[0x15].unk_01C == 1) {
        if (player->unk_258[0x15].unk_012 == 5) {
            func_800651F4(player, arg1, arg2, 1);
        }
    } else if ((player->unk_0B6 & 0x20) == 0x20) {
        func_80062AA8(player, arg1, arg2, 1);
    }
}
#else
GLOBAL_ASM("asm/non_matchings/code_80057C60/func_8006D194.s")
#endif

void func_8006538C(Player *, s8, s16, s8);             /* extern */
void func_80065AB0(Player *, s8, s16, s8);             /* extern */
void func_80065F0C(Player *, s8, s16, s8);             /* extern */
void func_800664E0(Player *, s8, s16, s8);             /* extern */
void func_80066BAC(Player *, s8, s16, s8);             /* extern */
void func_80067280(Player *, s8, s16, s8);             /* extern */
void func_80067604(Player *, s8, s16, s8);             /* extern */
void func_800691B8(Player *, s8, s16, s8);             /* extern */
void func_80069444(Player *, s8, s16, s8);             /* extern */
void func_800696CC(Player *, s8, s16, s8, f32);        /* extern */
void func_80069938(Player *, s8, s16, s8);             /* extern */
void func_80069BA8(Player *, s8, s16, s8);             /* extern */
void func_80069DB8(Player *, s8, s16, s8);             /* extern */
void func_8006A01C(Player *, s8, s16, s8);             /* extern */

void func_8006D474(Player *player, s8 arg1, s8 arg2) {
    s16 var_s2;
    if ((player->unk_002 & (8 << (arg2 * 4))) == (8 << (arg2 * 4))) {
        for (var_s2 = 0; var_s2 < 10; var_s2++) {
            switch (player->unk_258[var_s2].unk_012) {
            case 1:
                if (gActiveScreenMode == SCREEN_MODE_3P_4P_SPLITSCREEN) {
                    if (arg2 == arg1) {
                        func_8006538C(player, arg1, var_s2, arg2);
                    }
                } else {
                    func_8006538C(player, arg1, var_s2, arg2);
                }
                break;
            case 6:
                if (gActiveScreenMode == SCREEN_MODE_3P_4P_SPLITSCREEN) {
                    if (arg2 == arg1) {
                        func_80066BAC(player, arg1, var_s2, arg2);
                    }
                } else if (arg2 == arg1) {
                    func_80066BAC(player, arg1, var_s2, arg2);
                }
                break;
            }
            switch (player->unk_258[var_s2 + 30].unk_012) {
            case 1:
            case 9:
                if (gActiveScreenMode == SCREEN_MODE_1P) {
                    func_800691B8(player, arg1, var_s2, arg2);
                } else if (arg2 == arg1) {
                    func_800691B8(player, arg1, var_s2, arg2);
                }
                break;
            case 2:
                if (gActiveScreenMode == SCREEN_MODE_1P) {
                    func_800696CC(player, arg1, var_s2, arg2, player->unk_258[var_s2 + 30].unk_00C);
                } else if (arg2 == arg1) {
                    func_800696CC(player, arg1, var_s2, arg2, player->unk_258[var_s2 + 30].unk_00C);
                }
                break;
            case 3:
                if (gActiveScreenMode == SCREEN_MODE_1P) {
                    func_80067280(player, arg1, var_s2, arg2);
                } else if (arg2 == arg1) {
                    func_80067280(player, (s32) arg1, var_s2, arg2);
                }
                break;
            case 4:
                if (gActiveScreenMode == SCREEN_MODE_1P) {
                    func_80069444(player, arg1, var_s2, arg2);
                } else if (arg2 == arg1) {
                    func_80069444(player, arg1, var_s2, arg2);
                }
                break;
            case 5:
                if (gActiveScreenMode == SCREEN_MODE_1P) {
                    func_80069938(player, arg1, var_s2, arg2);
                } else if (arg2 == arg1) {
                    func_80069938(player, arg1, var_s2, arg2);
                }
                break;
            case 6:
                if (gActiveScreenMode == SCREEN_MODE_1P) {
                    func_80069BA8(player, arg1, var_s2, arg2);
                } else if (arg2 == arg1) {
                    func_80069BA8(player, arg1, var_s2, arg2);
                }
                break;
            case 7:
                if (gActiveScreenMode == SCREEN_MODE_1P) {
                    func_80069DB8(player, arg1, var_s2, arg2);
                } else if (arg2 == arg1) {
                    func_80069DB8(player, arg1, var_s2, arg2);
                }
                break;
            case 8:
                if (gActiveScreenMode == SCREEN_MODE_1P) {
                    func_80067604(player, arg1, var_s2, arg2);
                } else if (arg2 == arg1) {
                    func_80067604(player, arg1, var_s2, arg2);
                }
                break;
            }
            switch (player->unk_258[var_s2 + 10].unk_012) {
            case 1:
                if (gActiveScreenMode == SCREEN_MODE_3P_4P_SPLITSCREEN) {
                    if (arg2 == arg1) {
                        func_80065AB0(player, arg1, var_s2, arg2);
                    }
                } else {
                    func_80065AB0(player, arg1, var_s2, arg2);
                }
                break;
            case 2:
            case 3:
            case 4:
            case 5:
                if (gActiveScreenMode == SCREEN_MODE_3P_4P_SPLITSCREEN) {
                    if (arg2 == arg1) {
                        func_80065F0C(player, arg1, var_s2, arg2);
                    }
                } else {
                    func_80065F0C(player, arg1, var_s2, arg2);
                }
                break;
            case 9:
                if (gActiveScreenMode == SCREEN_MODE_3P_4P_SPLITSCREEN) {
                    if (arg2 == arg1) {
                        func_800664E0(player, (s32) arg1, var_s2, arg2);
                    }
                } else {
                    func_800664E0(player, (s32) arg1, var_s2, arg2);
                }
                break;
            case 11:
                if (gActiveScreenMode == SCREEN_MODE_3P_4P_SPLITSCREEN) {
                    if (arg2 == arg1) {
                        func_8006A01C(player, arg1, var_s2, arg2);
                    }
                } else if (arg2 == arg1) {
                    func_8006A01C(player, arg1, var_s2, arg2);
                }
                break;
            }
        }
    }
    if ((gModeSelection == BATTLE) && (player->unk_002 & (2 << (arg2 * 4)))) {
        func_8006BA94(player, arg1, arg2);
    }
}

void func_8006DC54(Player* player, s8 arg1, s8 arg2) {
    s16 i;
    s32 bitwiseMask;

    bitwiseMask = 8 << (arg2 * 4);
    if (bitwiseMask == (player->unk_002 & bitwiseMask)) {
        for (i = 0; i < 10; i++) {
            if (player->unk_258[i].unk_012 == 7) {
                func_800658A0(player, arg1, i, arg2);
            }
        }
    }
}

void func_8006DD3C(Player* arg0, s8 arg1, s8 arg2) {
    s16 temp_s0;
    s32 temp_v0;

    temp_v0 = 8 << (arg2 * 4);
    if (temp_v0 == (arg0->unk_002 & temp_v0)) {
        for (temp_s0 = 0; temp_s0 < 10; ++temp_s0) {
            temp_v0 = arg0->unk_258[temp_s0].unk_012;
            if (temp_v0 != 3) {
                if (temp_v0 == 5) {
                    func_8006A280(arg0, arg1, temp_s0, arg2);
                }
            } else if (gActiveScreenMode == SCREEN_MODE_3P_4P_SPLITSCREEN) {
                if (arg2 == arg1) {
                    func_80066998(arg0, arg1, temp_s0, arg2);
                }
            } else {
                func_80066998(arg0, arg1, temp_s0, arg2);
            }
        }

        if (((arg0->type & 0x4000) == 0x4000) && (arg2 == arg1)) {
            switch (arg0->unk_258[20].unk_012) {
            case 2:
                func_80068310(arg0, arg1, arg0->unk_258[20].unk_00C, arg2, 0);
                break;
            case 3:
                func_80067964(arg0, arg1, arg0->unk_258[20].unk_00C, arg2, 0);
                break;
            case 4:
                func_80068724(arg0, arg1, arg0->unk_258[20].unk_00C, arg2, 0);
                break;
            case 5:
                func_80068AA4(arg0, arg1, arg0->unk_258[20].unk_00C, arg2, 0);
                break;
            case 6:
                func_80068DA0(arg0, arg1, arg0->unk_258[20].unk_00C, arg2, 0);
                break;
            }
            if (arg0->unk_258[21].unk_012 == 5) {
                func_80067D3C(arg0, arg2, D_8018D480, 1, 1.6f, 0xFFFFFF);
                func_8006801C(arg0, arg2, D_8018D484, 1, 1.6f, 0xFF);
            }
        }
    }
}

void func_8006E058(void) {
    switch (gActiveScreenMode) { 
    case SCREEN_MODE_1P:
        switch (gModeSelection) {
        case GRAND_PRIX:
            func_8006E420(gPlayerOne, 0, 0);
            func_8006E420(gPlayerTwo, 1, 0);
            func_8006E420(gPlayerThree, 2, 0);
            func_8006E420(gPlayerFour, 3, 0);
            func_8006E420(gPlayerFive, 4, 0);
            func_8006E420(gPlayerSix, 5, 0);
            func_8006E420(gPlayerSeven, 6, 0);
            func_8006E420(gPlayerEight, 7, 0);

            break;
        case TIME_TRIALS:
            func_8006E420(gPlayerOne, 0, 0);

            if ((gPlayerTwo->type & 0x100) == 0x100) {
                func_8006E420(gPlayerTwo, 1, 0);
            }
           
            if ((gPlayerThree->type & 0x100) == 0x100) {
                func_8006E420(gPlayerThree, 2, 0);
                break;
            }

            break;
        case VERSUS:
        case BATTLE:
            func_8006E420(gPlayerOne, 0, 0);
            func_8006E420(gPlayerTwo, 1, 0);
       
            if (gPlayerCountSelection1 >= 3) {
                func_8006E420(gPlayerThree, 2, 0);
            }

            if (gPlayerCountSelection1 == 4) {
                func_8006E420(gPlayerFour, 3, 0);
                break;
            }

            break;
        }

        break;
    case SCREEN_MODE_2P_SPLITSCREEN_HORIZONTAL:
    case SCREEN_MODE_2P_SPLITSCREEN_VERTICAL:
        switch (gModeSelection) {     
        case GRAND_PRIX:
            func_8006E420(gPlayerOne, 0, 0);
            func_8006E420(gPlayerTwo, 1, 0);
            func_8006E420(gPlayerThree, 2, 0);
            func_8006E420(gPlayerFour, 3, 0);
            func_8006E420(gPlayerFive, 4, 0);
            func_8006E420(gPlayerSix, 5, 0);
            func_8006E420(gPlayerSeven, 6, 0);
            func_8006E420(gPlayerEight, 7, 0);

            break;
        case VERSUS:           
        case BATTLE:
            func_8006E420(gPlayerOne, 0, 0);
            func_8006E420(gPlayerTwo, 1, 0);

            break;
        case TIME_TRIALS:
            func_8006E420(gPlayerOne, 0, 0);
            
            if ((gPlayerTwo->type & 0x8000) == 0x8000) {
                func_8006E420(gPlayerTwo, 1, 0);
                break;
            }

            break;
        }

        break;
    case SCREEN_MODE_3P_4P_SPLITSCREEN:
        if ((VERSUS == gModeSelection) || (BATTLE == gModeSelection)) {
            func_8006E420(gPlayerOne, 0, 0);
            func_8006E420(gPlayerTwo, 1, 0);
            func_8006E420(gPlayerThree, 2, 0);

            if (gPlayerCountSelection1 == 4) {
                func_8006E420(gPlayerFour, 3, 0);
            }
        }

        break;
    }
}

void func_8006E420(Player* player, s8 arg1, s8 arg2) {
    s16 temp_s0;

    if ((player->type & PLAYER_EXISTS) == PLAYER_EXISTS) {
        if ((player->type & 0x4000) == 0x4000) {
            func_8006D194(player, arg1, arg2);
        }
   
        for (temp_s0 = 0; temp_s0 < 10; ++temp_s0)
        {
            func_8006CEC0(player, temp_s0, arg1, arg2);
            if (((player->type & 0x4000) == 0x4000) || (gGamestate == ENDING_SEQUENCE)) {
                func_8006C9B8(player, temp_s0, arg1, arg2);
            }
            func_8006C6AC(player, temp_s0, arg1, arg2);
        }

        if (gModeSelection == BATTLE) {
            func_8006B9CC(player, arg1);
        }
    }
}

void func_8006E5AC(Player* player, s8 arg1, s8 arg2) {
    if ((player->type & PLAYER_EXISTS) == PLAYER_EXISTS) {
        if ((player->effects & 0x80000000) == 0x80000000) {
            if (arg1 == arg2) {
                func_8006D474(player, arg1, arg2);
            }
        } else {
            func_8006D474(player, arg1, arg2);
        }
        func_8006DC54(player, arg1, arg2);
    }
}

void func_8006E634(Player* player, s8 arg1, s8 arg2) {
    if ((player->type & PLAYER_EXISTS) == PLAYER_EXISTS) {
        if ((player->effects & 0x80000000) == 0x80000000) {
            if (arg1 == arg2) {
                func_8006D474(player, arg1, arg2);
            }
        } else {
            func_8006D474(player, arg1, arg2);
        }
        func_8006DC54(player, arg1, arg2);
    }
}

void func_8006E6BC(Player* player, s8 arg1, s8 arg2) {
    if ((player->type & PLAYER_EXISTS) == PLAYER_EXISTS) {
        if ((player->effects & 0x80000000) == 0x80000000) {
            if (arg1 == arg2) {
                func_8006D474(player, arg1, arg2);
            }
        } else {
            func_8006D474(player, arg1, arg2);
        }
        func_8006DC54(player, arg1, arg2);
    }
}

void func_8006E744(Player* player, s8 arg1, s8 arg2) {
    if ((player->type & PLAYER_EXISTS) == PLAYER_EXISTS) {
        if ((player->effects & 0x80000000) == 0x80000000) {
            if (arg1 == arg2) {
                func_8006D474(player, arg1, arg2);
            }
        } else {
            func_8006D474(player, arg1, arg2);
        }
        func_8006DC54(player, arg1, arg2);
    }
}

void func_8006E7CC(Player* player, s8 arg1, s8 arg2) {
    if ((player->type & PLAYER_EXISTS) == PLAYER_EXISTS) {
        if ((player->effects & 0x80000000) == 0x80000000) {
            if (arg1 == arg2) {
                func_8006DD3C(player, arg1, arg2);
            }
        } else {
            func_8006DD3C(player, arg1, arg2);
        }
    }
}

void func_8006E848(Player* player, s8 arg1, s8 arg2) {
    if ((player->type & PLAYER_EXISTS) == PLAYER_EXISTS) {
        if ((player->effects & 0x80000000) == 0x80000000) {
            if (arg1 == arg2) {
                func_8006DD3C(player, arg1, arg2);
            }
        } else {
            func_8006DD3C(player, arg1, arg2);
        }
    }
}

void func_8006E8C4(Player* player, s8 arg1, s8 arg2) {
    if ((player->type & PLAYER_EXISTS) == PLAYER_EXISTS) {
        if ((player->effects & 0x80000000) == 0x80000000) {
            if (arg1 == arg2) {
                func_8006DD3C(player, arg1, arg2);
            }
        } else {
            func_8006DD3C(player, arg1, arg2);
        }
    }
}

void func_8006E940(Player* player, s8 arg1, s8 arg2) {
    if ((player->type & PLAYER_EXISTS) == PLAYER_EXISTS) {
        if ((player->effects & 0x80000000) == 0x80000000) {
            if (arg1 == arg2) {
                func_8006DD3C(player, arg1, arg2);
            }
        } else {
            func_8006DD3C(player, arg1, arg2);
        }
    }
}

/***************************************************************/
/* Just a random 10 laying around in data, nothing to see here */
/***************************************************************/
s32 some_unused_data = 10;

#undef MAKE_RGB
