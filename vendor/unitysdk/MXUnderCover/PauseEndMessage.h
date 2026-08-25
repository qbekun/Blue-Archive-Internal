#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_PAUSEENDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDBF370)

namespace MXUnderCover
{
	inline static constexpr unsigned int PauseEndMessage_TypeDefinitionIndex = 10010;

	class PauseEndMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_PAUSEENDMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};
}

