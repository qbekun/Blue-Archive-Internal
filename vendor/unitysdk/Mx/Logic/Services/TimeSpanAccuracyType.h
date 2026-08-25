#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Services { class TimeSpanAccuracyType; }

namespace MX::Logic::Services
{
	inline static constexpr unsigned int TimeSpanAccuracyType_TypeDefinitionIndex = 12991;

	class TimeSpanAccuracyType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Services::TimeSpanAccuracyType* Seconds; // 0x0
		::MX::Logic::Services::TimeSpanAccuracyType* MillisecondThreeDigit; // 0x0

	};
}

