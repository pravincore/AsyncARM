/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/pravinkumar/Documents/GitHub/AsyncARM/memory.v";
static const char *ng1 = "In MEM, ran main loop at time ";
static int ng2[] = {0, 0};
static const char *ng3 = "In MEM, ran store at";
static int ng4[] = {1, 0};
static const char *ng5 = "In MEM, ran reset trigger at time ";



static void Initial_53_0(char *t0)
{
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 6528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 7080);
    t3 = (t0 + 6336);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 7328);
    t5 = (t0 + 6336);
    xsi_add_process_toexecute(0, t4, t5);
    t6 = (t0 + 7576);
    t7 = (t0 + 6336);
    xsi_add_process_toexecute(0, t6, t7);
    t8 = (t0 + 7824);
    t9 = (t0 + 6336);
    xsi_add_process_toexecute(0, t8, t9);
    t10 = (t0 + 8072);
    t11 = (t0 + 6336);
    xsi_add_process_toexecute(0, t10, t11);
    t12 = (t0 + 8320);
    t13 = (t0 + 6336);
    xsi_add_process_toexecute(0, t12, t13);
    t14 = (t0 + 8568);
    t15 = (t0 + 6336);
    xsi_add_process_toexecute(0, t14, t15);
    t16 = (t0 + 8816);
    t17 = (t0 + 6336);
    xsi_add_process_toexecute(0, t16, t17);
    t18 = (t0 + 9064);
    t19 = (t0 + 6336);
    xsi_add_process_toexecute(0, t18, t19);
    t20 = (t0 + 9312);
    t21 = (t0 + 6336);
    xsi_add_process_toexecute(0, t20, t21);
    t22 = (t0 + 9560);
    t23 = (t0 + 6336);
    xsi_add_process_toexecute(0, t22, t23);
    t24 = (t0 + 9808);
    t25 = (t0 + 6336);
    xsi_add_process_toexecute(0, t24, t25);
    t26 = (t0 + 10056);
    t27 = (t0 + 6336);
    xsi_add_process_toexecute(0, t26, t27);
    t28 = (t0 + 10304);
    t29 = (t0 + 6336);
    xsi_add_process_toexecute(0, t28, t29);
    t30 = (t0 + 10552);
    t31 = (t0 + 6336);
    xsi_add_process_toexecute(0, t30, t31);
    t32 = (t0 + 10800);
    t33 = (t0 + 6336);
    xsi_add_process_toexecute(0, t32, t33);
    t34 = (t0 + 5608);
    memset(t35, 0, 8);
    *((unsigned int *)t35) = 16;
    xsi_vlogvar_assign_value(t34, t35, 0, 0, 32);
    t36 = (t0 + 11312);
    *((int *)t36) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t37 = (t0 + 5608);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    if (*((int *)t39) > 0)
        goto LAB5;

LAB6:    t41 = (t0 + 6336);
    xsi_clean_active_fork_process_list(t41);
    goto LAB1;

LAB5:    t40 = (t0 + 11312);
    *((int *)t40) = 1;
    goto LAB1;

}

static void Initial_72_1(char *t0)
{
    char t4[16];
    char t6[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;

LAB0:    t1 = (t0 + 6776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);

LAB4:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 6584);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(74, ng0);

LAB6:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 11328);
    *((int *)t2) = 1;
    t3 = (t0 + 6808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(74, ng0);

LAB8:    xsi_set_current_line(75, ng0);
    t5 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 4294967295U);
    if (t12 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t7) == 0)
        goto LAB9;

LAB11:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB12:    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB15:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 6584);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB9:    *((unsigned int *)t6) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(77, ng0);
    t21 = (t0 + 3048);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memset(t20, 0, 8);
    t24 = (t23 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t24) == 0)
        goto LAB16;

LAB18:    t30 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t30) = 1;

LAB19:    t31 = (t20 + 4);
    t32 = (t23 + 4);
    t33 = *((unsigned int *)t23);
    t34 = (~(t33));
    *((unsigned int *)t20) = t34;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB21;

LAB20:    t39 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t39 & 1U);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 1U);
    t41 = (t0 + 3048);
    xsi_vlogvar_assign_value(t41, t20, 0, 0, 1);
    goto LAB15;

LAB16:    *((unsigned int *)t20) = 1;
    goto LAB19;

LAB21:    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t32);
    *((unsigned int *)t20) = (t35 | t36);
    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t37 | t38);
    goto LAB20;

LAB22:    xsi_set_current_line(79, ng0);

LAB23:    t3 = (t0 + 2168U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB25;

LAB24:    t7 = (t0 + 11344);
    *((int *)t7) = 1;
    t13 = (t0 + 6776U);
    *((char **)t13) = &&LAB23;
    goto LAB1;

LAB25:    t14 = (t0 + 11344);
    *((int *)t14) = 0;
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 3848);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 32);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 5288);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 4808);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 4968);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5128);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(105, ng0);

