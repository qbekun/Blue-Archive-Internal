#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_OPTIONALATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9222C60)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int OptionalAttribute_TypeDefinitionIndex = 24704;

	class OptionalAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_OPTIONALATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

