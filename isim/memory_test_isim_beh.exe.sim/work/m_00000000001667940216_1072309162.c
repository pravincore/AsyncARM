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
static const char *ng0 = "C:/Users/pravinkumar/Documents/GitHub/AsyncARM/memory_test.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Initial_223_0(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 9568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(223, ng0);

LAB4:    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 9376);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 9376);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(233, ng0);

LAB7:    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB9;

LAB8:    t10 = (t0 + 9888);
    *((int *)t10) = 1;
    t11 = (t0 + 9568U);
    *((char **)t11) = &&LAB7;
    goto LAB1;

LAB9:    t12 = (t0 + 9888);
    *((int *)t12) = 0;
    xsi_set_current_line(233, ng0);
    t14 = (t0 + 8648);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t13, 0, 8);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t16);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t17) == 0)
        goto LAB10;

LAB12:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;

LAB13:    t24 = (t13 + 4);
    t25 = (t16 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    *((unsigned int *)t13) = t27;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t25) != 0)
        goto LAB15;

LAB14:    t32 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t32 & 1U);
    t33 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t33 & 1U);
    t34 = (t0 + 8648);
    xsi_vlogvar_assign_value(t34, t13, 0, 0, 1);
    xsi_set_current_line(234, ng0);
    t2 = (t0 + 9376);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB15:    t28 = *((unsigned int *)t13);
    t29 = *((unsigned int *)t25);
    *((unsigned int *)t13) = (t28 | t29);
    t30 = *((unsigned int *)t24);
    t31 = *((unsigned int *)t25);
    *((unsigned int *)t24) = (t30 | t31);
    goto LAB14;

LAB16:    xsi_set_current_line(235, ng0);

LAB17:    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB19;

LAB18:    t10 = (t0 + 9904);
    *((int *)t10) = 1;
    t11 = (t0 + 9568U);
    *((char **)t11) = &&LAB17;
    goto LAB1;

LAB19:    t12 = (t0 + 9904);
    *((int *)t12) = 0;
    xsi_set_current_line(235, ng0);
    t14 = (t0 + 8648);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t13, 0, 8);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t16);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t17) == 0)
        goto LAB20;

LAB22:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;

LAB23:    t24 = (t13 + 4);
    t25 = (t16 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    *((unsigned int *)t13) = t27;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t25) != 0)
        goto LAB25;

LAB24:    t32 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t32 & 1U);
    t33 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t33 & 1U);
    t34 = (t0 + 8648);
    xsi_vlogvar_assign_value(t34, t13, 0, 0, 1);
    xsi_set_current_line(236, ng0);
    t2 = (t0 + 9376);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB20:    *((unsigned int *)t13) = 1;
    goto LAB23;

LAB25:    t28 = *((unsigned int *)t13);
    t29 = *((unsigned int *)t25);
    *((unsigned int *)t13) = (t28 | t29);
    t30 = *((unsigned int *)t24);
    t31 = *((unsigned int *)t25);
    *((unsigned int *)t24) = (t30 | t31);
    goto LAB24;

LAB26:    xsi_set_current_line(237, ng0);

LAB27:    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB29;

LAB28:    t10 = (t0 + 9920);
    *((int *)t10) = 1;
    t11 = (t0 + 9568U);
    *((char **)t11) = &&LAB27;
    goto LAB1;

LAB29:    t12 = (t0 + 9920);
    *((int *)t12) = 0;
    xsi_set_current_line(237, ng0);
    t14 = (t0 + 8648);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t13, 0, 8);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t16);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB33;

LAB31:    if (*((unsigned int *)t17) == 0)
        goto LAB30;

LAB32:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;

LAB33:    t24 = (t13 + 4);
    t25 = (t16 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    *((unsigned int *)t13) = t27;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t25) != 0)
        goto LAB35;

LAB34:    t32 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t32 & 1U);
    t33 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t33 & 1U);
    t34 = (t0 + 8648);
    xsi_vlogvar_assign_value(t34, t13, 0, 0, 1);
    xsi_set_current_line(238, ng0);
    t2 = (t0 + 9376);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB30:    *((unsigned int *)t13) = 1;
    goto LAB33;

LAB35:    t28 = *((unsigned int *)t13);
    t29 = *((unsigned int *)t25);
    *((unsigned int *)t13) = (t28 | t29);
    t30 = *((unsigned int *)t24);
    t31 = *((unsigned int *)t25);
    *((unsigned int *)t24) = (t30 | t31);
    goto LAB34;

LAB36:    xsi_set_current_line(239, ng0);

LAB37:    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB39;

LAB38:    t10 = (t0 + 9936);
    *((int *)t10) = 1;
    t11 = (t0 + 9568U);
    *((char **)t11) = &&LAB37;
    goto LAB1;

LAB39:    t12 = (t0 + 9936);
    *((int *)t12) = 0;
    xsi_set_current_line(239, ng0);
    t14 = (t0 + 8648);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t13, 0, 8);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t16);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB43;

LAB41:    if (*((unsigned int *)t17) == 0)
        goto LAB40;

LAB42:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;

LAB43:    t24 = (t13 + 4);
    t25 = (t16 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    *((unsigned int *)t13) = t27;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t25) != 0)
        goto LAB45;

LAB44:    t32 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t32 & 1U);
    t33 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t33 & 1U);
    t34 = (t0 + 8648);
    xsi_vlogvar_assign_value(t34, t13, 0, 0, 1);
    xsi_set_current_line(242, ng0);
    t2 = (t0 + 9376);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB40:    *((unsigned int *)t13) = 1;
    goto LAB43;

LAB45:    t28 = *((unsigned int *)t13);
    t29 = *((unsigned int *)t25);
    *((unsigned int *)t13) = (t28 | t29);
    t30 = *((unsigned int *)t24);
    t31 = *((unsigned int *)t25);
    *((unsigned int *)t24) = (t30 | t31);
    goto LAB44;

LAB46:    xsi_set_current_line(242, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000001667940216_1072309162_init()
{
	static char *pe[] = {(void *)Initial_223_0};
	xsi_register_didat("work_m_00000000001667940216_1072309162", "isim/memory_test_isim_beh.exe.sim/work/m_00000000001667940216_1072309162.didat");
	xsi_register_executes(pe);
}
