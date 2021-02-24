#include "TeleCommColorCoder.h"


void test_GetColorPairFromPairNumber(int pairNumber,
    TeleCommunicationColorCoder::MajorColor expectedMajor,
    TeleCommunicationColorCoder::MinorColor expectedMinor)
{
    TeleCommunicationColorCoder::ColorPair colorPair =
        TeleCommunicationColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.getColorCodeString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void test_GetPairNumberFromColorPair(
    TeleCommunicationColorCoder::MajorColor major,
    TeleCommunicationColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TeleCommunicationColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

int main() {
  
    test_GetColorPairFromPairNumber(4, TeleCommunicationColorCoder::WHITE, TeleCommunicationColorCoder::BROWN);
    test_GetColorPairFromPairNumber(5, TeleCommunicationColorCoder::WHITE, TeleCommunicationColorCoder::SLATE);

    test_GetPairNumberFromColorPair(TeleCommunicationColorCoder::BLACK, TeleCommunicationColorCoder::ORANGE, 12);
    test_GetPairNumberFromColorPair(TeleCommunicationColorCoder::VIOLET, TeleCommunicationColorCoder::SLATE, 25);

    return 0;
}
