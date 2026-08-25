#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_BINDINGS_NATIVEASSTRUCTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5D80)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeAsStructAttribute_TypeDefinitionIndex = 37886;

	class NativeAsStructAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEASSTRUCTATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

