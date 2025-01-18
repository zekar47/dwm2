static const char norm_fg[] = "#e4c8c0";
static const char norm_bg[] = "#070909";
static const char norm_border[] = "#9f8c86";

static const char sel_fg[] = "#e4c8c0";
static const char sel_bg[] = "#A44744";
static const char sel_border[] = "#e4c8c0";

static const char urg_fg[] = "#e4c8c0";
static const char urg_bg[] = "#4B4548";
static const char urg_border[] = "#4B4548";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
