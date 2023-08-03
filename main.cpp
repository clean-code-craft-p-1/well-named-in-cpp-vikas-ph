#include "ColorCode.h"
#include "TelcoColorCoderTest.h"

const char* TelcoColorCode = "--------------------------------------\nPair no.    Major color    Minor color\n--------------------------------------\n1           White          Blue       \n"
                             "2           White          Orange     \n3           White          Green      \n4           White          Brown      \n5           White          Slate      \n"
                             "6           Red            Blue       \n7           Red            Orange     \n8           Red            Green      \n9           Red            Brown      \n"
                             "10          Red            Slate      \n11          Black          Blue       \n12          Black          Orange     \n13          Black          Green      \n"
                             "14          Black          Brown      \n15          Black          Slate      \n16          Yellow         Blue       \n17          Yellow         Orange     \n"
                             "18          Yellow         Green      \n19          Yellow         Brown      \n20          Yellow         Slate      \n21          Violet         Blue       \n"
                             "22          Violet         Orange     \n23          Violet         Green      \n24          Violet         Brown      \n25          Violet         Slate        ";

void FillTelcoColorCodeList(std::vector<std::string>& actualTelcoColorCodeList) {
    const int bufferSize = 100;
    char buffer[bufferSize] = "\0";
    int bufferIndex = 0, index = 0;
    while (TelcoColorCode[index] != '\0') {
        if (bufferIndex < bufferSize) {
            if ((TelcoColorCode[index] != '\n')) {
                buffer[bufferIndex] = TelcoColorCode[index];
                ++index;
                ++bufferIndex;
            }
            else {
                ++index;
                bufferIndex = 0;
                actualTelcoColorCodeList.push_back(buffer);
            }
        }
    }
}

int main()
{
    std::vector<std::string> actualTelcoColorCodeList = {};
    FillTelcoColorCodeList(actualTelcoColorCodeList);

    testPrintTelCoColorCoderReferenceManual(actualTelcoColorCodeList);

    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    return 0;
}