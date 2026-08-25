#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPConsoleSystemMessageType; }

namespace NPA
{
	inline static constexpr unsigned int NXPConsoleSystemMessageType_TypeDefinitionIndex = 25500;

	class NXPConsoleSystemMessageType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::NXPConsoleSystemMessageType* EMPTY_STORE; // 0x0
		::NPA::NXPConsoleSystemMessageType* CHAT_RESTRICTED; // 0x0
		::NPA::NXPConsoleSystemMessageType* UGC_RESTRICTED; // 0x0

	};
}

