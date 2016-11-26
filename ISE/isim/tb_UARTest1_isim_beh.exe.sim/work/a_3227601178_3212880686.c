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
static const char *ng0 = "D:/video_controller/uCAMII/NEXSYS3/sourcesvhdl/UARTReciever.vhd";
extern char *IEEE_P_3499444699;
extern char *IEEE_P_2592010699;

char *ieee_p_3499444699_sub_1438093509_3536714472(char *, char *, char *, char *, int );
unsigned char ieee_p_3499444699_sub_2368579451_3536714472(char *, char *, char *, int );
unsigned char ieee_p_3499444699_sub_2368615388_3536714472(char *, char *, char *, int );


static void work_a_3227601178_3212880686_p_0(char *t0)
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
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;

LAB0:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 5408);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 5520);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 9310);
    t5 = (t0 + 5584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 9314);
    t5 = (t0 + 5648);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(32, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 5712);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1992U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t2 = (t0 + 5520);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = t12;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5584);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 5648);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 5712);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB10;

}

static void work_a_3227601178_3212880686_p_1(char *t0)
{
    char t12[16];
    char t21[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    int t22;
    unsigned int t23;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6};

LAB0:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 5840);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 5904);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 5968);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 6032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 5424);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t9 = (t8 == (unsigned char)2);
    if (t9 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB2;

LAB4:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB2;

LAB5:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB2;

LAB6:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB33;

LAB35:
LAB34:    goto LAB2;

LAB7:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 5776);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 9317);
    t4 = (t0 + 5840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB8;

LAB10:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t1 = (t0 + 9188U);
    t9 = ieee_p_3499444699_sub_2368579451_3536714472(IEEE_P_3499444699, t4, t1, 7);
    if (t9 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 9321);
    t4 = (t0 + 5840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 9325);
    t4 = (t0 + 5904);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 5776);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(60, ng0);
    t5 = (t0 + 2312U);
    t6 = *((char **)t5);
    t5 = (t0 + 9188U);
    t7 = ieee_p_3499444699_sub_1438093509_3536714472(IEEE_P_3499444699, t12, t6, t5, 1);
    t10 = (t12 + 12U);
    t13 = *((unsigned int *)t10);
    t14 = (1U * t13);
    t15 = (4U != t14);
    if (t15 == 1)
        goto LAB16;

LAB17:    t11 = (t0 + 5840);
    t16 = (t11 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 4U);
    xsi_driver_first_trans_fast(t11);
    goto LAB14;

LAB16:    xsi_size_not_matching(4U, t14, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t1 = (t0 + 9188U);
    t9 = ieee_p_3499444699_sub_2368579451_3536714472(IEEE_P_3499444699, t4, t1, 15);
    if (t9 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 9328);
    t4 = (t0 + 5840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2952U);
    t4 = *((char **)t1);
    t13 = (7 - 7);
    t14 = (t13 * 1U);
    t20 = (0 + t14);
    t1 = (t4 + t20);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t21 + 0U);
    t10 = (t7 + 0U);
    *((int *)t10) = 7;
    t10 = (t7 + 4U);
    *((int *)t10) = 1;
    t10 = (t7 + 8U);
    *((int *)t10) = -1;
    t22 = (1 - 7);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t10 = (t7 + 12U);
    *((unsigned int *)t10) = t23;
    t5 = xsi_base_array_concat(t5, t12, t6, (char)99, t3, (char)97, t1, t21, (char)101);
    t23 = (1U + 7U);
    t8 = (8U != t23);
    if (t8 == 1)
        goto LAB26;

LAB27:    t10 = (t0 + 5968);
    t11 = (t10 + 56U);
    t16 = *((char **)t11);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t5, 8U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 9204U);
    t3 = ieee_p_3499444699_sub_2368615388_3536714472(IEEE_P_3499444699, t2, t1, 7);
    if (t3 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 9204U);
    t4 = ieee_p_3499444699_sub_1438093509_3536714472(IEEE_P_3499444699, t12, t2, t1, 1);
    t5 = (t12 + 12U);
    t13 = *((unsigned int *)t5);
    t14 = (1U * t13);
    t3 = (3U != t14);
    if (t3 == 1)
        goto LAB31;

LAB32:    t6 = (t0 + 5904);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t16 = *((char **)t11);
    memcpy(t16, t4, 3U);
    xsi_driver_first_trans_fast(t6);

LAB29:
LAB22:    goto LAB19;

LAB21:    xsi_set_current_line(71, ng0);
    t5 = (t0 + 2312U);
    t6 = *((char **)t5);
    t5 = (t0 + 9188U);
    t7 = ieee_p_3499444699_sub_1438093509_3536714472(IEEE_P_3499444699, t12, t6, t5, 1);
    t10 = (t12 + 12U);
    t13 = *((unsigned int *)t10);
    t14 = (1U * t13);
    t15 = (4U != t14);
    if (t15 == 1)
        goto LAB24;

LAB25:    t11 = (t0 + 5840);
    t16 = (t11 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 4U);
    xsi_driver_first_trans_fast(t11);
    goto LAB22;

LAB24:    xsi_size_not_matching(4U, t14, 0);
    goto LAB25;

LAB26:    xsi_size_not_matching(8U, t23, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 5776);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB29;

LAB31:    xsi_size_not_matching(3U, t14, 0);
    goto LAB32;

LAB33:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t1 = (t0 + 9188U);
    t9 = ieee_p_3499444699_sub_2368579451_3536714472(IEEE_P_3499444699, t4, t1, 15);
    if (t9 != 0)
        goto LAB36;

LAB38:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 5776);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 6032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB37:    goto LAB34;

LAB36:    xsi_set_current_line(85, ng0);
    t5 = (t0 + 2312U);
    t6 = *((char **)t5);
    t5 = (t0 + 9188U);
    t7 = ieee_p_3499444699_sub_1438093509_3536714472(IEEE_P_3499444699, t12, t6, t5, 1);
    t10 = (t12 + 12U);
    t13 = *((unsigned int *)t10);
    t14 = (1U * t13);
    t15 = (4U != t14);
    if (t15 == 1)
        goto LAB39;

LAB40:    t11 = (t0 + 5840);
    t16 = (t11 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 4U);
    xsi_driver_first_trans_fast(t11);
    goto LAB37;

LAB39:    xsi_size_not_matching(4U, t14, 0);
    goto LAB40;

}

static void work_a_3227601178_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(93, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 6096);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5440);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3227601178_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3227601178_3212880686_p_0,(void *)work_a_3227601178_3212880686_p_1,(void *)work_a_3227601178_3212880686_p_2};
	xsi_register_didat("work_a_3227601178_3212880686", "isim/tb_UARTest1_isim_beh.exe.sim/work/a_3227601178_3212880686.didat");
	xsi_register_executes(pe);
}
