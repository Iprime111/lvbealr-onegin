#ifndef OUTPUT_TEXT_H_
#define OUTPUT_TEXT_H_

// FUNCTION PROTOTYPES //
/**
 * @brief Save Changed (Forward / Backward Sorted) Text Into File 
 * 
 * @param fileName Output File Name
 * @param textData Pointer To TextData Struct (See Struct Description)
 * @param lineArray Array Of Pointers To TextLine Structs
 * @return [int] Return Code (Success / Error)
 */
int saveChangedText(const char *fileName, textData *textData, textLine *lineArray);

/**
 * @brief Save Original Text Into File
 * 
 * @param fileName Output File Name
 * @param textData Pointer To TextData Struct (See Struct Description)
 * @return [int] Return Code (Success / Error)
 */
int saveOriginalText(const char *fileName, textData *textData);
// FUNCTION PROTOTYPES //

#endif // OUTPUT_TEXT_H_