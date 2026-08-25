#pragma once
#include "../../unitysdk.h"

namespace System::Threading
{
	inline static constexpr unsigned int EventResetMode_TypeDefinitionIndex = 24036;

	class EventResetMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Threading::EventResetMode* AutoReset; // 0x0
		::System::Threading::EventResetMode* ManualReset; // 0x0

	};
}

