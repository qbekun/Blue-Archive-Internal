#pragma once
#include "../../unitysdk.h"

#define MONO_UTIL_MONOPINVOKECALLBACKATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96C9610)

namespace Mono::Util
{
	inline static constexpr unsigned int MonoPInvokeCallbackAttribute_TypeDefinitionIndex = 28993;

	class MonoPInvokeCallbackAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UTIL_MONOPINVOKECALLBACKATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

