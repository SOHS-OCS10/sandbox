// ============================================================
//  Towers of Hanoi — Recursive Practice Scaffold
//
//  YOUR TASK:
//    Complete the  hanoi()  function so that it recursively
//    moves  n  disks from the source peg to the destination
//    peg using the auxiliary peg.
//
//    The helper function  moveDisk()  is already written —
//    call it to perform a single one-disk move.
//
//  COMPILE:  g++ -std=c++17 -o hanoi hanoi.cpp
//  RUN:      ./hanoi
// ============================================================

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

// ── Global state ────────────────────────────────────────────
const int NUM_PEGS = 3;
const string PEG_NAMES[] = {"A", "B", "C"};

vector<int> pegs[NUM_PEGS];   // each peg is a stack of disk sizes
int numDisks;                  // set randomly at startup
int moveCount = 0;

// ── Display helpers ─────────────────────────────────────────

// Prints a single row of the tower display.
// If the peg has a disk at this level, it draws it;
// otherwise it draws just the pole.
void printRow(int pegIndex, int level, int maxWidth) {
    if (level < static_cast<int>(pegs[pegIndex].size())) {
        int disk = pegs[pegIndex][level];
        int pad = maxWidth - disk;
        cout << string(pad, ' ')
             << string(disk, '=')
             << '|'
             << string(disk, '=')
             << string(pad, ' ');
    } else {
        int pad = maxWidth;
        cout << string(pad, ' ') << '|' << string(pad, ' ');
    }
}

// Renders all three pegs side-by-side in the terminal.
void displayTowers() {
    int maxWidth = numDisks + 1;
    int totalHeight = numDisks + 1;

    cout << "\n";
    for (int row = totalHeight - 1; row >= 0; --row) {
        cout << "  ";
        for (int p = 0; p < NUM_PEGS; ++p) {
            printRow(p, row, maxWidth);
            cout << "   ";
        }
        cout << "\n";
    }

    // Base and labels
    cout << "  ";
    for (int p = 0; p < NUM_PEGS; ++p) {
        cout << string(maxWidth, '-')
             << '+'
             << string(maxWidth, '-')
             << "   ";
    }
    cout << "\n  ";
    for (int p = 0; p < NUM_PEGS; ++p) {
        cout << string(maxWidth - 1, ' ')
             << "(" << PEG_NAMES[p] << ")"
             << string(maxWidth - 1, ' ')
             << "   ";
    }
    cout << "\n\n";
}

// ── Move a single disk (PROVIDED — do not modify) ──────────
// Moves the top disk from  src  to  dst.
// Validates the move and prints the action.
void moveDisk(int src, int dst) {
    if (pegs[src].empty()) {
        cerr << "ERROR: Attempted to move from empty peg "
             << PEG_NAMES[src] << "!\n";
        exit(1);
    }
    int disk = pegs[src].back();

    if (!pegs[dst].empty() && pegs[dst].back() < disk) {
        cerr << "ERROR: Cannot place disk " << disk
             << " on top of disk " << pegs[dst].back()
             << " (larger on smaller)!\n";
        exit(1);
    }

    pegs[src].pop_back();
    pegs[dst].push_back(disk);

    ++moveCount;
    cout << "Move " << setw(3) << moveCount
         << ":  Disk " << disk
         << "  " << PEG_NAMES[src] << " -> " << PEG_NAMES[dst] << "\n";
    displayTowers();
}

// ── YOUR CODE HERE ──────────────────────────────────────────
//
//  Parameters:
//    n   — number of disks to move
//    src — index of the source peg       (0 = A, 1 = B, 2 = C)
//    dst — index of the destination peg
//    aux — index of the auxiliary peg
//
//  Hints:
//    1. What is the base case?
//    2. To move n disks from src to dst:
//         a. First move the top ??? disks from ??? to ???
//         b. Then move the bottom disk from ??? to ???
//         c. Finally move the ??? disks from ??? to ???
//    3. Use  moveDisk(from, to)  for a single-disk transfer.
//
void hanoi(int n, int src, int dst, int aux) {
    // ┌──────────────────────────────────────────┐
    // │  TODO: Write your recursive solution here │
    // │                                           │
    // │  Delete this block and replace it with    │
    // │  your code. You need ~5 lines.            │
    // └──────────────────────────────────────────-┘
}


// ── Main ────────────────────────────────────────────────────
int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    numDisks = rand() % 5 + 3;   // random disk count: 3–7

    cout << "==========================================\n";
    cout << "   TOWERS OF HANOI — " << numDisks << " Disks\n";
    cout << "   Goal: Move all disks from A to C.\n";
    cout << "   Optimal moves: " << (1 << numDisks) - 1 << "\n";
    cout << "==========================================\n";

    // Initialize: stack disks on peg A (largest at bottom)
    for (int d = numDisks; d >= 1; --d) {
        pegs[0].push_back(d);
    }

    displayTowers();

    // Solve!
    hanoi(numDisks, 0, 2, 1);

    // Verify
    if (static_cast<int>(pegs[2].size()) == numDisks) {
        cout << "SUCCESS! All " << numDisks
             << " disks moved to peg C in "
             << moveCount << " moves.\n";
    } else {
        cout << "INCOMPLETE — not all disks are on peg C.\n";
    }

    return 0;
}