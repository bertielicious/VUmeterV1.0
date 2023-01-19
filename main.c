/*
 * File:   main.c
 * Author: Phil Glazzard
 * MPLABX IDE v6.00
 * XC8 v2.36
 * Optimisations 0
 *
 * Created on 11 December 2022, 18:23
 * 
 * * *                  16f1459
 *                  ---------
 *   +5 Volts    1 |Vdd      | 20 0 Volts
                 2 |RA5   RA0| 19   
 *               3 |RA4   RA1| 18   
      MCLR       4 |RA3      | 17  
                 5 |RC5   RC0| 16 
 DIAGNOSTIC LED  6 |RC4   RC1| 15  
 *               7 |RC3   RC2| 14  ADC AN13 input = 0 - 1.024V
 *               8 |RC6   RB4| 13  
                 9 |RC7   RB5| 12  
 *    TX        10 |RB7   RB6| 11  
 *                  ---------
 * 
 * 
 * sin angle 0   0.000000
 sin angle 1   0.017452
 sin angle 2   0.034899
 sin angle 3   0.052336
 sin angle 4   0.069756
 sin angle 5   0.087156
 sin angle 6   0.104528
 sin angle 7   0.121869
 sin angle 8   0.139173
 sin angle 9   0.156434
 sin angle 10   0.173648
 sin angle 11   0.190809
 sin angle 12   0.207912
 sin angle 13   0.224951
 sin angle 14   0.241922
 sin angle 15   0.258819
 sin angle 16   0.275637
 sin angle 17   0.292372
 sin angle 18   0.309017
 sin angle 19   0.325568
 sin angle 20   0.342020
 sin angle 21   0.358368
 sin angle 22   0.374607
 sin angle 23   0.390731
 sin angle 24   0.406737
 sin angle 25   0.422618
 sin angle 26   0.438371
 sin angle 27   0.453991
 sin angle 28   0.469472
 sin angle 29   0.484810
 sin angle 30   0.500000
 sin angle 31   0.515038
 sin angle 32   0.529919
 sin angle 33   0.544639
 sin angle 34   0.559193
 sin angle 35   0.573577
 sin angle 36   0.587785
 sin angle 37   0.601815
 sin angle 38   0.615662
 sin angle 39   0.629320
 sin angle 40   0.642788
 sin angle 41   0.656059
 sin angle 42   0.669131
 sin angle 43   0.681998
 sin angle 44   0.694658
 sin angle 45   0.707107
 sin angle 46   0.719340
 sin angle 47   0.731354
 sin angle 48   0.743145
 sin angle 49   0.754710
 sin angle 50   0.766044
 sin angle 51   0.777146
 sin angle 52   0.788011
 sin angle 53   0.798636
 sin angle 54   0.809017
 sin angle 55   0.819152
 sin angle 56   0.829038
 sin angle 57   0.838671
 sin angle 58   0.848048
 sin angle 59   0.857167
 sin angle 60   0.866025
 sin angle 61   0.874620
 sin angle 62   0.882948
 sin angle 63   0.891007
 sin angle 64   0.898794
 sin angle 65   0.906308
 sin angle 66   0.913545
 sin angle 67   0.920505
 sin angle 68   0.927184
 sin angle 69   0.933580
 sin angle 70   0.939693
 sin angle 71   0.945519
 sin angle 72   0.951057
 sin angle 73   0.956305
 sin angle 74   0.961262
 sin angle 75   0.965926
 sin angle 76   0.970296
 sin angle 77   0.974370
 sin angle 78   0.978148
 sin angle 79   0.981627
 sin angle 80   0.984808
 sin angle 81   0.987688
 sin angle 82   0.990268
 sin angle 83   0.992546
 sin angle 84   0.994522
 sin angle 85   0.996195
 sin angle 86   0.997564
 sin angle 87   0.998630
 sin angle 88   0.999391
 sin angle 89   0.999848
 sin angle 90   1.000000
 sin angle 91   0.999848
 sin angle 92   0.999391
 sin angle 93   0.998630
 sin angle 94   0.997564
 sin angle 95   0.996195
 sin angle 96   0.994522
 sin angle 97   0.992546
 sin angle 98   0.990268
 sin angle 99   0.987688
 sin angle 100   0.984808
 sin angle 101   0.981627
 sin angle 102   0.978148
 sin angle 103   0.974370
 sin angle 104   0.970296
 sin angle 105   0.965926
 sin angle 106   0.961262
 sin angle 107   0.956305
 sin angle 108   0.951056
 sin angle 109   0.945519
 sin angle 110   0.939693
 sin angle 111   0.933580
 sin angle 112   0.927184
 sin angle 113   0.920505
 sin angle 114   0.913545
 sin angle 115   0.906308
 sin angle 116   0.898794
 sin angle 117   0.891007
 sin angle 118   0.882948
 sin angle 119   0.874620
 sin angle 120   0.866025
 sin angle 121   0.857167
 sin angle 122   0.848048
 sin angle 123   0.838671
 sin angle 124   0.829037
 sin angle 125   0.819152
 sin angle 126   0.809017
 sin angle 127   0.798635
 sin angle 128   0.788011
 sin angle 129   0.777146
 sin angle 130   0.766044
 sin angle 131   0.754709
 sin angle 132   0.743145
 sin angle 133   0.731354
 sin angle 134   0.719340
 sin angle 135   0.707107
 sin angle 136   0.694658
 sin angle 137   0.681998
 sin angle 138   0.669131
 sin angle 139   0.656059
 sin angle 140   0.642787
 sin angle 141   0.629320
 sin angle 142   0.615661
 sin angle 143   0.601815
 sin angle 144   0.587785
 sin angle 145   0.573576
 sin angle 146   0.559193
 sin angle 147   0.544639
 sin angle 148   0.529919
 sin angle 149   0.515038
 sin angle 150   0.500000
 sin angle 151   0.484810
 sin angle 152   0.469472
 sin angle 153   0.453990
 sin angle 154   0.438371
 sin angle 155   0.422618
 sin angle 156   0.406737
 sin angle 157   0.390731
 sin angle 158   0.374606
 sin angle 159   0.358368
 sin angle 160   0.342020
 sin angle 161   0.325568
 sin angle 162   0.309017
 sin angle 163   0.292372
 sin angle 164   0.275637
 sin angle 165   0.258819
 sin angle 166   0.241922
 sin angle 167   0.224951
 sin angle 168   0.207912
 sin angle 169   0.190809
 sin angle 170   0.173648
 sin angle 171   0.156434
 sin angle 172   0.139173
 sin angle 173   0.121869
 sin angle 174   0.104528
 sin angle 175   0.087156
 sin angle 176   0.069756
 sin angle 177   0.052336
 sin angle 178   0.034899
 sin angle 179   0.017452
 sin angle 180   -0.000000
 sin angle 181   -0.017452
 sin angle 182   -0.034900
 sin angle 183   -0.052336
 sin angle 184   -0.069757
 sin angle 185   -0.087156
 sin angle 186   -0.104528
 sin angle 187   -0.121869
 sin angle 188   -0.139173
 sin angle 189   -0.156434
 sin angle 190   -0.173648
 sin angle 191   -0.190809
 sin angle 192   -0.207912
 sin angle 193   -0.224951
 sin angle 194   -0.241922
 sin angle 195   -0.258819
 sin angle 196   -0.275638
 sin angle 197   -0.292372
 sin angle 198   -0.309017
 sin angle 199   -0.325568
 sin angle 200   -0.342020
 sin angle 201   -0.358368
 sin angle 202   -0.374607
 sin angle 203   -0.390731
 sin angle 204   -0.406737
 sin angle 205   -0.422618
 sin angle 206   -0.438371
 sin angle 207   -0.453991
 sin angle 208   -0.469472
 sin angle 209   -0.484810
 sin angle 210   -0.500000
 sin angle 211   -0.515038
 sin angle 212   -0.529919
 sin angle 213   -0.544639
 sin angle 214   -0.559193
 sin angle 215   -0.573576
 sin angle 216   -0.587786
 sin angle 217   -0.601815
 sin angle 218   -0.615661
 sin angle 219   -0.629321
 sin angle 220   -0.642788
 sin angle 221   -0.656059
 sin angle 222   -0.669131
 sin angle 223   -0.681998
 sin angle 224   -0.694659
 sin angle 225   -0.707107
 sin angle 226   -0.719340
 sin angle 227   -0.731354
 sin angle 228   -0.743145
 sin angle 229   -0.754710
 sin angle 230   -0.766045
 sin angle 231   -0.777146
 sin angle 232   -0.788011
 sin angle 233   -0.798636
 sin angle 234   -0.809017
 sin angle 235   -0.819152
 sin angle 236   -0.829038
 sin angle 237   -0.838671
 sin angle 238   -0.848048
 sin angle 239   -0.857167
 sin angle 240   -0.866025
 sin angle 241   -0.874620
 sin angle 242   -0.882948
 sin angle 243   -0.891007
 sin angle 244   -0.898794
 sin angle 245   -0.906308
 sin angle 246   -0.913545
 sin angle 247   -0.920505
 sin angle 248   -0.927184
 sin angle 249   -0.933581
 sin angle 250   -0.939693
 sin angle 251   -0.945519
 sin angle 252   -0.951056
 sin angle 253   -0.956305
 sin angle 254   -0.961262
 sin angle 255   -0.965926
 sin angle 256   -0.970296
 sin angle 257   -0.974370
 sin angle 258   -0.978148
 sin angle 259   -0.981627
 sin angle 260   -0.984808
 sin angle 261   -0.987688
 sin angle 262   -0.990268
 sin angle 263   -0.992546
 sin angle 264   -0.994522
 sin angle 265   -0.996195
 sin angle 266   -0.997564
 sin angle 267   -0.998630
 sin angle 268   -0.999391
 sin angle 269   -0.999848
 sin angle 270   -1.000000
 sin angle 271   -0.999848
 sin angle 272   -0.999391
 sin angle 273   -0.998630
 sin angle 274   -0.997564
 sin angle 275   -0.996195
 sin angle 276   -0.994522
 sin angle 277   -0.992546
 sin angle 278   -0.990268
 sin angle 279   -0.987688
 sin angle 280   -0.984808
 sin angle 281   -0.981627
 sin angle 282   -0.978148
 sin angle 283   -0.974370
 sin angle 284   -0.970296
 sin angle 285   -0.965926
 sin angle 286   -0.961262
 sin angle 287   -0.956305
 sin angle 288   -0.951056
 sin angle 289   -0.945519
 sin angle 290   -0.939692
 sin angle 291   -0.933580
 sin angle 292   -0.927184
 sin angle 293   -0.920505
 sin angle 294   -0.913545
 sin angle 295   -0.906308
 sin angle 296   -0.898794
 sin angle 297   -0.891006
 sin angle 298   -0.882948
 sin angle 299   -0.874620
 sin angle 300   -0.866025
 sin angle 301   -0.857167
 sin angle 302   -0.848048
 sin angle 303   -0.838670
 sin angle 304   -0.829038
 sin angle 305   -0.819152
 sin angle 306   -0.809017
 sin angle 307   -0.798635
 sin angle 308   -0.788011
 sin angle 309   -0.777146
 sin angle 310   -0.766044
 sin angle 311   -0.754710
 sin angle 312   -0.743145
 sin angle 313   -0.731354
 sin angle 314   -0.719339
 sin angle 315   -0.707107
 sin angle 316   -0.694658
 sin angle 317   -0.681998
 sin angle 318   -0.669131
 sin angle 319   -0.656059
 sin angle 320   -0.642787
 sin angle 321   -0.629320
 sin angle 322   -0.615661
 sin angle 323   -0.601815
 sin angle 324   -0.587785
 sin angle 325   -0.573576
 sin angle 326   -0.559193
 sin angle 327   -0.544639
 sin angle 328   -0.529919
 sin angle 329   -0.515038
 sin angle 330   -0.500000
 sin angle 331   -0.484809
 sin angle 332   -0.469471
 sin angle 333   -0.453990
 sin angle 334   -0.438371
 sin angle 335   -0.422618
 sin angle 336   -0.406736
 sin angle 337   -0.390731
 sin angle 338   -0.374606
 sin angle 339   -0.358368
 sin angle 340   -0.342020
 sin angle 341   -0.325568
 sin angle 342   -0.309017
 sin angle 343   -0.292371
 sin angle 344   -0.275637
 sin angle 345   -0.258819
 sin angle 346   -0.241922
 sin angle 347   -0.224951
 sin angle 348   -0.207912
 sin angle 349   -0.190809
 sin angle 350   -0.173648
 sin angle 351   -0.156434
 sin angle 352   -0.139173
 sin angle 353   -0.121869
 sin angle 354   -0.104528
 sin angle 355   -0.087156
 sin angle 356   -0.069756
 sin angle 357   -0.052336
 sin angle 358   -0.034900
 sin angle 359   -0.017452
 sin angle 360   0.000000
 * 
 * 
 cos angle 0   1.000000
 cos angle 1   0.999848
 cos angle 2   0.999391
 cos angle 3   0.998630
 cos angle 4   0.997564
 cos angle 5   0.996195
 cos angle 6   0.994522
 cos angle 7   0.992546
 cos angle 8   0.990268
 cos angle 9   0.987688
 cos angle 10   0.984808
 cos angle 11   0.981627
 cos angle 12   0.978148
 cos angle 13   0.974370
 cos angle 14   0.970296
 cos angle 15   0.965926
 cos angle 16   0.961262
 cos angle 17   0.956305
 cos angle 18   0.951057
 cos angle 19   0.945519
 cos angle 20   0.939693
 cos angle 21   0.933580
 cos angle 22   0.927184
 cos angle 23   0.920505
 cos angle 24   0.913545
 cos angle 25   0.906308
 cos angle 26   0.898794
 cos angle 27   0.891007
 cos angle 28   0.882948
 cos angle 29   0.874620
 cos angle 30   0.866025
 cos angle 31   0.857167
 cos angle 32   0.848048
 cos angle 33   0.838671
 cos angle 34   0.829038
 cos angle 35   0.819152
 cos angle 36   0.809017
 cos angle 37   0.798635
 cos angle 38   0.788011
 cos angle 39   0.777146
 cos angle 40   0.766044
 cos angle 41   0.754710
 cos angle 42   0.743145
 cos angle 43   0.731354
 cos angle 44   0.719340
 cos angle 45   0.707107
 cos angle 46   0.694658
 cos angle 47   0.681998
 cos angle 48   0.669131
 cos angle 49   0.656059
 cos angle 50   0.642788
 cos angle 51   0.629320
 cos angle 52   0.615661
 cos angle 53   0.601815
 cos angle 54   0.587785
 cos angle 55   0.573576
 cos angle 56   0.559193
 cos angle 57   0.544639
 cos angle 58   0.529919
 cos angle 59   0.515038
 cos angle 60   0.500000
 cos angle 61   0.484810
 cos angle 62   0.469472
 cos angle 63   0.453991
 cos angle 64   0.438371
 cos angle 65   0.422618
 cos angle 66   0.406737
 cos angle 67   0.390731
 cos angle 68   0.374607
 cos angle 69   0.358368
 cos angle 70   0.342020
 cos angle 71   0.325568
 cos angle 72   0.309017
 cos angle 73   0.292372
 cos angle 74   0.275637
 cos angle 75   0.258819
 cos angle 76   0.241922
 cos angle 77   0.224951
 cos angle 78   0.207912
 cos angle 79   0.190809
 cos angle 80   0.173648
 cos angle 81   0.156434
 cos angle 82   0.139173
 cos angle 83   0.121869
 cos angle 84   0.104528
 cos angle 85   0.087156
 cos angle 86   0.069756
 cos angle 87   0.052336
 cos angle 88   0.034899
 cos angle 89   0.017452
 cos angle 90   -0.000000
 cos angle 91   -0.017452
 cos angle 92   -0.034900
 cos angle 93   -0.052336
 cos angle 94   -0.069756
 cos angle 95   -0.087156
 cos angle 96   -0.104529
 cos angle 97   -0.121869
 cos angle 98   -0.139173
 cos angle 99   -0.156435
 cos angle 100   -0.173648
 cos angle 101   -0.190809
 cos angle 102   -0.207912
 cos angle 103   -0.224951
 cos angle 104   -0.241922
 cos angle 105   -0.258819
 cos angle 106   -0.275637
 cos angle 107   -0.292372
 cos angle 108   -0.309017
 cos angle 109   -0.325568
 cos angle 110   -0.342020
 cos angle 111   -0.358368
 cos angle 112   -0.374607
 cos angle 113   -0.390731
 cos angle 114   -0.406737
 cos angle 115   -0.422618
 cos angle 116   -0.438371
 cos angle 117   -0.453990
 cos angle 118   -0.469472
 cos angle 119   -0.484810
 cos angle 120   -0.500000
 cos angle 121   -0.515038
 cos angle 122   -0.529919
 cos angle 123   -0.544639
 cos angle 124   -0.559193
 cos angle 125   -0.573576
 cos angle 126   -0.587785
 cos angle 127   -0.601815
 cos angle 128   -0.615662
 cos angle 129   -0.629320
 cos angle 130   -0.642788
 cos angle 131   -0.656059
 cos angle 132   -0.669131
 cos angle 133   -0.681998
 cos angle 134   -0.694658
 cos angle 135   -0.707107
 cos angle 136   -0.719340
 cos angle 137   -0.731354
 cos angle 138   -0.743145
 cos angle 139   -0.754710
 cos angle 140   -0.766045
 cos angle 141   -0.777146
 cos angle 142   -0.788011
 cos angle 143   -0.798636
 cos angle 144   -0.809017
 cos angle 145   -0.819152
 cos angle 146   -0.829038
 cos angle 147   -0.838671
 cos angle 148   -0.848048
 cos angle 149   -0.857167
 cos angle 150   -0.866025
 cos angle 151   -0.874620
 cos angle 152   -0.882948
 cos angle 153   -0.891007
 cos angle 154   -0.898794
 cos angle 155   -0.906308
 cos angle 156   -0.913545
 cos angle 157   -0.920505
 cos angle 158   -0.927184
 cos angle 159   -0.933580
 cos angle 160   -0.939693
 cos angle 161   -0.945519
 cos angle 162   -0.951056
 cos angle 163   -0.956305
 cos angle 164   -0.961262
 cos angle 165   -0.965926
 cos angle 166   -0.970296
 cos angle 167   -0.974370
 cos angle 168   -0.978148
 cos angle 169   -0.981627
 cos angle 170   -0.984808
 cos angle 171   -0.987688
 cos angle 172   -0.990268
 cos angle 173   -0.992546
 cos angle 174   -0.994522
 cos angle 175   -0.996195
 cos angle 176   -0.997564
 cos angle 177   -0.998630
 cos angle 178   -0.999391
 cos angle 179   -0.999848
 cos angle 180   -1.000000
 cos angle 181   -0.999848
 cos angle 182   -0.999391
 cos angle 183   -0.998630
 cos angle 184   -0.997564
 cos angle 185   -0.996195
 cos angle 186   -0.994522
 cos angle 187   -0.992546
 cos angle 188   -0.990268
 cos angle 189   -0.987688
 cos angle 190   -0.984808
 cos angle 191   -0.981627
 cos angle 192   -0.978148
 cos angle 193   -0.974370
 cos angle 194   -0.970296
 cos angle 195   -0.965926
 cos angle 196   -0.961262
 cos angle 197   -0.956305
 cos angle 198   -0.951056
 cos angle 199   -0.945519
 cos angle 200   -0.939693
 cos angle 201   -0.933580
 cos angle 202   -0.927184
 cos angle 203   -0.920505
 cos angle 204   -0.913545
 cos angle 205   -0.906308
 cos angle 206   -0.898794
 cos angle 207   -0.891007
 cos angle 208   -0.882948
 cos angle 209   -0.874620
 cos angle 210   -0.866025
 cos angle 211   -0.857167
 cos angle 212   -0.848048
 cos angle 213   -0.838671
 cos angle 214   -0.829038
 cos angle 215   -0.819152
 cos angle 216   -0.809017
 cos angle 217   -0.798635
 cos angle 218   -0.788011
 cos angle 219   -0.777146
 cos angle 220   -0.766044
 cos angle 221   -0.754710
 cos angle 222   -0.743145
 cos angle 223   -0.731354
 cos angle 224   -0.719340
 cos angle 225   -0.707107
 cos angle 226   -0.694658
 cos angle 227   -0.681998
 cos angle 228   -0.669131
 cos angle 229   -0.656059
 cos angle 230   -0.642788
 cos angle 231   -0.629320
 cos angle 232   -0.615661
 cos angle 233   -0.601815
 cos angle 234   -0.587785
 cos angle 235   -0.573576
 cos angle 236   -0.559193
 cos angle 237   -0.544639
 cos angle 238   -0.529919
 cos angle 239   -0.515038
 cos angle 240   -0.500000
 cos angle 241   -0.484810
 cos angle 242   -0.469472
 cos angle 243   -0.453990
 cos angle 244   -0.438371
 cos angle 245   -0.422618
 cos angle 246   -0.406737
 cos angle 247   -0.390731
 cos angle 248   -0.374606
 cos angle 249   -0.358368
 cos angle 250   -0.342020
 cos angle 251   -0.325568
 cos angle 252   -0.309017
 cos angle 253   -0.292371
 cos angle 254   -0.275637
 cos angle 255   -0.258819
 cos angle 256   -0.241921
 cos angle 257   -0.224951
 cos angle 258   -0.207912
 cos angle 259   -0.190809
 cos angle 260   -0.173648
 cos angle 261   -0.156434
 cos angle 262   -0.139173
 cos angle 263   -0.121869
 cos angle 264   -0.104528
 cos angle 265   -0.087156
 cos angle 266   -0.069757
 cos angle 267   -0.052336
 cos angle 268   -0.034899
 cos angle 269   -0.017452
 cos angle 270   0.000000
 cos angle 271   0.017452
 cos angle 272   0.034900
 cos angle 273   0.052336
 cos angle 274   0.069757
 cos angle 275   0.087156
 cos angle 276   0.104528
 cos angle 277   0.121870
 cos angle 278   0.139173
 cos angle 279   0.156435
 cos angle 280   0.173649
 cos angle 281   0.190809
 cos angle 282   0.207912
 cos angle 283   0.224951
 cos angle 284   0.241922
 cos angle 285   0.258819
 cos angle 286   0.275638
 cos angle 287   0.292371
 cos angle 288   0.309017
 cos angle 289   0.325568
 cos angle 290   0.342021
 cos angle 291   0.358368
 cos angle 292   0.374607
 cos angle 293   0.390731
 cos angle 294   0.406737
 cos angle 295   0.422618
 cos angle 296   0.438371
 cos angle 297   0.453991
 cos angle 298   0.469472
 cos angle 299   0.484810
 cos angle 300   0.500000
 cos angle 301   0.515038
 cos angle 302   0.529919
 cos angle 303   0.544639
 cos angle 304   0.559193
 cos angle 305   0.573576
 cos angle 306   0.587785
 cos angle 307   0.601815
 cos angle 308   0.615662
 cos angle 309   0.629321
 cos angle 310   0.642788
 cos angle 311   0.656059
 cos angle 312   0.669131
 cos angle 313   0.681998
 cos angle 314   0.694659
 cos angle 315   0.707107
 cos angle 316   0.719340
 cos angle 317   0.731354
 cos angle 318   0.743145
 cos angle 319   0.754710
 cos angle 320   0.766045
 cos angle 321   0.777146
 cos angle 322   0.788011
 cos angle 323   0.798636
 cos angle 324   0.809017
 cos angle 325   0.819152
 cos angle 326   0.829038
 cos angle 327   0.838671
 cos angle 328   0.848048
 cos angle 329   0.857167
 cos angle 330   0.866026
 cos angle 331   0.874620
 cos angle 332   0.882948
 cos angle 333   0.891007
 cos angle 334   0.898794
 cos angle 335   0.906308
 cos angle 336   0.913546
 cos angle 337   0.920505
 cos angle 338   0.927184
 cos angle 339   0.933581
 cos angle 340   0.939693
 cos angle 341   0.945519
 cos angle 342   0.951057
 cos angle 343   0.956305
 cos angle 344   0.961262
 cos angle 345   0.965926
 cos angle 346   0.970296
 cos angle 347   0.974370
 cos angle 348   0.978148
 cos angle 349   0.981627
 cos angle 350   0.984808
 cos angle 351   0.987688
 cos angle 352   0.990268
 cos angle 353   0.992546
 cos angle 354   0.994522
 cos angle 355   0.996195
 cos angle 356   0.997564
 cos angle 357   0.998630
 cos angle 358   0.999391
 cos angle 359   0.999848
 cos angle 360   1.000000
 */


