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
static const char *ng0 = "D:/video_controller/uCAMII/NEXSYS3/sourcesvhdl/UARTTransmitter.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3499444699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3499444699_sub_1438093509_3536714472(char *, char *, char *, char *, int );
unsigned char ieee_p_3499444699_sub_2368579451_3536714472(char *, char *, char *, int );
unsigned char ieee_p_3499444699_sub_2368615388_3536714472(char *, char *, char *, int );


static void work_a_2508485221_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 5568);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 5680);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(31, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 5744);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(32, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t5 = (t0 + 5808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(33, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 5872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 5936);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 5680);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 5744);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 5808);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(40, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 5872);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5936);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

}

static void work_a_2508485221_3212880686_p_1(char *t0)
{
    char t11[16];
    char t22[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned int t23;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6};

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6000);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 6064);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 6128);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 6192);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6256);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 6320);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 5584);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 6256);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)3);
    if (t9 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB2;

LAB4:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 6256);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)3);
    if (t9 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB2;

LAB5:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t20 = (0 - 7);
    t12 = (t20 * -1);
    t13 = (1U * t12);
    t21 = (0 + t13);
    t1 = (t2 + t21);
    t3 = *((unsigned char *)t1);
    t4 = (t0 + 6256);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)3);
    if (t9 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB2;

LAB6:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 6256);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)3);
    if (t9 != 0)
        goto LAB33;

LAB35:
LAB34:    goto LAB2;

LAB7:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 6000);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 9750);
    t4 = (t0 + 6064);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6192);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB10:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t1 = (t0 + 9648U);
    t10 = ieee_p_3499444699_sub_2368579451_3536714472(IEEE_P_3499444699, t4, t1, 15);
    if (t10 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 9754);
    t4 = (t0 + 6064);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 9758);
    t4 = (t0 + 6128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 6000);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(67, ng0);
    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t5 = (t0 + 9648U);
    t7 = ieee_p_3499444699_sub_1438093509_3536714472(IEEE_P_3499444699, t11, t6, t5, 1);
    t8 = (t11 + 12U);
    t12 = *((unsigned int *)t8);
    t13 = (1U * t12);
    t14 = (4U != t13);
    if (t14 == 1)
        goto LAB16;

LAB17:    t15 = (t0 + 6064);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 4U);
    xsi_driver_first_trans_fast(t15);
    goto LAB14;

LAB16:    xsi_size_not_matching(4U, t13, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t1 = (t0 + 9648U);
    t10 = ieee_p_3499444699_sub_2368579451_3536714472(IEEE_P_3499444699, t4, t1, 15);
    if (t10 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 9761);
    t4 = (t0 + 6064);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t12 = (7 - 7);
    t13 = (t12 * 1U);
    t21 = (0 + t13);
    t1 = (t2 + t21);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t22 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 7;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t20 = (1 - 7);
    t23 = (t20 * -1);
    t23 = (t23 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t23;
    t4 = xsi_base_array_concat(t4, t11, t5, (char)99, (unsigned char)2, (char)97, t1, t22, (char)101);
    t23 = (1U + 7U);
    t3 = (8U != t23);
    if (t3 == 1)
        goto LAB26;

LAB27:    t7 = (t0 + 6192);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t4, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 9664U);
    t3 = ieee_p_3499444699_sub_2368615388_3536714472(IEEE_P_3499444699, t2, t1, 7);
    if (t3 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 9664U);
    t4 = ieee_p_3499444699_sub_1438093509_3536714472(IEEE_P_3499444699, t11, t2, t1, 1);
    t5 = (t11 + 12U);
    t12 = *((unsigned int *)t5);
    t13 = (1U * t12);
    t3 = (3U != t13);
    if (t3 == 1)
        goto LAB31;

LAB32:    t6 = (t0 + 6128);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 3U);
    xsi_driver_first_trans_fast(t6);

LAB29:
LAB22:    goto LAB19;

LAB21:    xsi_set_current_line(78, ng0);
    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t5 = (t0 + 9648U);
    t7 = ieee_p_3499444699_sub_1438093509_3536714472(IEEE_P_3499444699, t11, t6, t5, 1);
    t8 = (t11 + 12U);
    t12 = *((unsigned int *)t8);
    t13 = (1U * t12);
    t14 = (4U != t13);
    if (t14 == 1)
        goto LAB24;

LAB25:    t15 = (t0 + 6064);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 4U);
    xsi_driver_first_trans_fast(t15);
    goto LAB22;

LAB24:    xsi_size_not_matching(4U, t13, 0);
    goto LAB25;

LAB26:    xsi_size_not_matching(8U, t23, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 6000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB29;

LAB31:    xsi_size_not_matching(3U, t13, 0);
    goto LAB32;

LAB33:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t1 = (t0 + 9648U);
    t10 = ieee_p_3499444699_sub_2368579451_3536714472(IEEE_P_3499444699, t4, t1, 15);
    if (t10 != 0)
        goto LAB36;

LAB38:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 6000);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 6320);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB37:    goto LAB34;

LAB36:    xsi_set_current_line(93, ng0);
    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t5 = (t0 + 9648U);
    t7 = ieee_p_3499444699_sub_1438093509_3536714472(IEEE_P_3499444699, t11, t6, t5, 1);
    t8 = (t11 + 12U);
    t12 = *((unsigned int *)t8);
    t13 = (1U * t12);
    t14 = (4U != t13);
    if (t14 == 1)
        goto LAB39;

LAB40:    t15 = (t0 + 6064);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 4U);
    xsi_driver_first_trans_fast(t15);
    goto LAB37;

LAB39:    xsi_size_not_matching(4U, t13, 0);
    goto LAB40;

}

static void work_a_2508485221_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(102, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6384);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5600);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2508485221_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2508485221_3212880686_p_0,(void *)work_a_2508485221_3212880686_p_1,(void *)work_a_2508485221_3212880686_p_2};
	xsi_register_didat("work_a_2508485221_3212880686", "isim/tb_UARTest1_isim_beh.exe.sim/work/a_2508485221_3212880686.didat");
	xsi_register_executes(pe);
}
