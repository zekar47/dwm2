static const char norm_fg[] = "#ebdfdf";
static const char norm_bg[] = "#090403";
static const char norm_border[] = "#a49c9c";

static const char sel_fg[] = "#ebdfdf";
static const char sel_bg[] = "#9D6464";
static const char sel_border[] = "#ebdfdf";

static const char urg_fg[] = "#ebdfdf";
static const char urg_bg[] = "#E81A1A";
static const char urg_border[] = "#E81A1A";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
