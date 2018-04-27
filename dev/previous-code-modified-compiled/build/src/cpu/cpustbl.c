#include "main.h"
#include "sysdeps.h"
#include "hatari-glue.h"
#include "maccess.h"
#include "memory.h"
#include "newcpu.h"
#include "cputbl.h"
#define CPUFUNC(x) x##_ff
#define SET_CFLG_ALWAYS(x) SET_CFLG(x)
#define SET_NFLG_ALWAYS(x) SET_NFLG(x)
#ifdef NOFLAGS
#include "noflags.h"
#endif
#ifdef CPUEMU_31
#ifndef CPUEMU_68000_ONLY
const struct cputbl CPUFUNC(op_smalltbl_31)[] = {
{ CPUFUNC(op_0000_31), 0x0000, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0010_31), 0x0010, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0018_31), 0x0018, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0020_31), 0x0020, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0028_31), 0x0028, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0030_31), 0x0030, 4, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0038_31), 0x0038, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0039_31), 0x0039, 8, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_003c_31), 0x003c, 4, { 0, 0 }, 0 }, /* ORSR */
{ CPUFUNC(op_0040_31), 0x0040, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0050_31), 0x0050, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0058_31), 0x0058, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0060_31), 0x0060, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0068_31), 0x0068, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0070_31), 0x0070, 4, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0078_31), 0x0078, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0079_31), 0x0079, 8, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_007c_31), 0x007c, 4, { 0, 0 }, 0 }, /* ORSR */
{ CPUFUNC(op_0080_31), 0x0080, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0090_31), 0x0090, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0098_31), 0x0098, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_00a0_31), 0x00a0, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_00a8_31), 0x00a8, 8, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_00b0_31), 0x00b0, 6, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_00b8_31), 0x00b8, 8, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_00b9_31), 0x00b9, 10, { 0, 0 }, 0 }, /* OR */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00d0_31), 0x00d0, 4, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00e8_31), 0x00e8, 6, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00f0_31), 0x00f0, 4, { 2, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00f8_31), 0x00f8, 6, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00f9_31), 0x00f9, 8, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00fa_31), 0x00fa, 6, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00fb_31), 0x00fb, 4, { 2, 0 }, 0 }, /* CHK2 */
#endif
{ CPUFUNC(op_0100_31), 0x0100, 2, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0108_31), 0x0108, 4, { 0, 0 }, 0 }, /* MVPMR */
{ CPUFUNC(op_0110_31), 0x0110, 2, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0118_31), 0x0118, 2, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0120_31), 0x0120, 2, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0128_31), 0x0128, 4, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0130_31), 0x0130, 2, { 2, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0138_31), 0x0138, 4, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0139_31), 0x0139, 6, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_013a_31), 0x013a, 4, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_013b_31), 0x013b, 2, { 2, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_013c_31), 0x013c, 4, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0140_31), 0x0140, 2, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0148_31), 0x0148, 4, { 0, 0 }, 0 }, /* MVPMR */
{ CPUFUNC(op_0150_31), 0x0150, 2, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0158_31), 0x0158, 2, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0160_31), 0x0160, 2, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0168_31), 0x0168, 4, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0170_31), 0x0170, 2, { 2, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0178_31), 0x0178, 4, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0179_31), 0x0179, 6, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0180_31), 0x0180, 2, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_0188_31), 0x0188, 4, { 0, 0 }, 0 }, /* MVPRM */
{ CPUFUNC(op_0190_31), 0x0190, 2, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_0198_31), 0x0198, 2, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_01a0_31), 0x01a0, 2, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_01a8_31), 0x01a8, 4, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_01b0_31), 0x01b0, 2, { 2, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_01b8_31), 0x01b8, 4, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_01b9_31), 0x01b9, 6, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_01c0_31), 0x01c0, 2, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_01c8_31), 0x01c8, 4, { 0, 0 }, 0 }, /* MVPRM */
{ CPUFUNC(op_01d0_31), 0x01d0, 2, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_01d8_31), 0x01d8, 2, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_01e0_31), 0x01e0, 2, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_01e8_31), 0x01e8, 4, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_01f0_31), 0x01f0, 2, { 2, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_01f8_31), 0x01f8, 4, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_01f9_31), 0x01f9, 6, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_0200_31), 0x0200, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0210_31), 0x0210, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0218_31), 0x0218, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0220_31), 0x0220, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0228_31), 0x0228, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0230_31), 0x0230, 4, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0238_31), 0x0238, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0239_31), 0x0239, 8, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_023c_31), 0x023c, 4, { 0, 0 }, 0 }, /* ANDSR */
{ CPUFUNC(op_0240_31), 0x0240, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0250_31), 0x0250, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0258_31), 0x0258, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0260_31), 0x0260, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0268_31), 0x0268, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0270_31), 0x0270, 4, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0278_31), 0x0278, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0279_31), 0x0279, 8, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_027c_31), 0x027c, 4, { 0, 0 }, 0 }, /* ANDSR */
{ CPUFUNC(op_0280_31), 0x0280, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0290_31), 0x0290, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0298_31), 0x0298, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_02a0_31), 0x02a0, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_02a8_31), 0x02a8, 8, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_02b0_31), 0x02b0, 6, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_02b8_31), 0x02b8, 8, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_02b9_31), 0x02b9, 10, { 0, 0 }, 0 }, /* AND */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02d0_31), 0x02d0, 4, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02e8_31), 0x02e8, 6, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02f0_31), 0x02f0, 4, { 2, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02f8_31), 0x02f8, 6, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02f9_31), 0x02f9, 8, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02fa_31), 0x02fa, 6, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02fb_31), 0x02fb, 4, { 2, 0 }, 0 }, /* CHK2 */
#endif
{ CPUFUNC(op_0400_31), 0x0400, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0410_31), 0x0410, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0418_31), 0x0418, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0420_31), 0x0420, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0428_31), 0x0428, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0430_31), 0x0430, 4, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0438_31), 0x0438, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0439_31), 0x0439, 8, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0440_31), 0x0440, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0450_31), 0x0450, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0458_31), 0x0458, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0460_31), 0x0460, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0468_31), 0x0468, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0470_31), 0x0470, 4, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0478_31), 0x0478, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0479_31), 0x0479, 8, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0480_31), 0x0480, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0490_31), 0x0490, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0498_31), 0x0498, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_04a0_31), 0x04a0, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_04a8_31), 0x04a8, 8, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_04b0_31), 0x04b0, 6, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_04b8_31), 0x04b8, 8, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_04b9_31), 0x04b9, 10, { 0, 0 }, 0 }, /* SUB */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04d0_31), 0x04d0, 4, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04e8_31), 0x04e8, 6, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04f0_31), 0x04f0, 4, { 2, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04f8_31), 0x04f8, 6, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04f9_31), 0x04f9, 8, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04fa_31), 0x04fa, 6, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04fb_31), 0x04fb, 4, { 2, 0 }, 0 }, /* CHK2 */
#endif
{ CPUFUNC(op_0600_31), 0x0600, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0610_31), 0x0610, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0618_31), 0x0618, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0620_31), 0x0620, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0628_31), 0x0628, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0630_31), 0x0630, 4, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0638_31), 0x0638, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0639_31), 0x0639, 8, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0640_31), 0x0640, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0650_31), 0x0650, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0658_31), 0x0658, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0660_31), 0x0660, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0668_31), 0x0668, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0670_31), 0x0670, 4, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0678_31), 0x0678, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0679_31), 0x0679, 8, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0680_31), 0x0680, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0690_31), 0x0690, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0698_31), 0x0698, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_06a0_31), 0x06a0, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_06a8_31), 0x06a8, 8, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_06b0_31), 0x06b0, 6, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_06b8_31), 0x06b8, 8, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_06b9_31), 0x06b9, 10, { 0, 0 }, 0 }, /* ADD */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06c0_31), 0x06c0, 2, { 0, 0 }, 0 }, /* RTM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06c8_31), 0x06c8, 2, { 0, 0 }, 0 }, /* RTM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06d0_31), 0x06d0, 2, { 0, 0 }, 0 }, /* CALLM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06e8_31), 0x06e8, 2, { 0, 0 }, 0 }, /* CALLM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06f0_31), 0x06f0, 2, { 0, 0 }, 0 }, /* CALLM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06f8_31), 0x06f8, 2, { 0, 0 }, 0 }, /* CALLM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06f9_31), 0x06f9, 2, { 0, 0 }, 0 }, /* CALLM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06fa_31), 0x06fa, 2, { 0, 0 }, 0 }, /* CALLM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06fb_31), 0x06fb, 2, { 0, 0 }, 0 }, /* CALLM */
#endif
{ CPUFUNC(op_0800_31), 0x0800, 4, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0810_31), 0x0810, 4, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0818_31), 0x0818, 4, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0820_31), 0x0820, 4, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0828_31), 0x0828, 6, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0830_31), 0x0830, 4, { 2, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0838_31), 0x0838, 6, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0839_31), 0x0839, 8, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_083a_31), 0x083a, 6, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_083b_31), 0x083b, 4, { 2, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0840_31), 0x0840, 4, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0850_31), 0x0850, 4, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0858_31), 0x0858, 4, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0860_31), 0x0860, 4, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0868_31), 0x0868, 6, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0870_31), 0x0870, 4, { 2, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0878_31), 0x0878, 6, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0879_31), 0x0879, 8, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0880_31), 0x0880, 4, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_0890_31), 0x0890, 4, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_0898_31), 0x0898, 4, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_08a0_31), 0x08a0, 4, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_08a8_31), 0x08a8, 6, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_08b0_31), 0x08b0, 4, { 2, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_08b8_31), 0x08b8, 6, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_08b9_31), 0x08b9, 8, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_08c0_31), 0x08c0, 4, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_08d0_31), 0x08d0, 4, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_08d8_31), 0x08d8, 4, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_08e0_31), 0x08e0, 4, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_08e8_31), 0x08e8, 6, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_08f0_31), 0x08f0, 4, { 2, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_08f8_31), 0x08f8, 6, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_08f9_31), 0x08f9, 8, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_0a00_31), 0x0a00, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a10_31), 0x0a10, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a18_31), 0x0a18, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a20_31), 0x0a20, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a28_31), 0x0a28, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a30_31), 0x0a30, 4, { 2, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a38_31), 0x0a38, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a39_31), 0x0a39, 8, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a3c_31), 0x0a3c, 4, { 0, 0 }, 0 }, /* EORSR */
{ CPUFUNC(op_0a40_31), 0x0a40, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a50_31), 0x0a50, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a58_31), 0x0a58, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a60_31), 0x0a60, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a68_31), 0x0a68, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a70_31), 0x0a70, 4, { 2, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a78_31), 0x0a78, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a79_31), 0x0a79, 8, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a7c_31), 0x0a7c, 4, { 0, 0 }, 0 }, /* EORSR */
{ CPUFUNC(op_0a80_31), 0x0a80, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a90_31), 0x0a90, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a98_31), 0x0a98, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0aa0_31), 0x0aa0, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0aa8_31), 0x0aa8, 8, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0ab0_31), 0x0ab0, 6, { 2, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0ab8_31), 0x0ab8, 8, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0ab9_31), 0x0ab9, 10, { 0, 0 }, 0 }, /* EOR */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ad0_31), 0x0ad0, 4, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ad8_31), 0x0ad8, 4, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ae0_31), 0x0ae0, 4, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ae8_31), 0x0ae8, 6, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0af0_31), 0x0af0, 4, { 2, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0af8_31), 0x0af8, 6, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0af9_31), 0x0af9, 8, { 0, 0 }, 0 }, /* CAS */
#endif
{ CPUFUNC(op_0c00_31), 0x0c00, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c10_31), 0x0c10, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c18_31), 0x0c18, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c20_31), 0x0c20, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c28_31), 0x0c28, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c30_31), 0x0c30, 4, { 2, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c38_31), 0x0c38, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c39_31), 0x0c39, 8, { 0, 0 }, 0 }, /* CMP */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0c3a_31), 0x0c3a, 6, { 0, 0 }, 0 }, /* CMP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0c3b_31), 0x0c3b, 4, { 2, 0 }, 0 }, /* CMP */
#endif
{ CPUFUNC(op_0c40_31), 0x0c40, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c50_31), 0x0c50, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c58_31), 0x0c58, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c60_31), 0x0c60, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c68_31), 0x0c68, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c70_31), 0x0c70, 4, { 2, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c78_31), 0x0c78, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c79_31), 0x0c79, 8, { 0, 0 }, 0 }, /* CMP */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0c7a_31), 0x0c7a, 6, { 0, 0 }, 0 }, /* CMP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0c7b_31), 0x0c7b, 4, { 2, 0 }, 0 }, /* CMP */
#endif
{ CPUFUNC(op_0c80_31), 0x0c80, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c90_31), 0x0c90, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c98_31), 0x0c98, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0ca0_31), 0x0ca0, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0ca8_31), 0x0ca8, 8, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0cb0_31), 0x0cb0, 6, { 2, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0cb8_31), 0x0cb8, 8, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0cb9_31), 0x0cb9, 10, { 0, 0 }, 0 }, /* CMP */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cba_31), 0x0cba, 8, { 0, 0 }, 0 }, /* CMP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cbb_31), 0x0cbb, 6, { 2, 0 }, 0 }, /* CMP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cd0_31), 0x0cd0, 4, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cd8_31), 0x0cd8, 4, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ce0_31), 0x0ce0, 4, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ce8_31), 0x0ce8, 6, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cf0_31), 0x0cf0, 4, { 2, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cf8_31), 0x0cf8, 6, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cf9_31), 0x0cf9, 8, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cfc_31), 0x0cfc, 6, { 0, 0 }, 0 }, /* CAS2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e10_31), 0x0e10, 8, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e18_31), 0x0e18, 8, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e20_31), 0x0e20, 8, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e28_31), 0x0e28, 12, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e30_31), 0x0e30, 8, { 6, 2 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e38_31), 0x0e38, 12, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e39_31), 0x0e39, 16, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e50_31), 0x0e50, 8, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e58_31), 0x0e58, 8, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e60_31), 0x0e60, 8, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e68_31), 0x0e68, 12, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e70_31), 0x0e70, 8, { 6, 2 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e78_31), 0x0e78, 12, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e79_31), 0x0e79, 16, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e90_31), 0x0e90, 8, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e98_31), 0x0e98, 8, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ea0_31), 0x0ea0, 8, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ea8_31), 0x0ea8, 12, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0eb0_31), 0x0eb0, 8, { 6, 2 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0eb8_31), 0x0eb8, 12, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0eb9_31), 0x0eb9, 16, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ed0_31), 0x0ed0, 4, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ed8_31), 0x0ed8, 4, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ee0_31), 0x0ee0, 4, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ee8_31), 0x0ee8, 6, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ef0_31), 0x0ef0, 4, { 2, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ef8_31), 0x0ef8, 6, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ef9_31), 0x0ef9, 8, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0efc_31), 0x0efc, 6, { 0, 0 }, 0 }, /* CAS2 */
#endif
{ CPUFUNC(op_1000_31), 0x1000, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1010_31), 0x1010, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1018_31), 0x1018, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1020_31), 0x1020, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1028_31), 0x1028, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1030_31), 0x1030, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1038_31), 0x1038, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1039_31), 0x1039, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_103a_31), 0x103a, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_103b_31), 0x103b, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_103c_31), 0x103c, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1080_31), 0x1080, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1090_31), 0x1090, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1098_31), 0x1098, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10a0_31), 0x10a0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10a8_31), 0x10a8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10b0_31), 0x10b0, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10b8_31), 0x10b8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10b9_31), 0x10b9, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10ba_31), 0x10ba, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10bb_31), 0x10bb, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10bc_31), 0x10bc, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10c0_31), 0x10c0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10d0_31), 0x10d0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10d8_31), 0x10d8, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10e0_31), 0x10e0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10e8_31), 0x10e8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10f0_31), 0x10f0, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10f8_31), 0x10f8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10f9_31), 0x10f9, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10fa_31), 0x10fa, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10fb_31), 0x10fb, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10fc_31), 0x10fc, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1100_31), 0x1100, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1110_31), 0x1110, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1118_31), 0x1118, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1120_31), 0x1120, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1128_31), 0x1128, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1130_31), 0x1130, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1138_31), 0x1138, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1139_31), 0x1139, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_113a_31), 0x113a, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_113b_31), 0x113b, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_113c_31), 0x113c, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1140_31), 0x1140, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1150_31), 0x1150, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1158_31), 0x1158, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1160_31), 0x1160, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1168_31), 0x1168, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1170_31), 0x1170, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1178_31), 0x1178, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1179_31), 0x1179, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_117a_31), 0x117a, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_117b_31), 0x117b, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_117c_31), 0x117c, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1180_31), 0x1180, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1190_31), 0x1190, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1198_31), 0x1198, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11a0_31), 0x11a0, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11a8_31), 0x11a8, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11b0_31), 0x11b0, 2, { 2, 2 }, 0 }, /* MOVE */
{ CPUFUNC(op_11b8_31), 0x11b8, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11b9_31), 0x11b9, 6, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11ba_31), 0x11ba, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11bb_31), 0x11bb, 2, { 2, 2 }, 0 }, /* MOVE */
{ CPUFUNC(op_11bc_31), 0x11bc, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11c0_31), 0x11c0, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11d0_31), 0x11d0, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11d8_31), 0x11d8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11e0_31), 0x11e0, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11e8_31), 0x11e8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11f0_31), 0x11f0, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11f8_31), 0x11f8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11f9_31), 0x11f9, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11fa_31), 0x11fa, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11fb_31), 0x11fb, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11fc_31), 0x11fc, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13c0_31), 0x13c0, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13d0_31), 0x13d0, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13d8_31), 0x13d8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13e0_31), 0x13e0, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13e8_31), 0x13e8, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13f0_31), 0x13f0, 6, { 6, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13f8_31), 0x13f8, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13f9_31), 0x13f9, 10, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13fa_31), 0x13fa, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13fb_31), 0x13fb, 6, { 6, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13fc_31), 0x13fc, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2000_31), 0x2000, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2008_31), 0x2008, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2010_31), 0x2010, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2018_31), 0x2018, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2020_31), 0x2020, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2028_31), 0x2028, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2030_31), 0x2030, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2038_31), 0x2038, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2039_31), 0x2039, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_203a_31), 0x203a, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_203b_31), 0x203b, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_203c_31), 0x203c, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2040_31), 0x2040, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_2048_31), 0x2048, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_2050_31), 0x2050, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_2058_31), 0x2058, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_2060_31), 0x2060, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_2068_31), 0x2068, 4, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_2070_31), 0x2070, 2, { 2, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_2078_31), 0x2078, 4, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_2079_31), 0x2079, 6, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_207a_31), 0x207a, 4, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_207b_31), 0x207b, 2, { 2, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_207c_31), 0x207c, 6, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_2080_31), 0x2080, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2088_31), 0x2088, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2090_31), 0x2090, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2098_31), 0x2098, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20a0_31), 0x20a0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20a8_31), 0x20a8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20b0_31), 0x20b0, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20b8_31), 0x20b8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20b9_31), 0x20b9, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20ba_31), 0x20ba, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20bb_31), 0x20bb, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20bc_31), 0x20bc, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20c0_31), 0x20c0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20c8_31), 0x20c8, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20d0_31), 0x20d0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20d8_31), 0x20d8, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20e0_31), 0x20e0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20e8_31), 0x20e8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20f0_31), 0x20f0, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20f8_31), 0x20f8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20f9_31), 0x20f9, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20fa_31), 0x20fa, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20fb_31), 0x20fb, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20fc_31), 0x20fc, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2100_31), 0x2100, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2108_31), 0x2108, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2110_31), 0x2110, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2118_31), 0x2118, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2120_31), 0x2120, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2128_31), 0x2128, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2130_31), 0x2130, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2138_31), 0x2138, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2139_31), 0x2139, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_213a_31), 0x213a, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_213b_31), 0x213b, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_213c_31), 0x213c, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2140_31), 0x2140, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2148_31), 0x2148, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2150_31), 0x2150, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2158_31), 0x2158, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2160_31), 0x2160, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2168_31), 0x2168, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2170_31), 0x2170, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2178_31), 0x2178, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2179_31), 0x2179, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_217a_31), 0x217a, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_217b_31), 0x217b, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_217c_31), 0x217c, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2180_31), 0x2180, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2188_31), 0x2188, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2190_31), 0x2190, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2198_31), 0x2198, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21a0_31), 0x21a0, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21a8_31), 0x21a8, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21b0_31), 0x21b0, 2, { 2, 2 }, 0 }, /* MOVE */
{ CPUFUNC(op_21b8_31), 0x21b8, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21b9_31), 0x21b9, 6, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21ba_31), 0x21ba, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21bb_31), 0x21bb, 2, { 2, 2 }, 0 }, /* MOVE */
{ CPUFUNC(op_21bc_31), 0x21bc, 6, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21c0_31), 0x21c0, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21c8_31), 0x21c8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21d0_31), 0x21d0, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21d8_31), 0x21d8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21e0_31), 0x21e0, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21e8_31), 0x21e8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21f0_31), 0x21f0, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21f8_31), 0x21f8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21f9_31), 0x21f9, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21fa_31), 0x21fa, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21fb_31), 0x21fb, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21fc_31), 0x21fc, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23c0_31), 0x23c0, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23c8_31), 0x23c8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23d0_31), 0x23d0, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23d8_31), 0x23d8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23e0_31), 0x23e0, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23e8_31), 0x23e8, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23f0_31), 0x23f0, 6, { 6, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23f8_31), 0x23f8, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23f9_31), 0x23f9, 10, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23fa_31), 0x23fa, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23fb_31), 0x23fb, 6, { 6, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23fc_31), 0x23fc, 10, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3000_31), 0x3000, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3008_31), 0x3008, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3010_31), 0x3010, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3018_31), 0x3018, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3020_31), 0x3020, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3028_31), 0x3028, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3030_31), 0x3030, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3038_31), 0x3038, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3039_31), 0x3039, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_303a_31), 0x303a, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_303b_31), 0x303b, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_303c_31), 0x303c, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3040_31), 0x3040, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_3048_31), 0x3048, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_3050_31), 0x3050, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_3058_31), 0x3058, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_3060_31), 0x3060, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_3068_31), 0x3068, 4, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_3070_31), 0x3070, 2, { 2, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_3078_31), 0x3078, 4, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_3079_31), 0x3079, 6, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_307a_31), 0x307a, 4, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_307b_31), 0x307b, 2, { 2, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_307c_31), 0x307c, 4, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_3080_31), 0x3080, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3088_31), 0x3088, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3090_31), 0x3090, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3098_31), 0x3098, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30a0_31), 0x30a0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30a8_31), 0x30a8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30b0_31), 0x30b0, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30b8_31), 0x30b8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30b9_31), 0x30b9, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30ba_31), 0x30ba, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30bb_31), 0x30bb, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30bc_31), 0x30bc, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30c0_31), 0x30c0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30c8_31), 0x30c8, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30d0_31), 0x30d0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30d8_31), 0x30d8, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30e0_31), 0x30e0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30e8_31), 0x30e8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30f0_31), 0x30f0, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30f8_31), 0x30f8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30f9_31), 0x30f9, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30fa_31), 0x30fa, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30fb_31), 0x30fb, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30fc_31), 0x30fc, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3100_31), 0x3100, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3108_31), 0x3108, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3110_31), 0x3110, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3118_31), 0x3118, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3120_31), 0x3120, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3128_31), 0x3128, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3130_31), 0x3130, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3138_31), 0x3138, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3139_31), 0x3139, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_313a_31), 0x313a, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_313b_31), 0x313b, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_313c_31), 0x313c, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3140_31), 0x3140, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3148_31), 0x3148, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3150_31), 0x3150, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3158_31), 0x3158, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3160_31), 0x3160, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3168_31), 0x3168, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3170_31), 0x3170, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3178_31), 0x3178, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3179_31), 0x3179, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_317a_31), 0x317a, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_317b_31), 0x317b, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_317c_31), 0x317c, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3180_31), 0x3180, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3188_31), 0x3188, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3190_31), 0x3190, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3198_31), 0x3198, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31a0_31), 0x31a0, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31a8_31), 0x31a8, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31b0_31), 0x31b0, 2, { 2, 2 }, 0 }, /* MOVE */
{ CPUFUNC(op_31b8_31), 0x31b8, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31b9_31), 0x31b9, 6, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31ba_31), 0x31ba, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31bb_31), 0x31bb, 2, { 2, 2 }, 0 }, /* MOVE */
{ CPUFUNC(op_31bc_31), 0x31bc, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31c0_31), 0x31c0, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31c8_31), 0x31c8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31d0_31), 0x31d0, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31d8_31), 0x31d8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31e0_31), 0x31e0, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31e8_31), 0x31e8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31f0_31), 0x31f0, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31f8_31), 0x31f8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31f9_31), 0x31f9, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31fa_31), 0x31fa, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31fb_31), 0x31fb, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31fc_31), 0x31fc, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33c0_31), 0x33c0, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33c8_31), 0x33c8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33d0_31), 0x33d0, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33d8_31), 0x33d8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33e0_31), 0x33e0, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33e8_31), 0x33e8, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33f0_31), 0x33f0, 6, { 6, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33f8_31), 0x33f8, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33f9_31), 0x33f9, 10, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33fa_31), 0x33fa, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33fb_31), 0x33fb, 6, { 6, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33fc_31), 0x33fc, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_4000_31), 0x4000, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4010_31), 0x4010, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4018_31), 0x4018, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4020_31), 0x4020, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4028_31), 0x4028, 4, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4030_31), 0x4030, 2, { 2, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4038_31), 0x4038, 4, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4039_31), 0x4039, 6, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4040_31), 0x4040, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4050_31), 0x4050, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4058_31), 0x4058, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4060_31), 0x4060, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4068_31), 0x4068, 4, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4070_31), 0x4070, 2, { 2, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4078_31), 0x4078, 4, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4079_31), 0x4079, 6, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4080_31), 0x4080, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4090_31), 0x4090, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4098_31), 0x4098, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_40a0_31), 0x40a0, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_40a8_31), 0x40a8, 4, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_40b0_31), 0x40b0, 2, { 2, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_40b8_31), 0x40b8, 4, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_40b9_31), 0x40b9, 6, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_40c0_31), 0x40c0, 2, { 0, 0 }, 0 }, /* MVSR2 */
{ CPUFUNC(op_40d0_31), 0x40d0, 2, { 0, 0 }, 0 }, /* MVSR2 */
{ CPUFUNC(op_40d8_31), 0x40d8, 2, { 0, 0 }, 0 }, /* MVSR2 */
{ CPUFUNC(op_40e0_31), 0x40e0, 2, { 0, 0 }, 0 }, /* MVSR2 */
{ CPUFUNC(op_40e8_31), 0x40e8, 4, { 0, 0 }, 0 }, /* MVSR2 */
{ CPUFUNC(op_40f0_31), 0x40f0, 2, { 2, 0 }, 0 }, /* MVSR2 */
{ CPUFUNC(op_40f8_31), 0x40f8, 4, { 0, 0 }, 0 }, /* MVSR2 */
{ CPUFUNC(op_40f9_31), 0x40f9, 6, { 0, 0 }, 0 }, /* MVSR2 */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4100_31), 0x4100, 2, { 0, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4110_31), 0x4110, 2, { 0, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4118_31), 0x4118, 2, { 0, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4120_31), 0x4120, 2, { 0, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4128_31), 0x4128, 4, { 0, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4130_31), 0x4130, 2, { 2, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4138_31), 0x4138, 4, { 0, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4139_31), 0x4139, 6, { 0, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_413a_31), 0x413a, 4, { 0, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_413b_31), 0x413b, 2, { 2, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_413c_31), 0x413c, 6, { 0, 0 }, 0 }, /* CHK */
#endif
{ CPUFUNC(op_4180_31), 0x4180, 2, { 0, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_4190_31), 0x4190, 2, { 0, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_4198_31), 0x4198, 2, { 0, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_41a0_31), 0x41a0, 2, { 0, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_41a8_31), 0x41a8, 4, { 0, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_41b0_31), 0x41b0, 2, { 2, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_41b8_31), 0x41b8, 4, { 0, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_41b9_31), 0x41b9, 6, { 0, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_41ba_31), 0x41ba, 4, { 0, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_41bb_31), 0x41bb, 2, { 2, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_41bc_31), 0x41bc, 4, { 0, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_41d0_31), 0x41d0, 2, { 0, 0 }, 0 }, /* LEA */
{ CPUFUNC(op_41e8_31), 0x41e8, 4, { 0, 0 }, 0 }, /* LEA */
{ CPUFUNC(op_41f0_31), 0x41f0, 2, { 2, 0 }, 0 }, /* LEA */
{ CPUFUNC(op_41f8_31), 0x41f8, 4, { 0, 0 }, 0 }, /* LEA */
{ CPUFUNC(op_41f9_31), 0x41f9, 6, { 0, 0 }, 0 }, /* LEA */
{ CPUFUNC(op_41fa_31), 0x41fa, 4, { 0, 0 }, 0 }, /* LEA */
{ CPUFUNC(op_41fb_31), 0x41fb, 2, { 2, 0 }, 0 }, /* LEA */
{ CPUFUNC(op_4200_31), 0x4200, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4210_31), 0x4210, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4218_31), 0x4218, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4220_31), 0x4220, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4228_31), 0x4228, 4, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4230_31), 0x4230, 2, { 2, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4238_31), 0x4238, 4, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4239_31), 0x4239, 6, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4240_31), 0x4240, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4250_31), 0x4250, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4258_31), 0x4258, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4260_31), 0x4260, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4268_31), 0x4268, 4, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4270_31), 0x4270, 2, { 2, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4278_31), 0x4278, 4, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4279_31), 0x4279, 6, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4280_31), 0x4280, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4290_31), 0x4290, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4298_31), 0x4298, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_42a0_31), 0x42a0, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_42a8_31), 0x42a8, 4, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_42b0_31), 0x42b0, 2, { 2, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_42b8_31), 0x42b8, 4, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_42b9_31), 0x42b9, 6, { 0, 0 }, 0 }, /* CLR */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42c0_31), 0x42c0, 2, { 0, 0 }, 0 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42d0_31), 0x42d0, 2, { 0, 0 }, 0 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42d8_31), 0x42d8, 2, { 0, 0 }, 0 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42e0_31), 0x42e0, 2, { 0, 0 }, 0 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42e8_31), 0x42e8, 4, { 0, 0 }, 0 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42f0_31), 0x42f0, 2, { 2, 0 }, 0 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42f8_31), 0x42f8, 4, { 0, 0 }, 0 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42f9_31), 0x42f9, 6, { 0, 0 }, 0 }, /* MVSR2 */
#endif
{ CPUFUNC(op_4400_31), 0x4400, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4410_31), 0x4410, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4418_31), 0x4418, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4420_31), 0x4420, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4428_31), 0x4428, 4, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4430_31), 0x4430, 2, { 2, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4438_31), 0x4438, 4, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4439_31), 0x4439, 6, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4440_31), 0x4440, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4450_31), 0x4450, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4458_31), 0x4458, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4460_31), 0x4460, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4468_31), 0x4468, 4, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4470_31), 0x4470, 2, { 2, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4478_31), 0x4478, 4, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4479_31), 0x4479, 6, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4480_31), 0x4480, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4490_31), 0x4490, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4498_31), 0x4498, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_44a0_31), 0x44a0, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_44a8_31), 0x44a8, 4, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_44b0_31), 0x44b0, 2, { 2, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_44b8_31), 0x44b8, 4, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_44b9_31), 0x44b9, 6, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_44c0_31), 0x44c0, 2, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44d0_31), 0x44d0, 2, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44d8_31), 0x44d8, 2, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44e0_31), 0x44e0, 2, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44e8_31), 0x44e8, 4, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44f0_31), 0x44f0, 2, { 2, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44f8_31), 0x44f8, 4, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44f9_31), 0x44f9, 6, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44fa_31), 0x44fa, 4, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44fb_31), 0x44fb, 2, { 2, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44fc_31), 0x44fc, 4, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_4600_31), 0x4600, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4610_31), 0x4610, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4618_31), 0x4618, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4620_31), 0x4620, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4628_31), 0x4628, 4, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4630_31), 0x4630, 2, { 2, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4638_31), 0x4638, 4, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4639_31), 0x4639, 6, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4640_31), 0x4640, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4650_31), 0x4650, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4658_31), 0x4658, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4660_31), 0x4660, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4668_31), 0x4668, 4, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4670_31), 0x4670, 2, { 2, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4678_31), 0x4678, 4, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4679_31), 0x4679, 6, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4680_31), 0x4680, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4690_31), 0x4690, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4698_31), 0x4698, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_46a0_31), 0x46a0, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_46a8_31), 0x46a8, 4, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_46b0_31), 0x46b0, 2, { 2, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_46b8_31), 0x46b8, 4, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_46b9_31), 0x46b9, 6, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_46c0_31), 0x46c0, 2, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46d0_31), 0x46d0, 2, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46d8_31), 0x46d8, 2, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46e0_31), 0x46e0, 2, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46e8_31), 0x46e8, 4, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46f0_31), 0x46f0, 2, { 2, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46f8_31), 0x46f8, 4, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46f9_31), 0x46f9, 6, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46fa_31), 0x46fa, 4, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46fb_31), 0x46fb, 2, { 2, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46fc_31), 0x46fc, 4, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_4800_31), 0x4800, 2, { 0, 0 }, 0 }, /* NBCD */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4808_31), 0x4808, 6, { 0, 0 }, 0 }, /* LINK */
#endif
{ CPUFUNC(op_4810_31), 0x4810, 2, { 0, 0 }, 0 }, /* NBCD */
{ CPUFUNC(op_4818_31), 0x4818, 2, { 0, 0 }, 0 }, /* NBCD */
{ CPUFUNC(op_4820_31), 0x4820, 2, { 0, 0 }, 0 }, /* NBCD */
{ CPUFUNC(op_4828_31), 0x4828, 4, { 0, 0 }, 0 }, /* NBCD */
{ CPUFUNC(op_4830_31), 0x4830, 2, { 2, 0 }, 0 }, /* NBCD */
{ CPUFUNC(op_4838_31), 0x4838, 4, { 0, 0 }, 0 }, /* NBCD */
{ CPUFUNC(op_4839_31), 0x4839, 6, { 0, 0 }, 0 }, /* NBCD */
{ CPUFUNC(op_4840_31), 0x4840, 2, { 0, 0 }, 0 }, /* SWAP */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4848_31), 0x4848, 2, { 0, 0 }, 0 }, /* BKPT */
#endif
{ CPUFUNC(op_4850_31), 0x4850, 2, { 0, 0 }, 0 }, /* PEA */
{ CPUFUNC(op_4868_31), 0x4868, 4, { 0, 0 }, 0 }, /* PEA */
{ CPUFUNC(op_4870_31), 0x4870, 2, { 2, 0 }, 0 }, /* PEA */
{ CPUFUNC(op_4878_31), 0x4878, 4, { 0, 0 }, 0 }, /* PEA */
{ CPUFUNC(op_4879_31), 0x4879, 6, { 0, 0 }, 0 }, /* PEA */
{ CPUFUNC(op_487a_31), 0x487a, 4, { 0, 0 }, 0 }, /* PEA */
{ CPUFUNC(op_487b_31), 0x487b, 2, { 2, 0 }, 0 }, /* PEA */
{ CPUFUNC(op_4880_31), 0x4880, 2, { 0, 0 }, 0 }, /* EXT */
{ CPUFUNC(op_4890_31), 0x4890, 4, { 0, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48a0_31), 0x48a0, 4, { 0, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48a8_31), 0x48a8, 6, { 0, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48b0_31), 0x48b0, 4, { 2, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48b8_31), 0x48b8, 6, { 0, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48b9_31), 0x48b9, 8, { 0, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48c0_31), 0x48c0, 2, { 0, 0 }, 0 }, /* EXT */
{ CPUFUNC(op_48d0_31), 0x48d0, 4, { 0, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48e0_31), 0x48e0, 4, { 0, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48e8_31), 0x48e8, 6, { 0, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48f0_31), 0x48f0, 4, { 2, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48f8_31), 0x48f8, 6, { 0, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48f9_31), 0x48f9, 8, { 0, 0 }, 0 }, /* MVMLE */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_49c0_31), 0x49c0, 2, { 0, 0 }, 0 }, /* EXT */
#endif
{ CPUFUNC(op_4a00_31), 0x4a00, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a10_31), 0x4a10, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a18_31), 0x4a18, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a20_31), 0x4a20, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a28_31), 0x4a28, 4, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a30_31), 0x4a30, 2, { 2, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a38_31), 0x4a38, 4, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a39_31), 0x4a39, 6, { 0, 0 }, 0 }, /* TST */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a3a_31), 0x4a3a, 4, { 0, 0 }, 0 }, /* TST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a3b_31), 0x4a3b, 2, { 2, 0 }, 0 }, /* TST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a3c_31), 0x4a3c, 4, { 0, 0 }, 0 }, /* TST */
#endif
{ CPUFUNC(op_4a40_31), 0x4a40, 2, { 0, 0 }, 0 }, /* TST */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a48_31), 0x4a48, 2, { 0, 0 }, 0 }, /* TST */
#endif
{ CPUFUNC(op_4a50_31), 0x4a50, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a58_31), 0x4a58, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a60_31), 0x4a60, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a68_31), 0x4a68, 4, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a70_31), 0x4a70, 2, { 2, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a78_31), 0x4a78, 4, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a79_31), 0x4a79, 6, { 0, 0 }, 0 }, /* TST */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a7a_31), 0x4a7a, 4, { 0, 0 }, 0 }, /* TST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a7b_31), 0x4a7b, 2, { 2, 0 }, 0 }, /* TST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a7c_31), 0x4a7c, 4, { 0, 0 }, 0 }, /* TST */
#endif
{ CPUFUNC(op_4a80_31), 0x4a80, 2, { 0, 0 }, 0 }, /* TST */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a88_31), 0x4a88, 2, { 0, 0 }, 0 }, /* TST */
#endif
{ CPUFUNC(op_4a90_31), 0x4a90, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a98_31), 0x4a98, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4aa0_31), 0x4aa0, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4aa8_31), 0x4aa8, 4, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4ab0_31), 0x4ab0, 2, { 2, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4ab8_31), 0x4ab8, 4, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4ab9_31), 0x4ab9, 6, { 0, 0 }, 0 }, /* TST */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4aba_31), 0x4aba, 4, { 0, 0 }, 0 }, /* TST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4abb_31), 0x4abb, 2, { 2, 0 }, 0 }, /* TST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4abc_31), 0x4abc, 6, { 0, 0 }, 0 }, /* TST */
#endif
{ CPUFUNC(op_4ac0_31), 0x4ac0, 2, { 0, 0 }, 0 }, /* TAS */
{ CPUFUNC(op_4ad0_31), 0x4ad0, 2, { 0, 0 }, 0 }, /* TAS */
{ CPUFUNC(op_4ad8_31), 0x4ad8, 2, { 0, 0 }, 0 }, /* TAS */
{ CPUFUNC(op_4ae0_31), 0x4ae0, 2, { 0, 0 }, 0 }, /* TAS */
{ CPUFUNC(op_4ae8_31), 0x4ae8, 4, { 0, 0 }, 0 }, /* TAS */
{ CPUFUNC(op_4af0_31), 0x4af0, 2, { 2, 0 }, 0 }, /* TAS */
{ CPUFUNC(op_4af8_31), 0x4af8, 4, { 0, 0 }, 0 }, /* TAS */
{ CPUFUNC(op_4af9_31), 0x4af9, 6, { 0, 0 }, 0 }, /* TAS */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c00_31), 0x4c00, 4, { 0, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c10_31), 0x4c10, 4, { 0, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c18_31), 0x4c18, 4, { 0, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c20_31), 0x4c20, 4, { 0, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c28_31), 0x4c28, 6, { 0, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c30_31), 0x4c30, 4, { 2, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c38_31), 0x4c38, 6, { 0, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c39_31), 0x4c39, 8, { 0, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c3a_31), 0x4c3a, 6, { 0, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c3b_31), 0x4c3b, 4, { 2, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c3c_31), 0x4c3c, 8, { 0, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c40_31), 0x4c40, 4, { 0, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c50_31), 0x4c50, 4, { 0, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c58_31), 0x4c58, 4, { 0, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c60_31), 0x4c60, 4, { 0, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c68_31), 0x4c68, 6, { 0, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c70_31), 0x4c70, 4, { 2, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c78_31), 0x4c78, 6, { 0, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c79_31), 0x4c79, 8, { 0, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c7a_31), 0x4c7a, 6, { 0, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c7b_31), 0x4c7b, 4, { 2, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c7c_31), 0x4c7c, 8, { 0, 0 }, 0 }, /* DIVL */
#endif
{ CPUFUNC(op_4c90_31), 0x4c90, 4, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4c98_31), 0x4c98, 4, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4ca8_31), 0x4ca8, 6, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cb0_31), 0x4cb0, 4, { 2, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cb8_31), 0x4cb8, 6, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cb9_31), 0x4cb9, 8, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cba_31), 0x4cba, 6, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cbb_31), 0x4cbb, 4, { 2, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cd0_31), 0x4cd0, 4, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cd8_31), 0x4cd8, 4, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4ce8_31), 0x4ce8, 6, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cf0_31), 0x4cf0, 4, { 2, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cf8_31), 0x4cf8, 6, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cf9_31), 0x4cf9, 8, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cfa_31), 0x4cfa, 6, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cfb_31), 0x4cfb, 4, { 2, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4e40_31), 0x4e40, 2, { 0, 0 }, 0 }, /* TRAP */
{ CPUFUNC(op_4e50_31), 0x4e50, 4, { 0, 0 }, 0 }, /* LINK */
{ CPUFUNC(op_4e58_31), 0x4e58, 2, { 0, 0 }, 0 }, /* UNLK */
{ CPUFUNC(op_4e60_31), 0x4e60, 2, { 0, 0 }, 0 }, /* MVR2USP */
{ CPUFUNC(op_4e68_31), 0x4e68, 2, { 0, 0 }, 0 }, /* MVUSP2R */
{ CPUFUNC(op_4e70_31), 0x4e70, 2, { 0, 0 }, 0 }, /* RESET */
{ CPUFUNC(op_4e71_31), 0x4e71, 2, { 0, 0 }, 0 }, /* NOP */
{ CPUFUNC(op_4e72_31), 0x4e72, 4, { 0, 0 }, 0 }, /* STOP */
{ CPUFUNC(op_4e73_31), 0x4e73, 2, { 0, 0 }, 1 }, /* RTE */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4e74_31), 0x4e74, 4, { 0, 0 }, 1 }, /* RTD */
#endif
{ CPUFUNC(op_4e75_31), 0x4e75, 2, { 0, 0 }, 1 }, /* RTS */
{ CPUFUNC(op_4e76_31), 0x4e76, 2, { 0, 0 }, 0 }, /* TRAPV */
{ CPUFUNC(op_4e77_31), 0x4e77, 2, { 0, 0 }, 1 }, /* RTR */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4e7a_31), 0x4e7a, 4, { 0, 0 }, 0 }, /* MOVEC2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4e7b_31), 0x4e7b, 4, { 0, 0 }, 0 }, /* MOVE2C */
#endif
{ CPUFUNC(op_4e90_31), 0x4e90, 2, { 0, 0 }, 1 }, /* JSR */
{ CPUFUNC(op_4ea8_31), 0x4ea8, 4, { 0, 0 }, 1 }, /* JSR */
{ CPUFUNC(op_4eb0_31), 0x4eb0, 2, { 2, 0 }, 1 }, /* JSR */
{ CPUFUNC(op_4eb8_31), 0x4eb8, 4, { 0, 0 }, 1 }, /* JSR */
{ CPUFUNC(op_4eb9_31), 0x4eb9, 6, { 0, 0 }, 1 }, /* JSR */
{ CPUFUNC(op_4eba_31), 0x4eba, 4, { 0, 0 }, 1 }, /* JSR */
{ CPUFUNC(op_4ebb_31), 0x4ebb, 2, { 2, 0 }, 1 }, /* JSR */
{ CPUFUNC(op_4ed0_31), 0x4ed0, 2, { 0, 0 }, 1 }, /* JMP */
{ CPUFUNC(op_4ee8_31), 0x4ee8, 4, { 0, 0 }, 1 }, /* JMP */
{ CPUFUNC(op_4ef0_31), 0x4ef0, 2, { 2, 0 }, 1 }, /* JMP */
{ CPUFUNC(op_4ef8_31), 0x4ef8, 4, { 0, 0 }, 1 }, /* JMP */
{ CPUFUNC(op_4ef9_31), 0x4ef9, 6, { 0, 0 }, 1 }, /* JMP */
{ CPUFUNC(op_4efa_31), 0x4efa, 4, { 0, 0 }, 1 }, /* JMP */
{ CPUFUNC(op_4efb_31), 0x4efb, 2, { 2, 0 }, 1 }, /* JMP */
{ CPUFUNC(op_5000_31), 0x5000, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5010_31), 0x5010, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5018_31), 0x5018, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5020_31), 0x5020, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5028_31), 0x5028, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5030_31), 0x5030, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5038_31), 0x5038, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5039_31), 0x5039, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5040_31), 0x5040, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5048_31), 0x5048, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_5050_31), 0x5050, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5058_31), 0x5058, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5060_31), 0x5060, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5068_31), 0x5068, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5070_31), 0x5070, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5078_31), 0x5078, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5079_31), 0x5079, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5080_31), 0x5080, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5088_31), 0x5088, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_5090_31), 0x5090, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5098_31), 0x5098, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_50a0_31), 0x50a0, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_50a8_31), 0x50a8, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_50b0_31), 0x50b0, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_50b8_31), 0x50b8, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_50b9_31), 0x50b9, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_50c0_31), 0x50c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_50c8_31), 0x50c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_50d0_31), 0x50d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_50d8_31), 0x50d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_50e0_31), 0x50e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_50e8_31), 0x50e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_50f0_31), 0x50f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_50f8_31), 0x50f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_50f9_31), 0x50f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_50fa_31), 0x50fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_50fb_31), 0x50fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_50fc_31), 0x50fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5100_31), 0x5100, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5110_31), 0x5110, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5118_31), 0x5118, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5120_31), 0x5120, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5128_31), 0x5128, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5130_31), 0x5130, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5138_31), 0x5138, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5139_31), 0x5139, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5140_31), 0x5140, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5148_31), 0x5148, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_5150_31), 0x5150, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5158_31), 0x5158, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5160_31), 0x5160, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5168_31), 0x5168, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5170_31), 0x5170, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5178_31), 0x5178, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5179_31), 0x5179, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5180_31), 0x5180, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5188_31), 0x5188, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_5190_31), 0x5190, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5198_31), 0x5198, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_51a0_31), 0x51a0, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_51a8_31), 0x51a8, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_51b0_31), 0x51b0, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_51b8_31), 0x51b8, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_51b9_31), 0x51b9, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_51c0_31), 0x51c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_51c8_31), 0x51c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_51d0_31), 0x51d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_51d8_31), 0x51d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_51e0_31), 0x51e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_51e8_31), 0x51e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_51f0_31), 0x51f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_51f8_31), 0x51f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_51f9_31), 0x51f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_51fa_31), 0x51fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_51fb_31), 0x51fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_51fc_31), 0x51fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_52c0_31), 0x52c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_52c8_31), 0x52c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_52d0_31), 0x52d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_52d8_31), 0x52d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_52e0_31), 0x52e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_52e8_31), 0x52e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_52f0_31), 0x52f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_52f8_31), 0x52f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_52f9_31), 0x52f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_52fa_31), 0x52fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_52fb_31), 0x52fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_52fc_31), 0x52fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_53c0_31), 0x53c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_53c8_31), 0x53c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_53d0_31), 0x53d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_53d8_31), 0x53d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_53e0_31), 0x53e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_53e8_31), 0x53e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_53f0_31), 0x53f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_53f8_31), 0x53f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_53f9_31), 0x53f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_53fa_31), 0x53fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_53fb_31), 0x53fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_53fc_31), 0x53fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_54c0_31), 0x54c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_54c8_31), 0x54c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_54d0_31), 0x54d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_54d8_31), 0x54d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_54e0_31), 0x54e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_54e8_31), 0x54e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_54f0_31), 0x54f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_54f8_31), 0x54f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_54f9_31), 0x54f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_54fa_31), 0x54fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_54fb_31), 0x54fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_54fc_31), 0x54fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_55c0_31), 0x55c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_55c8_31), 0x55c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_55d0_31), 0x55d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_55d8_31), 0x55d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_55e0_31), 0x55e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_55e8_31), 0x55e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_55f0_31), 0x55f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_55f8_31), 0x55f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_55f9_31), 0x55f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_55fa_31), 0x55fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_55fb_31), 0x55fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_55fc_31), 0x55fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_56c0_31), 0x56c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_56c8_31), 0x56c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_56d0_31), 0x56d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_56d8_31), 0x56d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_56e0_31), 0x56e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_56e8_31), 0x56e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_56f0_31), 0x56f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_56f8_31), 0x56f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_56f9_31), 0x56f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_56fa_31), 0x56fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_56fb_31), 0x56fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_56fc_31), 0x56fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_57c0_31), 0x57c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_57c8_31), 0x57c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_57d0_31), 0x57d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_57d8_31), 0x57d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_57e0_31), 0x57e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_57e8_31), 0x57e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_57f0_31), 0x57f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_57f8_31), 0x57f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_57f9_31), 0x57f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_57fa_31), 0x57fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_57fb_31), 0x57fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_57fc_31), 0x57fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_58c0_31), 0x58c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_58c8_31), 0x58c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_58d0_31), 0x58d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_58d8_31), 0x58d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_58e0_31), 0x58e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_58e8_31), 0x58e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_58f0_31), 0x58f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_58f8_31), 0x58f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_58f9_31), 0x58f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_58fa_31), 0x58fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_58fb_31), 0x58fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_58fc_31), 0x58fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_59c0_31), 0x59c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_59c8_31), 0x59c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_59d0_31), 0x59d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_59d8_31), 0x59d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_59e0_31), 0x59e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_59e8_31), 0x59e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_59f0_31), 0x59f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_59f8_31), 0x59f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_59f9_31), 0x59f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_59fa_31), 0x59fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_59fb_31), 0x59fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_59fc_31), 0x59fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5ac0_31), 0x5ac0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ac8_31), 0x5ac8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_5ad0_31), 0x5ad0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ad8_31), 0x5ad8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ae0_31), 0x5ae0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ae8_31), 0x5ae8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5af0_31), 0x5af0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5af8_31), 0x5af8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5af9_31), 0x5af9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5afa_31), 0x5afa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5afb_31), 0x5afb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5afc_31), 0x5afc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5bc0_31), 0x5bc0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5bc8_31), 0x5bc8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_5bd0_31), 0x5bd0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5bd8_31), 0x5bd8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5be0_31), 0x5be0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5be8_31), 0x5be8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5bf0_31), 0x5bf0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5bf8_31), 0x5bf8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5bf9_31), 0x5bf9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5bfa_31), 0x5bfa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5bfb_31), 0x5bfb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5bfc_31), 0x5bfc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5cc0_31), 0x5cc0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5cc8_31), 0x5cc8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_5cd0_31), 0x5cd0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5cd8_31), 0x5cd8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ce0_31), 0x5ce0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ce8_31), 0x5ce8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5cf0_31), 0x5cf0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5cf8_31), 0x5cf8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5cf9_31), 0x5cf9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5cfa_31), 0x5cfa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5cfb_31), 0x5cfb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5cfc_31), 0x5cfc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5dc0_31), 0x5dc0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5dc8_31), 0x5dc8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_5dd0_31), 0x5dd0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5dd8_31), 0x5dd8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5de0_31), 0x5de0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5de8_31), 0x5de8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5df0_31), 0x5df0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5df8_31), 0x5df8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5df9_31), 0x5df9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5dfa_31), 0x5dfa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5dfb_31), 0x5dfb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5dfc_31), 0x5dfc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5ec0_31), 0x5ec0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ec8_31), 0x5ec8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_5ed0_31), 0x5ed0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ed8_31), 0x5ed8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ee0_31), 0x5ee0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ee8_31), 0x5ee8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ef0_31), 0x5ef0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ef8_31), 0x5ef8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ef9_31), 0x5ef9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5efa_31), 0x5efa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5efb_31), 0x5efb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5efc_31), 0x5efc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5fc0_31), 0x5fc0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5fc8_31), 0x5fc8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_5fd0_31), 0x5fd0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5fd8_31), 0x5fd8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5fe0_31), 0x5fe0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5fe8_31), 0x5fe8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ff0_31), 0x5ff0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ff8_31), 0x5ff8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ff9_31), 0x5ff9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5ffa_31), 0x5ffa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5ffb_31), 0x5ffb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5ffc_31), 0x5ffc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_6000_31), 0x6000, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6001_31), 0x6001, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_60ff_31), 0x60ff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6100_31), 0x6100, 4, { 0, 0 }, 1 }, /* BSR */
{ CPUFUNC(op_6101_31), 0x6101, 2, { 0, 0 }, 1 }, /* BSR */
{ CPUFUNC(op_61ff_31), 0x61ff, 6, { 0, 0 }, 1 }, /* BSR */
{ CPUFUNC(op_6200_31), 0x6200, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6201_31), 0x6201, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_62ff_31), 0x62ff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6300_31), 0x6300, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6301_31), 0x6301, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_63ff_31), 0x63ff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6400_31), 0x6400, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6401_31), 0x6401, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_64ff_31), 0x64ff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6500_31), 0x6500, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6501_31), 0x6501, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_65ff_31), 0x65ff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6600_31), 0x6600, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6601_31), 0x6601, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_66ff_31), 0x66ff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6700_31), 0x6700, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6701_31), 0x6701, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_67ff_31), 0x67ff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6800_31), 0x6800, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6801_31), 0x6801, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_68ff_31), 0x68ff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6900_31), 0x6900, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6901_31), 0x6901, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_69ff_31), 0x69ff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6a00_31), 0x6a00, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6a01_31), 0x6a01, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6aff_31), 0x6aff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6b00_31), 0x6b00, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6b01_31), 0x6b01, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6bff_31), 0x6bff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6c00_31), 0x6c00, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6c01_31), 0x6c01, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6cff_31), 0x6cff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6d00_31), 0x6d00, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6d01_31), 0x6d01, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6dff_31), 0x6dff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6e00_31), 0x6e00, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6e01_31), 0x6e01, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6eff_31), 0x6eff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6f00_31), 0x6f00, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6f01_31), 0x6f01, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6fff_31), 0x6fff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_7000_31), 0x7000, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_8000_31), 0x8000, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8010_31), 0x8010, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8018_31), 0x8018, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8020_31), 0x8020, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8028_31), 0x8028, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8030_31), 0x8030, 2, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8038_31), 0x8038, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8039_31), 0x8039, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_803a_31), 0x803a, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_803b_31), 0x803b, 2, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_803c_31), 0x803c, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8040_31), 0x8040, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8050_31), 0x8050, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8058_31), 0x8058, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8060_31), 0x8060, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8068_31), 0x8068, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8070_31), 0x8070, 2, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8078_31), 0x8078, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8079_31), 0x8079, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_807a_31), 0x807a, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_807b_31), 0x807b, 2, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_807c_31), 0x807c, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8080_31), 0x8080, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8090_31), 0x8090, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8098_31), 0x8098, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_80a0_31), 0x80a0, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_80a8_31), 0x80a8, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_80b0_31), 0x80b0, 2, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_80b8_31), 0x80b8, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_80b9_31), 0x80b9, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_80ba_31), 0x80ba, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_80bb_31), 0x80bb, 2, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_80bc_31), 0x80bc, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_80c0_31), 0x80c0, 2, { 0, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80d0_31), 0x80d0, 2, { 0, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80d8_31), 0x80d8, 2, { 0, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80e0_31), 0x80e0, 2, { 0, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80e8_31), 0x80e8, 4, { 0, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80f0_31), 0x80f0, 2, { 2, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80f8_31), 0x80f8, 4, { 0, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80f9_31), 0x80f9, 6, { 0, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80fa_31), 0x80fa, 4, { 0, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80fb_31), 0x80fb, 2, { 2, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80fc_31), 0x80fc, 4, { 0, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_8100_31), 0x8100, 2, { 0, 0 }, 0 }, /* SBCD */
{ CPUFUNC(op_8108_31), 0x8108, 2, { 0, 0 }, 0 }, /* SBCD */
{ CPUFUNC(op_8110_31), 0x8110, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8118_31), 0x8118, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8120_31), 0x8120, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8128_31), 0x8128, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8130_31), 0x8130, 2, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8138_31), 0x8138, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8139_31), 0x8139, 6, { 0, 0 }, 0 }, /* OR */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_8140_31), 0x8140, 4, { 0, 0 }, 0 }, /* PACK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_8148_31), 0x8148, 4, { 0, 0 }, 0 }, /* PACK */
#endif
{ CPUFUNC(op_8150_31), 0x8150, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8158_31), 0x8158, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8160_31), 0x8160, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8168_31), 0x8168, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8170_31), 0x8170, 2, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8178_31), 0x8178, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8179_31), 0x8179, 6, { 0, 0 }, 0 }, /* OR */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_8180_31), 0x8180, 4, { 0, 0 }, 0 }, /* UNPK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_8188_31), 0x8188, 4, { 0, 0 }, 0 }, /* UNPK */
#endif
{ CPUFUNC(op_8190_31), 0x8190, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8198_31), 0x8198, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_81a0_31), 0x81a0, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_81a8_31), 0x81a8, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_81b0_31), 0x81b0, 2, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_81b8_31), 0x81b8, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_81b9_31), 0x81b9, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_81c0_31), 0x81c0, 2, { 0, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81d0_31), 0x81d0, 2, { 0, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81d8_31), 0x81d8, 2, { 0, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81e0_31), 0x81e0, 2, { 0, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81e8_31), 0x81e8, 4, { 0, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81f0_31), 0x81f0, 2, { 2, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81f8_31), 0x81f8, 4, { 0, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81f9_31), 0x81f9, 6, { 0, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81fa_31), 0x81fa, 4, { 0, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81fb_31), 0x81fb, 2, { 2, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81fc_31), 0x81fc, 4, { 0, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_9000_31), 0x9000, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9010_31), 0x9010, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9018_31), 0x9018, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9020_31), 0x9020, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9028_31), 0x9028, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9030_31), 0x9030, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9038_31), 0x9038, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9039_31), 0x9039, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_903a_31), 0x903a, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_903b_31), 0x903b, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_903c_31), 0x903c, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9040_31), 0x9040, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9048_31), 0x9048, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9050_31), 0x9050, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9058_31), 0x9058, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9060_31), 0x9060, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9068_31), 0x9068, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9070_31), 0x9070, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9078_31), 0x9078, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9079_31), 0x9079, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_907a_31), 0x907a, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_907b_31), 0x907b, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_907c_31), 0x907c, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9080_31), 0x9080, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9088_31), 0x9088, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9090_31), 0x9090, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9098_31), 0x9098, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_90a0_31), 0x90a0, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_90a8_31), 0x90a8, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_90b0_31), 0x90b0, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_90b8_31), 0x90b8, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_90b9_31), 0x90b9, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_90ba_31), 0x90ba, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_90bb_31), 0x90bb, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_90bc_31), 0x90bc, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_90c0_31), 0x90c0, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90c8_31), 0x90c8, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90d0_31), 0x90d0, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90d8_31), 0x90d8, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90e0_31), 0x90e0, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90e8_31), 0x90e8, 4, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90f0_31), 0x90f0, 2, { 2, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90f8_31), 0x90f8, 4, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90f9_31), 0x90f9, 6, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90fa_31), 0x90fa, 4, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90fb_31), 0x90fb, 2, { 2, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90fc_31), 0x90fc, 4, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_9100_31), 0x9100, 2, { 0, 0 }, 0 }, /* SUBX */
{ CPUFUNC(op_9108_31), 0x9108, 2, { 0, 0 }, 0 }, /* SUBX */
{ CPUFUNC(op_9110_31), 0x9110, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9118_31), 0x9118, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9120_31), 0x9120, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9128_31), 0x9128, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9130_31), 0x9130, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9138_31), 0x9138, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9139_31), 0x9139, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9140_31), 0x9140, 2, { 0, 0 }, 0 }, /* SUBX */
{ CPUFUNC(op_9148_31), 0x9148, 2, { 0, 0 }, 0 }, /* SUBX */
{ CPUFUNC(op_9150_31), 0x9150, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9158_31), 0x9158, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9160_31), 0x9160, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9168_31), 0x9168, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9170_31), 0x9170, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9178_31), 0x9178, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9179_31), 0x9179, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9180_31), 0x9180, 2, { 0, 0 }, 0 }, /* SUBX */
{ CPUFUNC(op_9188_31), 0x9188, 2, { 0, 0 }, 0 }, /* SUBX */
{ CPUFUNC(op_9190_31), 0x9190, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9198_31), 0x9198, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_91a0_31), 0x91a0, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_91a8_31), 0x91a8, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_91b0_31), 0x91b0, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_91b8_31), 0x91b8, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_91b9_31), 0x91b9, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_91c0_31), 0x91c0, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91c8_31), 0x91c8, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91d0_31), 0x91d0, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91d8_31), 0x91d8, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91e0_31), 0x91e0, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91e8_31), 0x91e8, 4, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91f0_31), 0x91f0, 2, { 2, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91f8_31), 0x91f8, 4, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91f9_31), 0x91f9, 6, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91fa_31), 0x91fa, 4, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91fb_31), 0x91fb, 2, { 2, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91fc_31), 0x91fc, 6, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_b000_31), 0xb000, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b010_31), 0xb010, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b018_31), 0xb018, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b020_31), 0xb020, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b028_31), 0xb028, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b030_31), 0xb030, 2, { 2, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b038_31), 0xb038, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b039_31), 0xb039, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b03a_31), 0xb03a, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b03b_31), 0xb03b, 2, { 2, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b03c_31), 0xb03c, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b040_31), 0xb040, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b048_31), 0xb048, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b050_31), 0xb050, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b058_31), 0xb058, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b060_31), 0xb060, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b068_31), 0xb068, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b070_31), 0xb070, 2, { 2, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b078_31), 0xb078, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b079_31), 0xb079, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b07a_31), 0xb07a, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b07b_31), 0xb07b, 2, { 2, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b07c_31), 0xb07c, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b080_31), 0xb080, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b088_31), 0xb088, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b090_31), 0xb090, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b098_31), 0xb098, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b0a0_31), 0xb0a0, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b0a8_31), 0xb0a8, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b0b0_31), 0xb0b0, 2, { 2, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b0b8_31), 0xb0b8, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b0b9_31), 0xb0b9, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b0ba_31), 0xb0ba, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b0bb_31), 0xb0bb, 2, { 2, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b0bc_31), 0xb0bc, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b0c0_31), 0xb0c0, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0c8_31), 0xb0c8, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0d0_31), 0xb0d0, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0d8_31), 0xb0d8, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0e0_31), 0xb0e0, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0e8_31), 0xb0e8, 4, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0f0_31), 0xb0f0, 2, { 2, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0f8_31), 0xb0f8, 4, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0f9_31), 0xb0f9, 6, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0fa_31), 0xb0fa, 4, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0fb_31), 0xb0fb, 2, { 2, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0fc_31), 0xb0fc, 4, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b100_31), 0xb100, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b108_31), 0xb108, 2, { 0, 0 }, 0 }, /* CMPM */
{ CPUFUNC(op_b110_31), 0xb110, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b118_31), 0xb118, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b120_31), 0xb120, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b128_31), 0xb128, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b130_31), 0xb130, 2, { 2, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b138_31), 0xb138, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b139_31), 0xb139, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b140_31), 0xb140, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b148_31), 0xb148, 2, { 0, 0 }, 0 }, /* CMPM */
{ CPUFUNC(op_b150_31), 0xb150, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b158_31), 0xb158, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b160_31), 0xb160, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b168_31), 0xb168, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b170_31), 0xb170, 2, { 2, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b178_31), 0xb178, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b179_31), 0xb179, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b180_31), 0xb180, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b188_31), 0xb188, 2, { 0, 0 }, 0 }, /* CMPM */
{ CPUFUNC(op_b190_31), 0xb190, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b198_31), 0xb198, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b1a0_31), 0xb1a0, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b1a8_31), 0xb1a8, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b1b0_31), 0xb1b0, 2, { 2, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b1b8_31), 0xb1b8, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b1b9_31), 0xb1b9, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b1c0_31), 0xb1c0, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1c8_31), 0xb1c8, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1d0_31), 0xb1d0, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1d8_31), 0xb1d8, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1e0_31), 0xb1e0, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1e8_31), 0xb1e8, 4, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1f0_31), 0xb1f0, 2, { 2, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1f8_31), 0xb1f8, 4, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1f9_31), 0xb1f9, 6, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1fa_31), 0xb1fa, 4, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1fb_31), 0xb1fb, 2, { 2, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1fc_31), 0xb1fc, 6, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_c000_31), 0xc000, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c010_31), 0xc010, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c018_31), 0xc018, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c020_31), 0xc020, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c028_31), 0xc028, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c030_31), 0xc030, 2, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c038_31), 0xc038, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c039_31), 0xc039, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c03a_31), 0xc03a, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c03b_31), 0xc03b, 2, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c03c_31), 0xc03c, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c040_31), 0xc040, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c050_31), 0xc050, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c058_31), 0xc058, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c060_31), 0xc060, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c068_31), 0xc068, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c070_31), 0xc070, 2, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c078_31), 0xc078, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c079_31), 0xc079, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c07a_31), 0xc07a, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c07b_31), 0xc07b, 2, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c07c_31), 0xc07c, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c080_31), 0xc080, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c090_31), 0xc090, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c098_31), 0xc098, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c0a0_31), 0xc0a0, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c0a8_31), 0xc0a8, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c0b0_31), 0xc0b0, 2, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c0b8_31), 0xc0b8, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c0b9_31), 0xc0b9, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c0ba_31), 0xc0ba, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c0bb_31), 0xc0bb, 2, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c0bc_31), 0xc0bc, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c0c0_31), 0xc0c0, 2, { 0, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0d0_31), 0xc0d0, 2, { 0, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0d8_31), 0xc0d8, 2, { 0, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0e0_31), 0xc0e0, 2, { 0, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0e8_31), 0xc0e8, 4, { 0, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0f0_31), 0xc0f0, 2, { 2, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0f8_31), 0xc0f8, 4, { 0, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0f9_31), 0xc0f9, 6, { 0, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0fa_31), 0xc0fa, 4, { 0, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0fb_31), 0xc0fb, 2, { 2, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0fc_31), 0xc0fc, 4, { 0, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c100_31), 0xc100, 2, { 0, 0 }, 0 }, /* ABCD */
{ CPUFUNC(op_c108_31), 0xc108, 2, { 0, 0 }, 0 }, /* ABCD */
{ CPUFUNC(op_c110_31), 0xc110, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c118_31), 0xc118, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c120_31), 0xc120, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c128_31), 0xc128, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c130_31), 0xc130, 2, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c138_31), 0xc138, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c139_31), 0xc139, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c140_31), 0xc140, 2, { 0, 0 }, 0 }, /* EXG */
{ CPUFUNC(op_c148_31), 0xc148, 2, { 0, 0 }, 0 }, /* EXG */
{ CPUFUNC(op_c150_31), 0xc150, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c158_31), 0xc158, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c160_31), 0xc160, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c168_31), 0xc168, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c170_31), 0xc170, 2, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c178_31), 0xc178, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c179_31), 0xc179, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c188_31), 0xc188, 2, { 0, 0 }, 0 }, /* EXG */
{ CPUFUNC(op_c190_31), 0xc190, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c198_31), 0xc198, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c1a0_31), 0xc1a0, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c1a8_31), 0xc1a8, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c1b0_31), 0xc1b0, 2, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c1b8_31), 0xc1b8, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c1b9_31), 0xc1b9, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c1c0_31), 0xc1c0, 2, { 0, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1d0_31), 0xc1d0, 2, { 0, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1d8_31), 0xc1d8, 2, { 0, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1e0_31), 0xc1e0, 2, { 0, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1e8_31), 0xc1e8, 4, { 0, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1f0_31), 0xc1f0, 2, { 2, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1f8_31), 0xc1f8, 4, { 0, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1f9_31), 0xc1f9, 6, { 0, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1fa_31), 0xc1fa, 4, { 0, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1fb_31), 0xc1fb, 2, { 2, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1fc_31), 0xc1fc, 4, { 0, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_d000_31), 0xd000, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d010_31), 0xd010, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d018_31), 0xd018, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d020_31), 0xd020, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d028_31), 0xd028, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d030_31), 0xd030, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d038_31), 0xd038, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d039_31), 0xd039, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d03a_31), 0xd03a, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d03b_31), 0xd03b, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d03c_31), 0xd03c, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d040_31), 0xd040, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d048_31), 0xd048, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d050_31), 0xd050, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d058_31), 0xd058, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d060_31), 0xd060, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d068_31), 0xd068, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d070_31), 0xd070, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d078_31), 0xd078, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d079_31), 0xd079, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d07a_31), 0xd07a, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d07b_31), 0xd07b, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d07c_31), 0xd07c, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d080_31), 0xd080, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d088_31), 0xd088, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d090_31), 0xd090, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d098_31), 0xd098, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d0a0_31), 0xd0a0, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d0a8_31), 0xd0a8, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d0b0_31), 0xd0b0, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d0b8_31), 0xd0b8, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d0b9_31), 0xd0b9, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d0ba_31), 0xd0ba, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d0bb_31), 0xd0bb, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d0bc_31), 0xd0bc, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d0c0_31), 0xd0c0, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0c8_31), 0xd0c8, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0d0_31), 0xd0d0, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0d8_31), 0xd0d8, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0e0_31), 0xd0e0, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0e8_31), 0xd0e8, 4, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0f0_31), 0xd0f0, 2, { 2, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0f8_31), 0xd0f8, 4, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0f9_31), 0xd0f9, 6, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0fa_31), 0xd0fa, 4, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0fb_31), 0xd0fb, 2, { 2, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0fc_31), 0xd0fc, 4, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d100_31), 0xd100, 2, { 0, 0 }, 0 }, /* ADDX */
{ CPUFUNC(op_d108_31), 0xd108, 2, { 0, 0 }, 0 }, /* ADDX */
{ CPUFUNC(op_d110_31), 0xd110, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d118_31), 0xd118, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d120_31), 0xd120, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d128_31), 0xd128, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d130_31), 0xd130, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d138_31), 0xd138, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d139_31), 0xd139, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d140_31), 0xd140, 2, { 0, 0 }, 0 }, /* ADDX */
{ CPUFUNC(op_d148_31), 0xd148, 2, { 0, 0 }, 0 }, /* ADDX */
{ CPUFUNC(op_d150_31), 0xd150, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d158_31), 0xd158, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d160_31), 0xd160, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d168_31), 0xd168, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d170_31), 0xd170, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d178_31), 0xd178, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d179_31), 0xd179, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d180_31), 0xd180, 2, { 0, 0 }, 0 }, /* ADDX */
{ CPUFUNC(op_d188_31), 0xd188, 2, { 0, 0 }, 0 }, /* ADDX */
{ CPUFUNC(op_d190_31), 0xd190, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d198_31), 0xd198, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d1a0_31), 0xd1a0, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d1a8_31), 0xd1a8, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d1b0_31), 0xd1b0, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d1b8_31), 0xd1b8, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d1b9_31), 0xd1b9, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d1c0_31), 0xd1c0, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1c8_31), 0xd1c8, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1d0_31), 0xd1d0, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1d8_31), 0xd1d8, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1e0_31), 0xd1e0, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1e8_31), 0xd1e8, 4, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1f0_31), 0xd1f0, 2, { 2, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1f8_31), 0xd1f8, 4, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1f9_31), 0xd1f9, 6, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1fa_31), 0xd1fa, 4, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1fb_31), 0xd1fb, 2, { 2, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1fc_31), 0xd1fc, 6, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_e000_31), 0xe000, 2, { 0, 0 }, 0 }, /* ASR */
{ CPUFUNC(op_e008_31), 0xe008, 2, { 0, 0 }, 0 }, /* LSR */
{ CPUFUNC(op_e010_31), 0xe010, 2, { 0, 0 }, 0 }, /* ROXR */
{ CPUFUNC(op_e018_31), 0xe018, 2, { 0, 0 }, 0 }, /* ROR */
{ CPUFUNC(op_e020_31), 0xe020, 2, { 0, 0 }, 0 }, /* ASR */
{ CPUFUNC(op_e028_31), 0xe028, 2, { 0, 0 }, 0 }, /* LSR */
{ CPUFUNC(op_e030_31), 0xe030, 2, { 0, 0 }, 0 }, /* ROXR */
{ CPUFUNC(op_e038_31), 0xe038, 2, { 0, 0 }, 0 }, /* ROR */
{ CPUFUNC(op_e040_31), 0xe040, 2, { 0, 0 }, 0 }, /* ASR */
{ CPUFUNC(op_e048_31), 0xe048, 2, { 0, 0 }, 0 }, /* LSR */
{ CPUFUNC(op_e050_31), 0xe050, 2, { 0, 0 }, 0 }, /* ROXR */
{ CPUFUNC(op_e058_31), 0xe058, 2, { 0, 0 }, 0 }, /* ROR */
{ CPUFUNC(op_e060_31), 0xe060, 2, { 0, 0 }, 0 }, /* ASR */
{ CPUFUNC(op_e068_31), 0xe068, 2, { 0, 0 }, 0 }, /* LSR */
{ CPUFUNC(op_e070_31), 0xe070, 2, { 0, 0 }, 0 }, /* ROXR */
{ CPUFUNC(op_e078_31), 0xe078, 2, { 0, 0 }, 0 }, /* ROR */
{ CPUFUNC(op_e080_31), 0xe080, 2, { 0, 0 }, 0 }, /* ASR */
{ CPUFUNC(op_e088_31), 0xe088, 2, { 0, 0 }, 0 }, /* LSR */
{ CPUFUNC(op_e090_31), 0xe090, 2, { 0, 0 }, 0 }, /* ROXR */
{ CPUFUNC(op_e098_31), 0xe098, 2, { 0, 0 }, 0 }, /* ROR */
{ CPUFUNC(op_e0a0_31), 0xe0a0, 2, { 0, 0 }, 0 }, /* ASR */
{ CPUFUNC(op_e0a8_31), 0xe0a8, 2, { 0, 0 }, 0 }, /* LSR */
{ CPUFUNC(op_e0b0_31), 0xe0b0, 2, { 0, 0 }, 0 }, /* ROXR */
{ CPUFUNC(op_e0b8_31), 0xe0b8, 2, { 0, 0 }, 0 }, /* ROR */
{ CPUFUNC(op_e0d0_31), 0xe0d0, 2, { 0, 0 }, 0 }, /* ASRW */
{ CPUFUNC(op_e0d8_31), 0xe0d8, 2, { 0, 0 }, 0 }, /* ASRW */
{ CPUFUNC(op_e0e0_31), 0xe0e0, 2, { 0, 0 }, 0 }, /* ASRW */
{ CPUFUNC(op_e0e8_31), 0xe0e8, 4, { 0, 0 }, 0 }, /* ASRW */
{ CPUFUNC(op_e0f0_31), 0xe0f0, 2, { 2, 0 }, 0 }, /* ASRW */
{ CPUFUNC(op_e0f8_31), 0xe0f8, 4, { 0, 0 }, 0 }, /* ASRW */
{ CPUFUNC(op_e0f9_31), 0xe0f9, 6, { 0, 0 }, 0 }, /* ASRW */
{ CPUFUNC(op_e100_31), 0xe100, 2, { 0, 0 }, 0 }, /* ASL */
{ CPUFUNC(op_e108_31), 0xe108, 2, { 0, 0 }, 0 }, /* LSL */
{ CPUFUNC(op_e110_31), 0xe110, 2, { 0, 0 }, 0 }, /* ROXL */
{ CPUFUNC(op_e118_31), 0xe118, 2, { 0, 0 }, 0 }, /* ROL */
{ CPUFUNC(op_e120_31), 0xe120, 2, { 0, 0 }, 0 }, /* ASL */
{ CPUFUNC(op_e128_31), 0xe128, 2, { 0, 0 }, 0 }, /* LSL */
{ CPUFUNC(op_e130_31), 0xe130, 2, { 0, 0 }, 0 }, /* ROXL */
{ CPUFUNC(op_e138_31), 0xe138, 2, { 0, 0 }, 0 }, /* ROL */
{ CPUFUNC(op_e140_31), 0xe140, 2, { 0, 0 }, 0 }, /* ASL */
{ CPUFUNC(op_e148_31), 0xe148, 2, { 0, 0 }, 0 }, /* LSL */
{ CPUFUNC(op_e150_31), 0xe150, 2, { 0, 0 }, 0 }, /* ROXL */
{ CPUFUNC(op_e158_31), 0xe158, 2, { 0, 0 }, 0 }, /* ROL */
{ CPUFUNC(op_e160_31), 0xe160, 2, { 0, 0 }, 0 }, /* ASL */
{ CPUFUNC(op_e168_31), 0xe168, 2, { 0, 0 }, 0 }, /* LSL */
{ CPUFUNC(op_e170_31), 0xe170, 2, { 0, 0 }, 0 }, /* ROXL */
{ CPUFUNC(op_e178_31), 0xe178, 2, { 0, 0 }, 0 }, /* ROL */
{ CPUFUNC(op_e180_31), 0xe180, 2, { 0, 0 }, 0 }, /* ASL */
{ CPUFUNC(op_e188_31), 0xe188, 2, { 0, 0 }, 0 }, /* LSL */
{ CPUFUNC(op_e190_31), 0xe190, 2, { 0, 0 }, 0 }, /* ROXL */
{ CPUFUNC(op_e198_31), 0xe198, 2, { 0, 0 }, 0 }, /* ROL */
{ CPUFUNC(op_e1a0_31), 0xe1a0, 2, { 0, 0 }, 0 }, /* ASL */
{ CPUFUNC(op_e1a8_31), 0xe1a8, 2, { 0, 0 }, 0 }, /* LSL */
{ CPUFUNC(op_e1b0_31), 0xe1b0, 2, { 0, 0 }, 0 }, /* ROXL */
{ CPUFUNC(op_e1b8_31), 0xe1b8, 2, { 0, 0 }, 0 }, /* ROL */
{ CPUFUNC(op_e1d0_31), 0xe1d0, 2, { 0, 0 }, 0 }, /* ASLW */
{ CPUFUNC(op_e1d8_31), 0xe1d8, 2, { 0, 0 }, 0 }, /* ASLW */
{ CPUFUNC(op_e1e0_31), 0xe1e0, 2, { 0, 0 }, 0 }, /* ASLW */
{ CPUFUNC(op_e1e8_31), 0xe1e8, 4, { 0, 0 }, 0 }, /* ASLW */
{ CPUFUNC(op_e1f0_31), 0xe1f0, 2, { 2, 0 }, 0 }, /* ASLW */
{ CPUFUNC(op_e1f8_31), 0xe1f8, 4, { 0, 0 }, 0 }, /* ASLW */
{ CPUFUNC(op_e1f9_31), 0xe1f9, 6, { 0, 0 }, 0 }, /* ASLW */
{ CPUFUNC(op_e2d0_31), 0xe2d0, 2, { 0, 0 }, 0 }, /* LSRW */
{ CPUFUNC(op_e2d8_31), 0xe2d8, 2, { 0, 0 }, 0 }, /* LSRW */
{ CPUFUNC(op_e2e0_31), 0xe2e0, 2, { 0, 0 }, 0 }, /* LSRW */
{ CPUFUNC(op_e2e8_31), 0xe2e8, 4, { 0, 0 }, 0 }, /* LSRW */
{ CPUFUNC(op_e2f0_31), 0xe2f0, 2, { 2, 0 }, 0 }, /* LSRW */
{ CPUFUNC(op_e2f8_31), 0xe2f8, 4, { 0, 0 }, 0 }, /* LSRW */
{ CPUFUNC(op_e2f9_31), 0xe2f9, 6, { 0, 0 }, 0 }, /* LSRW */
{ CPUFUNC(op_e3d0_31), 0xe3d0, 2, { 0, 0 }, 0 }, /* LSLW */
{ CPUFUNC(op_e3d8_31), 0xe3d8, 2, { 0, 0 }, 0 }, /* LSLW */
{ CPUFUNC(op_e3e0_31), 0xe3e0, 2, { 0, 0 }, 0 }, /* LSLW */
{ CPUFUNC(op_e3e8_31), 0xe3e8, 4, { 0, 0 }, 0 }, /* LSLW */
{ CPUFUNC(op_e3f0_31), 0xe3f0, 2, { 2, 0 }, 0 }, /* LSLW */
{ CPUFUNC(op_e3f8_31), 0xe3f8, 4, { 0, 0 }, 0 }, /* LSLW */
{ CPUFUNC(op_e3f9_31), 0xe3f9, 6, { 0, 0 }, 0 }, /* LSLW */
{ CPUFUNC(op_e4d0_31), 0xe4d0, 2, { 0, 0 }, 0 }, /* ROXRW */
{ CPUFUNC(op_e4d8_31), 0xe4d8, 2, { 0, 0 }, 0 }, /* ROXRW */
{ CPUFUNC(op_e4e0_31), 0xe4e0, 2, { 0, 0 }, 0 }, /* ROXRW */
{ CPUFUNC(op_e4e8_31), 0xe4e8, 4, { 0, 0 }, 0 }, /* ROXRW */
{ CPUFUNC(op_e4f0_31), 0xe4f0, 2, { 2, 0 }, 0 }, /* ROXRW */
{ CPUFUNC(op_e4f8_31), 0xe4f8, 4, { 0, 0 }, 0 }, /* ROXRW */
{ CPUFUNC(op_e4f9_31), 0xe4f9, 6, { 0, 0 }, 0 }, /* ROXRW */
{ CPUFUNC(op_e5d0_31), 0xe5d0, 2, { 0, 0 }, 0 }, /* ROXLW */
{ CPUFUNC(op_e5d8_31), 0xe5d8, 2, { 0, 0 }, 0 }, /* ROXLW */
{ CPUFUNC(op_e5e0_31), 0xe5e0, 2, { 0, 0 }, 0 }, /* ROXLW */
{ CPUFUNC(op_e5e8_31), 0xe5e8, 4, { 0, 0 }, 0 }, /* ROXLW */
{ CPUFUNC(op_e5f0_31), 0xe5f0, 2, { 2, 0 }, 0 }, /* ROXLW */
{ CPUFUNC(op_e5f8_31), 0xe5f8, 4, { 0, 0 }, 0 }, /* ROXLW */
{ CPUFUNC(op_e5f9_31), 0xe5f9, 6, { 0, 0 }, 0 }, /* ROXLW */
{ CPUFUNC(op_e6d0_31), 0xe6d0, 2, { 0, 0 }, 0 }, /* RORW */
{ CPUFUNC(op_e6d8_31), 0xe6d8, 2, { 0, 0 }, 0 }, /* RORW */
{ CPUFUNC(op_e6e0_31), 0xe6e0, 2, { 0, 0 }, 0 }, /* RORW */
{ CPUFUNC(op_e6e8_31), 0xe6e8, 4, { 0, 0 }, 0 }, /* RORW */
{ CPUFUNC(op_e6f0_31), 0xe6f0, 2, { 2, 0 }, 0 }, /* RORW */
{ CPUFUNC(op_e6f8_31), 0xe6f8, 4, { 0, 0 }, 0 }, /* RORW */
{ CPUFUNC(op_e6f9_31), 0xe6f9, 6, { 0, 0 }, 0 }, /* RORW */
{ CPUFUNC(op_e7d0_31), 0xe7d0, 2, { 0, 0 }, 0 }, /* ROLW */
{ CPUFUNC(op_e7d8_31), 0xe7d8, 2, { 0, 0 }, 0 }, /* ROLW */
{ CPUFUNC(op_e7e0_31), 0xe7e0, 2, { 0, 0 }, 0 }, /* ROLW */
{ CPUFUNC(op_e7e8_31), 0xe7e8, 4, { 0, 0 }, 0 }, /* ROLW */
{ CPUFUNC(op_e7f0_31), 0xe7f0, 2, { 2, 0 }, 0 }, /* ROLW */
{ CPUFUNC(op_e7f8_31), 0xe7f8, 4, { 0, 0 }, 0 }, /* ROLW */
{ CPUFUNC(op_e7f9_31), 0xe7f9, 6, { 0, 0 }, 0 }, /* ROLW */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8c0_31), 0xe8c0, 4, { 0, 0 }, 0 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8d0_31), 0xe8d0, 4, { 0, 0 }, 0 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8e8_31), 0xe8e8, 6, { 0, 0 }, 0 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8f0_31), 0xe8f0, 4, { 2, 0 }, 0 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8f8_31), 0xe8f8, 6, { 0, 0 }, 0 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8f9_31), 0xe8f9, 8, { 0, 0 }, 0 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8fa_31), 0xe8fa, 6, { 0, 0 }, 0 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8fb_31), 0xe8fb, 4, { 2, 0 }, 0 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9c0_31), 0xe9c0, 4, { 0, 0 }, 0 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9d0_31), 0xe9d0, 4, { 0, 0 }, 0 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9e8_31), 0xe9e8, 6, { 0, 0 }, 0 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9f0_31), 0xe9f0, 4, { 2, 0 }, 0 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9f8_31), 0xe9f8, 6, { 0, 0 }, 0 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9f9_31), 0xe9f9, 8, { 0, 0 }, 0 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9fa_31), 0xe9fa, 6, { 0, 0 }, 0 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9fb_31), 0xe9fb, 4, { 2, 0 }, 0 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eac0_31), 0xeac0, 4, { 0, 0 }, 0 }, /* BFCHG */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ead0_31), 0xead0, 4, { 0, 0 }, 0 }, /* BFCHG */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eae8_31), 0xeae8, 6, { 0, 0 }, 0 }, /* BFCHG */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eaf0_31), 0xeaf0, 4, { 2, 0 }, 0 }, /* BFCHG */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eaf8_31), 0xeaf8, 6, { 0, 0 }, 0 }, /* BFCHG */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eaf9_31), 0xeaf9, 8, { 0, 0 }, 0 }, /* BFCHG */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebc0_31), 0xebc0, 4, { 0, 0 }, 0 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebd0_31), 0xebd0, 4, { 0, 0 }, 0 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebe8_31), 0xebe8, 6, { 0, 0 }, 0 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebf0_31), 0xebf0, 4, { 2, 0 }, 0 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebf8_31), 0xebf8, 6, { 0, 0 }, 0 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebf9_31), 0xebf9, 8, { 0, 0 }, 0 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebfa_31), 0xebfa, 6, { 0, 0 }, 0 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebfb_31), 0xebfb, 4, { 2, 0 }, 0 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ecc0_31), 0xecc0, 4, { 0, 0 }, 0 }, /* BFCLR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ecd0_31), 0xecd0, 4, { 0, 0 }, 0 }, /* BFCLR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ece8_31), 0xece8, 6, { 0, 0 }, 0 }, /* BFCLR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ecf0_31), 0xecf0, 4, { 2, 0 }, 0 }, /* BFCLR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ecf8_31), 0xecf8, 6, { 0, 0 }, 0 }, /* BFCLR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ecf9_31), 0xecf9, 8, { 0, 0 }, 0 }, /* BFCLR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edc0_31), 0xedc0, 4, { 0, 0 }, 0 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edd0_31), 0xedd0, 4, { 0, 0 }, 0 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ede8_31), 0xede8, 6, { 0, 0 }, 0 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edf0_31), 0xedf0, 4, { 2, 0 }, 0 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edf8_31), 0xedf8, 6, { 0, 0 }, 0 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edf9_31), 0xedf9, 8, { 0, 0 }, 0 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edfa_31), 0xedfa, 6, { 0, 0 }, 0 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edfb_31), 0xedfb, 4, { 2, 0 }, 0 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eec0_31), 0xeec0, 4, { 0, 0 }, 0 }, /* BFSET */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eed0_31), 0xeed0, 4, { 0, 0 }, 0 }, /* BFSET */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eee8_31), 0xeee8, 6, { 0, 0 }, 0 }, /* BFSET */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eef0_31), 0xeef0, 4, { 2, 0 }, 0 }, /* BFSET */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eef8_31), 0xeef8, 6, { 0, 0 }, 0 }, /* BFSET */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eef9_31), 0xeef9, 8, { 0, 0 }, 0 }, /* BFSET */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_efc0_31), 0xefc0, 4, { 0, 0 }, 0 }, /* BFINS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_efd0_31), 0xefd0, 4, { 0, 0 }, 0 }, /* BFINS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_efe8_31), 0xefe8, 6, { 0, 0 }, 0 }, /* BFINS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eff0_31), 0xeff0, 4, { 2, 0 }, 0 }, /* BFINS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eff8_31), 0xeff8, 6, { 0, 0 }, 0 }, /* BFINS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eff9_31), 0xeff9, 8, { 0, 0 }, 0 }, /* BFINS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f000_31), 0xf000, -1, { 0, 0 }, 0 }, /* MMUOP030 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f008_31), 0xf008, -1, { 0, 0 }, 0 }, /* MMUOP030 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f010_31), 0xf010, -1, { 0, 0 }, 0 }, /* MMUOP030 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f018_31), 0xf018, -1, { 0, 0 }, 0 }, /* MMUOP030 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f020_31), 0xf020, -1, { 0, 0 }, 0 }, /* MMUOP030 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f028_31), 0xf028, -1, { 0, 0 }, 0 }, /* MMUOP030 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f030_31), 0xf030, -1, { 0, 0 }, 0 }, /* MMUOP030 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f038_31), 0xf038, -1, { 0, 0 }, 0 }, /* MMUOP030 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f039_31), 0xf039, -1, { 0, 0 }, 0 }, /* MMUOP030 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f200_31), 0xf200, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f208_31), 0xf208, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f210_31), 0xf210, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f218_31), 0xf218, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f220_31), 0xf220, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f228_31), 0xf228, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f230_31), 0xf230, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f238_31), 0xf238, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f239_31), 0xf239, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f23a_31), 0xf23a, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f23b_31), 0xf23b, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f23c_31), 0xf23c, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f240_31), 0xf240, -1, { 0, 0 }, 0 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f248_31), 0xf248, -1, { 0, 0 }, 0 }, /* FDBcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f250_31), 0xf250, -1, { 0, 0 }, 0 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f258_31), 0xf258, -1, { 0, 0 }, 0 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f260_31), 0xf260, -1, { 0, 0 }, 0 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f268_31), 0xf268, -1, { 0, 0 }, 0 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f270_31), 0xf270, -1, { 0, 0 }, 0 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f278_31), 0xf278, -1, { 0, 0 }, 0 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f279_31), 0xf279, -1, { 0, 0 }, 0 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f27a_31), 0xf27a, -1, { 0, 0 }, 0 }, /* FTRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f27b_31), 0xf27b, -1, { 0, 0 }, 0 }, /* FTRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f27c_31), 0xf27c, -1, { 0, 0 }, 0 }, /* FTRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f280_31), 0xf280, -1, { 0, 0 }, 0 }, /* FBcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f2c0_31), 0xf2c0, -1, { 0, 0 }, 0 }, /* FBcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f310_31), 0xf310, -1, { 0, 0 }, 0 }, /* FSAVE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f320_31), 0xf320, -1, { 0, 0 }, 0 }, /* FSAVE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f328_31), 0xf328, -1, { 0, 0 }, 0 }, /* FSAVE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f330_31), 0xf330, -1, { 0, 0 }, 0 }, /* FSAVE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f338_31), 0xf338, -1, { 0, 0 }, 0 }, /* FSAVE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f339_31), 0xf339, -1, { 0, 0 }, 0 }, /* FSAVE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f350_31), 0xf350, -1, { 0, 0 }, 0 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f358_31), 0xf358, -1, { 0, 0 }, 0 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f368_31), 0xf368, -1, { 0, 0 }, 0 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f370_31), 0xf370, -1, { 0, 0 }, 0 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f378_31), 0xf378, -1, { 0, 0 }, 0 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f379_31), 0xf379, -1, { 0, 0 }, 0 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f37a_31), 0xf37a, -1, { 0, 0 }, 0 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f37b_31), 0xf37b, -1, { 0, 0 }, 0 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f408_31), 0xf408, -1, { 0, 0 }, 0 }, /* CINVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f410_31), 0xf410, -1, { 0, 0 }, 0 }, /* CINVP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f418_31), 0xf418, -1, { 0, 0 }, 0 }, /* CINVA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f419_31), 0xf419, -1, { 0, 0 }, 0 }, /* CINVA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f41a_31), 0xf41a, -1, { 0, 0 }, 0 }, /* CINVA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f41b_31), 0xf41b, -1, { 0, 0 }, 0 }, /* CINVA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f41c_31), 0xf41c, -1, { 0, 0 }, 0 }, /* CINVA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f41d_31), 0xf41d, -1, { 0, 0 }, 0 }, /* CINVA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f41e_31), 0xf41e, -1, { 0, 0 }, 0 }, /* CINVA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f41f_31), 0xf41f, -1, { 0, 0 }, 0 }, /* CINVA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f428_31), 0xf428, -1, { 0, 0 }, 0 }, /* CPUSHL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f430_31), 0xf430, -1, { 0, 0 }, 0 }, /* CPUSHP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f438_31), 0xf438, -1, { 0, 0 }, 0 }, /* CPUSHA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f439_31), 0xf439, -1, { 0, 0 }, 0 }, /* CPUSHA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f43a_31), 0xf43a, -1, { 0, 0 }, 0 }, /* CPUSHA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f43b_31), 0xf43b, -1, { 0, 0 }, 0 }, /* CPUSHA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f43c_31), 0xf43c, -1, { 0, 0 }, 0 }, /* CPUSHA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f43d_31), 0xf43d, -1, { 0, 0 }, 0 }, /* CPUSHA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f43e_31), 0xf43e, -1, { 0, 0 }, 0 }, /* CPUSHA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f43f_31), 0xf43f, -1, { 0, 0 }, 0 }, /* CPUSHA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f500_31), 0xf500, -1, { 0, 0 }, 0 }, /* PFLUSHN */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f508_31), 0xf508, -1, { 0, 0 }, 0 }, /* PFLUSH */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f510_31), 0xf510, -1, { 0, 0 }, 0 }, /* PFLUSHAN */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f518_31), 0xf518, -1, { 0, 0 }, 0 }, /* PFLUSHA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f548_31), 0xf548, -1, { 0, 0 }, 0 }, /* PTESTW */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f568_31), 0xf568, -1, { 0, 0 }, 0 }, /* PTESTR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f600_31), 0xf600, -1, { 0, 0 }, 0 }, /* MOVE16 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f608_31), 0xf608, -1, { 0, 0 }, 0 }, /* MOVE16 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f610_31), 0xf610, -1, { 0, 0 }, 0 }, /* MOVE16 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f618_31), 0xf618, -1, { 0, 0 }, 0 }, /* MOVE16 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f620_31), 0xf620, -1, { 0, 0 }, 0 }, /* MOVE16 */
#endif
{ 0, 0 }};
#endif /* CPUEMU_68000_ONLY */
#endif /* CPUEMU_31 */
#ifdef CPUEMU_32
#ifndef CPUEMU_68000_ONLY
const struct cputbl CPUFUNC(op_smalltbl_32)[] = {
{ CPUFUNC(op_0000_32), 0x0000, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0010_32), 0x0010, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0018_32), 0x0018, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0020_32), 0x0020, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0028_32), 0x0028, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0030_32), 0x0030, 4, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0038_32), 0x0038, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0039_32), 0x0039, 8, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_003c_32), 0x003c, 4, { 0, 0 }, 0 }, /* ORSR */
{ CPUFUNC(op_0040_32), 0x0040, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0050_32), 0x0050, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0058_32), 0x0058, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0060_32), 0x0060, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0068_32), 0x0068, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0070_32), 0x0070, 4, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0078_32), 0x0078, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0079_32), 0x0079, 8, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_007c_32), 0x007c, 4, { 0, 0 }, 0 }, /* ORSR */
{ CPUFUNC(op_0080_32), 0x0080, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0090_32), 0x0090, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_0098_32), 0x0098, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_00a0_32), 0x00a0, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_00a8_32), 0x00a8, 8, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_00b0_32), 0x00b0, 6, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_00b8_32), 0x00b8, 8, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_00b9_32), 0x00b9, 10, { 0, 0 }, 0 }, /* OR */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00d0_32), 0x00d0, 4, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00e8_32), 0x00e8, 6, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00f0_32), 0x00f0, 4, { 2, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00f8_32), 0x00f8, 6, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00f9_32), 0x00f9, 8, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00fa_32), 0x00fa, 6, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00fb_32), 0x00fb, 4, { 2, 0 }, 0 }, /* CHK2 */
#endif
{ CPUFUNC(op_0100_32), 0x0100, 2, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0108_32), 0x0108, 4, { 0, 0 }, 0 }, /* MVPMR */
{ CPUFUNC(op_0110_32), 0x0110, 2, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0118_32), 0x0118, 2, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0120_32), 0x0120, 2, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0128_32), 0x0128, 4, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0130_32), 0x0130, 2, { 2, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0138_32), 0x0138, 4, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0139_32), 0x0139, 6, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_013a_32), 0x013a, 4, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_013b_32), 0x013b, 2, { 2, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_013c_32), 0x013c, 4, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0140_32), 0x0140, 2, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0148_32), 0x0148, 4, { 0, 0 }, 0 }, /* MVPMR */
{ CPUFUNC(op_0150_32), 0x0150, 2, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0158_32), 0x0158, 2, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0160_32), 0x0160, 2, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0168_32), 0x0168, 4, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0170_32), 0x0170, 2, { 2, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0178_32), 0x0178, 4, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0179_32), 0x0179, 6, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0180_32), 0x0180, 2, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_0188_32), 0x0188, 4, { 0, 0 }, 0 }, /* MVPRM */
{ CPUFUNC(op_0190_32), 0x0190, 2, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_0198_32), 0x0198, 2, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_01a0_32), 0x01a0, 2, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_01a8_32), 0x01a8, 4, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_01b0_32), 0x01b0, 2, { 2, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_01b8_32), 0x01b8, 4, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_01b9_32), 0x01b9, 6, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_01c0_32), 0x01c0, 2, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_01c8_32), 0x01c8, 4, { 0, 0 }, 0 }, /* MVPRM */
{ CPUFUNC(op_01d0_32), 0x01d0, 2, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_01d8_32), 0x01d8, 2, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_01e0_32), 0x01e0, 2, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_01e8_32), 0x01e8, 4, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_01f0_32), 0x01f0, 2, { 2, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_01f8_32), 0x01f8, 4, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_01f9_32), 0x01f9, 6, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_0200_32), 0x0200, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0210_32), 0x0210, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0218_32), 0x0218, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0220_32), 0x0220, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0228_32), 0x0228, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0230_32), 0x0230, 4, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0238_32), 0x0238, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0239_32), 0x0239, 8, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_023c_32), 0x023c, 4, { 0, 0 }, 0 }, /* ANDSR */
{ CPUFUNC(op_0240_32), 0x0240, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0250_32), 0x0250, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0258_32), 0x0258, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0260_32), 0x0260, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0268_32), 0x0268, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0270_32), 0x0270, 4, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0278_32), 0x0278, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0279_32), 0x0279, 8, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_027c_32), 0x027c, 4, { 0, 0 }, 0 }, /* ANDSR */
{ CPUFUNC(op_0280_32), 0x0280, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0290_32), 0x0290, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_0298_32), 0x0298, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_02a0_32), 0x02a0, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_02a8_32), 0x02a8, 8, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_02b0_32), 0x02b0, 6, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_02b8_32), 0x02b8, 8, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_02b9_32), 0x02b9, 10, { 0, 0 }, 0 }, /* AND */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02d0_32), 0x02d0, 4, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02e8_32), 0x02e8, 6, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02f0_32), 0x02f0, 4, { 2, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02f8_32), 0x02f8, 6, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02f9_32), 0x02f9, 8, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02fa_32), 0x02fa, 6, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02fb_32), 0x02fb, 4, { 2, 0 }, 0 }, /* CHK2 */
#endif
{ CPUFUNC(op_0400_32), 0x0400, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0410_32), 0x0410, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0418_32), 0x0418, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0420_32), 0x0420, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0428_32), 0x0428, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0430_32), 0x0430, 4, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0438_32), 0x0438, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0439_32), 0x0439, 8, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0440_32), 0x0440, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0450_32), 0x0450, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0458_32), 0x0458, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0460_32), 0x0460, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0468_32), 0x0468, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0470_32), 0x0470, 4, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0478_32), 0x0478, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0479_32), 0x0479, 8, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0480_32), 0x0480, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0490_32), 0x0490, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_0498_32), 0x0498, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_04a0_32), 0x04a0, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_04a8_32), 0x04a8, 8, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_04b0_32), 0x04b0, 6, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_04b8_32), 0x04b8, 8, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_04b9_32), 0x04b9, 10, { 0, 0 }, 0 }, /* SUB */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04d0_32), 0x04d0, 4, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04e8_32), 0x04e8, 6, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04f0_32), 0x04f0, 4, { 2, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04f8_32), 0x04f8, 6, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04f9_32), 0x04f9, 8, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04fa_32), 0x04fa, 6, { 0, 0 }, 0 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04fb_32), 0x04fb, 4, { 2, 0 }, 0 }, /* CHK2 */
#endif
{ CPUFUNC(op_0600_32), 0x0600, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0610_32), 0x0610, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0618_32), 0x0618, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0620_32), 0x0620, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0628_32), 0x0628, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0630_32), 0x0630, 4, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0638_32), 0x0638, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0639_32), 0x0639, 8, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0640_32), 0x0640, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0650_32), 0x0650, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0658_32), 0x0658, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0660_32), 0x0660, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0668_32), 0x0668, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0670_32), 0x0670, 4, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0678_32), 0x0678, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0679_32), 0x0679, 8, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0680_32), 0x0680, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0690_32), 0x0690, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_0698_32), 0x0698, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_06a0_32), 0x06a0, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_06a8_32), 0x06a8, 8, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_06b0_32), 0x06b0, 6, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_06b8_32), 0x06b8, 8, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_06b9_32), 0x06b9, 10, { 0, 0 }, 0 }, /* ADD */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06c0_32), 0x06c0, 2, { 0, 0 }, 0 }, /* RTM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06c8_32), 0x06c8, 2, { 0, 0 }, 0 }, /* RTM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06d0_32), 0x06d0, 2, { 0, 0 }, 0 }, /* CALLM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06e8_32), 0x06e8, 2, { 0, 0 }, 0 }, /* CALLM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06f0_32), 0x06f0, 2, { 0, 0 }, 0 }, /* CALLM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06f8_32), 0x06f8, 2, { 0, 0 }, 0 }, /* CALLM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06f9_32), 0x06f9, 2, { 0, 0 }, 0 }, /* CALLM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06fa_32), 0x06fa, 2, { 0, 0 }, 0 }, /* CALLM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06fb_32), 0x06fb, 2, { 0, 0 }, 0 }, /* CALLM */
#endif
{ CPUFUNC(op_0800_32), 0x0800, 4, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0810_32), 0x0810, 4, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0818_32), 0x0818, 4, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0820_32), 0x0820, 4, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0828_32), 0x0828, 6, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0830_32), 0x0830, 4, { 2, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0838_32), 0x0838, 6, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0839_32), 0x0839, 8, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_083a_32), 0x083a, 6, { 0, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_083b_32), 0x083b, 4, { 2, 0 }, 0 }, /* BTST */
{ CPUFUNC(op_0840_32), 0x0840, 4, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0850_32), 0x0850, 4, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0858_32), 0x0858, 4, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0860_32), 0x0860, 4, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0868_32), 0x0868, 6, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0870_32), 0x0870, 4, { 2, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0878_32), 0x0878, 6, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0879_32), 0x0879, 8, { 0, 0 }, 0 }, /* BCHG */
{ CPUFUNC(op_0880_32), 0x0880, 4, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_0890_32), 0x0890, 4, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_0898_32), 0x0898, 4, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_08a0_32), 0x08a0, 4, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_08a8_32), 0x08a8, 6, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_08b0_32), 0x08b0, 4, { 2, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_08b8_32), 0x08b8, 6, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_08b9_32), 0x08b9, 8, { 0, 0 }, 0 }, /* BCLR */
{ CPUFUNC(op_08c0_32), 0x08c0, 4, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_08d0_32), 0x08d0, 4, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_08d8_32), 0x08d8, 4, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_08e0_32), 0x08e0, 4, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_08e8_32), 0x08e8, 6, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_08f0_32), 0x08f0, 4, { 2, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_08f8_32), 0x08f8, 6, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_08f9_32), 0x08f9, 8, { 0, 0 }, 0 }, /* BSET */
{ CPUFUNC(op_0a00_32), 0x0a00, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a10_32), 0x0a10, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a18_32), 0x0a18, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a20_32), 0x0a20, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a28_32), 0x0a28, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a30_32), 0x0a30, 4, { 2, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a38_32), 0x0a38, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a39_32), 0x0a39, 8, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a3c_32), 0x0a3c, 4, { 0, 0 }, 0 }, /* EORSR */
{ CPUFUNC(op_0a40_32), 0x0a40, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a50_32), 0x0a50, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a58_32), 0x0a58, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a60_32), 0x0a60, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a68_32), 0x0a68, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a70_32), 0x0a70, 4, { 2, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a78_32), 0x0a78, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a79_32), 0x0a79, 8, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a7c_32), 0x0a7c, 4, { 0, 0 }, 0 }, /* EORSR */
{ CPUFUNC(op_0a80_32), 0x0a80, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a90_32), 0x0a90, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0a98_32), 0x0a98, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0aa0_32), 0x0aa0, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0aa8_32), 0x0aa8, 8, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0ab0_32), 0x0ab0, 6, { 2, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0ab8_32), 0x0ab8, 8, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_0ab9_32), 0x0ab9, 10, { 0, 0 }, 0 }, /* EOR */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ad0_32), 0x0ad0, 4, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ad8_32), 0x0ad8, 4, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ae0_32), 0x0ae0, 4, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ae8_32), 0x0ae8, 6, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0af0_32), 0x0af0, 4, { 2, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0af8_32), 0x0af8, 6, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0af9_32), 0x0af9, 8, { 0, 0 }, 0 }, /* CAS */
#endif
{ CPUFUNC(op_0c00_32), 0x0c00, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c10_32), 0x0c10, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c18_32), 0x0c18, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c20_32), 0x0c20, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c28_32), 0x0c28, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c30_32), 0x0c30, 4, { 2, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c38_32), 0x0c38, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c39_32), 0x0c39, 8, { 0, 0 }, 0 }, /* CMP */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0c3a_32), 0x0c3a, 6, { 0, 0 }, 0 }, /* CMP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0c3b_32), 0x0c3b, 4, { 2, 0 }, 0 }, /* CMP */
#endif
{ CPUFUNC(op_0c40_32), 0x0c40, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c50_32), 0x0c50, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c58_32), 0x0c58, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c60_32), 0x0c60, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c68_32), 0x0c68, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c70_32), 0x0c70, 4, { 2, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c78_32), 0x0c78, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c79_32), 0x0c79, 8, { 0, 0 }, 0 }, /* CMP */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0c7a_32), 0x0c7a, 6, { 0, 0 }, 0 }, /* CMP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0c7b_32), 0x0c7b, 4, { 2, 0 }, 0 }, /* CMP */
#endif
{ CPUFUNC(op_0c80_32), 0x0c80, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c90_32), 0x0c90, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0c98_32), 0x0c98, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0ca0_32), 0x0ca0, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0ca8_32), 0x0ca8, 8, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0cb0_32), 0x0cb0, 6, { 2, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0cb8_32), 0x0cb8, 8, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_0cb9_32), 0x0cb9, 10, { 0, 0 }, 0 }, /* CMP */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cba_32), 0x0cba, 8, { 0, 0 }, 0 }, /* CMP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cbb_32), 0x0cbb, 6, { 2, 0 }, 0 }, /* CMP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cd0_32), 0x0cd0, 4, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cd8_32), 0x0cd8, 4, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ce0_32), 0x0ce0, 4, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ce8_32), 0x0ce8, 6, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cf0_32), 0x0cf0, 4, { 2, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cf8_32), 0x0cf8, 6, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cf9_32), 0x0cf9, 8, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cfc_32), 0x0cfc, 6, { 0, 0 }, 0 }, /* CAS2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e10_32), 0x0e10, 4, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e18_32), 0x0e18, 4, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e20_32), 0x0e20, 4, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e28_32), 0x0e28, 6, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e30_32), 0x0e30, 8, { 6, 2 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e38_32), 0x0e38, 6, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e39_32), 0x0e39, 8, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e50_32), 0x0e50, 4, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e58_32), 0x0e58, 4, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e60_32), 0x0e60, 4, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e68_32), 0x0e68, 6, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e70_32), 0x0e70, 8, { 6, 2 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e78_32), 0x0e78, 6, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e79_32), 0x0e79, 8, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e90_32), 0x0e90, 4, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e98_32), 0x0e98, 4, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ea0_32), 0x0ea0, 4, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ea8_32), 0x0ea8, 6, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0eb0_32), 0x0eb0, 8, { 6, 2 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0eb8_32), 0x0eb8, 6, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0eb9_32), 0x0eb9, 8, { 0, 0 }, 0 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ed0_32), 0x0ed0, 4, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ed8_32), 0x0ed8, 4, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ee0_32), 0x0ee0, 4, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ee8_32), 0x0ee8, 6, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ef0_32), 0x0ef0, 4, { 2, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ef8_32), 0x0ef8, 6, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ef9_32), 0x0ef9, 8, { 0, 0 }, 0 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0efc_32), 0x0efc, 6, { 0, 0 }, 0 }, /* CAS2 */
#endif
{ CPUFUNC(op_1000_32), 0x1000, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1010_32), 0x1010, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1018_32), 0x1018, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1020_32), 0x1020, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1028_32), 0x1028, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1030_32), 0x1030, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1038_32), 0x1038, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1039_32), 0x1039, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_103a_32), 0x103a, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_103b_32), 0x103b, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_103c_32), 0x103c, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1080_32), 0x1080, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1090_32), 0x1090, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1098_32), 0x1098, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10a0_32), 0x10a0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10a8_32), 0x10a8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10b0_32), 0x10b0, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10b8_32), 0x10b8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10b9_32), 0x10b9, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10ba_32), 0x10ba, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10bb_32), 0x10bb, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10bc_32), 0x10bc, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10c0_32), 0x10c0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10d0_32), 0x10d0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10d8_32), 0x10d8, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10e0_32), 0x10e0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10e8_32), 0x10e8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10f0_32), 0x10f0, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10f8_32), 0x10f8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10f9_32), 0x10f9, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10fa_32), 0x10fa, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10fb_32), 0x10fb, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_10fc_32), 0x10fc, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1100_32), 0x1100, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1110_32), 0x1110, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1118_32), 0x1118, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1120_32), 0x1120, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1128_32), 0x1128, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1130_32), 0x1130, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1138_32), 0x1138, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1139_32), 0x1139, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_113a_32), 0x113a, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_113b_32), 0x113b, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_113c_32), 0x113c, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1140_32), 0x1140, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1150_32), 0x1150, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1158_32), 0x1158, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1160_32), 0x1160, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1168_32), 0x1168, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1170_32), 0x1170, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1178_32), 0x1178, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1179_32), 0x1179, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_117a_32), 0x117a, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_117b_32), 0x117b, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_117c_32), 0x117c, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1180_32), 0x1180, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1190_32), 0x1190, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_1198_32), 0x1198, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11a0_32), 0x11a0, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11a8_32), 0x11a8, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11b0_32), 0x11b0, 2, { 2, 2 }, 0 }, /* MOVE */
{ CPUFUNC(op_11b8_32), 0x11b8, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11b9_32), 0x11b9, 6, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11ba_32), 0x11ba, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11bb_32), 0x11bb, 2, { 2, 2 }, 0 }, /* MOVE */
{ CPUFUNC(op_11bc_32), 0x11bc, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11c0_32), 0x11c0, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11d0_32), 0x11d0, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11d8_32), 0x11d8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11e0_32), 0x11e0, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11e8_32), 0x11e8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11f0_32), 0x11f0, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11f8_32), 0x11f8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11f9_32), 0x11f9, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11fa_32), 0x11fa, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11fb_32), 0x11fb, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_11fc_32), 0x11fc, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13c0_32), 0x13c0, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13d0_32), 0x13d0, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13d8_32), 0x13d8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13e0_32), 0x13e0, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13e8_32), 0x13e8, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13f0_32), 0x13f0, 6, { 6, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13f8_32), 0x13f8, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13f9_32), 0x13f9, 10, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13fa_32), 0x13fa, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13fb_32), 0x13fb, 6, { 6, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_13fc_32), 0x13fc, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2000_32), 0x2000, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2008_32), 0x2008, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2010_32), 0x2010, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2018_32), 0x2018, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2020_32), 0x2020, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2028_32), 0x2028, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2030_32), 0x2030, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2038_32), 0x2038, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2039_32), 0x2039, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_203a_32), 0x203a, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_203b_32), 0x203b, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_203c_32), 0x203c, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2040_32), 0x2040, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_2048_32), 0x2048, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_2050_32), 0x2050, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_2058_32), 0x2058, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_2060_32), 0x2060, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_2068_32), 0x2068, 4, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_2070_32), 0x2070, 2, { 2, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_2078_32), 0x2078, 4, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_2079_32), 0x2079, 6, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_207a_32), 0x207a, 4, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_207b_32), 0x207b, 2, { 2, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_207c_32), 0x207c, 6, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_2080_32), 0x2080, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2088_32), 0x2088, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2090_32), 0x2090, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2098_32), 0x2098, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20a0_32), 0x20a0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20a8_32), 0x20a8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20b0_32), 0x20b0, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20b8_32), 0x20b8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20b9_32), 0x20b9, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20ba_32), 0x20ba, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20bb_32), 0x20bb, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20bc_32), 0x20bc, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20c0_32), 0x20c0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20c8_32), 0x20c8, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20d0_32), 0x20d0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20d8_32), 0x20d8, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20e0_32), 0x20e0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20e8_32), 0x20e8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20f0_32), 0x20f0, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20f8_32), 0x20f8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20f9_32), 0x20f9, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20fa_32), 0x20fa, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20fb_32), 0x20fb, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_20fc_32), 0x20fc, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2100_32), 0x2100, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2108_32), 0x2108, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2110_32), 0x2110, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2118_32), 0x2118, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2120_32), 0x2120, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2128_32), 0x2128, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2130_32), 0x2130, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2138_32), 0x2138, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2139_32), 0x2139, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_213a_32), 0x213a, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_213b_32), 0x213b, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_213c_32), 0x213c, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2140_32), 0x2140, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2148_32), 0x2148, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2150_32), 0x2150, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2158_32), 0x2158, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2160_32), 0x2160, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2168_32), 0x2168, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2170_32), 0x2170, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2178_32), 0x2178, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2179_32), 0x2179, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_217a_32), 0x217a, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_217b_32), 0x217b, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_217c_32), 0x217c, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2180_32), 0x2180, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2188_32), 0x2188, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2190_32), 0x2190, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_2198_32), 0x2198, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21a0_32), 0x21a0, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21a8_32), 0x21a8, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21b0_32), 0x21b0, 2, { 2, 2 }, 0 }, /* MOVE */
{ CPUFUNC(op_21b8_32), 0x21b8, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21b9_32), 0x21b9, 6, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21ba_32), 0x21ba, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21bb_32), 0x21bb, 2, { 2, 2 }, 0 }, /* MOVE */
{ CPUFUNC(op_21bc_32), 0x21bc, 6, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21c0_32), 0x21c0, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21c8_32), 0x21c8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21d0_32), 0x21d0, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21d8_32), 0x21d8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21e0_32), 0x21e0, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21e8_32), 0x21e8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21f0_32), 0x21f0, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21f8_32), 0x21f8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21f9_32), 0x21f9, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21fa_32), 0x21fa, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21fb_32), 0x21fb, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_21fc_32), 0x21fc, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23c0_32), 0x23c0, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23c8_32), 0x23c8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23d0_32), 0x23d0, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23d8_32), 0x23d8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23e0_32), 0x23e0, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23e8_32), 0x23e8, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23f0_32), 0x23f0, 6, { 6, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23f8_32), 0x23f8, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23f9_32), 0x23f9, 10, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23fa_32), 0x23fa, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23fb_32), 0x23fb, 6, { 6, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_23fc_32), 0x23fc, 10, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3000_32), 0x3000, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3008_32), 0x3008, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3010_32), 0x3010, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3018_32), 0x3018, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3020_32), 0x3020, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3028_32), 0x3028, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3030_32), 0x3030, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3038_32), 0x3038, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3039_32), 0x3039, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_303a_32), 0x303a, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_303b_32), 0x303b, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_303c_32), 0x303c, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3040_32), 0x3040, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_3048_32), 0x3048, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_3050_32), 0x3050, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_3058_32), 0x3058, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_3060_32), 0x3060, 2, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_3068_32), 0x3068, 4, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_3070_32), 0x3070, 2, { 2, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_3078_32), 0x3078, 4, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_3079_32), 0x3079, 6, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_307a_32), 0x307a, 4, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_307b_32), 0x307b, 2, { 2, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_307c_32), 0x307c, 4, { 0, 0 }, 0 }, /* MOVEA */
{ CPUFUNC(op_3080_32), 0x3080, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3088_32), 0x3088, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3090_32), 0x3090, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3098_32), 0x3098, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30a0_32), 0x30a0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30a8_32), 0x30a8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30b0_32), 0x30b0, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30b8_32), 0x30b8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30b9_32), 0x30b9, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30ba_32), 0x30ba, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30bb_32), 0x30bb, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30bc_32), 0x30bc, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30c0_32), 0x30c0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30c8_32), 0x30c8, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30d0_32), 0x30d0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30d8_32), 0x30d8, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30e0_32), 0x30e0, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30e8_32), 0x30e8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30f0_32), 0x30f0, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30f8_32), 0x30f8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30f9_32), 0x30f9, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30fa_32), 0x30fa, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30fb_32), 0x30fb, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_30fc_32), 0x30fc, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3100_32), 0x3100, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3108_32), 0x3108, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3110_32), 0x3110, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3118_32), 0x3118, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3120_32), 0x3120, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3128_32), 0x3128, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3130_32), 0x3130, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3138_32), 0x3138, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3139_32), 0x3139, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_313a_32), 0x313a, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_313b_32), 0x313b, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_313c_32), 0x313c, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3140_32), 0x3140, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3148_32), 0x3148, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3150_32), 0x3150, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3158_32), 0x3158, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3160_32), 0x3160, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3168_32), 0x3168, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3170_32), 0x3170, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3178_32), 0x3178, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3179_32), 0x3179, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_317a_32), 0x317a, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_317b_32), 0x317b, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_317c_32), 0x317c, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3180_32), 0x3180, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3188_32), 0x3188, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3190_32), 0x3190, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_3198_32), 0x3198, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31a0_32), 0x31a0, 2, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31a8_32), 0x31a8, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31b0_32), 0x31b0, 2, { 2, 2 }, 0 }, /* MOVE */
{ CPUFUNC(op_31b8_32), 0x31b8, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31b9_32), 0x31b9, 6, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31ba_32), 0x31ba, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31bb_32), 0x31bb, 2, { 2, 2 }, 0 }, /* MOVE */
{ CPUFUNC(op_31bc_32), 0x31bc, 4, { 2, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31c0_32), 0x31c0, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31c8_32), 0x31c8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31d0_32), 0x31d0, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31d8_32), 0x31d8, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31e0_32), 0x31e0, 4, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31e8_32), 0x31e8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31f0_32), 0x31f0, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31f8_32), 0x31f8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31f9_32), 0x31f9, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31fa_32), 0x31fa, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31fb_32), 0x31fb, 4, { 4, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_31fc_32), 0x31fc, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33c0_32), 0x33c0, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33c8_32), 0x33c8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33d0_32), 0x33d0, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33d8_32), 0x33d8, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33e0_32), 0x33e0, 6, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33e8_32), 0x33e8, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33f0_32), 0x33f0, 6, { 6, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33f8_32), 0x33f8, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33f9_32), 0x33f9, 10, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33fa_32), 0x33fa, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33fb_32), 0x33fb, 6, { 6, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_33fc_32), 0x33fc, 8, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_4000_32), 0x4000, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4010_32), 0x4010, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4018_32), 0x4018, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4020_32), 0x4020, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4028_32), 0x4028, 4, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4030_32), 0x4030, 2, { 2, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4038_32), 0x4038, 4, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4039_32), 0x4039, 6, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4040_32), 0x4040, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4050_32), 0x4050, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4058_32), 0x4058, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4060_32), 0x4060, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4068_32), 0x4068, 4, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4070_32), 0x4070, 2, { 2, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4078_32), 0x4078, 4, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4079_32), 0x4079, 6, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4080_32), 0x4080, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4090_32), 0x4090, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_4098_32), 0x4098, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_40a0_32), 0x40a0, 2, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_40a8_32), 0x40a8, 4, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_40b0_32), 0x40b0, 2, { 2, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_40b8_32), 0x40b8, 4, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_40b9_32), 0x40b9, 6, { 0, 0 }, 0 }, /* NEGX */
{ CPUFUNC(op_40c0_32), 0x40c0, 2, { 0, 0 }, 0 }, /* MVSR2 */
{ CPUFUNC(op_40d0_32), 0x40d0, 2, { 0, 0 }, 0 }, /* MVSR2 */
{ CPUFUNC(op_40d8_32), 0x40d8, 2, { 0, 0 }, 0 }, /* MVSR2 */
{ CPUFUNC(op_40e0_32), 0x40e0, 2, { 0, 0 }, 0 }, /* MVSR2 */
{ CPUFUNC(op_40e8_32), 0x40e8, 4, { 0, 0 }, 0 }, /* MVSR2 */
{ CPUFUNC(op_40f0_32), 0x40f0, 2, { 2, 0 }, 0 }, /* MVSR2 */
{ CPUFUNC(op_40f8_32), 0x40f8, 4, { 0, 0 }, 0 }, /* MVSR2 */
{ CPUFUNC(op_40f9_32), 0x40f9, 6, { 0, 0 }, 0 }, /* MVSR2 */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4100_32), 0x4100, 2, { 0, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4110_32), 0x4110, 2, { 0, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4118_32), 0x4118, 2, { 0, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4120_32), 0x4120, 2, { 0, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4128_32), 0x4128, 4, { 0, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4130_32), 0x4130, 2, { 2, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4138_32), 0x4138, 4, { 0, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4139_32), 0x4139, 6, { 0, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_413a_32), 0x413a, 4, { 0, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_413b_32), 0x413b, 2, { 2, 0 }, 0 }, /* CHK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_413c_32), 0x413c, 6, { 0, 0 }, 0 }, /* CHK */
#endif
{ CPUFUNC(op_4180_32), 0x4180, 2, { 0, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_4190_32), 0x4190, 2, { 0, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_4198_32), 0x4198, 2, { 0, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_41a0_32), 0x41a0, 2, { 0, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_41a8_32), 0x41a8, 4, { 0, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_41b0_32), 0x41b0, 2, { 2, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_41b8_32), 0x41b8, 4, { 0, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_41b9_32), 0x41b9, 6, { 0, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_41ba_32), 0x41ba, 4, { 0, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_41bb_32), 0x41bb, 2, { 2, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_41bc_32), 0x41bc, 4, { 0, 0 }, 0 }, /* CHK */
{ CPUFUNC(op_41d0_32), 0x41d0, 2, { 0, 0 }, 0 }, /* LEA */
{ CPUFUNC(op_41e8_32), 0x41e8, 4, { 0, 0 }, 0 }, /* LEA */
{ CPUFUNC(op_41f0_32), 0x41f0, 2, { 2, 0 }, 0 }, /* LEA */
{ CPUFUNC(op_41f8_32), 0x41f8, 4, { 0, 0 }, 0 }, /* LEA */
{ CPUFUNC(op_41f9_32), 0x41f9, 6, { 0, 0 }, 0 }, /* LEA */
{ CPUFUNC(op_41fa_32), 0x41fa, 4, { 0, 0 }, 0 }, /* LEA */
{ CPUFUNC(op_41fb_32), 0x41fb, 2, { 2, 0 }, 0 }, /* LEA */
{ CPUFUNC(op_4200_32), 0x4200, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4210_32), 0x4210, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4218_32), 0x4218, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4220_32), 0x4220, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4228_32), 0x4228, 4, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4230_32), 0x4230, 2, { 2, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4238_32), 0x4238, 4, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4239_32), 0x4239, 6, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4240_32), 0x4240, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4250_32), 0x4250, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4258_32), 0x4258, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4260_32), 0x4260, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4268_32), 0x4268, 4, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4270_32), 0x4270, 2, { 2, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4278_32), 0x4278, 4, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4279_32), 0x4279, 6, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4280_32), 0x4280, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4290_32), 0x4290, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_4298_32), 0x4298, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_42a0_32), 0x42a0, 2, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_42a8_32), 0x42a8, 4, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_42b0_32), 0x42b0, 2, { 2, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_42b8_32), 0x42b8, 4, { 0, 0 }, 0 }, /* CLR */
{ CPUFUNC(op_42b9_32), 0x42b9, 6, { 0, 0 }, 0 }, /* CLR */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42c0_32), 0x42c0, 2, { 0, 0 }, 0 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42d0_32), 0x42d0, 2, { 0, 0 }, 0 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42d8_32), 0x42d8, 2, { 0, 0 }, 0 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42e0_32), 0x42e0, 2, { 0, 0 }, 0 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42e8_32), 0x42e8, 4, { 0, 0 }, 0 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42f0_32), 0x42f0, 2, { 2, 0 }, 0 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42f8_32), 0x42f8, 4, { 0, 0 }, 0 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42f9_32), 0x42f9, 6, { 0, 0 }, 0 }, /* MVSR2 */
#endif
{ CPUFUNC(op_4400_32), 0x4400, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4410_32), 0x4410, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4418_32), 0x4418, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4420_32), 0x4420, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4428_32), 0x4428, 4, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4430_32), 0x4430, 2, { 2, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4438_32), 0x4438, 4, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4439_32), 0x4439, 6, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4440_32), 0x4440, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4450_32), 0x4450, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4458_32), 0x4458, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4460_32), 0x4460, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4468_32), 0x4468, 4, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4470_32), 0x4470, 2, { 2, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4478_32), 0x4478, 4, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4479_32), 0x4479, 6, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4480_32), 0x4480, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4490_32), 0x4490, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_4498_32), 0x4498, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_44a0_32), 0x44a0, 2, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_44a8_32), 0x44a8, 4, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_44b0_32), 0x44b0, 2, { 2, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_44b8_32), 0x44b8, 4, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_44b9_32), 0x44b9, 6, { 0, 0 }, 0 }, /* NEG */
{ CPUFUNC(op_44c0_32), 0x44c0, 2, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44d0_32), 0x44d0, 2, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44d8_32), 0x44d8, 2, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44e0_32), 0x44e0, 2, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44e8_32), 0x44e8, 4, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44f0_32), 0x44f0, 2, { 2, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44f8_32), 0x44f8, 4, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44f9_32), 0x44f9, 6, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44fa_32), 0x44fa, 4, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44fb_32), 0x44fb, 2, { 2, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_44fc_32), 0x44fc, 4, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_4600_32), 0x4600, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4610_32), 0x4610, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4618_32), 0x4618, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4620_32), 0x4620, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4628_32), 0x4628, 4, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4630_32), 0x4630, 2, { 2, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4638_32), 0x4638, 4, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4639_32), 0x4639, 6, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4640_32), 0x4640, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4650_32), 0x4650, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4658_32), 0x4658, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4660_32), 0x4660, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4668_32), 0x4668, 4, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4670_32), 0x4670, 2, { 2, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4678_32), 0x4678, 4, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4679_32), 0x4679, 6, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4680_32), 0x4680, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4690_32), 0x4690, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_4698_32), 0x4698, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_46a0_32), 0x46a0, 2, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_46a8_32), 0x46a8, 4, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_46b0_32), 0x46b0, 2, { 2, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_46b8_32), 0x46b8, 4, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_46b9_32), 0x46b9, 6, { 0, 0 }, 0 }, /* NOT */
{ CPUFUNC(op_46c0_32), 0x46c0, 2, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46d0_32), 0x46d0, 2, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46d8_32), 0x46d8, 2, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46e0_32), 0x46e0, 2, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46e8_32), 0x46e8, 4, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46f0_32), 0x46f0, 2, { 2, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46f8_32), 0x46f8, 4, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46f9_32), 0x46f9, 6, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46fa_32), 0x46fa, 4, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46fb_32), 0x46fb, 2, { 2, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_46fc_32), 0x46fc, 4, { 0, 0 }, 0 }, /* MV2SR */
{ CPUFUNC(op_4800_32), 0x4800, 2, { 0, 0 }, 0 }, /* NBCD */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4808_32), 0x4808, 6, { 0, 0 }, 0 }, /* LINK */
#endif
{ CPUFUNC(op_4810_32), 0x4810, 2, { 0, 0 }, 0 }, /* NBCD */
{ CPUFUNC(op_4818_32), 0x4818, 2, { 0, 0 }, 0 }, /* NBCD */
{ CPUFUNC(op_4820_32), 0x4820, 2, { 0, 0 }, 0 }, /* NBCD */
{ CPUFUNC(op_4828_32), 0x4828, 4, { 0, 0 }, 0 }, /* NBCD */
{ CPUFUNC(op_4830_32), 0x4830, 2, { 2, 0 }, 0 }, /* NBCD */
{ CPUFUNC(op_4838_32), 0x4838, 4, { 0, 0 }, 0 }, /* NBCD */
{ CPUFUNC(op_4839_32), 0x4839, 6, { 0, 0 }, 0 }, /* NBCD */
{ CPUFUNC(op_4840_32), 0x4840, 2, { 0, 0 }, 0 }, /* SWAP */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4848_32), 0x4848, 2, { 0, 0 }, 0 }, /* BKPT */
#endif
{ CPUFUNC(op_4850_32), 0x4850, 2, { 0, 0 }, 0 }, /* PEA */
{ CPUFUNC(op_4868_32), 0x4868, 4, { 0, 0 }, 0 }, /* PEA */
{ CPUFUNC(op_4870_32), 0x4870, 2, { 2, 0 }, 0 }, /* PEA */
{ CPUFUNC(op_4878_32), 0x4878, 4, { 0, 0 }, 0 }, /* PEA */
{ CPUFUNC(op_4879_32), 0x4879, 6, { 0, 0 }, 0 }, /* PEA */
{ CPUFUNC(op_487a_32), 0x487a, 4, { 0, 0 }, 0 }, /* PEA */
{ CPUFUNC(op_487b_32), 0x487b, 2, { 2, 0 }, 0 }, /* PEA */
{ CPUFUNC(op_4880_32), 0x4880, 2, { 0, 0 }, 0 }, /* EXT */
{ CPUFUNC(op_4890_32), 0x4890, 4, { 0, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48a0_32), 0x48a0, 4, { 0, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48a8_32), 0x48a8, 6, { 0, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48b0_32), 0x48b0, 4, { 2, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48b8_32), 0x48b8, 6, { 0, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48b9_32), 0x48b9, 8, { 0, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48c0_32), 0x48c0, 2, { 0, 0 }, 0 }, /* EXT */
{ CPUFUNC(op_48d0_32), 0x48d0, 4, { 0, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48e0_32), 0x48e0, 4, { 0, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48e8_32), 0x48e8, 6, { 0, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48f0_32), 0x48f0, 4, { 2, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48f8_32), 0x48f8, 6, { 0, 0 }, 0 }, /* MVMLE */
{ CPUFUNC(op_48f9_32), 0x48f9, 8, { 0, 0 }, 0 }, /* MVMLE */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_49c0_32), 0x49c0, 2, { 0, 0 }, 0 }, /* EXT */
#endif
{ CPUFUNC(op_4a00_32), 0x4a00, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a10_32), 0x4a10, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a18_32), 0x4a18, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a20_32), 0x4a20, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a28_32), 0x4a28, 4, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a30_32), 0x4a30, 2, { 2, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a38_32), 0x4a38, 4, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a39_32), 0x4a39, 6, { 0, 0 }, 0 }, /* TST */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a3a_32), 0x4a3a, 4, { 0, 0 }, 0 }, /* TST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a3b_32), 0x4a3b, 2, { 2, 0 }, 0 }, /* TST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a3c_32), 0x4a3c, 4, { 0, 0 }, 0 }, /* TST */
#endif
{ CPUFUNC(op_4a40_32), 0x4a40, 2, { 0, 0 }, 0 }, /* TST */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a48_32), 0x4a48, 2, { 0, 0 }, 0 }, /* TST */
#endif
{ CPUFUNC(op_4a50_32), 0x4a50, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a58_32), 0x4a58, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a60_32), 0x4a60, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a68_32), 0x4a68, 4, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a70_32), 0x4a70, 2, { 2, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a78_32), 0x4a78, 4, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a79_32), 0x4a79, 6, { 0, 0 }, 0 }, /* TST */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a7a_32), 0x4a7a, 4, { 0, 0 }, 0 }, /* TST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a7b_32), 0x4a7b, 2, { 2, 0 }, 0 }, /* TST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a7c_32), 0x4a7c, 4, { 0, 0 }, 0 }, /* TST */
#endif
{ CPUFUNC(op_4a80_32), 0x4a80, 2, { 0, 0 }, 0 }, /* TST */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a88_32), 0x4a88, 2, { 0, 0 }, 0 }, /* TST */
#endif
{ CPUFUNC(op_4a90_32), 0x4a90, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4a98_32), 0x4a98, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4aa0_32), 0x4aa0, 2, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4aa8_32), 0x4aa8, 4, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4ab0_32), 0x4ab0, 2, { 2, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4ab8_32), 0x4ab8, 4, { 0, 0 }, 0 }, /* TST */
{ CPUFUNC(op_4ab9_32), 0x4ab9, 6, { 0, 0 }, 0 }, /* TST */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4aba_32), 0x4aba, 4, { 0, 0 }, 0 }, /* TST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4abb_32), 0x4abb, 2, { 2, 0 }, 0 }, /* TST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4abc_32), 0x4abc, 6, { 0, 0 }, 0 }, /* TST */
#endif
{ CPUFUNC(op_4ac0_32), 0x4ac0, 2, { 0, 0 }, 0 }, /* TAS */
{ CPUFUNC(op_4ad0_32), 0x4ad0, 2, { 0, 0 }, 0 }, /* TAS */
{ CPUFUNC(op_4ad8_32), 0x4ad8, 2, { 0, 0 }, 0 }, /* TAS */
{ CPUFUNC(op_4ae0_32), 0x4ae0, 2, { 0, 0 }, 0 }, /* TAS */
{ CPUFUNC(op_4ae8_32), 0x4ae8, 4, { 0, 0 }, 0 }, /* TAS */
{ CPUFUNC(op_4af0_32), 0x4af0, 2, { 2, 0 }, 0 }, /* TAS */
{ CPUFUNC(op_4af8_32), 0x4af8, 4, { 0, 0 }, 0 }, /* TAS */
{ CPUFUNC(op_4af9_32), 0x4af9, 6, { 0, 0 }, 0 }, /* TAS */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c00_32), 0x4c00, 4, { 0, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c10_32), 0x4c10, 4, { 0, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c18_32), 0x4c18, 4, { 0, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c20_32), 0x4c20, 4, { 0, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c28_32), 0x4c28, 6, { 0, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c30_32), 0x4c30, 4, { 2, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c38_32), 0x4c38, 6, { 0, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c39_32), 0x4c39, 8, { 0, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c3a_32), 0x4c3a, 6, { 0, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c3b_32), 0x4c3b, 4, { 2, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c3c_32), 0x4c3c, 8, { 0, 0 }, 0 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c40_32), 0x4c40, 4, { 0, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c50_32), 0x4c50, 4, { 0, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c58_32), 0x4c58, 4, { 0, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c60_32), 0x4c60, 4, { 0, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c68_32), 0x4c68, 6, { 0, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c70_32), 0x4c70, 4, { 2, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c78_32), 0x4c78, 6, { 0, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c79_32), 0x4c79, 8, { 0, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c7a_32), 0x4c7a, 6, { 0, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c7b_32), 0x4c7b, 4, { 2, 0 }, 0 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c7c_32), 0x4c7c, 8, { 0, 0 }, 0 }, /* DIVL */
#endif
{ CPUFUNC(op_4c90_32), 0x4c90, 4, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4c98_32), 0x4c98, 4, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4ca8_32), 0x4ca8, 6, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cb0_32), 0x4cb0, 4, { 2, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cb8_32), 0x4cb8, 6, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cb9_32), 0x4cb9, 8, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cba_32), 0x4cba, 6, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cbb_32), 0x4cbb, 4, { 2, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cd0_32), 0x4cd0, 4, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cd8_32), 0x4cd8, 4, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4ce8_32), 0x4ce8, 6, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cf0_32), 0x4cf0, 4, { 2, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cf8_32), 0x4cf8, 6, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cf9_32), 0x4cf9, 8, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cfa_32), 0x4cfa, 6, { 0, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4cfb_32), 0x4cfb, 4, { 2, 0 }, 0 }, /* MVMEL */
{ CPUFUNC(op_4e40_32), 0x4e40, 2, { 0, 0 }, 0 }, /* TRAP */
{ CPUFUNC(op_4e50_32), 0x4e50, 4, { 0, 0 }, 0 }, /* LINK */
{ CPUFUNC(op_4e58_32), 0x4e58, 2, { 0, 0 }, 0 }, /* UNLK */
{ CPUFUNC(op_4e60_32), 0x4e60, 2, { 0, 0 }, 0 }, /* MVR2USP */
{ CPUFUNC(op_4e68_32), 0x4e68, 2, { 0, 0 }, 0 }, /* MVUSP2R */
{ CPUFUNC(op_4e70_32), 0x4e70, 2, { 0, 0 }, 0 }, /* RESET */
{ CPUFUNC(op_4e71_32), 0x4e71, 2, { 0, 0 }, 0 }, /* NOP */
{ CPUFUNC(op_4e72_32), 0x4e72, 4, { 0, 0 }, 0 }, /* STOP */
{ CPUFUNC(op_4e73_32), 0x4e73, 2, { 0, 0 }, 1 }, /* RTE */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4e74_32), 0x4e74, 4, { 0, 0 }, 1 }, /* RTD */
#endif
{ CPUFUNC(op_4e75_32), 0x4e75, 2, { 0, 0 }, 1 }, /* RTS */
{ CPUFUNC(op_4e76_32), 0x4e76, 2, { 0, 0 }, 0 }, /* TRAPV */
{ CPUFUNC(op_4e77_32), 0x4e77, 2, { 0, 0 }, 1 }, /* RTR */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4e7a_32), 0x4e7a, 4, { 0, 0 }, 0 }, /* MOVEC2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4e7b_32), 0x4e7b, 4, { 0, 0 }, 0 }, /* MOVE2C */
#endif
{ CPUFUNC(op_4e90_32), 0x4e90, 2, { 0, 0 }, 1 }, /* JSR */
{ CPUFUNC(op_4ea8_32), 0x4ea8, 4, { 0, 0 }, 1 }, /* JSR */
{ CPUFUNC(op_4eb0_32), 0x4eb0, 2, { 2, 0 }, 1 }, /* JSR */
{ CPUFUNC(op_4eb8_32), 0x4eb8, 4, { 0, 0 }, 1 }, /* JSR */
{ CPUFUNC(op_4eb9_32), 0x4eb9, 6, { 0, 0 }, 1 }, /* JSR */
{ CPUFUNC(op_4eba_32), 0x4eba, 4, { 0, 0 }, 1 }, /* JSR */
{ CPUFUNC(op_4ebb_32), 0x4ebb, 2, { 2, 0 }, 1 }, /* JSR */
{ CPUFUNC(op_4ed0_32), 0x4ed0, 2, { 0, 0 }, 1 }, /* JMP */
{ CPUFUNC(op_4ee8_32), 0x4ee8, 4, { 0, 0 }, 1 }, /* JMP */
{ CPUFUNC(op_4ef0_32), 0x4ef0, 2, { 2, 0 }, 1 }, /* JMP */
{ CPUFUNC(op_4ef8_32), 0x4ef8, 4, { 0, 0 }, 1 }, /* JMP */
{ CPUFUNC(op_4ef9_32), 0x4ef9, 6, { 0, 0 }, 1 }, /* JMP */
{ CPUFUNC(op_4efa_32), 0x4efa, 4, { 0, 0 }, 1 }, /* JMP */
{ CPUFUNC(op_4efb_32), 0x4efb, 2, { 2, 0 }, 1 }, /* JMP */
{ CPUFUNC(op_5000_32), 0x5000, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5010_32), 0x5010, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5018_32), 0x5018, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5020_32), 0x5020, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5028_32), 0x5028, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5030_32), 0x5030, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5038_32), 0x5038, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5039_32), 0x5039, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5040_32), 0x5040, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5048_32), 0x5048, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_5050_32), 0x5050, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5058_32), 0x5058, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5060_32), 0x5060, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5068_32), 0x5068, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5070_32), 0x5070, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5078_32), 0x5078, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5079_32), 0x5079, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5080_32), 0x5080, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5088_32), 0x5088, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_5090_32), 0x5090, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_5098_32), 0x5098, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_50a0_32), 0x50a0, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_50a8_32), 0x50a8, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_50b0_32), 0x50b0, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_50b8_32), 0x50b8, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_50b9_32), 0x50b9, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_50c0_32), 0x50c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_50c8_32), 0x50c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_50d0_32), 0x50d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_50d8_32), 0x50d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_50e0_32), 0x50e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_50e8_32), 0x50e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_50f0_32), 0x50f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_50f8_32), 0x50f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_50f9_32), 0x50f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_50fa_32), 0x50fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_50fb_32), 0x50fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_50fc_32), 0x50fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5100_32), 0x5100, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5110_32), 0x5110, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5118_32), 0x5118, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5120_32), 0x5120, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5128_32), 0x5128, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5130_32), 0x5130, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5138_32), 0x5138, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5139_32), 0x5139, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5140_32), 0x5140, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5148_32), 0x5148, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_5150_32), 0x5150, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5158_32), 0x5158, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5160_32), 0x5160, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5168_32), 0x5168, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5170_32), 0x5170, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5178_32), 0x5178, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5179_32), 0x5179, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5180_32), 0x5180, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5188_32), 0x5188, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_5190_32), 0x5190, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_5198_32), 0x5198, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_51a0_32), 0x51a0, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_51a8_32), 0x51a8, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_51b0_32), 0x51b0, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_51b8_32), 0x51b8, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_51b9_32), 0x51b9, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_51c0_32), 0x51c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_51c8_32), 0x51c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_51d0_32), 0x51d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_51d8_32), 0x51d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_51e0_32), 0x51e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_51e8_32), 0x51e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_51f0_32), 0x51f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_51f8_32), 0x51f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_51f9_32), 0x51f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_51fa_32), 0x51fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_51fb_32), 0x51fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_51fc_32), 0x51fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_52c0_32), 0x52c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_52c8_32), 0x52c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_52d0_32), 0x52d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_52d8_32), 0x52d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_52e0_32), 0x52e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_52e8_32), 0x52e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_52f0_32), 0x52f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_52f8_32), 0x52f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_52f9_32), 0x52f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_52fa_32), 0x52fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_52fb_32), 0x52fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_52fc_32), 0x52fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_53c0_32), 0x53c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_53c8_32), 0x53c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_53d0_32), 0x53d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_53d8_32), 0x53d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_53e0_32), 0x53e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_53e8_32), 0x53e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_53f0_32), 0x53f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_53f8_32), 0x53f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_53f9_32), 0x53f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_53fa_32), 0x53fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_53fb_32), 0x53fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_53fc_32), 0x53fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_54c0_32), 0x54c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_54c8_32), 0x54c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_54d0_32), 0x54d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_54d8_32), 0x54d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_54e0_32), 0x54e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_54e8_32), 0x54e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_54f0_32), 0x54f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_54f8_32), 0x54f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_54f9_32), 0x54f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_54fa_32), 0x54fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_54fb_32), 0x54fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_54fc_32), 0x54fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_55c0_32), 0x55c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_55c8_32), 0x55c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_55d0_32), 0x55d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_55d8_32), 0x55d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_55e0_32), 0x55e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_55e8_32), 0x55e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_55f0_32), 0x55f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_55f8_32), 0x55f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_55f9_32), 0x55f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_55fa_32), 0x55fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_55fb_32), 0x55fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_55fc_32), 0x55fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_56c0_32), 0x56c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_56c8_32), 0x56c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_56d0_32), 0x56d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_56d8_32), 0x56d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_56e0_32), 0x56e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_56e8_32), 0x56e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_56f0_32), 0x56f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_56f8_32), 0x56f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_56f9_32), 0x56f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_56fa_32), 0x56fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_56fb_32), 0x56fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_56fc_32), 0x56fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_57c0_32), 0x57c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_57c8_32), 0x57c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_57d0_32), 0x57d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_57d8_32), 0x57d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_57e0_32), 0x57e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_57e8_32), 0x57e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_57f0_32), 0x57f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_57f8_32), 0x57f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_57f9_32), 0x57f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_57fa_32), 0x57fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_57fb_32), 0x57fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_57fc_32), 0x57fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_58c0_32), 0x58c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_58c8_32), 0x58c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_58d0_32), 0x58d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_58d8_32), 0x58d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_58e0_32), 0x58e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_58e8_32), 0x58e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_58f0_32), 0x58f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_58f8_32), 0x58f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_58f9_32), 0x58f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_58fa_32), 0x58fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_58fb_32), 0x58fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_58fc_32), 0x58fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_59c0_32), 0x59c0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_59c8_32), 0x59c8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_59d0_32), 0x59d0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_59d8_32), 0x59d8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_59e0_32), 0x59e0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_59e8_32), 0x59e8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_59f0_32), 0x59f0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_59f8_32), 0x59f8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_59f9_32), 0x59f9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_59fa_32), 0x59fa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_59fb_32), 0x59fb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_59fc_32), 0x59fc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5ac0_32), 0x5ac0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ac8_32), 0x5ac8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_5ad0_32), 0x5ad0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ad8_32), 0x5ad8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ae0_32), 0x5ae0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ae8_32), 0x5ae8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5af0_32), 0x5af0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5af8_32), 0x5af8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5af9_32), 0x5af9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5afa_32), 0x5afa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5afb_32), 0x5afb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5afc_32), 0x5afc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5bc0_32), 0x5bc0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5bc8_32), 0x5bc8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_5bd0_32), 0x5bd0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5bd8_32), 0x5bd8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5be0_32), 0x5be0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5be8_32), 0x5be8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5bf0_32), 0x5bf0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5bf8_32), 0x5bf8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5bf9_32), 0x5bf9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5bfa_32), 0x5bfa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5bfb_32), 0x5bfb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5bfc_32), 0x5bfc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5cc0_32), 0x5cc0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5cc8_32), 0x5cc8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_5cd0_32), 0x5cd0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5cd8_32), 0x5cd8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ce0_32), 0x5ce0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ce8_32), 0x5ce8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5cf0_32), 0x5cf0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5cf8_32), 0x5cf8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5cf9_32), 0x5cf9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5cfa_32), 0x5cfa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5cfb_32), 0x5cfb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5cfc_32), 0x5cfc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5dc0_32), 0x5dc0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5dc8_32), 0x5dc8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_5dd0_32), 0x5dd0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5dd8_32), 0x5dd8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5de0_32), 0x5de0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5de8_32), 0x5de8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5df0_32), 0x5df0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5df8_32), 0x5df8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5df9_32), 0x5df9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5dfa_32), 0x5dfa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5dfb_32), 0x5dfb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5dfc_32), 0x5dfc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5ec0_32), 0x5ec0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ec8_32), 0x5ec8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_5ed0_32), 0x5ed0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ed8_32), 0x5ed8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ee0_32), 0x5ee0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ee8_32), 0x5ee8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ef0_32), 0x5ef0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ef8_32), 0x5ef8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ef9_32), 0x5ef9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5efa_32), 0x5efa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5efb_32), 0x5efb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5efc_32), 0x5efc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5fc0_32), 0x5fc0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5fc8_32), 0x5fc8, 4, { 0, 0 }, 1 }, /* DBcc */
{ CPUFUNC(op_5fd0_32), 0x5fd0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5fd8_32), 0x5fd8, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5fe0_32), 0x5fe0, 2, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5fe8_32), 0x5fe8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ff0_32), 0x5ff0, 2, { 2, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ff8_32), 0x5ff8, 4, { 0, 0 }, 0 }, /* Scc */
{ CPUFUNC(op_5ff9_32), 0x5ff9, 6, { 0, 0 }, 0 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5ffa_32), 0x5ffa, 4, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5ffb_32), 0x5ffb, 6, { 0, 0 }, 0 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5ffc_32), 0x5ffc, 2, { 0, 0 }, 0 }, /* TRAPcc */
#endif
{ CPUFUNC(op_6000_32), 0x6000, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6001_32), 0x6001, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_60ff_32), 0x60ff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6100_32), 0x6100, 4, { 0, 0 }, 1 }, /* BSR */
{ CPUFUNC(op_6101_32), 0x6101, 2, { 0, 0 }, 1 }, /* BSR */
{ CPUFUNC(op_61ff_32), 0x61ff, 6, { 0, 0 }, 1 }, /* BSR */
{ CPUFUNC(op_6200_32), 0x6200, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6201_32), 0x6201, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_62ff_32), 0x62ff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6300_32), 0x6300, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6301_32), 0x6301, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_63ff_32), 0x63ff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6400_32), 0x6400, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6401_32), 0x6401, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_64ff_32), 0x64ff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6500_32), 0x6500, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6501_32), 0x6501, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_65ff_32), 0x65ff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6600_32), 0x6600, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6601_32), 0x6601, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_66ff_32), 0x66ff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6700_32), 0x6700, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6701_32), 0x6701, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_67ff_32), 0x67ff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6800_32), 0x6800, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6801_32), 0x6801, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_68ff_32), 0x68ff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6900_32), 0x6900, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6901_32), 0x6901, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_69ff_32), 0x69ff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6a00_32), 0x6a00, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6a01_32), 0x6a01, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6aff_32), 0x6aff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6b00_32), 0x6b00, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6b01_32), 0x6b01, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6bff_32), 0x6bff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6c00_32), 0x6c00, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6c01_32), 0x6c01, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6cff_32), 0x6cff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6d00_32), 0x6d00, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6d01_32), 0x6d01, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6dff_32), 0x6dff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6e00_32), 0x6e00, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6e01_32), 0x6e01, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6eff_32), 0x6eff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6f00_32), 0x6f00, 4, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6f01_32), 0x6f01, 2, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_6fff_32), 0x6fff, 6, { 0, 0 }, 1 }, /* Bcc */
{ CPUFUNC(op_7000_32), 0x7000, 2, { 0, 0 }, 0 }, /* MOVE */
{ CPUFUNC(op_8000_32), 0x8000, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8010_32), 0x8010, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8018_32), 0x8018, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8020_32), 0x8020, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8028_32), 0x8028, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8030_32), 0x8030, 2, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8038_32), 0x8038, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8039_32), 0x8039, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_803a_32), 0x803a, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_803b_32), 0x803b, 2, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_803c_32), 0x803c, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8040_32), 0x8040, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8050_32), 0x8050, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8058_32), 0x8058, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8060_32), 0x8060, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8068_32), 0x8068, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8070_32), 0x8070, 2, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8078_32), 0x8078, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8079_32), 0x8079, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_807a_32), 0x807a, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_807b_32), 0x807b, 2, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_807c_32), 0x807c, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8080_32), 0x8080, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8090_32), 0x8090, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8098_32), 0x8098, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_80a0_32), 0x80a0, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_80a8_32), 0x80a8, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_80b0_32), 0x80b0, 2, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_80b8_32), 0x80b8, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_80b9_32), 0x80b9, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_80ba_32), 0x80ba, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_80bb_32), 0x80bb, 2, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_80bc_32), 0x80bc, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_80c0_32), 0x80c0, 2, { 0, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80d0_32), 0x80d0, 2, { 0, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80d8_32), 0x80d8, 2, { 0, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80e0_32), 0x80e0, 2, { 0, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80e8_32), 0x80e8, 4, { 0, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80f0_32), 0x80f0, 2, { 2, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80f8_32), 0x80f8, 4, { 0, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80f9_32), 0x80f9, 6, { 0, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80fa_32), 0x80fa, 4, { 0, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80fb_32), 0x80fb, 2, { 2, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_80fc_32), 0x80fc, 4, { 0, 0 }, 0 }, /* DIVU */
{ CPUFUNC(op_8100_32), 0x8100, 2, { 0, 0 }, 0 }, /* SBCD */
{ CPUFUNC(op_8108_32), 0x8108, 2, { 0, 0 }, 0 }, /* SBCD */
{ CPUFUNC(op_8110_32), 0x8110, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8118_32), 0x8118, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8120_32), 0x8120, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8128_32), 0x8128, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8130_32), 0x8130, 2, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8138_32), 0x8138, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8139_32), 0x8139, 6, { 0, 0 }, 0 }, /* OR */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_8140_32), 0x8140, 4, { 0, 0 }, 0 }, /* PACK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_8148_32), 0x8148, 4, { 0, 0 }, 0 }, /* PACK */
#endif
{ CPUFUNC(op_8150_32), 0x8150, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8158_32), 0x8158, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8160_32), 0x8160, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8168_32), 0x8168, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8170_32), 0x8170, 2, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8178_32), 0x8178, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8179_32), 0x8179, 6, { 0, 0 }, 0 }, /* OR */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_8180_32), 0x8180, 4, { 0, 0 }, 0 }, /* UNPK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_8188_32), 0x8188, 4, { 0, 0 }, 0 }, /* UNPK */
#endif
{ CPUFUNC(op_8190_32), 0x8190, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_8198_32), 0x8198, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_81a0_32), 0x81a0, 2, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_81a8_32), 0x81a8, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_81b0_32), 0x81b0, 2, { 2, 0 }, 0 }, /* OR */
{ CPUFUNC(op_81b8_32), 0x81b8, 4, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_81b9_32), 0x81b9, 6, { 0, 0 }, 0 }, /* OR */
{ CPUFUNC(op_81c0_32), 0x81c0, 2, { 0, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81d0_32), 0x81d0, 2, { 0, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81d8_32), 0x81d8, 2, { 0, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81e0_32), 0x81e0, 2, { 0, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81e8_32), 0x81e8, 4, { 0, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81f0_32), 0x81f0, 2, { 2, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81f8_32), 0x81f8, 4, { 0, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81f9_32), 0x81f9, 6, { 0, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81fa_32), 0x81fa, 4, { 0, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81fb_32), 0x81fb, 2, { 2, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_81fc_32), 0x81fc, 4, { 0, 0 }, 0 }, /* DIVS */
{ CPUFUNC(op_9000_32), 0x9000, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9010_32), 0x9010, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9018_32), 0x9018, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9020_32), 0x9020, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9028_32), 0x9028, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9030_32), 0x9030, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9038_32), 0x9038, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9039_32), 0x9039, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_903a_32), 0x903a, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_903b_32), 0x903b, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_903c_32), 0x903c, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9040_32), 0x9040, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9048_32), 0x9048, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9050_32), 0x9050, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9058_32), 0x9058, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9060_32), 0x9060, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9068_32), 0x9068, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9070_32), 0x9070, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9078_32), 0x9078, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9079_32), 0x9079, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_907a_32), 0x907a, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_907b_32), 0x907b, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_907c_32), 0x907c, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9080_32), 0x9080, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9088_32), 0x9088, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9090_32), 0x9090, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9098_32), 0x9098, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_90a0_32), 0x90a0, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_90a8_32), 0x90a8, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_90b0_32), 0x90b0, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_90b8_32), 0x90b8, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_90b9_32), 0x90b9, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_90ba_32), 0x90ba, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_90bb_32), 0x90bb, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_90bc_32), 0x90bc, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_90c0_32), 0x90c0, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90c8_32), 0x90c8, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90d0_32), 0x90d0, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90d8_32), 0x90d8, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90e0_32), 0x90e0, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90e8_32), 0x90e8, 4, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90f0_32), 0x90f0, 2, { 2, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90f8_32), 0x90f8, 4, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90f9_32), 0x90f9, 6, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90fa_32), 0x90fa, 4, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90fb_32), 0x90fb, 2, { 2, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_90fc_32), 0x90fc, 4, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_9100_32), 0x9100, 2, { 0, 0 }, 0 }, /* SUBX */
{ CPUFUNC(op_9108_32), 0x9108, 2, { 0, 0 }, 0 }, /* SUBX */
{ CPUFUNC(op_9110_32), 0x9110, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9118_32), 0x9118, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9120_32), 0x9120, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9128_32), 0x9128, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9130_32), 0x9130, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9138_32), 0x9138, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9139_32), 0x9139, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9140_32), 0x9140, 2, { 0, 0 }, 0 }, /* SUBX */
{ CPUFUNC(op_9148_32), 0x9148, 2, { 0, 0 }, 0 }, /* SUBX */
{ CPUFUNC(op_9150_32), 0x9150, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9158_32), 0x9158, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9160_32), 0x9160, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9168_32), 0x9168, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9170_32), 0x9170, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9178_32), 0x9178, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9179_32), 0x9179, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9180_32), 0x9180, 2, { 0, 0 }, 0 }, /* SUBX */
{ CPUFUNC(op_9188_32), 0x9188, 2, { 0, 0 }, 0 }, /* SUBX */
{ CPUFUNC(op_9190_32), 0x9190, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_9198_32), 0x9198, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_91a0_32), 0x91a0, 2, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_91a8_32), 0x91a8, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_91b0_32), 0x91b0, 2, { 2, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_91b8_32), 0x91b8, 4, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_91b9_32), 0x91b9, 6, { 0, 0 }, 0 }, /* SUB */
{ CPUFUNC(op_91c0_32), 0x91c0, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91c8_32), 0x91c8, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91d0_32), 0x91d0, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91d8_32), 0x91d8, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91e0_32), 0x91e0, 2, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91e8_32), 0x91e8, 4, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91f0_32), 0x91f0, 2, { 2, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91f8_32), 0x91f8, 4, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91f9_32), 0x91f9, 6, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91fa_32), 0x91fa, 4, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91fb_32), 0x91fb, 2, { 2, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_91fc_32), 0x91fc, 6, { 0, 0 }, 0 }, /* SUBA */
{ CPUFUNC(op_b000_32), 0xb000, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b010_32), 0xb010, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b018_32), 0xb018, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b020_32), 0xb020, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b028_32), 0xb028, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b030_32), 0xb030, 2, { 2, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b038_32), 0xb038, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b039_32), 0xb039, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b03a_32), 0xb03a, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b03b_32), 0xb03b, 2, { 2, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b03c_32), 0xb03c, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b040_32), 0xb040, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b048_32), 0xb048, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b050_32), 0xb050, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b058_32), 0xb058, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b060_32), 0xb060, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b068_32), 0xb068, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b070_32), 0xb070, 2, { 2, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b078_32), 0xb078, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b079_32), 0xb079, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b07a_32), 0xb07a, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b07b_32), 0xb07b, 2, { 2, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b07c_32), 0xb07c, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b080_32), 0xb080, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b088_32), 0xb088, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b090_32), 0xb090, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b098_32), 0xb098, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b0a0_32), 0xb0a0, 2, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b0a8_32), 0xb0a8, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b0b0_32), 0xb0b0, 2, { 2, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b0b8_32), 0xb0b8, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b0b9_32), 0xb0b9, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b0ba_32), 0xb0ba, 4, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b0bb_32), 0xb0bb, 2, { 2, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b0bc_32), 0xb0bc, 6, { 0, 0 }, 0 }, /* CMP */
{ CPUFUNC(op_b0c0_32), 0xb0c0, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0c8_32), 0xb0c8, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0d0_32), 0xb0d0, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0d8_32), 0xb0d8, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0e0_32), 0xb0e0, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0e8_32), 0xb0e8, 4, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0f0_32), 0xb0f0, 2, { 2, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0f8_32), 0xb0f8, 4, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0f9_32), 0xb0f9, 6, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0fa_32), 0xb0fa, 4, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0fb_32), 0xb0fb, 2, { 2, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b0fc_32), 0xb0fc, 4, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b100_32), 0xb100, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b108_32), 0xb108, 2, { 0, 0 }, 0 }, /* CMPM */
{ CPUFUNC(op_b110_32), 0xb110, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b118_32), 0xb118, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b120_32), 0xb120, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b128_32), 0xb128, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b130_32), 0xb130, 2, { 2, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b138_32), 0xb138, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b139_32), 0xb139, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b140_32), 0xb140, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b148_32), 0xb148, 2, { 0, 0 }, 0 }, /* CMPM */
{ CPUFUNC(op_b150_32), 0xb150, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b158_32), 0xb158, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b160_32), 0xb160, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b168_32), 0xb168, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b170_32), 0xb170, 2, { 2, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b178_32), 0xb178, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b179_32), 0xb179, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b180_32), 0xb180, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b188_32), 0xb188, 2, { 0, 0 }, 0 }, /* CMPM */
{ CPUFUNC(op_b190_32), 0xb190, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b198_32), 0xb198, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b1a0_32), 0xb1a0, 2, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b1a8_32), 0xb1a8, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b1b0_32), 0xb1b0, 2, { 2, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b1b8_32), 0xb1b8, 4, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b1b9_32), 0xb1b9, 6, { 0, 0 }, 0 }, /* EOR */
{ CPUFUNC(op_b1c0_32), 0xb1c0, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1c8_32), 0xb1c8, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1d0_32), 0xb1d0, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1d8_32), 0xb1d8, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1e0_32), 0xb1e0, 2, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1e8_32), 0xb1e8, 4, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1f0_32), 0xb1f0, 2, { 2, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1f8_32), 0xb1f8, 4, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1f9_32), 0xb1f9, 6, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1fa_32), 0xb1fa, 4, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1fb_32), 0xb1fb, 2, { 2, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_b1fc_32), 0xb1fc, 6, { 0, 0 }, 0 }, /* CMPA */
{ CPUFUNC(op_c000_32), 0xc000, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c010_32), 0xc010, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c018_32), 0xc018, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c020_32), 0xc020, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c028_32), 0xc028, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c030_32), 0xc030, 2, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c038_32), 0xc038, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c039_32), 0xc039, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c03a_32), 0xc03a, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c03b_32), 0xc03b, 2, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c03c_32), 0xc03c, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c040_32), 0xc040, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c050_32), 0xc050, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c058_32), 0xc058, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c060_32), 0xc060, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c068_32), 0xc068, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c070_32), 0xc070, 2, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c078_32), 0xc078, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c079_32), 0xc079, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c07a_32), 0xc07a, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c07b_32), 0xc07b, 2, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c07c_32), 0xc07c, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c080_32), 0xc080, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c090_32), 0xc090, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c098_32), 0xc098, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c0a0_32), 0xc0a0, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c0a8_32), 0xc0a8, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c0b0_32), 0xc0b0, 2, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c0b8_32), 0xc0b8, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c0b9_32), 0xc0b9, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c0ba_32), 0xc0ba, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c0bb_32), 0xc0bb, 2, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c0bc_32), 0xc0bc, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c0c0_32), 0xc0c0, 2, { 0, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0d0_32), 0xc0d0, 2, { 0, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0d8_32), 0xc0d8, 2, { 0, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0e0_32), 0xc0e0, 2, { 0, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0e8_32), 0xc0e8, 4, { 0, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0f0_32), 0xc0f0, 2, { 2, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0f8_32), 0xc0f8, 4, { 0, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0f9_32), 0xc0f9, 6, { 0, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0fa_32), 0xc0fa, 4, { 0, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0fb_32), 0xc0fb, 2, { 2, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c0fc_32), 0xc0fc, 4, { 0, 0 }, 0 }, /* MULU */
{ CPUFUNC(op_c100_32), 0xc100, 2, { 0, 0 }, 0 }, /* ABCD */
{ CPUFUNC(op_c108_32), 0xc108, 2, { 0, 0 }, 0 }, /* ABCD */
{ CPUFUNC(op_c110_32), 0xc110, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c118_32), 0xc118, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c120_32), 0xc120, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c128_32), 0xc128, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c130_32), 0xc130, 2, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c138_32), 0xc138, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c139_32), 0xc139, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c140_32), 0xc140, 2, { 0, 0 }, 0 }, /* EXG */
{ CPUFUNC(op_c148_32), 0xc148, 2, { 0, 0 }, 0 }, /* EXG */
{ CPUFUNC(op_c150_32), 0xc150, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c158_32), 0xc158, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c160_32), 0xc160, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c168_32), 0xc168, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c170_32), 0xc170, 2, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c178_32), 0xc178, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c179_32), 0xc179, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c188_32), 0xc188, 2, { 0, 0 }, 0 }, /* EXG */
{ CPUFUNC(op_c190_32), 0xc190, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c198_32), 0xc198, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c1a0_32), 0xc1a0, 2, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c1a8_32), 0xc1a8, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c1b0_32), 0xc1b0, 2, { 2, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c1b8_32), 0xc1b8, 4, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c1b9_32), 0xc1b9, 6, { 0, 0 }, 0 }, /* AND */
{ CPUFUNC(op_c1c0_32), 0xc1c0, 2, { 0, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1d0_32), 0xc1d0, 2, { 0, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1d8_32), 0xc1d8, 2, { 0, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1e0_32), 0xc1e0, 2, { 0, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1e8_32), 0xc1e8, 4, { 0, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1f0_32), 0xc1f0, 2, { 2, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1f8_32), 0xc1f8, 4, { 0, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1f9_32), 0xc1f9, 6, { 0, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1fa_32), 0xc1fa, 4, { 0, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1fb_32), 0xc1fb, 2, { 2, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_c1fc_32), 0xc1fc, 4, { 0, 0 }, 0 }, /* MULS */
{ CPUFUNC(op_d000_32), 0xd000, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d010_32), 0xd010, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d018_32), 0xd018, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d020_32), 0xd020, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d028_32), 0xd028, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d030_32), 0xd030, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d038_32), 0xd038, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d039_32), 0xd039, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d03a_32), 0xd03a, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d03b_32), 0xd03b, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d03c_32), 0xd03c, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d040_32), 0xd040, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d048_32), 0xd048, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d050_32), 0xd050, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d058_32), 0xd058, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d060_32), 0xd060, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d068_32), 0xd068, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d070_32), 0xd070, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d078_32), 0xd078, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d079_32), 0xd079, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d07a_32), 0xd07a, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d07b_32), 0xd07b, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d07c_32), 0xd07c, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d080_32), 0xd080, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d088_32), 0xd088, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d090_32), 0xd090, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d098_32), 0xd098, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d0a0_32), 0xd0a0, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d0a8_32), 0xd0a8, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d0b0_32), 0xd0b0, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d0b8_32), 0xd0b8, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d0b9_32), 0xd0b9, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d0ba_32), 0xd0ba, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d0bb_32), 0xd0bb, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d0bc_32), 0xd0bc, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d0c0_32), 0xd0c0, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0c8_32), 0xd0c8, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0d0_32), 0xd0d0, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0d8_32), 0xd0d8, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0e0_32), 0xd0e0, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0e8_32), 0xd0e8, 4, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0f0_32), 0xd0f0, 2, { 2, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0f8_32), 0xd0f8, 4, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0f9_32), 0xd0f9, 6, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0fa_32), 0xd0fa, 4, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0fb_32), 0xd0fb, 2, { 2, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d0fc_32), 0xd0fc, 4, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d100_32), 0xd100, 2, { 0, 0 }, 0 }, /* ADDX */
{ CPUFUNC(op_d108_32), 0xd108, 2, { 0, 0 }, 0 }, /* ADDX */
{ CPUFUNC(op_d110_32), 0xd110, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d118_32), 0xd118, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d120_32), 0xd120, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d128_32), 0xd128, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d130_32), 0xd130, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d138_32), 0xd138, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d139_32), 0xd139, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d140_32), 0xd140, 2, { 0, 0 }, 0 }, /* ADDX */
{ CPUFUNC(op_d148_32), 0xd148, 2, { 0, 0 }, 0 }, /* ADDX */
{ CPUFUNC(op_d150_32), 0xd150, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d158_32), 0xd158, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d160_32), 0xd160, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d168_32), 0xd168, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d170_32), 0xd170, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d178_32), 0xd178, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d179_32), 0xd179, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d180_32), 0xd180, 2, { 0, 0 }, 0 }, /* ADDX */
{ CPUFUNC(op_d188_32), 0xd188, 2, { 0, 0 }, 0 }, /* ADDX */
{ CPUFUNC(op_d190_32), 0xd190, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d198_32), 0xd198, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d1a0_32), 0xd1a0, 2, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d1a8_32), 0xd1a8, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d1b0_32), 0xd1b0, 2, { 2, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d1b8_32), 0xd1b8, 4, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d1b9_32), 0xd1b9, 6, { 0, 0 }, 0 }, /* ADD */
{ CPUFUNC(op_d1c0_32), 0xd1c0, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1c8_32), 0xd1c8, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1d0_32), 0xd1d0, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1d8_32), 0xd1d8, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1e0_32), 0xd1e0, 2, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1e8_32), 0xd1e8, 4, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1f0_32), 0xd1f0, 2, { 2, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1f8_32), 0xd1f8, 4, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1f9_32), 0xd1f9, 6, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1fa_32), 0xd1fa, 4, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1fb_32), 0xd1fb, 2, { 2, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_d1fc_32), 0xd1fc, 6, { 0, 0 }, 0 }, /* ADDA */
{ CPUFUNC(op_e000_32), 0xe000, 2, { 0, 0 }, 0 }, /* ASR */
{ CPUFUNC(op_e008_32), 0xe008, 2, { 0, 0 }, 0 }, /* LSR */
{ CPUFUNC(op_e010_32), 0xe010, 2, { 0, 0 }, 0 }, /* ROXR */
{ CPUFUNC(op_e018_32), 0xe018, 2, { 0, 0 }, 0 }, /* ROR */
{ CPUFUNC(op_e020_32), 0xe020, 2, { 0, 0 }, 0 }, /* ASR */
{ CPUFUNC(op_e028_32), 0xe028, 2, { 0, 0 }, 0 }, /* LSR */
{ CPUFUNC(op_e030_32), 0xe030, 2, { 0, 0 }, 0 }, /* ROXR */
{ CPUFUNC(op_e038_32), 0xe038, 2, { 0, 0 }, 0 }, /* ROR */
{ CPUFUNC(op_e040_32), 0xe040, 2, { 0, 0 }, 0 }, /* ASR */
{ CPUFUNC(op_e048_32), 0xe048, 2, { 0, 0 }, 0 }, /* LSR */
{ CPUFUNC(op_e050_32), 0xe050, 2, { 0, 0 }, 0 }, /* ROXR */
{ CPUFUNC(op_e058_32), 0xe058, 2, { 0, 0 }, 0 }, /* ROR */
{ CPUFUNC(op_e060_32), 0xe060, 2, { 0, 0 }, 0 }, /* ASR */
{ CPUFUNC(op_e068_32), 0xe068, 2, { 0, 0 }, 0 }, /* LSR */
{ CPUFUNC(op_e070_32), 0xe070, 2, { 0, 0 }, 0 }, /* ROXR */
{ CPUFUNC(op_e078_32), 0xe078, 2, { 0, 0 }, 0 }, /* ROR */
{ CPUFUNC(op_e080_32), 0xe080, 2, { 0, 0 }, 0 }, /* ASR */
{ CPUFUNC(op_e088_32), 0xe088, 2, { 0, 0 }, 0 }, /* LSR */
{ CPUFUNC(op_e090_32), 0xe090, 2, { 0, 0 }, 0 }, /* ROXR */
{ CPUFUNC(op_e098_32), 0xe098, 2, { 0, 0 }, 0 }, /* ROR */
{ CPUFUNC(op_e0a0_32), 0xe0a0, 2, { 0, 0 }, 0 }, /* ASR */
{ CPUFUNC(op_e0a8_32), 0xe0a8, 2, { 0, 0 }, 0 }, /* LSR */
{ CPUFUNC(op_e0b0_32), 0xe0b0, 2, { 0, 0 }, 0 }, /* ROXR */
{ CPUFUNC(op_e0b8_32), 0xe0b8, 2, { 0, 0 }, 0 }, /* ROR */
{ CPUFUNC(op_e0d0_32), 0xe0d0, 2, { 0, 0 }, 0 }, /* ASRW */
{ CPUFUNC(op_e0d8_32), 0xe0d8, 2, { 0, 0 }, 0 }, /* ASRW */
{ CPUFUNC(op_e0e0_32), 0xe0e0, 2, { 0, 0 }, 0 }, /* ASRW */
{ CPUFUNC(op_e0e8_32), 0xe0e8, 4, { 0, 0 }, 0 }, /* ASRW */
{ CPUFUNC(op_e0f0_32), 0xe0f0, 2, { 2, 0 }, 0 }, /* ASRW */
{ CPUFUNC(op_e0f8_32), 0xe0f8, 4, { 0, 0 }, 0 }, /* ASRW */
{ CPUFUNC(op_e0f9_32), 0xe0f9, 6, { 0, 0 }, 0 }, /* ASRW */
{ CPUFUNC(op_e100_32), 0xe100, 2, { 0, 0 }, 0 }, /* ASL */
{ CPUFUNC(op_e108_32), 0xe108, 2, { 0, 0 }, 0 }, /* LSL */
{ CPUFUNC(op_e110_32), 0xe110, 2, { 0, 0 }, 0 }, /* ROXL */
{ CPUFUNC(op_e118_32), 0xe118, 2, { 0, 0 }, 0 }, /* ROL */
{ CPUFUNC(op_e120_32), 0xe120, 2, { 0, 0 }, 0 }, /* ASL */
{ CPUFUNC(op_e128_32), 0xe128, 2, { 0, 0 }, 0 }, /* LSL */
{ CPUFUNC(op_e130_32), 0xe130, 2, { 0, 0 }, 0 }, /* ROXL */
{ CPUFUNC(op_e138_32), 0xe138, 2, { 0, 0 }, 0 }, /* ROL */
{ CPUFUNC(op_e140_32), 0xe140, 2, { 0, 0 }, 0 }, /* ASL */
{ CPUFUNC(op_e148_32), 0xe148, 2, { 0, 0 }, 0 }, /* LSL */
{ CPUFUNC(op_e150_32), 0xe150, 2, { 0, 0 }, 0 }, /* ROXL */
{ CPUFUNC(op_e158_32), 0xe158, 2, { 0, 0 }, 0 }, /* ROL */
{ CPUFUNC(op_e160_32), 0xe160, 2, { 0, 0 }, 0 }, /* ASL */
{ CPUFUNC(op_e168_32), 0xe168, 2, { 0, 0 }, 0 }, /* LSL */
{ CPUFUNC(op_e170_32), 0xe170, 2, { 0, 0 }, 0 }, /* ROXL */
{ CPUFUNC(op_e178_32), 0xe178, 2, { 0, 0 }, 0 }, /* ROL */
{ CPUFUNC(op_e180_32), 0xe180, 2, { 0, 0 }, 0 }, /* ASL */
{ CPUFUNC(op_e188_32), 0xe188, 2, { 0, 0 }, 0 }, /* LSL */
{ CPUFUNC(op_e190_32), 0xe190, 2, { 0, 0 }, 0 }, /* ROXL */
{ CPUFUNC(op_e198_32), 0xe198, 2, { 0, 0 }, 0 }, /* ROL */
{ CPUFUNC(op_e1a0_32), 0xe1a0, 2, { 0, 0 }, 0 }, /* ASL */
{ CPUFUNC(op_e1a8_32), 0xe1a8, 2, { 0, 0 }, 0 }, /* LSL */
{ CPUFUNC(op_e1b0_32), 0xe1b0, 2, { 0, 0 }, 0 }, /* ROXL */
{ CPUFUNC(op_e1b8_32), 0xe1b8, 2, { 0, 0 }, 0 }, /* ROL */
{ CPUFUNC(op_e1d0_32), 0xe1d0, 2, { 0, 0 }, 0 }, /* ASLW */
{ CPUFUNC(op_e1d8_32), 0xe1d8, 2, { 0, 0 }, 0 }, /* ASLW */
{ CPUFUNC(op_e1e0_32), 0xe1e0, 2, { 0, 0 }, 0 }, /* ASLW */
{ CPUFUNC(op_e1e8_32), 0xe1e8, 4, { 0, 0 }, 0 }, /* ASLW */
{ CPUFUNC(op_e1f0_32), 0xe1f0, 2, { 2, 0 }, 0 }, /* ASLW */
{ CPUFUNC(op_e1f8_32), 0xe1f8, 4, { 0, 0 }, 0 }, /* ASLW */
{ CPUFUNC(op_e1f9_32), 0xe1f9, 6, { 0, 0 }, 0 }, /* ASLW */
{ CPUFUNC(op_e2d0_32), 0xe2d0, 2, { 0, 0 }, 0 }, /* LSRW */
{ CPUFUNC(op_e2d8_32), 0xe2d8, 2, { 0, 0 }, 0 }, /* LSRW */
{ CPUFUNC(op_e2e0_32), 0xe2e0, 2, { 0, 0 }, 0 }, /* LSRW */
{ CPUFUNC(op_e2e8_32), 0xe2e8, 4, { 0, 0 }, 0 }, /* LSRW */
{ CPUFUNC(op_e2f0_32), 0xe2f0, 2, { 2, 0 }, 0 }, /* LSRW */
{ CPUFUNC(op_e2f8_32), 0xe2f8, 4, { 0, 0 }, 0 }, /* LSRW */
{ CPUFUNC(op_e2f9_32), 0xe2f9, 6, { 0, 0 }, 0 }, /* LSRW */
{ CPUFUNC(op_e3d0_32), 0xe3d0, 2, { 0, 0 }, 0 }, /* LSLW */
{ CPUFUNC(op_e3d8_32), 0xe3d8, 2, { 0, 0 }, 0 }, /* LSLW */
{ CPUFUNC(op_e3e0_32), 0xe3e0, 2, { 0, 0 }, 0 }, /* LSLW */
{ CPUFUNC(op_e3e8_32), 0xe3e8, 4, { 0, 0 }, 0 }, /* LSLW */
{ CPUFUNC(op_e3f0_32), 0xe3f0, 2, { 2, 0 }, 0 }, /* LSLW */
{ CPUFUNC(op_e3f8_32), 0xe3f8, 4, { 0, 0 }, 0 }, /* LSLW */
{ CPUFUNC(op_e3f9_32), 0xe3f9, 6, { 0, 0 }, 0 }, /* LSLW */
{ CPUFUNC(op_e4d0_32), 0xe4d0, 2, { 0, 0 }, 0 }, /* ROXRW */
{ CPUFUNC(op_e4d8_32), 0xe4d8, 2, { 0, 0 }, 0 }, /* ROXRW */
{ CPUFUNC(op_e4e0_32), 0xe4e0, 2, { 0, 0 }, 0 }, /* ROXRW */
{ CPUFUNC(op_e4e8_32), 0xe4e8, 4, { 0, 0 }, 0 }, /* ROXRW */
{ CPUFUNC(op_e4f0_32), 0xe4f0, 2, { 2, 0 }, 0 }, /* ROXRW */
{ CPUFUNC(op_e4f8_32), 0xe4f8, 4, { 0, 0 }, 0 }, /* ROXRW */
{ CPUFUNC(op_e4f9_32), 0xe4f9, 6, { 0, 0 }, 0 }, /* ROXRW */
{ CPUFUNC(op_e5d0_32), 0xe5d0, 2, { 0, 0 }, 0 }, /* ROXLW */
{ CPUFUNC(op_e5d8_32), 0xe5d8, 2, { 0, 0 }, 0 }, /* ROXLW */
{ CPUFUNC(op_e5e0_32), 0xe5e0, 2, { 0, 0 }, 0 }, /* ROXLW */
{ CPUFUNC(op_e5e8_32), 0xe5e8, 4, { 0, 0 }, 0 }, /* ROXLW */
{ CPUFUNC(op_e5f0_32), 0xe5f0, 2, { 2, 0 }, 0 }, /* ROXLW */
{ CPUFUNC(op_e5f8_32), 0xe5f8, 4, { 0, 0 }, 0 }, /* ROXLW */
{ CPUFUNC(op_e5f9_32), 0xe5f9, 6, { 0, 0 }, 0 }, /* ROXLW */
{ CPUFUNC(op_e6d0_32), 0xe6d0, 2, { 0, 0 }, 0 }, /* RORW */
{ CPUFUNC(op_e6d8_32), 0xe6d8, 2, { 0, 0 }, 0 }, /* RORW */
{ CPUFUNC(op_e6e0_32), 0xe6e0, 2, { 0, 0 }, 0 }, /* RORW */
{ CPUFUNC(op_e6e8_32), 0xe6e8, 4, { 0, 0 }, 0 }, /* RORW */
{ CPUFUNC(op_e6f0_32), 0xe6f0, 2, { 2, 0 }, 0 }, /* RORW */
{ CPUFUNC(op_e6f8_32), 0xe6f8, 4, { 0, 0 }, 0 }, /* RORW */
{ CPUFUNC(op_e6f9_32), 0xe6f9, 6, { 0, 0 }, 0 }, /* RORW */
{ CPUFUNC(op_e7d0_32), 0xe7d0, 2, { 0, 0 }, 0 }, /* ROLW */
{ CPUFUNC(op_e7d8_32), 0xe7d8, 2, { 0, 0 }, 0 }, /* ROLW */
{ CPUFUNC(op_e7e0_32), 0xe7e0, 2, { 0, 0 }, 0 }, /* ROLW */
{ CPUFUNC(op_e7e8_32), 0xe7e8, 4, { 0, 0 }, 0 }, /* ROLW */
{ CPUFUNC(op_e7f0_32), 0xe7f0, 2, { 2, 0 }, 0 }, /* ROLW */
{ CPUFUNC(op_e7f8_32), 0xe7f8, 4, { 0, 0 }, 0 }, /* ROLW */
{ CPUFUNC(op_e7f9_32), 0xe7f9, 6, { 0, 0 }, 0 }, /* ROLW */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8c0_32), 0xe8c0, 4, { 0, 0 }, 0 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8d0_32), 0xe8d0, 4, { 0, 0 }, 0 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8e8_32), 0xe8e8, 6, { 0, 0 }, 0 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8f0_32), 0xe8f0, 4, { 2, 0 }, 0 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8f8_32), 0xe8f8, 6, { 0, 0 }, 0 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8f9_32), 0xe8f9, 8, { 0, 0 }, 0 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8fa_32), 0xe8fa, 6, { 0, 0 }, 0 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8fb_32), 0xe8fb, 4, { 2, 0 }, 0 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9c0_32), 0xe9c0, 4, { 0, 0 }, 0 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9d0_32), 0xe9d0, 4, { 0, 0 }, 0 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9e8_32), 0xe9e8, 6, { 0, 0 }, 0 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9f0_32), 0xe9f0, 4, { 2, 0 }, 0 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9f8_32), 0xe9f8, 6, { 0, 0 }, 0 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9f9_32), 0xe9f9, 8, { 0, 0 }, 0 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9fa_32), 0xe9fa, 6, { 0, 0 }, 0 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9fb_32), 0xe9fb, 4, { 2, 0 }, 0 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eac0_32), 0xeac0, 4, { 0, 0 }, 0 }, /* BFCHG */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ead0_32), 0xead0, 4, { 0, 0 }, 0 }, /* BFCHG */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eae8_32), 0xeae8, 6, { 0, 0 }, 0 }, /* BFCHG */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eaf0_32), 0xeaf0, 4, { 2, 0 }, 0 }, /* BFCHG */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eaf8_32), 0xeaf8, 6, { 0, 0 }, 0 }, /* BFCHG */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eaf9_32), 0xeaf9, 8, { 0, 0 }, 0 }, /* BFCHG */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebc0_32), 0xebc0, 4, { 0, 0 }, 0 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebd0_32), 0xebd0, 4, { 0, 0 }, 0 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebe8_32), 0xebe8, 6, { 0, 0 }, 0 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebf0_32), 0xebf0, 4, { 2, 0 }, 0 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebf8_32), 0xebf8, 6, { 0, 0 }, 0 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebf9_32), 0xebf9, 8, { 0, 0 }, 0 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebfa_32), 0xebfa, 6, { 0, 0 }, 0 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebfb_32), 0xebfb, 4, { 2, 0 }, 0 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ecc0_32), 0xecc0, 4, { 0, 0 }, 0 }, /* BFCLR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ecd0_32), 0xecd0, 4, { 0, 0 }, 0 }, /* BFCLR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ece8_32), 0xece8, 6, { 0, 0 }, 0 }, /* BFCLR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ecf0_32), 0xecf0, 4, { 2, 0 }, 0 }, /* BFCLR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ecf8_32), 0xecf8, 6, { 0, 0 }, 0 }, /* BFCLR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ecf9_32), 0xecf9, 8, { 0, 0 }, 0 }, /* BFCLR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edc0_32), 0xedc0, 4, { 0, 0 }, 0 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edd0_32), 0xedd0, 4, { 0, 0 }, 0 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ede8_32), 0xede8, 6, { 0, 0 }, 0 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edf0_32), 0xedf0, 4, { 2, 0 }, 0 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edf8_32), 0xedf8, 6, { 0, 0 }, 0 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edf9_32), 0xedf9, 8, { 0, 0 }, 0 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edfa_32), 0xedfa, 6, { 0, 0 }, 0 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edfb_32), 0xedfb, 4, { 2, 0 }, 0 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eec0_32), 0xeec0, 4, { 0, 0 }, 0 }, /* BFSET */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eed0_32), 0xeed0, 4, { 0, 0 }, 0 }, /* BFSET */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eee8_32), 0xeee8, 6, { 0, 0 }, 0 }, /* BFSET */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eef0_32), 0xeef0, 4, { 2, 0 }, 0 }, /* BFSET */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eef8_32), 0xeef8, 6, { 0, 0 }, 0 }, /* BFSET */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eef9_32), 0xeef9, 8, { 0, 0 }, 0 }, /* BFSET */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_efc0_32), 0xefc0, 4, { 0, 0 }, 0 }, /* BFINS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_efd0_32), 0xefd0, 4, { 0, 0 }, 0 }, /* BFINS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_efe8_32), 0xefe8, 6, { 0, 0 }, 0 }, /* BFINS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eff0_32), 0xeff0, 4, { 2, 0 }, 0 }, /* BFINS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eff8_32), 0xeff8, 6, { 0, 0 }, 0 }, /* BFINS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eff9_32), 0xeff9, 8, { 0, 0 }, 0 }, /* BFINS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f000_32), 0xf000, -1, { 0, 0 }, 0 }, /* MMUOP030 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f008_32), 0xf008, -1, { 0, 0 }, 0 }, /* MMUOP030 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f010_32), 0xf010, -1, { 0, 0 }, 0 }, /* MMUOP030 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f018_32), 0xf018, -1, { 0, 0 }, 0 }, /* MMUOP030 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f020_32), 0xf020, -1, { 0, 0 }, 0 }, /* MMUOP030 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f028_32), 0xf028, -1, { 0, 0 }, 0 }, /* MMUOP030 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f030_32), 0xf030, -1, { -3, 0 }, 0 }, /* MMUOP030 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f038_32), 0xf038, -1, { 0, 0 }, 0 }, /* MMUOP030 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f039_32), 0xf039, -1, { 0, 0 }, 0 }, /* MMUOP030 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f200_32), 0xf200, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f208_32), 0xf208, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f210_32), 0xf210, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f218_32), 0xf218, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f220_32), 0xf220, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f228_32), 0xf228, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f230_32), 0xf230, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f238_32), 0xf238, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f239_32), 0xf239, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f23a_32), 0xf23a, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f23b_32), 0xf23b, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f23c_32), 0xf23c, -1, { 0, 0 }, 0 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f240_32), 0xf240, -1, { 0, 0 }, 0 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f248_32), 0xf248, -1, { 0, 0 }, 0 }, /* FDBcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f250_32), 0xf250, -1, { 0, 0 }, 0 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f258_32), 0xf258, -1, { 0, 0 }, 0 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f260_32), 0xf260, -1, { 0, 0 }, 0 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f268_32), 0xf268, -1, { 0, 0 }, 0 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f270_32), 0xf270, -1, { 0, 0 }, 0 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f278_32), 0xf278, -1, { 0, 0 }, 0 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f279_32), 0xf279, -1, { 0, 0 }, 0 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f27a_32), 0xf27a, -1, { 0, 0 }, 0 }, /* FTRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f27b_32), 0xf27b, -1, { 0, 0 }, 0 }, /* FTRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f27c_32), 0xf27c, -1, { 0, 0 }, 0 }, /* FTRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f280_32), 0xf280, -1, { 0, 0 }, 0 }, /* FBcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f2c0_32), 0xf2c0, -1, { 0, 0 }, 0 }, /* FBcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f310_32), 0xf310, -1, { 0, 0 }, 0 }, /* FSAVE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f320_32), 0xf320, -1, { 0, 0 }, 0 }, /* FSAVE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f328_32), 0xf328, -1, { 0, 0 }, 0 }, /* FSAVE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f330_32), 0xf330, -1, { 0, 0 }, 0 }, /* FSAVE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f338_32), 0xf338, -1, { 0, 0 }, 0 }, /* FSAVE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f339_32), 0xf339, -1, { 0, 0 }, 0 }, /* FSAVE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f350_32), 0xf350, -1, { 0, 0 }, 0 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f358_32), 0xf358, -1, { 0, 0 }, 0 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f368_32), 0xf368, -1, { 0, 0 }, 0 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f370_32), 0xf370, -1, { 0, 0 }, 0 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f378_32), 0xf378, -1, { 0, 0 }, 0 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f379_32), 0xf379, -1, { 0, 0 }, 0 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f37a_32), 0xf37a, -1, { 0, 0 }, 0 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f37b_32), 0xf37b, -1, { 0, 0 }, 0 }, /* FRESTORE */
#endif
{ 0, 0 }};
#endif /* CPUEMU_68000_ONLY */
#endif /* CPUEMU_32 */
