//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"", "~/.dwm/blocks/temp.sh",                       11,     0},

    {"", "~/.dwm/blocks/hstnip.sh",                     44,     0},
	
	{"", "~/.dwm/blocks/mem.sh",                        33,     0},

	{"", "~/.dwm/blocks/swap.sh",                       33,     0},

	{"", "~/.dwm/blocks/clock.sh",                      60,     0},

	{"", "~/.dwm/blocks/vol.sh",                        99,     10},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
