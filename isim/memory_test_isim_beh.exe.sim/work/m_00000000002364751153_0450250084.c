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
static const char *ng0 = "C:/Users/pravinkumar/Documents/GitHub/AsyncARM/ram.v";
static int ng1[] = {0, 0};
static int ng2[] = {7, 0};
static int ng3[] = {1, 0};
static int ng4[] = {15, 0};
static int ng5[] = {8, 0};
static int ng6[] = {2, 0};
static int ng7[] = {23, 0};
static int ng8[] = {16, 0};
static int ng9[] = {3, 0};
static int ng10[] = {31, 0};
static int ng11[] = {24, 0};



static void Initial_35_0(char *t0)
{
    char t13[8];
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4112);
    t3 = (t0 + 3616);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 4360);
    t5 = (t0 + 3616);
    xsi_add_process_toexecute(0, t4, t5);
    t6 = (t0 + 4608);
    t7 = (t0 + 3616);
    xsi_add_process_toexecute(0, t6, t7);
    t8 = (t0 + 4856);
    t9 = (t0 + 3616);
    xsi_add_process_toexecute(0, t8, t9);
    t10 = (t0 + 5104);
    t11 = (t0 + 3616);
    xsi_add_process_toexecute(0, t10, t11);
    t12 = (t0 + 2888);
    memset(t13, 0, 8);
    *((unsigned int *)t13) = 5;
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 32);
    t14 = (t0 + 5616);
    *((int *)t14) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t15 = (t0 + 2888);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    if (*((int *)t17) > 0)
        goto LAB5;

LAB6:    t19 = (t0 + 3616);
    xsi_clean_active_fork_process_list(t19);
    goto LAB1;

LAB5:    t18 = (t0 + 5616);
    *((int *)t18) = 1;
    goto LAB1;

}

static void Initial_43_1(char *t0)
{
    char t6[8];
    char t31[8];
    char t42[8];
    char t43[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    int t52;
    char *t53;
    unsigned int t54;
    int t55;
    int t56;
    char *t57;
    unsigned int t58;
    int t59;
    int t60;
    unsigned int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3864);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(45, ng0);

LAB6:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5632);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(45, ng0);

LAB8:    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3864);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t6) = 1;

LAB13:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(57, ng0);

LAB26:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t8 = (t0 + 2248);
    t21 = (t0 + 2248);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = (t0 + 2248);
    t30 = (t29 + 64U);
    t32 = *((char **)t30);
    t33 = (t0 + 2568);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_generic_convert_array_indices(t31, t42, t28, t32, 2, 1, t35, 32, 2);
    t36 = (t31 + 4);
    t15 = *((unsigned int *)t36);
    t52 = (!(t15));
    t37 = (t42 + 4);
    t16 = *((unsigned int *)t37);
    t55 = (!(t16));
    t56 = (t52 && t55);
    if (t56 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 8);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t8 = (t0 + 2248);
    t21 = (t0 + 2248);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = (t0 + 2248);
    t30 = (t29 + 64U);
    t32 = *((char **)t30);
    t33 = (t0 + 2568);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng3)));
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 32, t35, 32, t36, 32);
    xsi_vlog_generic_convert_array_indices(t31, t42, t28, t32, 2, 1, t43, 32, 2);
    t37 = (t31 + 4);
    t15 = *((unsigned int *)t37);
    t52 = (!(t15));
    t38 = (t42 + 4);
    t16 = *((unsigned int *)t38);
    t55 = (!(t16));
    t56 = (t52 && t55);
    if (t56 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 16);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 16);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t8 = (t0 + 2248);
    t21 = (t0 + 2248);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = (t0 + 2248);
    t30 = (t29 + 64U);
    t32 = *((char **)t30);
    t33 = (t0 + 2568);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng6)));
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 32, t35, 32, t36, 32);
    xsi_vlog_generic_convert_array_indices(t31, t42, t28, t32, 2, 1, t43, 32, 2);
    t37 = (t31 + 4);
    t15 = *((unsigned int *)t37);
    t52 = (!(t15));
    t38 = (t42 + 4);
    t16 = *((unsigned int *)t38);
    t55 = (!(t16));
    t56 = (t52 && t55);
    if (t56 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 24);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 24);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t8 = (t0 + 2248);
    t21 = (t0 + 2248);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = (t0 + 2248);
    t30 = (t29 + 64U);
    t32 = *((char **)t30);
    t33 = (t0 + 2568);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng9)));
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 32, t35, 32, t36, 32);
    xsi_vlog_generic_convert_array_indices(t31, t42, t28, t32, 2, 1, t43, 32, 2);
    t37 = (t31 + 4);
    t15 = *((unsigned int *)t37);
    t52 = (!(t15));
    t38 = (t42 + 4);
    t16 = *((unsigned int *)t38);
    t55 = (!(t16));
    t56 = (t52 && t55);
    if (t56 == 1)
        goto LAB33;

LAB34:
LAB16:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB6;

LAB12:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(51, ng0);

