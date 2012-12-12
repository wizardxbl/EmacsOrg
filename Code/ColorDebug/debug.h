#ifndef __COLOR_DEBUG_H__
#define __COLOR_DEBUG_H__

/*----Contrl Command----*/
#define CLOSE_ALL_ATTR  	"\033[0m"
#define SET_HIGHTLIGHT  	"\033[1m"
#define UNDERLINE		"\033[4m"
#define TWINKLE			"\033[5m"
#define REVERSE			"\033[7m"
#define BLANKING		"\033[8m"
#define CURSORS_UP_N_LINE(x)	"\033[xA"
#define CURSORS_DOWN_N_LINE(x) 	"\033[xB"
#define CURSORS_RIGHT_N_LINE(x)	"\033[xC"
#define CURSORS_LEFT_N_LINE(x)	"\033[xD"
#define SET_CURSORS_POSITION(x,y)	"\033[y;xH"
#define CLEAR			"\033[2J"
#define CLEAR_TO_LINEEND	"\033[K"
#define SAVE_CURSOR_POSTION	"\033[s"
#define RECOVER_CURSOR_POSTION	"\033[u"
#define HIDE_CURSOR		"\033[?251"
#define SHOW_CURSOR		"\033[?25h"

/*----Background Color----*/
#define BG_BLACK		"\033[40m"
#define BG_DARK_RED		"\033[41m"
#define BG_GREEN		"\033[42m"
#define BG_YELLOW		"\033[43m"
#define BG_BLUE			"\033[44m"
#define BG_PURPLE		"\033[45m"
#define BG_DARK_GREEN		"\033[46m"
#define BG_WHITE		"\033[47m"

/*----Foreground Color----*/
#define FG_BLACK		"\033[30m"
#define FG_RED			"\033[31m"
#define FG_GREEN		"\033[32m"
#define FG_YELLOW		"\033[33m"
#define FG_BLUE			"\033[34m"
#define FG_PURPLE		"\033[35m"
#define FG_DARK_GREEN		"\033[36m"
#define FG_WHITE		"\033[37m"


#define color_debug(fmt...)     	printf(FG_GREEN BG_WHITE);printf(fmt);printf(CLOSE_ALL_ATTR);printf("\n");

#define color_debug_recv(fmt...)     	printf(FG_WHITE BG_GREEN);printf(fmt);printf(CLOSE_ALL_ATTR);printf("\n");

#define color_debug_send(fmt...)     	printf(FG_WHITE BG_BLUE);printf(fmt);printf(CLOSE_ALL_ATTR);printf("\n");

#define color_debug_err(fmt...)      	printf(FG_WHITE BG_DARK_RED);printf(fmt);printf(CLOSE_ALL_ATTR);printf("\n");


#endif
