/*
  graphics_int.h

  Prototypes for curses-based graphics helpers

  Made by Studio Breeze. 1998

 */

#ifndef _GRAPHICS_INT_H_
#define _GRAPHICS_INT_H_

/* curses helpers */
extern void curses_init_window( void );
extern void curses_close_window( void );
extern void curses_curon( void );
extern void curses_curoff( void );
extern void curses_gcolor( int );
extern void curses_tcolor( int );
extern void curses_tputs( const char * );
extern void curses_gputs( int, int, const char * );
extern void curses_tlocate( int, int );
extern void curses_ghome( int );
extern void curses_trev( int, int, int, int );
extern void curses_tfill( unsigned short, short, short, short, short, unsigned short );
extern void curses_gfill( int, int, int, int, int );
extern void curses_trascpy( int, int, int, int );
extern void curses_t_scrw( int, int, int, int, int, int );
extern void curses_tg_copy( int );
extern void curses_tg_copy2( int );
extern void curses_cls_al( void );
extern void curses_gclr( void );
extern void curses_cls_ed( void );
extern void curses_cls_eol( void );
extern int  curses_keyin( int );
extern int  curses_keyinp( void );
extern int  curses_sftsns( void );
extern void curses_key_wait( void );
extern void curses_midi_wait( void );
extern void curses_ledmod( int, int );

#endif /* _GRAPHICS_INT_H_ */
