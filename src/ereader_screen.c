#include "global.h"
#include "malloc.h"
#include "decompress.h"
#include "ereader_helpers.h"
#include "link.h"
#include "main.h"
#include "mystery_gift.h"
#include "save.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "strings.h"
#include "util.h"
#include "constants/songs.h"

struct Unk81D5014
{
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 *unk10;
};

struct Unk03006370
{
    u16 unk0;
    u32 unk4;
    u32 *unk8;
};

static void sub_81D5084(u8);

struct Unk03006370 gUnknown_03006370;

extern const u8 gUnknown_089A3470[];
extern const u8 gMultiBootProgram_BerryGlitchFix_Start[];

static void sub_81D4D50(struct Unk03006370 *arg0, int arg1, u32 *arg2)
{
    u32 a;
}

static void sub_81D4DB8(struct Unk03006370 *arg0)
{
    u32 a;
}

static u8 sub_81D4DE8(struct Unk03006370 *arg0)
{
    return FALSE;
}

static void OpenEReaderLink(void)
{
    u32 a;
}

static bool32 sub_81D4E60(void)
{
    return FALSE;
}

static bool32 sub_81D4EC0(void)
{
    return FALSE;
}

static u32 sub_81D4EE4(u8 *arg0, u16 *arg1)
{
    return 0;
}

void task_add_00_ereader(void)
{
    u32 a;
}

static void sub_81D505C(u16 *arg0)
{
    u32 a;
}

static bool32 sub_81D5064(u16 *arg0, u16 arg1)
{
    return FALSE;
}

static void sub_81D5084(u8 taskId)
{
    u32 a;
}
