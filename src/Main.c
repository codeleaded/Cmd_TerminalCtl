#include "/home/codeleaded/System/Static/Library/TerminalCtl.h"

int main() {
    
    TerminalCtl tc = TerminalCtl_New();

    TerminalCtl_Resize(&tc,(Term_Coord){ 1,1 });
    TerminalCtl_Update(&tc);
    TerminalCtl_Clear(&tc);
    TerminalCtl_SetTerm_Color(&tc,Term_Color_New(0,0,0,0,0,0));
    TerminalCtl_Reset(&tc);

    TerminalCtl_Free(&tc);

    return 0;
}
