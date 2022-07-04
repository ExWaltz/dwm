/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx  = 1;        /* border pixel of windows */
static const unsigned int igappx    = 5;        /* size of inner gaps */
static const unsigned int ogappx    = 5;        /* size of outer gaps */
static const int gapsforone	    = 0;	/* 1 enable gaps when only one window is open */
<<<<<<< HEAD
static const unsigned int snap      = 16;       /* snap pixel */
=======
static const unsigned int snap      = 32;       /* snap pixel */
>>>>>>> c60e490ef58469711099340dcd9b32c5149c22ba
static const unsigned int systraypinning = 0;   /* 0: sloppy systray follows selected monitor, >0: pin systray to monitor X */
static const unsigned int systrayspacing = 2;   /* systray spacing */
static const int systraypinningfailfirst = 1;   /* 1: if pinning fails, display systray on the first monitor, False: display systray on the last monitor*/
static const int showsystray        = 1;     /* 0 means no systray */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
<<<<<<< HEAD
static const char *fonts[]          = { "noto sans mono:size=10", "noto sans mono cjk hk:size=10", "noto sans mono cjk jp:size=10", "noto sans mono cjk kr:size=10", "noto color emoji:size=10", "font awesome 6 free solid:size=10", "font awesome 5 free solid:size=10", "material:size=10", "JetBrainsMono Nerd Font:size=14" };
static const char dmenufont[]       = "noto sans mono:size=10";
static const char col_gray1[]       = "#222222";
static const char col_gray2[]       = "#2b2b05";
static const char col_gray3[]       = "#c4bfbc";
static const char col_gray4[]       = "#f3de90";
static const char col_gray5[]       = "#B2255A";
static const char col_cyan[]        = "#601235";
static const char col1[]            = "#B2255A";
static const char col2[]            = "#8F0835";
static const char col3[]            = "#a4ea8d";
static const char col4[]            = "#f3de90";
static const char col5[]            = "#523CA3";
static const char col6[]            = "#ff0D31";

enum { SchemeNorm, SchemeCol1, SchemeCol2, SchemeCol3, SchemeCol4,
       SchemeCol5, SchemeCol6, SchemeSel }; /* color schemes */

static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm]  = { col_gray3, col_gray1, col_gray2 },
	[SchemeCol1]  = { col1,      col_gray1, col_gray2 },
	[SchemeCol2]  = { col2,      col_gray1, col_gray2 },
	[SchemeCol3]  = { col3,      col_gray1, col_gray2 },
	[SchemeCol4]  = { col4,      col_gray1, col_gray2 },
	[SchemeCol5]  = { col5,      col_gray1, col_gray2 },
	[SchemeCol6]  = { col6,      col_gray1, col_gray2 },
	[SchemeSel]   = { col_gray4, col_gray5,  col_cyan  },
};

/* tagging */
// static const char *tags[] = { "", "", "", "", "", "", "", "", "" };
static const char *tags[] = { "", "", "", "", "", "", "", "", "" };
=======
static const char *fonts[]          = { "noto sans mono:size=10", "noto sans mono cjk hk:size=10", "noto sans mono cjk jp:size=10", "noto sans mono cjk kr:size=10", "noto color emoji:size=10", "font awesome 5 free solid:size=10" };
static const char dmenufont[]       = "noto sans mono:size=10";

static char normbgcolor[]           = "#222222";
static char normbordercolor[]       = "#2b2b05";
static char normfgcolor[]           = "#c4bfbc";
static char selfgcolor[]            = "#f3de90";
static char selbordercolor[]        = "#7ba02e";
static char selbgcolor[]            = "#7ba02e";
static char *colors[][3] = {
       /*               fg           bg           border   */
       [SchemeNorm] = { normfgcolor, normbgcolor, normbordercolor },
       [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
};

/* tagging */
static const char *tags[] = { "", "", "", "", "", "", "", "", "" };
>>>>>>> c60e490ef58469711099340dcd9b32c5149c22ba

static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
<<<<<<< HEAD
	/* class         instance    title       tags mask     isfloating   monitor */
	{ "Firefox",     NULL,       NULL,       1 << 8,       0,           -1 },
	{ "scratchpad",  NULL,       NULL,       1 << 8,       1,           -1 },
=======
	/* class      instance    title       tags mask     isfloating   monitor */
	{ "Firefox",  NULL,       NULL,       1 << 8,       0,           -1 },
    { "kanjitomo-reader-Launcher",  NULL,       "win0",       0,       1,           -1 },
>>>>>>> c60e490ef58469711099340dcd9b32c5149c22ba
};

