/**
 * @file /src/includes/helpers/menu.cpp
 * @brief  A helper that is used to create a menu.
 */

/* Including the libraries that are used in this HELPER. */
#include "windows.h"
#include <conio.h>

/* Including the files in the constants folder. */
#include "../constants/color.cpp"
#include "../constants/escapeSequence.cpp"
#include "../constants/keyStroke.cpp"

/* Including the files in the structures folder. */
#include "../structures/menuStruct.cpp"

#include "../../core/components/text.cpp"

#ifndef CPP_MENU_HELPER
#define CPP_MENU_HELPER

/**
 * It creates a menu
 *
 * @param menuStruct is a struct array that contains the menu items.
 * @param maxItem The number of items in the menu.
 */
// void createMenu(struct MenuStruct menuStruct[], int maxItem) {
//   int ptr = 0;
//   int keyStroke = 0;
//   int color[] = {TEXT_WHITE, TEXT_BLUE};
//   int index[maxItem];
//   index[ptr] = 1;

//   for (int i = 1; i < maxItem; i++)
//     index[i] = ptr;

//   while (keyStroke != ESCAPE_KEY) {
//     for (int i = 0; i < maxItem; i++) {
//       text(menuStruct[i].name, color[index[i]], menuStruct[i].alignmentX,
//            menuStruct[i].alignmentY);
//     }

//     keyStroke = _getch();
//     fflush(stdin);

//     // UP_ARROW: 72
//     if (keyStroke == UP_ARROW_KEY) {
//       index[ptr] = 0;
//       if (ptr == 0)
//         ptr = maxItem - 1;
//       else
//         ptr--;
//       index[ptr] = 1;
//     }

//     // DOWN_ARROW: 80
//     if (keyStroke == DOWN_ARROW_KEY) {
//       index[ptr] = 0;
//       if (ptr == maxItem - 1)
//         ptr = 0;
//       else
//         ptr++;
//       index[ptr] = 1;
//     }

//     if (keyStroke == CURRIAGE_RETURN) {
//       for (int i = 0; i <= maxItem; i++) {
//         if (ptr == i) {
//           menuStruct[i].renderItems(menuStruct[i].type);
//         }
//       }
//     }

//     // system("cls");
//   }
// }

#endif
