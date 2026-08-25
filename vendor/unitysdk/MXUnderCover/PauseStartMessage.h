#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_PAUSESTARTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDBDAE0)

namespace MXUnderCover
{
	inline static constexpr unsigned int PauseStartMessage_TypeDefinitionIndex = 10009;

	class PauseStartMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_PAUSESTARTMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};
}