#include <xc.h>
#include "config.h"
#include "constants.h"
#include "configOsc.h"
#include "configPins.h"
#include "configSPI.h"
#include "configEUSART.h"
#include "configBaud.h"
#include "configPCD8544.h"
#include "clearPCD8544.h"
#include "setAddress.h"
#include "writeCommand.h"
#include "writeData.h"
#include "select0To47.h"
#include "configADC.h"


void main(void) 
{
    int16_t  angle, opposite, adjacent, expAngle, radius, ycoord, xcoord;
    
    pageToRow ypixel;
    
   
    configOsc();
    configPins();
    configSPI();
    configADC();
    configEUSART();
    configBaud();
    printf("hello Phil\n");
    configPCD8544();
    __delay_ms(1000);
   clearPCD8544();
   
   while(1)
   {
    ADCON0bits.GO_nDONE = HI;       //A/D conversion cycle in progress. Setting this bit starts an A/D conversion cycle.
                                    //This bit is automatically cleared by hardware when the A/D conversion has completed.
        while(ADCON0bits.GO_nDONE == HI)
        {
            ;   // wait for GO_nDONE to clear
        }
        adcVal = (int16_t)(ADRESH<<8 | ADRESL);

        angle = adcVal;
     
        for(radius = 0; radius <=43; radius++)
        {
            opposite = radius * sineLookUp[angle];     // x = opposite
            adjacent = radius * cosineLookUp[angle];   // y = adjacent
            xcoord = (opposite>>8) + 42;
            ycoord = (adjacent>>8) -3;
           
            select0To47(ycoord, &ypixel);
            writeCommand(0x22); //horizontal addressing
             if(ycoord >=0)
             {
                setAddress(xcoord,ypixel.page);
                writeData(ypixel.byte);
             }
        }
        __delay_ms(25);
        clearPCD8544();
        }      
   }
   
