#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_UCACTIONCOROUTINEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9B680)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCActionCoroutineHandler_TypeDefinitionIndex = 9810;

	class UCActionCoroutineHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCACTIONCOROUTINEHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

