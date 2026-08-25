#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_VOLUMEISOLATIONSCOPE_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FE37F0)
#define UNITYENGINE_RENDERING_VOLUMEISOLATIONSCOPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE3800)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeIsolationScope_TypeDefinitionIndex = 34091;

	class VolumeIsolationScope : public Il2CppObject
	{
	public:
		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEISOLATIONSCOPE_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEISOLATIONSCOPE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

