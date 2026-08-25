#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_ENDGAMEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB1CC0)

namespace MXUnderCover
{
	inline static constexpr unsigned int EndGameMessage_TypeDefinitionIndex = 9955;

	class EndGameMessage : public Il2CppObject
	{
	public:
		::System::Boolean isWin; // 0x10
		::System::Boolean isSkip; // 0x11

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ENDGAMEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

