# sted2-20021104

### How to build on Ubuntu24.04LTS
```
sudo apt install gcc make autoconf automake gettext libtool xorg-dev libxt-dev libncurses-dev
./configure
make
```
### issue
To start Wayland or Xorg, start with DISPLAY set to none as follows.
```
unset DISPLAY
./sted2
```

### Working image (Console)

```
FREE: 589356   USED:      0   TR.: 1   MODULE: Roland SC-88     STed v2.07  (c)1990-97 TURBO  
                                                                 ------ for Linux / OSS ------ 

              MUSIC TITLE  :
              FILE NAME    :                       /                  / 

              TEMPO    : 120      TIMEBASE :  48
 LOAD         PLAY BIAS:   0
 SAVE         KEY  : C MAJOR     
 EDIT&SET     BEAT  :  4 / 4      MIDI IN : midi    
 PLAY        TR MODE CH. ST+ K#+ RHY    TRACK MEMO                         STEP     TOTAL ST 
               
 RECORD       1 Play A 1   0   0 OFF                                          0            0
 FILTER       2 Play A 2   0   0 OFF                                          0            0
 TIME&KEY     3 Play A 3   0   0 OFF                                          0            0
              4 Play A 4   0   0 OFF                                          0            0
 TITLE        5 Play A 5   0   0 OFF                                          0            0
 MEMO         6 Play A 6   0   0 OFF                                          0            0
 PART ASS     7 Play A 7   0   0 OFF                                          0            0
              8 Play A 8   0   0 OFF                                          0            0
 RHY ASSI     9 Play A 9   0   0 OFF                                          0            0
 USER EXC    10 Play A10   0 OFF ON                                           0            0
 CM64 CON    11 Play A11   0   0 OFF                                          0            0
             12 Play A12   0   0 OFF                                          0            0
 SC55 CON    13 Play A13   0   0 OFF                                          0            0
 OPTION      14 Play A14   0   0 OFF                                          0            0
 UNIT SEL    15 Play A15   0   0 OFF                                          0            0
             16 Play A16   0   0 OFF                                          0            0
 INIT        17 Play OFF   0   0 OFF                                          0            0
 EXIT        18 Play OFF   0   0 OFF                                          0            0
```


