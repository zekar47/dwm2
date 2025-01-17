void
loadxrdb()
{
  Display *display;
  char * resm;
  XrmDatabase xrdb;
  char *type;
  XrmValue value;
  
  display = XOpenDisplay(NULL);

  if (display != NULL) {
    resm = XResourceManagerString(display);

    if (resm != NULL) {
      xrdb = XrmGetStringDatabase(resm);
      if (xrdb != NULL) {
	XRDB_LOAD_COLOR("dwm.color0", color00); // black
	XRDB_LOAD_COLOR("dwm.color1", color01); // red
	XRDB_LOAD_COLOR("dwm.color2", color02); // green
	XRDB_LOAD_COLOR("dwm.color3", color03); // yellow
	XRDB_LOAD_COLOR("dwm.color4", color04); // blue
	XRDB_LOAD_COLOR("dwm.color5", color05); // magenta
	XRDB_LOAD_COLOR("dwm.color6", color06); // cyan
	XRDB_LOAD_COLOR("dwm.color7", color07); // white
	XRDB_LOAD_COLOR("dwm.color8", color08); 
	XRDB_LOAD_COLOR("dwm.color9", color09);
	XRDB_LOAD_COLOR("dwm.color10", color10);
	XRDB_LOAD_COLOR("dwm.color11", color11);
	XRDB_LOAD_COLOR("dwm.color12", color12);
	XRDB_LOAD_COLOR("dwm.color13", color13);
	XRDB_LOAD_COLOR("dwm.color14", color14);
	XRDB_LOAD_COLOR("dwm.color15", color15);
	XRDB_LOAD_COLOR("dwm.color16", color16);
	
	XRDB_LOAD_COLOR("dwm.color0", normfgcolor);
	XRDB_LOAD_COLOR("dwm.color8", normbgcolor);
	XRDB_LOAD_COLOR("dwm.color0", normbordercolor);
	XRDB_LOAD_COLOR("dwm.color0", normfloatcolor);
	XRDB_LOAD_COLOR("dwm.color14", selfgcolor);
	XRDB_LOAD_COLOR("dwm.color0", selbgcolor);
	XRDB_LOAD_COLOR("dwm.color6", selbordercolor);
	XRDB_LOAD_COLOR("dwm.color6", selfloatcolor);
	XRDB_LOAD_COLOR("dwm.foreground", titlenormfgcolor);
	XRDB_LOAD_COLOR("dwm.background", titlenormbgcolor);
	XRDB_LOAD_COLOR("dwm.color0", titlenormbordercolor);
	XRDB_LOAD_COLOR("dwm.color0", titlenormfloatcolor);
	XRDB_LOAD_COLOR("dwm.foreground", titleselfgcolor);
	XRDB_LOAD_COLOR("dwm.background", titleselbgcolor);
	XRDB_LOAD_COLOR("dwm.color6", titleselbordercolor);
	XRDB_LOAD_COLOR("dwm.color6", titleselfloatcolor);
	XRDB_LOAD_COLOR("dwm.tagsnormfgcolor", tagsnormfgcolor);
	XRDB_LOAD_COLOR("dwm.background", tagsnormbgcolor);
	XRDB_LOAD_COLOR("dwm.foreground", tagsnormbordercolor);
	XRDB_LOAD_COLOR("dwm.color0", tagsnormfloatcolor);
	XRDB_LOAD_COLOR("dwm.background", tagsselfgcolor);
	XRDB_LOAD_COLOR("dwm.color6", tagsselbgcolor);
	XRDB_LOAD_COLOR("dwm.color6", tagsselbordercolor);
	XRDB_LOAD_COLOR("dwm.tagsselfloatcolor", tagsselfloatcolor);
	XRDB_LOAD_COLOR("dwm.hidnormfgcolor", hidnormfgcolor);
	XRDB_LOAD_COLOR("dwm.hidnormbgcolor", hidnormbgcolor);
	XRDB_LOAD_COLOR("dwm.hidselfgcolor", hidselfgcolor);
	XRDB_LOAD_COLOR("dwm.hidselbgcolor", hidselbgcolor);
	XRDB_LOAD_COLOR("dwm.urgfgcolor", urgfgcolor);
	XRDB_LOAD_COLOR("dwm.urgbgcolor", urgbgcolor);
	XRDB_LOAD_COLOR("dwm.color14", urgbordercolor);
	XRDB_LOAD_COLOR("dwm.urgfloatcolor", urgfloatcolor);
	#if RENAMED_SCRATCHPADS_PATCH
	XRDB_LOAD_COLOR("dwm.scratchselfgcolor", scratchselfgcolor);
	XRDB_LOAD_COLOR("dwm.scratchselbgcolor", scratchselbgcolor);
	XRDB_LOAD_COLOR("dwm.scratchselbordercolor", scratchselbordercolor);
	XRDB_LOAD_COLOR("dwm.scratchselfloatcolor", scratchselfloatcolor);
	XRDB_LOAD_COLOR("dwm.scratchnormfgcolor", scratchnormfgcolor);
	XRDB_LOAD_COLOR("dwm.scratchnormbgcolor", scratchnormbgcolor);
	XRDB_LOAD_COLOR("dwm.scratchnormbordercolor", scratchnormbordercolor);
	XRDB_LOAD_COLOR("dwm.scratchnormfloatcolor", scratchnormfloatcolor);
	#endif // RENAMED_SCRATCHPADS_PATCH
	#if BAR_FLEXWINTITLE_PATCH
	XRDB_LOAD_COLOR("dwm.normTTBbgcolor", normTTBbgcolor);
	XRDB_LOAD_COLOR("dwm.normLTRbgcolor", normLTRbgcolor);
	XRDB_LOAD_COLOR("dwm.normMONObgcolor", normMONObgcolor);
	XRDB_LOAD_COLOR("dwm.normGRIDbgcolor", normGRIDbgcolor);
	XRDB_LOAD_COLOR("dwm.normGRD1bgcolor", normGRD1bgcolor);
	XRDB_LOAD_COLOR("dwm.normGRD2bgcolor", normGRD2bgcolor);
	XRDB_LOAD_COLOR("dwm.normGRDMbgcolor", normGRDMbgcolor);
	XRDB_LOAD_COLOR("dwm.normHGRDbgcolor", normHGRDbgcolor);
	XRDB_LOAD_COLOR("dwm.normDWDLbgcolor", normDWDLbgcolor);
	XRDB_LOAD_COLOR("dwm.normSPRLbgcolor", normSPRLbgcolor);
	XRDB_LOAD_COLOR("dwm.normfloatbgcolor", normfloatbgcolor);
	XRDB_LOAD_COLOR("dwm.actTTBbgcolor", actTTBbgcolor);
	XRDB_LOAD_COLOR("dwm.actLTRbgcolor", actLTRbgcolor);
	XRDB_LOAD_COLOR("dwm.actMONObgcolor", actMONObgcolor);
	XRDB_LOAD_COLOR("dwm.actGRIDbgcolor", actGRIDbgcolor);
	XRDB_LOAD_COLOR("dwm.actGRD1bgcolor", actGRD1bgcolor);
	XRDB_LOAD_COLOR("dwm.actGRD2bgcolor", actGRD2bgcolor);
	XRDB_LOAD_COLOR("dwm.actGRDMbgcolor", actGRDMbgcolor);
	XRDB_LOAD_COLOR("dwm.actHGRDbgcolor", actHGRDbgcolor);
	XRDB_LOAD_COLOR("dwm.actDWDLbgcolor", actDWDLbgcolor);
	XRDB_LOAD_COLOR("dwm.actSPRLbgcolor", actSPRLbgcolor);
	XRDB_LOAD_COLOR("dwm.actfloatbgcolor", actfloatbgcolor);
	XRDB_LOAD_COLOR("dwm.selTTBbgcolor", selTTBbgcolor);
	XRDB_LOAD_COLOR("dwm.selLTRbgcolor", selLTRbgcolor);
	XRDB_LOAD_COLOR("dwm.selMONObgcolor", selMONObgcolor);
	XRDB_LOAD_COLOR("dwm.selGRIDbgcolor", selGRIDbgcolor);
	XRDB_LOAD_COLOR("dwm.selGRD1bgcolor", selGRD1bgcolor);
	XRDB_LOAD_COLOR("dwm.selGRD2bgcolor", selGRD2bgcolor);
	XRDB_LOAD_COLOR("dwm.selGRDMbgcolor", selGRDMbgcolor);
	XRDB_LOAD_COLOR("dwm.selHGRDbgcolor", selHGRDbgcolor);
	XRDB_LOAD_COLOR("dwm.selDWDLbgcolor", selDWDLbgcolor);
	XRDB_LOAD_COLOR("dwm.selSPRLbgcolor", selSPRLbgcolor);
	XRDB_LOAD_COLOR("dwm.selfloatbgcolor", selfloatbgcolor);
	#endif // BAR_FLEXWINTITLE_PATCH
	#if BAR_STATUS2D_XRDB_TERMCOLORS_PATCH && BAR_STATUS2D_PATCH
	XRDB_LOAD_COLOR("color0", termcol0);
	XRDB_LOAD_COLOR("color1", termcol1);
	XRDB_LOAD_COLOR("color2", termcol2);
	XRDB_LOAD_COLOR("color3", termcol3);
	XRDB_LOAD_COLOR("color4", termcol4);
	XRDB_LOAD_COLOR("color5", termcol5);
	XRDB_LOAD_COLOR("color6", termcol6);
	XRDB_LOAD_COLOR("color7", termcol7);
	XRDB_LOAD_COLOR("color8", termcol8);
	XRDB_LOAD_COLOR("color9", termcol9);
	XRDB_LOAD_COLOR("color10", termcol10);
	XRDB_LOAD_COLOR("color11", termcol11);
	XRDB_LOAD_COLOR("color12", termcol12);
	XRDB_LOAD_COLOR("color13", termcol13);
	XRDB_LOAD_COLOR("color14", termcol14);
	XRDB_LOAD_COLOR("color15", termcol15);
	#endif // BAR_STATUS2D_XRDB_TERMCOLORS_PATCH
	
	XrmDestroyDatabase(xrdb);
			}
		}
	}

	XCloseDisplay(display);
}

void
xrdb(const Arg *arg)
{
	loadxrdb();
	int i;
	for (i = 0; i < LENGTH(colors); i++)
		scheme[i] = drw_scm_create(drw, colors[i],
		#if BAR_ALPHA_PATCH
		alphas[i],
		#endif // BAR_ALPHA_PATCH
		ColCount
		);

        // Update the powerline status scheme
        for (i = 0; i < LENGTH(statuscolors); i++) {
            statusscheme[i] = drw_scm_create(drw, statuscolors[i],
            #if BAR_ALPHA_PATCH
            alphas[SchemeNorm],  // Use a default alpha if necessary
            #endif // BAR_ALPHA_PATCH
            ColCount);
        }

	#if BAR_SYSTRAY_PATCH && !BAR_ALPHA_PATCH
	if (systray) {
		XMoveWindow(dpy, systray->win, -32000, -32000);
	}
	#endif // BAR_SYSTRAY_PATCH
	arrange(NULL);
	focus(NULL);
}
