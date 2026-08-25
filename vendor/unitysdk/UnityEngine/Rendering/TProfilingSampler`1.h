#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_TPROFILINGSAMPLER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_TPROFILINGSAMPLER`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TProfilingSampler`1_TypeDefinitionIndex = 33981;

	class TProfilingSampler`1 : public Il2CppObject
	{
	public:
		Il2CppObject* samples; // 0x0

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TPROFILINGSAMPLER`1_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TPROFILINGSAMPLER`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

