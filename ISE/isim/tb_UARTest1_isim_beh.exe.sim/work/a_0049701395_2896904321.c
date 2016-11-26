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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *IEEE_P_2592010699;
static const char *ng1 = "_t_digits0DummyElemSubtype";
extern char *STD_STANDARD;
static const char *ng3 = "_t_digits0Base";
static const char *ng4 = "_t_digits0";
extern char *IEEE_P_3499444699;
static const char *ng6 = "D:/video_controller/uCAMII/NEXSYS3/sourcesvhdl/led7seg.vhd";

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


char *work_a_0049701395_2896904321_sub_3231277354_211946527(char *t1, char *t2, int t3)
{
    char t4[128];
    char t5[8];
    char t8[16];
    char t15[8];
    char *t0;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    int t25;
    char *t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t6 = xsi_get_transient_memory(4U);
    memset(t6, 0, 4U);
    t7 = t6;
    memset(t7, (unsigned char)3, 4U);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 3;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 3);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t4 + 4U);
    t13 = ((IEEE_P_2592010699) + 4024);
    t14 = (t10 + 88U);
    *((char **)t14) = t13;
    t16 = (t10 + 56U);
    *((char **)t16) = t15;
    memcpy(t15, t6, 4U);
    t17 = (t10 + 64U);
    *((char **)t17) = t8;
    t18 = (t10 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t5 + 4U);
    *((int *)t19) = t3;
    t20 = (t10 + 56U);
    t21 = *((char **)t20);
    t20 = (t8 + 0U);
    t22 = *((int *)t20);
    t23 = (t8 + 8U);
    t24 = *((int *)t23);
    t25 = (t3 - t22);
    t12 = (t25 * t24);
    t26 = (t8 + 4U);
    t27 = *((int *)t26);
    xsi_vhdl_check_range_of_index(t22, t27, t24, t3);
    t28 = (1U * t12);
    t29 = (0 + t28);
    t30 = (t21 + t29);
    *((unsigned char *)t30) = (unsigned char)2;
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t22 = *((int *)t13);
    t14 = (t8 + 8U);
    t24 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t22;
    t17 = (t16 + 8U);
    *((int *)t17) = t24;
    t25 = (t22 - t11);
    t28 = (t25 * t24);
    t28 = (t28 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t28;

LAB1:    return t0;
LAB2:;
}