/* layout(s) */
static const int dirs[3]      = { DirHor, DirVer, DirVer }; /* tiling dirs */
static const float facts[3]   = { 1.0,    1.0,    1.0 };    /* tiling facts */
static const int nmaster     = 1;    /* number of clients in master area */
<<<<<<< HEAD
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */

#include "gaplessgrid.c"

=======
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */
#include "layouts.c"
#include "maximize.c"
>>>>>>> c60e490ef58469711099340dcd9b32c5149c22ba
static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "",      tile },    /* first entry is default */
	{ "",      NULL },    /* no layout function means floating behavior */
	{ "",      monocle },
<<<<<<< HEAD
    { "",      gaplessgrid },
};

/* key definitions */
#define MODKEY Mod4Mask
#define ALTKEY Mod1Mask
=======
	{ "HHH",      grid },
};

/* key definitions */
#define ALTKEY Mod1Mask
#define MODKEY Mod4Mask
>>>>>>> c60e490ef58469711099340dcd9b32c5149c22ba
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },
#define TILEKEYS(MOD,G,M,S) \
	{ MOD, XK_p, setdirs,  {.v = (int[])  { INC(G * +1),   INC(M * +1),   INC(S * +1) } } }, \
	{ MOD, XK_h, setfacts, {.v = (float[]){ INC(G * -0.1), INC(M * -0.1), INC(S * -0.1) } } }, \
	{ MOD, XK_l, setfacts, {.v = (float[]){ INC(G * +0.1), INC(M * +0.1), INC(S * +0.1) } } },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
<<<<<<< HEAD
static const char *dmenucmd[] = { "dmenu_launch", "-m", dmenumon, "-fn", dmenufont, "-nb", col_gray1, "-nf", col_gray3, "-sb", col_cyan, "-sf", col_gray4, NULL };
=======
static const char *dmenucmd[] = { "dmenu_launch", "-m", dmenumon, "-fn", dmenufont, "-nb", normbgcolor, "-nf", normfgcolor, "-sb", selbordercolor, "-sf", selfgcolor, NULL };
>>>>>>> c60e490ef58469711099340dcd9b32c5149c22ba
static const char *termcmd[]  = { "st", NULL };
static const char scratchpadname[] = "scratchpad";
static const char *scratchpadcmd[] = { "st", "-t", scratchpadname, "-c", scratchpadname, "-g", "100x20", NULL };
// static const char *scratchpadcmd[] = { "st", "-t", scratchpadname, "-c", scratchpadname, "-g", "100x20", "-e", "scratchpad", NULL };


