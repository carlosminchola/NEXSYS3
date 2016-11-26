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
static const char *ng0 = "D:/video_controller/uCAMII/NEXSYS3/sourcesvhdl/UARTCtrl.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_1652107575_3212880686_p_0(char *t0)
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
    char *t10;

LAB0:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 4288);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 7193);
    t6 = (t0 + 4400);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(26, ng0);
    t1 = (t0 + 4464);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t2 = (t0 + 4400);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4464);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

}

static void work_a_1652107575_3212880686_p_1(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5};

LAB0:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 4528);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t1 = (t0 + 4592);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 4656);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t7);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4304);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t3 = (t0 + 7148U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t8, t4, t3, 1);
    t6 = (t8 + 12U);
    t9 = *((unsigned int *)t6);
    t10 = (1U * t9);
    t11 = (8U != t10);
    if (t11 == 1)
        goto LAB6;

LAB7:    t12 = (t0 + 4528);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t5, 8U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 4592);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 7148U);
    t3 = (t0 + 7201);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 7;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t17 = (7 - 0);
    t9 = (t17 * 1);
    t9 = (t9 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t9;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB2;

LAB4:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 4656);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 4592);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t11 = (t7 == (unsigned char)3);
    if (t11 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB2;

LAB6:    xsi_size_not_matching(8U, t10, 0);
    goto LAB7;

LAB8:    xsi_set_current_line(45, ng0);
    t6 = (t0 + 7209);
    t13 = (t0 + 4528);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t6, 8U);
    xsi_driver_first_trans_fast(t13);
    goto LAB9;

LAB11:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 4592);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

}

static void work_a_1652107575_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(58, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 4720);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4320);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1652107575_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1652107575_3212880686_p_0,(void *)work_a_1652107575_3212880686_p_1,(void *)work_a_1652107575_3212880686_p_2};
	xsi_register_didat("work_a_1652107575_3212880686", "isim/tb_UARTest1_isim_beh.exe.sim/work/a_1652107575_3212880686.didat");
	xsi_register_executes(pe);
}