char *work_a_0049701395_2896904321_sub_4218378969_211946527(char *t1, char *t2, char *t3, int t4)
{
    char t5[584];
    char t6[24];
    char t7[16];
    char t12[16];
    char t20[16];
    char t61[32];
    char t70[16];
    char t76[16];
    char t82[8];
    char *t0;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    char *t62;
    char *t63;
    int t64;
    unsigned int t65;
    char *t66;
    int t67;
    char *t68;
    char *t69;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t77;
    char *t78;
    int t79;
    char *t80;
    char *t81;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned char t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    int t92;
    char *t93;
    int t94;
    int t95;
    char *t96;
    int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 15;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t10 = (0 - 15);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = ((IEEE_P_2592010699) + 4024);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 3;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t15 = (0 - 3);
    t11 = (t15 * -1);
    t11 = (t11 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t11;
    t14 = (t5 + 4U);
    xsi_create_subtype(t14, ng1, t9, t12, 2);
    t16 = (t5 + 4U);
    t17 = ((STD_STANDARD) + 384);
    t18 = (t5 + 116U);
    xsi_create_unconstr_array_type(t18, ng3, t16, 1, t17);
    t19 = (t5 + 116U);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 3;
    t22 = (t21 + 4U);
    *((int *)t22) = 0;
    t22 = (t21 + 8U);
    *((int *)t22) = -1;
    t23 = (0 - 3);
    t11 = (t23 * -1);
    t11 = (t11 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t11;
    t22 = (t5 + 228U);
    xsi_create_subtype(t22, ng4, t19, t20, 2);
    t24 = xsi_get_transient_memory(16U);
    memset(t24, 0, 16U);
    t25 = t24;
    t26 = (t7 + 0U);
    t27 = *((int *)t26);
    t11 = (t27 - 15);
    t28 = (t11 * 1U);
    t29 = (0 + t28);
    t30 = (t3 + t29);
    t31 = (12 - 15);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t33 = (1U * t32);
    memcpy(t25, t30, t33);
    t25 = (t25 + t33);
    t34 = (t7 + 0U);
    t35 = *((int *)t34);
    t36 = (t35 - 11);
    t37 = (t36 * 1U);
    t38 = (0 + t37);
    t39 = (t3 + t38);
    t40 = (8 - 11);
    t41 = (t40 * -1);
    t41 = (t41 + 1);
    t42 = (1U * t41);
    memcpy(t25, t39, t42);
    t25 = (t25 + t42);
    t43 = (t7 + 0U);
    t44 = *((int *)t43);
    t45 = (t44 - 7);
    t46 = (t45 * 1U);
    t47 = (0 + t46);
    t48 = (t3 + t47);
    t49 = (4 - 7);
    t50 = (t49 * -1);
    t50 = (t50 + 1);
    t51 = (1U * t50);
    memcpy(t25, t48, t51);
    t25 = (t25 + t51);
    t52 = (t7 + 0U);
    t53 = *((int *)t52);
    t54 = (t53 - 3);
    t55 = (t54 * 1U);
    t56 = (0 + t55);
    t57 = (t3 + t56);
    t58 = (0 - 3);
    t59 = (t58 * -1);
    t59 = (t59 + 1);
    t60 = (1U * t59);
    memcpy(t25, t57, t60);
    t62 = (t61 + 0U);
    t63 = (t62 + 0U);
    *((int *)t63) = 3;
    t63 = (t62 + 4U);
    *((int *)t63) = 0;
    t63 = (t62 + 8U);
    *((int *)t63) = -1;
    t64 = (0 - 3);
    t65 = (t64 * -1);
    t65 = (t65 + 1);
    t63 = (t62 + 12U);
    *((unsigned int *)t63) = t65;
    t63 = (t61 + 16U);
    t66 = (t63 + 0U);
    *((int *)t66) = 3;
    t66 = (t63 + 4U);
    *((int *)t66) = 0;
    t66 = (t63 + 8U);
    *((int *)t66) = -1;
    t67 = (0 - 3);
    t65 = (t67 * -1);
    t65 = (t65 + 1);
    t66 = (t63 + 12U);
    *((unsigned int *)t66) = t65;
    t66 = (t5 + 340U);
    t68 = (t5 + 228U);
    t69 = (t66 + 88U);
    *((char **)t69) = t68;
    t71 = (t66 + 56U);
    *((char **)t71) = t70;
    memcpy(t70, t24, 16U);
    t72 = (t66 + 64U);
    t73 = (t68 + 80U);
    t74 = *((char **)t73);
    *((char **)t72) = t74;
    t75 = (t66 + 80U);
    *((unsigned int *)t75) = 16U;
    t77 = (t76 + 0U);
    t78 = (t77 + 0U);
    *((int *)t78) = 3;
    t78 = (t77 + 4U);
    *((int *)t78) = 0;
    t78 = (t77 + 8U);
    *((int *)t78) = -1;
    t79 = (0 - 3);
    t65 = (t79 * -1);
    t65 = (t65 + 1);
    t78 = (t77 + 12U);
    *((unsigned int *)t78) = t65;
    t78 = (t5 + 460U);
    t80 = ((IEEE_P_2592010699) + 4024);
    t81 = (t78 + 88U);
    *((char **)t81) = t80;
    t83 = (t78 + 56U);
    *((char **)t83) = t82;
    xsi_type_set_default_value(t80, t82, t76);
    t84 = (t78 + 64U);
    *((char **)t84) = t76;
    t85 = (t78 + 80U);
    *((unsigned int *)t85) = 4U;
    t86 = (t6 + 4U);
    t87 = (t3 != 0);
    if (t87 == 1)
        goto LAB3;

LAB2:    t88 = (t6 + 12U);
    *((char **)t88) = t7;
    t89 = (t6 + 20U);
    *((int *)t89) = t4;
    t90 = (t66 + 56U);
    t91 = *((char **)t90);
    t90 = (t61 + 0U);
    t92 = *((int *)t90);
    t93 = (t61 + 8U);
    t94 = *((int *)t93);
    t95 = (t4 - t92);
    t65 = (t95 * t94);
    t96 = (t61 + 4U);
    t97 = *((int *)t96);
    xsi_vhdl_check_range_of_index(t92, t97, t94, t4);
    t98 = (4U * t65);
    t99 = (0 + t98);
    t100 = (t91 + t99);
    t101 = (t78 + 56U);
    t102 = *((char **)t101);
    t101 = (t102 + 0);
    memcpy(t101, t100, 4U);
    t8 = (t78 + 56U);
    t9 = *((char **)t8);
    t8 = (t76 + 12U);
    t11 = *((unsigned int *)t8);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t9, t11);
    t13 = (t76 + 0U);
    t10 = *((int *)t13);
    t14 = (t76 + 4U);
    t15 = *((int *)t14);
    t16 = (t76 + 8U);
    t23 = *((int *)t16);
    t17 = (t2 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t10;
    t18 = (t17 + 4U);
    *((int *)t18) = t15;
    t18 = (t17 + 8U);
    *((int *)t18) = t23;
    t27 = (t15 - t10);
    t28 = (t27 * t23);
    t28 = (t28 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t28;

LAB1:    t8 = (t5 + 228U);
    xsi_delete_type(t8, 2);
    return t0;
LAB3:    *((char **)t86) = t3;
    goto LAB2;

LAB4:;
}

char *work_a_0049701395_2896904321_sub_177915026_211946527(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t6[16];
    char t11[16];
    char t16[8];
    char *t0;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    char *t22;
    int t23;
    char *t24;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 3;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 3);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t11 + 0U);
    t12 = (t8 + 0U);
    *((int *)t12) = 6;
    t12 = (t8 + 4U);
    *((int *)t12) = 0;
    t12 = (t8 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 6);
    t10 = (t13 * -1);
    t10 = (t10 + 1);
    t12 = (t8 + 12U);
    *((unsigned int *)t12) = t10;
    t12 = (t4 + 4U);
    t14 = ((IEEE_P_2592010699) + 4024);
    t15 = (t12 + 88U);
    *((char **)t15) = t14;
    t17 = (t12 + 56U);
    *((char **)t17) = t16;
    xsi_type_set_default_value(t14, t16, t11);
    t18 = (t12 + 64U);
    *((char **)t18) = t11;
    t19 = (t12 + 80U);
    *((unsigned int *)t19) = 7U;
    t20 = (t5 + 4U);
    t21 = (t3 != 0);
    if (t21 == 1)
        goto LAB3;

LAB2:    t22 = (t5 + 12U);
    *((char **)t22) = t6;
    t23 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t3, t6);
    if (t23 == 0)
        goto LAB5;

LAB22:    if (t23 == 1)
        goto LAB6;

LAB23:    if (t23 == 2)
        goto LAB7;

LAB24:    if (t23 == 3)
        goto LAB8;

LAB25:    if (t23 == 4)
        goto LAB9;

LAB26:    if (t23 == 5)
        goto LAB10;

LAB27:    if (t23 == 6)
        goto LAB11;

LAB28:    if (t23 == 7)
        goto LAB12;

LAB29:    if (t23 == 8)
        goto LAB13;

LAB30:    if (t23 == 9)
        goto LAB14;

LAB31:    if (t23 == 10)
        goto LAB15;

LAB32:    if (t23 == 11)
        goto LAB16;

LAB33:    if (t23 == 12)
        goto LAB17;

LAB34:    if (t23 == 13)
        goto LAB18;

LAB35:    if (t23 == 14)
        goto LAB19;

LAB36:    if (t23 == 15)
        goto LAB20;

LAB37:
LAB21:    t7 = (t1 + 10840);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t7, 7U);

