#pragma once
#include "../unitysdk.h"

namespace DebugMX { class CheatProbType; }

namespace DebugMX
{
	inline static constexpr unsigned int CheatProbType_TypeDefinitionIndex = 10135;

	class CheatProbType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::DebugMX::CheatProbType* None; // 0x0
		::DebugMX::CheatProbType* Always; // 0x0
		::DebugMX::CheatProbType* Never; // 0x0

	};
}

