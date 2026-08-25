#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_VFX_VISUALEFFECTASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A8680)
#define UNITYENGINE_VFX_VISUALEFFECTASSET_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA4A86D0)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VisualEffectAsset_TypeDefinitionIndex = 37926;

	class VisualEffectAsset : public Il2CppObject
	{
	public:
		::System::Int32 PlayEventID; // 0x0
		::System::Int32 StopEventID; // 0x4

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VISUALEFFECTASSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VISUALEFFECTASSET_.CCTOR_OFFSET))(nullptr);
		}

	};
}

