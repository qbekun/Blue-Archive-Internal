#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x983DC80)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsReadOnlyAttribute_TypeDefinitionIndex = 38079;

	class IsReadOnlyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

