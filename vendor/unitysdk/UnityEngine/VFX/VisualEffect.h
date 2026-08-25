#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::VFX { class VFXEventAttribute; }
namespace UnityEngine::VFX { class VisualEffectAsset; }
namespace UnityEngine::VFX { class VisualEffect; }

#define UNITYENGINE_VFX_VISUALEFFECT_GET_VISUALEFFECTASSET_OFFSET UNITYSDK_OFFSET(0xA4A8770)
#define UNITYENGINE_VFX_VISUALEFFECT_CREATEVFXEVENTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA4A87B0)
#define UNITYENGINE_VFX_VISUALEFFECT_INVOKEGETCACHEDEVENTATTRIBUTEFOROUTPUTEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA4A8870)
#define UNITYENGINE_VFX_VISUALEFFECT_INVOKEOUTPUTEVENTRECEIVED_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA4A88D0)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VisualEffect_TypeDefinitionIndex = 37928;

	class VisualEffect : public Il2CppObject
	{
	public:
		::UnityEngine::VFX::VFXEventAttribute* m_cachedEventAttribute; // 0x18
		Il2CppObject* outputEventReceived; // 0x20

		::UnityEngine::VFX::VisualEffectAsset* get_visualEffectAsset()
		{
			return (return (::UnityEngine::VFX::VisualEffectAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VISUALEFFECT_GET_VISUALEFFECTASSET_OFFSET))(nullptr);
		}

		::UnityEngine::VFX::VFXEventAttribute* CreateVFXEventAttribute()
		{
			return (return (::UnityEngine::VFX::VFXEventAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VISUALEFFECT_CREATEVFXEVENTATTRIBUTE_OFFSET))(nullptr);
		}

		::UnityEngine::VFX::VFXEventAttribute* InvokeGetCachedEventAttributeForOutputEvent_Internal(::UnityEngine::VFX::VisualEffect* arg)
		{
			return (return (::UnityEngine::VFX::VFXEventAttribute*(*)(::UnityEngine::VFX::VisualEffect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VISUALEFFECT_INVOKEGETCACHEDEVENTATTRIBUTEFOROUTPUTEVENT_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeOutputEventReceived_Internal(::UnityEngine::VFX::VisualEffect* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::VFX::VisualEffect*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VISUALEFFECT_INVOKEOUTPUTEVENTRECEIVED_INTERNAL_OFFSET))(arg, arg, nullptr);
		}

	};
}