LAB17:    xsi_set_current_line(52, ng0);
    t28 = (t0 + 2248);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t32 = (t0 + 2248);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2248);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 2568);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_generic_get_array_select_value(t31, 8, t30, t34, t37, 2, 1, t40, 32, 2);
    t41 = (t0 + 1928);
    t45 = (t0 + 1928);
    t46 = (t45 + 72U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng2)));
    t49 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t42, t43, t44, ((int*)(t47)), 2, t48, 32, 1, t49, 32, 1);
    t50 = (t42 + 4);
    t51 = *((unsigned int *)t50);
    t52 = (!(t51));
    t53 = (t43 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (!(t54));
    t56 = (t52 && t55);
    t57 = (t44 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (!(t58));
    t60 = (t56 && t59);
    if (t60 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2248);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 2568);
    t30 = (t29 + 56U);
    t32 = *((char **)t30);
    t33 = ((char*)((ng3)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t32, 32, t33, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t8, t28, 2, 1, t31, 32, 2);
    t34 = (t0 + 1928);
    t35 = (t0 + 1928);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng4)));
    t39 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t42, t43, t44, ((int*)(t37)), 2, t38, 32, 1, t39, 32, 1);
    t40 = (t42 + 4);
    t9 = *((unsigned int *)t40);
    t52 = (!(t9));
    t41 = (t43 + 4);
    t10 = *((unsigned int *)t41);
    t55 = (!(t10));
    t56 = (t52 && t55);
    t45 = (t44 + 4);
    t11 = *((unsigned int *)t45);
    t59 = (!(t11));
    t60 = (t56 && t59);
    if (t60 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2248);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 2568);
    t30 = (t29 + 56U);
    t32 = *((char **)t30);
    t33 = ((char*)((ng6)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t32, 32, t33, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t8, t28, 2, 1, t31, 32, 2);
    t34 = (t0 + 1928);
    t35 = (t0 + 1928);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng7)));
    t39 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t42, t43, t44, ((int*)(t37)), 2, t38, 32, 1, t39, 32, 1);
    t40 = (t42 + 4);
    t9 = *((unsigned int *)t40);
    t52 = (!(t9));
    t41 = (t43 + 4);
    t10 = *((unsigned int *)t41);
    t55 = (!(t10));
    t56 = (t52 && t55);
    t45 = (t44 + 4);
    t11 = *((unsigned int *)t45);
    t59 = (!(t11));
    t60 = (t56 && t59);
    if (t60 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2248);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 2568);
    t30 = (t29 + 56U);
    t32 = *((char **)t30);
    t33 = ((char*)((ng9)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t32, 32, t33, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t8, t28, 2, 1, t31, 32, 2);
    t34 = (t0 + 1928);
    t35 = (t0 + 1928);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng10)));
    t39 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t42, t43, t44, ((int*)(t37)), 2, t38, 32, 1, t39, 32, 1);
    t40 = (t42 + 4);
    t9 = *((unsigned int *)t40);
    t52 = (!(t9));
    t41 = (t43 + 4);
    t10 = *((unsigned int *)t41);
    t55 = (!(t10));
    t56 = (t52 && t55);
    t45 = (t44 + 4);
    t11 = *((unsigned int *)t45);
    t59 = (!(t11));
    t60 = (t56 && t59);
    if (t60 == 1)
        goto LAB24;

LAB25:    goto LAB16;

LAB18:    t61 = *((unsigned int *)t44);
    t62 = (t61 + 0);
    t63 = *((unsigned int *)t42);
    t64 = *((unsigned int *)t43);
    t65 = (t63 - t64);
    t66 = (t65 + 1);
    xsi_vlogvar_assign_value(t41, t31, t62, *((unsigned int *)t43), t66);
    goto LAB19;

LAB20:    t12 = *((unsigned int *)t44);
    t62 = (t12 + 0);
    t13 = *((unsigned int *)t42);
    t14 = *((unsigned int *)t43);
    t65 = (t13 - t14);
    t66 = (t65 + 1);
    xsi_vlogvar_assign_value(t34, t6, t62, *((unsigned int *)t43), t66);
    goto LAB21;

LAB22:    t12 = *((unsigned int *)t44);
    t62 = (t12 + 0);
    t13 = *((unsigned int *)t42);
    t14 = *((unsigned int *)t43);
    t65 = (t13 - t14);
    t66 = (t65 + 1);
    xsi_vlogvar_assign_value(t34, t6, t62, *((unsigned int *)t43), t66);
    goto LAB23;

LAB24:    t12 = *((unsigned int *)t44);
    t62 = (t12 + 0);
    t13 = *((unsigned int *)t42);
    t14 = *((unsigned int *)t43);
    t65 = (t13 - t14);
    t66 = (t65 + 1);
    xsi_vlogvar_assign_value(t34, t6, t62, *((unsigned int *)t43), t66);
    goto LAB25;

LAB27:    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t42);
    t59 = (t17 - t18);
    t60 = (t59 + 1);
    xsi_vlogvar_assign_value(t8, t6, 0, *((unsigned int *)t42), t60);
    goto LAB28;

LAB29:    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t42);
    t59 = (t17 - t18);
    t60 = (t59 + 1);
    xsi_vlogvar_assign_value(t8, t6, 0, *((unsigned int *)t42), t60);
    goto LAB30;

LAB31:    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t42);
    t59 = (t17 - t18);
    t60 = (t59 + 1);
    xsi_vlogvar_assign_value(t8, t6, 0, *((unsigned int *)t42), t60);
    goto LAB32;

LAB33:    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t42);
    t59 = (t17 - t18);
    t60 = (t59 + 1);
    xsi_vlogvar_assign_value(t8, t6, 0, *((unsigned int *)t42), t60);
    goto LAB34;

LAB35:    goto LAB1;

}

static void Forked_36_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4112);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_37_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4360);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB5:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_38_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 4800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4608);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB5:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_39_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 5048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4856);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB5:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_40_6(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 5296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5104);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}


extern void work_m_00000000002364751153_0450250084_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Initial_43_1,(void *)Forked_36_2,(void *)Forked_37_3,(void *)Forked_38_4,(void *)Forked_39_5,(void *)Forked_40_6};
	xsi_register_didat("work_m_00000000002364751153_0450250084", "isim/memory_test_isim_beh.exe.sim/work/m_00000000002364751153_0450250084.didat");
	xsi_register_executes(pe);
}
