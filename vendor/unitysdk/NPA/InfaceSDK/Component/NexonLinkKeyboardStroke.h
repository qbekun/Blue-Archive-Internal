#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int NexonLinkKeyboardStroke_TypeDefinitionIndex = 25940;

	class NexonLinkKeyboardStroke : public Il2CppObject
	{
	public:
		::System::UInt32 virtualKey; // 0x10
		::System::UInt32 scanCode; // 0x14
		::System::Boolean isDown; // 0x18
		::System::Boolean isExtendedKey; // 0x19
		::System::Boolean isAltPressed; // 0x1A
		::System::Boolean isShiftPressed; // 0x1B
		::System::Boolean isCtrlPressed; // 0x1C
		::System::Boolean isRepeat; // 0x1D

	};
}