LAB51:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 3368);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 32);

LAB28:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 6584);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB26:    xsi_set_current_line(89, ng0);

LAB29:    xsi_set_current_line(90, ng0);
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    t13 = (t14 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(97, ng0);

LAB44:    xsi_set_current_line(98, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 4328);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 32);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 4168);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 32);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB48;

LAB46:    if (*((unsigned int *)t7) == 0)
        goto LAB45;

LAB47:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB48:    t14 = (t6 + 4);
    t21 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t6) = t16;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB50;

LAB49:    t26 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t26 & 1U);
    t27 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t27 & 1U);
    t22 = (t0 + 4648);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 1);

LAB32:    goto LAB28;

LAB30:    xsi_set_current_line(90, ng0);

LAB33:    xsi_set_current_line(91, ng0);
    t21 = (t0 + 4968);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 4328);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 32);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB37;

LAB35:    if (*((unsigned int *)t7) == 0)
        goto LAB34;

LAB36:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB37:    t14 = (t6 + 4);
    t21 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t6) = t16;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB39;

LAB38:    t26 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t26 & 1U);
    t27 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t27 & 1U);
    t22 = (t0 + 4648);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 1);
    xsi_set_current_line(94, ng0);

LAB40:    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB42;

LAB41:    t5 = (t0 + 11360);
    *((int *)t5) = 1;
    t7 = (t0 + 6776U);
    *((char **)t7) = &&LAB40;
    goto LAB1;

LAB34:    *((unsigned int *)t6) = 1;
    goto LAB37;

LAB39:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t21);
    *((unsigned int *)t14) = (t19 | t25);
    goto LAB38;

LAB42:    t13 = (t0 + 11360);
    *((int *)t13) = 0;
    xsi_set_current_line(94, ng0);
    t14 = (t0 + 6584);
    xsi_process_wait(t14, 0LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB32;

LAB45:    *((unsigned int *)t6) = 1;
    goto LAB48;

LAB50:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t21);
    *((unsigned int *)t14) = (t19 | t25);
    goto LAB49;

LAB52:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB6;

LAB53:    goto LAB1;

}

static void Always_114_2(char *t0)
{
    char t11[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;

LAB0:    t1 = (t0 + 7024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 11376);
    *((int *)t2) = 1;
    t3 = (t0 + 7056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(115, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(115, ng0);

LAB8:    xsi_set_current_line(116, ng0);
    t12 = xsi_vlog_time(t11, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t11, 64);
    xsi_set_current_line(117, ng0);

LAB9:    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB10:    t4 = (t0 + 11392);
    *((int *)t4) = 1;
    t5 = (t0 + 7024U);
    *((char **)t5) = &&LAB9;
    goto LAB1;

LAB11:    t12 = (t0 + 11392);
    *((int *)t12) = 0;
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 12576);
    xsi_trigger(t2, -1, -1);
    goto LAB7;

}

static void Forked_54_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 7272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 7080);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_55_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 7520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 7328);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_56_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 7768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 7576);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB5:    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_57_6(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 8016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 7824);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB5:    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_58_7(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 8264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 8072);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB5:    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_59_8(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 8512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 8320);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3848);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB5:    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_60_9(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 8760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 8568);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4168);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB5:    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_61_10(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 9008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 8816);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4328);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB5:    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_62_11(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 9256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 9064);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4488);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_63_12(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 9504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 9312);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_64_13(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 9752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 9560);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_65_14(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 10000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 9808);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB5:    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_66_15(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 10248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 10056);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_67_16(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 10496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 10304);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4808);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB5:    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_68_17(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 10744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 10552);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4968);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB5:    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_69_18(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 10992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 10800);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5128);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB5:    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}


extern void work_m_00000000000136378860_2381739659_init()
{
	static char *pe[] = {(void *)Initial_53_0,(void *)Initial_72_1,(void *)Always_114_2,(void *)Forked_54_3,(void *)Forked_55_4,(void *)Forked_56_5,(void *)Forked_57_6,(void *)Forked_58_7,(void *)Forked_59_8,(void *)Forked_60_9,(void *)Forked_61_10,(void *)Forked_62_11,(void *)Forked_63_12,(void *)Forked_64_13,(void *)Forked_65_14,(void *)Forked_66_15,(void *)Forked_67_16,(void *)Forked_68_17,(void *)Forked_69_18};
	xsi_register_didat("work_m_00000000000136378860_2381739659", "isim/memory_test_isim_beh.exe.sim/work/m_00000000000136378860_2381739659.didat");
	xsi_register_executes(pe);
}
