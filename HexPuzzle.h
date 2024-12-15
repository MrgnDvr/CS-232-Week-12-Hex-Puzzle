#ifndef _HEX_PUZZLE_TWO
#define _HEX_PUZZLE_TWO
#include "HexPiece.h"
const int NUMOFTILES = 7;
const int NUMOFSIDES = 6;
const int SHUFFLECOUNT = 10;
class HexPuzzleTwo {
private:
HexPiece gameTilesArr[NUMOFTILES];
int tilesArrangementOnBoardArr[NUMOFTILES];
public:
HexPuzzleTwo();
int getTileEdgeVal(int tileID, int edgeVal);
void displaySolution();
void swapOutsideEdges(int tileID);
void shuffleTileEdgeValues(int tileID);
void createSolution();
int getUnUsedEdgeValue(int tileID);
bool isThisTileUnique(int tileID);
};
#endif
