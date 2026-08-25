#pragma once
#include "../unitysdk.h"

#define AOT_MONOPINVOKECALLBACKATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DF910)

namespace AOT
{
	inline static constexpr unsigned int MonoPInvokeCallbackAttribute_TypeDefinitionIndex = 30844;

	class MonoPInvokeCallbackAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + AOT_MONOPINVOKECALLBACKATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

