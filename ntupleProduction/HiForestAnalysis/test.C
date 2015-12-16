#include "hiForest.h"

void test(char *infname)
{
    TFile *inf = new TFile(infname);
    TTree *t = (TTree*)inf->Get("ggHiNtuplizer/EventTree");
    
    Photons photon;
    
    setupPhotonTree(t,photon);	
    
    t->GetEntry(0);
    
}
