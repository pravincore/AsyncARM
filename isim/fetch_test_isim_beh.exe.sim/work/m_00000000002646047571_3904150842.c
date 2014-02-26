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
static const char *ng0 = "C:/Users/pravinkumar/Documents/GitHub/AsyncARM/fetch_test.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Initial_89_0(char *t0)
{
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);

LAB4:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3616);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(102, ng0);

LAB6:    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t4 = *((unsigned int *)t2);
    t5 = (~(t4));
    t6 = *((unsigned int *)t3);
    t7 = (t6 & t5);
    t8 = (t7 != 0);
    if (t8 > 0)
        goto LAB8;

LAB7:    t9 = (t0 + 4128);
    *((int *)t9) = 1;
    t10 = (t0 + 3808U);
    *((char **)t10) = &&LAB6;
    goto LAB1;

LAB8:    t11 = (t0 + 4128);
    *((int *)t11) = 0;
    xsi_set_current_line(102, ng0);
    t13 = (t0 + 2728);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t12, 0, 8);
    t16 = (t15 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t16) == 0)
        goto LAB9;

LAB11:    t22 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t22) = 1;

LAB12:    t23 = (t12 + 4);
    t24 = (t15 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    *((unsigned int *)t12) = t26;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB14;

LAB13:    t31 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t31 & 1U);
    t32 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t32 & 1U);
    t33 = (t0 + 2728);
    xsi_vlogvar_assign_value(t33, t12, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3616);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    *((unsigned int *)t12) = 1;
    goto LAB12;

LAB14:    t27 = *((unsigned int *)t12);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t12) = (t27 | t28);
    t29 = *((unsigned int *)t23);
    t30 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t29 | t30);
    goto LAB13;

LAB15:    xsi_set_current_line(104, ng0);

LAB16:    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t4 = *((unsigned int *)t2);
    t5 = (~(t4));
    t6 = *((unsigned int *)t3);
    t7 = (t6 & t5);
    t8 = (t7 != 0);
    if (t8 > 0)
        goto LAB18;

LAB17:    t9 = (t0 + 4144);
    *((int *)t9) = 1;
    t10 = (t0 + 3808U);
    *((char **)t10) = &&LAB16;
    goto LAB1;

LAB18:    t11 = (t0 + 4144);
    *((int *)t11) = 0;
    xsi_set_current_line(104, ng0);
    t13 = (t0 + 2728);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t12, 0, 8);
    t16 = (t15 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t16) == 0)
        goto LAB19;

LAB21:    t22 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t22) = 1;

LAB22:    t23 = (t12 + 4);
    t24 = (t15 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    *((unsigned int *)t12) = t26;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB24;

LAB23:    t31 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t31 & 1U);
    t32 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t32 & 1U);
    t33 = (t0 + 2728);
    xsi_vlogvar_assign_value(t33, t12, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3616);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB19:    *((unsigned int *)t12) = 1;
    goto LAB22;

LAB24:    t27 = *((unsigned int *)t12);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t12) = (t27 | t28);
    t29 = *((unsigned int *)t23);
    t30 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t29 | t30);
    goto LAB23;

LAB25:    xsi_set_current_line(106, ng0);

LAB26:    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t4 = *((unsigned int *)t2);
    t5 = (~(t4));
    t6 = *((unsigned int *)t3);
    t7 = (t6 & t5);
    t8 = (t7 != 0);
    if (t8 > 0)
        goto LAB28;

LAB27:    t9 = (t0 + 4160);
    *((int *)t9) = 1;
    t10 = (t0 + 3808U);
    *((char **)t10) = &&LAB26;
    goto LAB1;

LAB28:    t11 = (t0 + 4160);
    *((int *)t11) = 0;
    xsi_set_current_line(106, ng0);
    t13 = (t0 + 2728);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t12, 0, 8);
    t16 = (t15 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t16) == 0)
        goto LAB29;

LAB31:    t22 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t22) = 1;

LAB32:    t23 = (t12 + 4);
    t24 = (t15 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    *((unsigned int *)t12) = t26;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB34;

LAB33:    t31 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t31 & 1U);
    t32 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t32 & 1U);
    t33 = (t0 + 2728);
    xsi_vlogvar_assign_value(t33, t12, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3616);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    *((unsigned int *)t12) = 1;
    goto LAB32;

LAB34:    t27 = *((unsigned int *)t12);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t12) = (t27 | t28);
    t29 = *((unsigned int *)t23);
    t30 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t29 | t30);
    goto LAB33;

LAB35:    xsi_set_current_line(115, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000002646047571_3904150842_init()
{
	static char *pe[] = {(void *)Initial_89_0};
	xsi_register_didat("work_m_00000000002646047571_3904150842", "isim/fetch_test_isim_beh.exe.sim/work/m_00000000002646047571_3904150842.didat");
	xsi_register_executes(pe);
}
