#pragma once
#include "../../unitysdk.h"

#define MONO_INTEROP_MONOPINVOKECALLBACKATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91245A0)

namespace Mono::Interop
{
	inline static constexpr unsigned int MonoPInvokeCallbackAttribute_TypeDefinitionIndex = 23598;

	class MonoPInvokeCallbackAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_INTEROP_MONOPINVOKECALLBACKATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

