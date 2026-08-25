#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualSenseHIDOutputReportPayload_TypeDefinitionIndex = 28700;

	class DualSenseHIDOutputReportPayload : public Il2CppObject
	{
	public:
		::System::Byte enableFlags1; // 0x10
		::System::Byte enableFlags2; // 0x11
		::System::Byte highFrequencyMotorSpeed; // 0x12
		::System::Byte lowFrequencyMotorSpeed; // 0x13
		::System::Byte redColor; // 0x3C
		::System::Byte greenColor; // 0x3D
		::System::Byte blueColor; // 0x3E

	};
}

