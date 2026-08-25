#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_STARTLOADINVENMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA94A0)

namespace MXUnderCover
{
	inline static constexpr unsigned int StartLoadInvenMessage_TypeDefinitionIndex = 9957;

	class StartLoadInvenMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_STARTLOADINVENMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};
}

