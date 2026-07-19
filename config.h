/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom */
static int fuzzy = 1;                       /* -F  option; if 0, dmenu doesn't use fuzzy matching */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] =
{
	"monospace:size=9"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static
const
char *colors[][2] = {
	/*                       fg         bg       */
	/* Catppuccin Mocha */
	[SchemeNorm]          = { "#cdd6f4", "#1e1e2e" }, /* text        on base    */
	[SchemeSel]           = { "#1e1e2e", "#94e2d5" }, /* base        on blue    */
	[SchemeOut]           = { "#1e1e2e", "#a6e3a1" }, /* base        on green   */
	[SchemeSelHighlight]  = { "#8839ef", "#94e2d5" }, /* dark mauve  on teal    */
	[SchemeNormHighlight] = { "#cba6f7", "#1e1e2e" }, /* mauve       on base    */
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