static Key keys[] = {
	/* modifier                     key        function        argument */
<<<<<<< HEAD
	{ MODKEY,                       XK_r,      spawn,          {.v = dmenucmd } },
	{ MODKEY,                       XK_Return, spawn,          {.v = termcmd } },
	{ MODKEY,                       XK_grave,  togglescratch,  {.v = scratchpadcmd } },
=======
	{ MODKEY,                       XK_F5,     xrdb,           {.v = NULL } },
	{ MODKEY,                       XK_r,      spawn,          {.v = dmenucmd } },
	{ MODKEY,                       XK_Return, spawn,          {.v = termcmd } },
>>>>>>> c60e490ef58469711099340dcd9b32c5149c22ba
	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY,                       XK_j,      focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_k,      focusstack,     {.i = -1 } },
	{ MODKEY,                       XK_i,      incnmaster,     {.i = +1 } },
	{ MODKEY,                       XK_d,      incnmaster,     {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_Return, zoom,           {0} },
	{ MODKEY,                       XK_Tab,    view,           {0} },
	{ MODKEY|ShiftMask,             XK_q,      killclient,     {0} },
	{ MODKEY|ShiftMask,             XK_i,      setigaps,       {.i = +2 } },
	{ MODKEY|ControlMask,           XK_i,      setigaps,       {.i = -2 } },
	{ MODKEY|ShiftMask|ControlMask, XK_i,      setigaps,       {.i = 0  } },
	{ MODKEY|ShiftMask,             XK_o,      setogaps,       {.i = +2 } },
	{ MODKEY|ControlMask,           XK_o,      setogaps,       {.i = -2 } },
	{ MODKEY|ShiftMask|ControlMask, XK_o,      setogaps,       {.i = 0  } },
<<<<<<< HEAD
	{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} },
	{ MODKEY,                       XK_f,      setlayout,      {.v = &layouts[1]} },
	{ MODKEY,                       XK_m,      setlayout,      {.v = &layouts[2]} },
    { MODKEY,                       XK_g,      setlayout,      {.v = &layouts[3] } },
=======
	{ MODKEY|ControlMask,           XK_j,      moveresize,     {.v = "0x 25y 0w 0h" } },
	{ MODKEY|ControlMask,           XK_k,      moveresize,     {.v = "0x -25y 0w 0h" } },
	{ MODKEY|ControlMask,           XK_l,      moveresize,     {.v = "25x 0y 0w 0h" } },
	{ MODKEY|ControlMask,           XK_h,      moveresize,     {.v = "-25x 0y 0w 0h" } },
    { MODKEY|ControlMask|ShiftMask,             XK_j,      moveresize,     {.v = "0x 0y 0w 25h" } },
	{ MODKEY|ControlMask|ShiftMask,             XK_k,      moveresize,     {.v = "0x 0y 0w -25h" } },
	{ MODKEY|ControlMask|ShiftMask,             XK_l,      moveresize,     {.v = "0x 0y 25w 0h" } },
	{ MODKEY|ControlMask|ShiftMask,             XK_h,      moveresize,     {.v = "0x 0y -25w 0h" } },
	{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} },
	{ MODKEY,                       XK_f,      setlayout,      {.v = &layouts[1]} },
	{ MODKEY,                       XK_m,      togglemaximize, {0} },
	{ MODKEY,                       XK_g,      setlayout,      {.v = &layouts[3]} },
>>>>>>> c60e490ef58469711099340dcd9b32c5149c22ba
	{ MODKEY,                       XK_space,  setlayout,      {0} },
	TILEKEYS(MODKEY,                                           1, 0, 0)
	TILEKEYS(MODKEY|ShiftMask,                                 0, 1, 0)
	TILEKEYS(MODKEY|ControlMask,                               0, 0, 1)
	TILEKEYS(MODKEY|ShiftMask|ControlMask,                     1, 1, 1)
	{ MODKEY|ShiftMask,             XK_t,      setdirs,        {.v = (int[]){ DirHor, DirVer, DirVer } } },
	{ MODKEY|ControlMask,           XK_t,      setdirs,        {.v = (int[]){ DirVer, DirHor, DirHor } } },
	{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
	{ MODKEY|ShiftMask,             XK_f,      togglefullscr,  {0} },
	{ MODKEY,                       XK_0,      view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
	{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_period, focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },
	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)
<<<<<<< HEAD
	{ MODKEY|ALTKEY,                XK_q,      quit,           {0} },
=======
	{ MODKEY|ALTKEY,              XK_q,      quit,           {0} },
>>>>>>> c60e490ef58469711099340dcd9b32c5149c22ba
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button1,        sigdwmblocks,   {.i = 1} },
	{ ClkStatusText,        0,              Button2,        sigdwmblocks,   {.i = 2} },
	{ ClkStatusText,        0,              Button3,        sigdwmblocks,   {.i = 3} },
	{ ClkStatusText,        0,              Button4,        sigdwmblocks,   {.i = 4} },
	{ ClkStatusText,        0,              Button5,        sigdwmblocks,   {.i = 5} },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};


