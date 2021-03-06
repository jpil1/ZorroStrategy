// Filter test ///////////////////

function run()
{
	BarPeriod = 60;
	MaxBars = 800;
	LookBack = 100;
	asset(""); // dummy asset
	ColorUp = ColorDn = 0; // don't plot a price curve
	PlotHeight1 = 300;
	PlotHeight2 = 200;
	PlotWidth = 800;
	set(PLOTNOW);
	
	vars Chirp = series(genSine(3,60));
	int Color = BLACK;
	plot("Chirp",Chirp[0],0,Color);
	plot("LeadingCycle",sin(DominantPhase(Chirp,30)+PI/4),NEW,Color);
	plot("DominantPhase",DominantPhase(Chirp,30),NEW,Color);
	plot("DominantPeriod",DominantPeriod(Chirp,30),NEW,Color);
	plot("BandPass",BandPass(Chirp,30,0.1),NEW,Color);
	plot("HighPass1",HighPass1(Chirp,30),NEW,Color);
	plot("HighPass2",HighPass2(Chirp,30),NEW,Color);
	plot("LowPass",LowPass(Chirp,40),NEW,Color);
	plot("Laguerre",Laguerre(Chirp,0.3),NEW,Color);
	plot("Butterworth",Butterworth(Chirp,40),NEW,Color);
	plot("Roof",Roof(Chirp,10,50),NEW,Color);
}

