#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_UCMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB1B10)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCMessage_TypeDefinitionIndex = 9945;

	class UCMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};
}

