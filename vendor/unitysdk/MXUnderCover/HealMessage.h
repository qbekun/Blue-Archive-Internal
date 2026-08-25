#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_HEALMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB1D20)

namespace MXUnderCover
{
	inline static constexpr unsigned int HealMessage_TypeDefinitionIndex = 9959;

	class HealMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_HEALMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};
}

