#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCPlayer; }

#define MXUNDERCOVER_SWITCHEDPLAYERMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB1B90)

namespace MXUnderCover
{
	inline static constexpr unsigned int SwitchedPlayerMessage_TypeDefinitionIndex = 9949;

	class SwitchedPlayerMessage : public Il2CppObject
	{
	public:
		::MXUnderCover::UCPlayer* CurrentPlayer; // 0x10

		::System::Void .ctor(::MXUnderCover::UCPlayer* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_SWITCHEDPLAYERMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

