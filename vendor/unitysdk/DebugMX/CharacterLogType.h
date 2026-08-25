#pragma once
#include "../unitysdk.h"

namespace DebugMX { class CharacterLogType; }

namespace DebugMX
{
	inline static constexpr unsigned int CharacterLogType_TypeDefinitionIndex = 10134;

	class CharacterLogType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::DebugMX::CharacterLogType* Targeting; // 0x0
		::DebugMX::CharacterLogType* Pathfinding; // 0x0
		::DebugMX::CharacterLogType* Debug; // 0x0

	};
}

