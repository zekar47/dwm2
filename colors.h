static const char norm_fg[] = "#caccde";
static const char norm_bg[] = "#151822";
static const char norm_border[] = "#8d8e9b";

static const char sel_fg[] = "#caccde";
static const char sel_bg[] = "#7ABCDB";
static const char sel_border[] = "#caccde";

static const char urg_fg[] = "#caccde";
static const char urg_bg[] = "#89768E";
static const char urg_border[] = "#89768E";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
