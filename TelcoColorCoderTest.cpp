#include "assert.h"
#include "TelcoColorCoderTest.h"

using namespace TelCoColorCoder;

void testPrintTelCoColorCoderReferenceManual(std::vector<std::string> actualTelcoColorCodeList)
{
    std::vector<std::string> expectedTelcoColorCodeList = PrintTelcoColorCodeReferenceManual();

    assert(actualTelcoColorCodeList.size() == expectedTelcoColorCodeList.size());

    for (unsigned int index = 0u; index < actualTelcoColorCodeList.size(); ++index)
    {
        assert(actualTelcoColorCodeList[index] == expectedTelcoColorCodeList[index]);
    }
}

void testNumberToPair(int pairNumber,
                      TelCoColorCoder::MajorColor expectedMajor,
                      TelCoColorCoder::MinorColor expectedMinor)
{
    TelCoColorCoder::ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(TelCoColorCoder::MajorColor major,
                      TelCoColorCoder::MinorColor minor,
                      int expectedPairNumber)
{
    int pairNumber = GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}