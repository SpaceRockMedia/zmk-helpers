/*                                      68 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────────────╮       ╭────────────────────────────╮
  │  0   1   2   3   4   5  6  │       │  7   8   9  10  11  12  13 │
  │ 14  15  16  17  18  19  20 │       │ 21  22  23  24  25  26  27 │
  │ 28  29  30  31  32  33  34 │       │ 35  36  37  38  39  40  41 │
  │ 42  43  44  45  46  47  48 ╰───┬───╯ 49  50  51  52  53  54  55 │
  ╰───────╮ 56  57  58  59  60  61 │ 62  63  64  65  66  67 ╭───────╯
          ╰────────────────────────┴────────────────────────╯
 ╭──────────────────────────────╮       ╭──────────────────────────────╮
 │ LN5 LN4 LN3 LN2 LN1 LN0 MLN0 │       │ MRN0 RN0 RN1 RN2 RN3 RN4 RN5 │
 │ LT5 LT4 LT3 LT2 LT1 LT0 MLT0 │       │ MRT0 RT0 RT1 RT2 RT3 RT4 RT5 │
 │ LM5 LM4 LM3 LM2 LM1 LM0 MLM0 │       │ MRM0 RM0 RM1 RM2 RM3 RM4 RM5 │
 │ LB5 LB4 LB3 LB2 LB1 LB0 MLB0 ╰───┬───╯ MRB0 RB0 RB1 RB2 RB3 RB4 RB5 │
 ╰───────╮ LH4 LH3 LH2 LH1 LH0  LP0 │ RP0 RH0  RH1 RH2 RH3 RH4 ╭───────╯
         ╰──────────────────────────┴──────────────────────────╯

 N : Number
 T : Top
 M : Middle
 B : Bottom
 H : Hand
*/

#pragma once

#define MLN0  6
#define LN0   5  // left-num row
#define LN1   4
#define LN2   3
#define LN3   2
#define LN4   1
#define LN5   0

#define MRN0  7  // right-num row
#define RN0   8
#define RN1   9
#define RN2  10
#define RN3  11
#define RN4  12
#define RN5  13

#define MLT0 20  // left-top row
#define LT0  19
#define LT1  18
#define LT2  17
#define LT3  16
#define LT4  15
#define LT5  14

#define MRT0 21  // right-top row
#define RT0  22
#define RT1  23
#define RT2  24
#define RT3  25
#define RT4  26
#define RT5  27

#define MLM0 34  // left-middle row
#define LM0  33
#define LM1  32
#define LM2  31
#define LM3  30
#define LM4  29
#define LM5  28

#define MRM0 35  // right-middle row
#define RM0  36
#define RM1  37
#define RM2  38
#define RM3  39
#define RM4  40
#define RM5  41

#define MLB0 48  // left-bottom row
#define LB0  47
#define LB1  46
#define LB2  45
#define LB3  44
#define LB4  43
#define LB5  42

#define MRB0 49  // right-bottom row
#define RB0  50
#define RB1  51
#define RB2  52
#define RB3  53
#define RB4  54
#define RB5  55

#define LP0  61  // left thumb keys
#define LH0  60
#define LH1  59
#define LH2  58
#define LH3  57
#define LH4  56

#define RP0  62  // right thumb keys
#define RH0  63
#define RH1  64
#define RH2  65
#define RH3  66
#define RH4  67
