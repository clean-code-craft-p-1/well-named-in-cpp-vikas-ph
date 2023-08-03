#include "ColorCode.h"
#include "TelcoColorCoderTest.h"

char* TelcoColorCode = "--------------------------------------\n"
                       "Pair no.    Major color    Minor color\n"
                       "--------------------------------------\n"
                       "1           White          Blue       \n"
                       "2           White          Orange     \n"
                       "3           White          Green      \n"
                       "4           White          Brown      \n"
                       "5           White          Slate      \n"
                       "6           Red            Blue       \n"
                       "7           Red            Orange     \n"
                       "8           Red            Green      \n"
                       "9           Red            Brown      \n"
                       "10          Red            Slate      \n"
                       "11          Black          Blue       \n"
                       "12          Black          Orange     \n"
                       "13          Black          Green      \n"
                       "14          Black          Brown      \n"
                       "15          Black          Slate      \n"
                       "16          Yellow         Blue       \n"
                       "17          Yellow         Orange     \n"
                       "18          Yellow         Green      \n"
                       "19          Yellow         Brown      \n"
                       "20          Yellow         Slate      \n"
                       "21          Violet         Blue       \n"
                       "22          Violet         Orange     \n"
                       "23          Violet         Green      \n"
                       "24          Violet         Brown      \n"
                       "25          Violet         Slate        ";

void FillTelcoColorCodeList(std::vector<std::string>& actualTelcoColorCodeList)
{
    const int bufferSize = 100;
    char buffer[bufferSize] = "\0";
    int bufferIndex = 0, index = 0;
    while (TelcoColorCode[index] != '\0')
    {
        if (bufferIndex < bufferSize)
        {
            if ((TelcoColorCode[index] != '\n'))
            {
                buffer[bufferIndex] = TelcoColorCode[index];
                ++index;
                ++bufferIndex;
            }
            else
            {
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
