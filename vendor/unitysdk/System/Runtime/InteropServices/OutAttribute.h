#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_OUTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9222C50)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int OutAttribute_TypeDefinitionIndex = 24703;

	class OutAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_OUTATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