LAB4:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t7 = (t11 + 12U);
    t10 = *((unsigned int *)t7);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t8, t10);
    t14 = (t11 + 0U);
    t9 = *((int *)t14);
    t15 = (t11 + 4U);
    t13 = *((int *)t15);
    t17 = (t11 + 8U);
    t23 = *((int *)t17);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t9;
    t19 = (t18 + 4U);
    *((int *)t19) = t13;
    t19 = (t18 + 8U);
    *((int *)t19) = t23;
    t28 = (t13 - t9);
    t29 = (t28 * t23);
    t29 = (t29 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t29;

LAB1:    return t0;
LAB3:    *((char **)t20) = t3;
    goto LAB2;

LAB5:    t24 = (t1 + 10728);
    t26 = (t12 + 56U);
    t27 = *((char **)t26);
    t26 = (t27 + 0);
    memcpy(t26, t24, 7U);
    goto LAB4;

LAB6:    t7 = (t1 + 10735);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t7, 7U);
    goto LAB4;

LAB7:    t7 = (t1 + 10742);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t7, 7U);
    goto LAB4;

LAB8:    t7 = (t1 + 10749);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t7, 7U);
    goto LAB4;

LAB9:    t7 = (t1 + 10756);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t7, 7U);
    goto LAB4;

LAB10:    t7 = (t1 + 10763);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t7, 7U);
    goto LAB4;

LAB11:    t7 = (t1 + 10770);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t7, 7U);
    goto LAB4;

LAB12:    t7 = (t1 + 10777);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t7, 7U);
    goto LAB4;

LAB13:    t7 = (t1 + 10784);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t7, 7U);
    goto LAB4;

