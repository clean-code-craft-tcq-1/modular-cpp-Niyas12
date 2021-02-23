#include "TeleCommColorCoder.h"


void testNumberToPair(int pairNumber,
    TeleCommunicationColorCoder::MajorColor expectedMajor,
    TeleCommunicationColorCoder::MinorColor expectedMinor)
{
    TeleCommunicationColorCoder::ColorPair colorPair =
        TeleCommunicationColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    TeleCommunicationColorCoder::MajorColor major,
    TeleCommunicationColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TeleCommunicationColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

int main() {
  
    testNumberToPair(4, TeleCommunicationColorCoder::WHITE, TeleCommunicationColorCoder::BROWN);
    testNumberToPair(5, TeleCommunicationColorCoder::WHITE, TeleCommunicationColorCoder::SLATE);

    testPairToNumber(TeleCommunicationColorCoder::BLACK, TeleCommunicationColorCoder::ORANGE, 12);
    testPairToNumber(TeleCommunicationColorCoder::VIOLET, TeleCommunicationColorCoder::SLATE, 25);

    return 0;
}
