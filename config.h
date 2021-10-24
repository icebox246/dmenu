/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Gohu GohuFont Nerd Font:size=11",
};
static const char norm_fg[]      = "#efefef";
static const char norm_bg[]      = "#20212B";
static const char sel_fg[]       = "#20212B";
static const char sel_bg[]       = "#efefef";
static const char hi_fg[]		 = "#D184E3";
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	[SchemeNorm] = { norm_fg, norm_bg },
    [SchemeSel]  = { sel_fg, sel_bg },
	[SchemeSelHighlight] = { hi_fg, sel_bg },
	[SchemeNormHighlight] = { hi_fg, norm_bg },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* history */
static unsigned int maxhist    = 64;
static int histnodup           = 1;	/* if 0, record repeated histories */
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 19;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