LAB14:    t7 = (t1 + 10791);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t7, 7U);
    goto LAB4;

LAB15:    t7 = (t1 + 10798);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t7, 7U);
    goto LAB4;

LAB16:    t7 = (t1 + 10805);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t7, 7U);
    goto LAB4;

LAB17:    t7 = (t1 + 10812);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t7, 7U);
    goto LAB4;

LAB18:    t7 = (t1 + 10819);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t7, 7U);
    goto LAB4;

LAB19:    t7 = (t1 + 10826);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t7, 7U);
    goto LAB4;

LAB20:    t7 = (t1 + 10833);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t7, 7U);
    goto LAB4;

LAB38:;
LAB39:;
}

static void work_a_0049701395_2896904321_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    int t15;

LAB0:    xsi_set_current_line(74, ng6);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6248);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(75, ng6);
    t1 = (t0 + 6360);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(77, ng6);
    t2 = (t0 + 2792U);
    t6 = *((char **)t2);
    t11 = *((int *)t6);
    t12 = (t11 == 0);
    if (t12 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(80, ng6);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t15 = (t11 - 1);
    t1 = (t0 + 6360);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t15;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 2952U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(78, ng6);
    t2 = (t0 + 6360);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t13 = (t8 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = 3;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

}

static void work_a_0049701395_2896904321_p_1(char *t0)
{
    char t20[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t21;
    unsigned int t22;
    static char *nl0[] = {&&LAB11, &&LAB12};

LAB0:    xsi_set_current_line(88, ng6);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6264);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(89, ng6);
    t1 = xsi_get_transient_memory(7U);
    memset(t1, 0, 7U);
    t5 = t1;
    memset(t5, (unsigned char)3, 7U);
    t6 = (t0 + 6424);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 7U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(90, ng6);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)3, 4U);
    t5 = (t0 + 6488);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(91, ng6);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t5 = (t0 + 6552);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(92, ng6);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t5 = (t0 + 6616);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(93, ng6);
    t1 = (t0 + 6680);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(94, ng6);
    t1 = (t0 + 6744);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(96, ng6);
    t2 = (t0 + 3592U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t13);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 2952U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(98, ng6);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t14 = *((unsigned char *)t8);
    t15 = (t14 == (unsigned char)3);
    if (t15 != 0)
        goto LAB13;

LAB15:
LAB14:    xsi_set_current_line(102, ng6);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB16;

LAB18:
LAB17:    xsi_set_current_line(108, ng6);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB21;

LAB23:
LAB22:    xsi_set_current_line(112, ng6);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB24;

LAB26:
LAB25:    goto LAB10;

LAB12:    xsi_set_current_line(119, ng6);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB34;

LAB35:    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    t3 = t13;

LAB36:    if (t3 != 0)
        goto LAB31;

LAB33:
LAB32:    xsi_set_current_line(122, ng6);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 != (unsigned char)3);
    if (t4 != 0)
        goto LAB37;

LAB39:    xsi_set_current_line(129, ng6);
    t1 = (t0 + 6808);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(130, ng6);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 6552);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(131, ng6);
    t1 = (t0 + 6680);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(132, ng6);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6936);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);

LAB38:    goto LAB10;

LAB13:    xsi_set_current_line(99, ng6);
    t7 = xsi_get_transient_memory(4U);
    memset(t7, 0, 4U);
    t9 = t7;
    memset(t9, (unsigned char)3, 4U);
    t10 = (t0 + 6488);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 4U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(100, ng6);
    t1 = (t0 + 6680);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(103, ng6);
    t1 = (t0 + 10847);
    t6 = work_a_0049701395_2896904321_sub_177915026_211946527(t0, t20, t1);
    t11 = (7U != 7U);
    if (t11 == 1)
        goto LAB19;

