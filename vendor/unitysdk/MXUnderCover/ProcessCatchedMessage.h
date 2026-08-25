#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_PROCESSCATCHEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB1D30)

namespace MXUnderCover
{
	inline static constexpr unsigned int ProcessCatchedMessage_TypeDefinitionIndex = 9960;

	class ProcessCatchedMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_PROCESSCATCHEDMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};
}