LAB20:    t7 = (t0 + 6424);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    memcpy(t16, t6, 7U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(104, ng6);
    t1 = (t0 + 10851);
    t5 = (t0 + 6488);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(105, ng6);
    t1 = (t0 + 6680);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(106, ng6);
    t1 = (t0 + 6744);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB17;

LAB19:    xsi_size_not_matching(7U, 7U, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(109, ng6);
    t1 = (t0 + 6808);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(110, ng6);
    t1 = (t0 + 6680);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB22;

LAB24:    xsi_set_current_line(113, ng6);
    t1 = (t0 + 3432U);
    t5 = *((char **)t1);
    t1 = (t0 + 2792U);
    t6 = *((char **)t1);
    t21 = *((int *)t6);
    t1 = work_a_0049701395_2896904321_sub_4218378969_211946527(t0, t20, t5, t21);
    t7 = (t0 + 4328U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    t9 = (t20 + 12U);
    t22 = *((unsigned int *)t9);
    t22 = (t22 * 1U);
    memcpy(t7, t1, t22);
    xsi_set_current_line(114, ng6);
    t1 = (t0 + 4328U);
    t2 = *((char **)t1);
    t1 = work_a_0049701395_2896904321_sub_177915026_211946527(t0, t20, t2);
    t5 = (t20 + 12U);
    t22 = *((unsigned int *)t5);
    t22 = (t22 * 1U);
    t3 = (7U != t22);
    if (t3 == 1)
        goto LAB27;

LAB28:    t6 = (t0 + 6424);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 7U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(115, ng6);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t21 = *((int *)t2);
    t1 = work_a_0049701395_2896904321_sub_3231277354_211946527(t0, t20, t21);
    t5 = (t20 + 12U);
    t22 = *((unsigned int *)t5);
    t22 = (t22 * 1U);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB29;

LAB30:    t6 = (t0 + 6488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(116, ng6);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6744);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB25;

LAB27:    xsi_size_not_matching(7U, t22, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(4U, t22, 0);
    goto LAB30;

LAB31:    xsi_set_current_line(120, ng6);
    t1 = (t0 + 6808);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB32;

LAB34:    t3 = (unsigned char)1;
    goto LAB36;

LAB37:    xsi_set_current_line(123, ng6);
    t1 = (t0 + 1992U);
    t5 = *((char **)t1);
    t1 = (t0 + 6616);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(124, ng6);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t21 = *((int *)t5);
    t1 = work_a_0049701395_2896904321_sub_4218378969_211946527(t0, t20, t2, t21);
    t6 = (t0 + 4328U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t8 = (t20 + 12U);
    t22 = *((unsigned int *)t8);
    t22 = (t22 * 1U);
    memcpy(t6, t1, t22);
    xsi_set_current_line(125, ng6);
    t1 = (t0 + 4328U);
    t2 = *((char **)t1);
    t1 = work_a_0049701395_2896904321_sub_177915026_211946527(t0, t20, t2);
    t5 = (t20 + 12U);
    t22 = *((unsigned int *)t5);
    t22 = (t22 * 1U);
    t3 = (7U != t22);
    if (t3 == 1)
        goto LAB40;

LAB41:    t6 = (t0 + 6424);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 7U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(126, ng6);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t21 = *((int *)t2);
    t1 = work_a_0049701395_2896904321_sub_3231277354_211946527(t0, t20, t21);
    t5 = (t20 + 12U);
    t22 = *((unsigned int *)t5);
    t22 = (t22 * 1U);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB42;

LAB43:    t6 = (t0 + 6488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(127, ng6);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 6872);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(127, ng6);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6744);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB38;

LAB40:    xsi_size_not_matching(7U, t22, 0);
    goto LAB41;

LAB42:    xsi_size_not_matching(4U, t22, 0);
    goto LAB43;

}

static void work_a_0049701395_2896904321_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    int t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;

LAB0:    xsi_set_current_line(141, ng6);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6280);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(142, ng6);
    t5 = (100000 - 1);
    t1 = (t0 + 4448U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = t5;
    xsi_set_current_line(143, ng6);
    t1 = (t0 + 7000);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(145, ng6);
    t2 = (t0 + 4448U);
    t6 = *((char **)t2);
    t5 = *((int *)t6);
    t4 = (t5 == 0);
    if (t4 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(149, ng6);
    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    t5 = *((int *)t2);
    t9 = (t5 - 1);
    t1 = (t0 + 4448U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = t9;
    xsi_set_current_line(150, ng6);
    t1 = (t0 + 7000);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(146, ng6);
    t9 = (100000 - 1);
    t2 = (t0 + 4448U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t9;
    xsi_set_current_line(147, ng6);
    t1 = (t0 + 7000);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

}


extern void work_a_0049701395_2896904321_init()
{
	static char *pe[] = {(void *)work_a_0049701395_2896904321_p_0,(void *)work_a_0049701395_2896904321_p_1,(void *)work_a_0049701395_2896904321_p_2};
	static char *se[] = {(void *)work_a_0049701395_2896904321_sub_3231277354_211946527,(void *)work_a_0049701395_2896904321_sub_4218378969_211946527,(void *)work_a_0049701395_2896904321_sub_177915026_211946527};
	xsi_register_didat("work_a_0049701395_2896904321", "isim/tb_UARTest1_isim_beh.exe.sim/work/a_0049701395_2896904321.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
