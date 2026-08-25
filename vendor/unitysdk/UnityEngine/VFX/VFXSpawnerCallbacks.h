#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::VFX { class VFXSpawnerState; }
namespace UnityEngine::VFX { class VFXExpressionValues; }
namespace UnityEngine::VFX { class VisualEffect; }

#define UNITYENGINE_VFX_VFXSPAWNERCALLBACKS_ONPLAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_VFX_VFXSPAWNERCALLBACKS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_VFX_VFXSPAWNERCALLBACKS_ONSTOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_VFX_VFXSPAWNERCALLBACKS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A8000)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VFXSpawnerCallbacks_TypeDefinitionIndex = 37923;

	class VFXSpawnerCallbacks : public Il2CppObject
	{
	public:
		::System::Void OnPlay(::UnityEngine::VFX::VFXSpawnerState* arg, ::UnityEngine::VFX::VFXExpressionValues* arg, ::UnityEngine::VFX::VisualEffect* arg)
		{
			((::System::Void(*)(::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*, ::UnityEngine::VFX::VisualEffect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERCALLBACKS_ONPLAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnUpdate(::UnityEngine::VFX::VFXSpawnerState* arg, ::UnityEngine::VFX::VFXExpressionValues* arg, ::UnityEngine::VFX::VisualEffect* arg)
		{
			((::System::Void(*)(::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*, ::UnityEngine::VFX::VisualEffect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERCALLBACKS_ONUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnStop(::UnityEngine::VFX::VFXSpawnerState* arg, ::UnityEngine::VFX::VFXExpressionValues* arg, ::UnityEngine::VFX::VisualEffect* arg)
		{
			((::System::Void(*)(::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*, ::UnityEngine::VFX::VisualEffect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERCALLBACKS_ONSTOP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERCALLBACKS_.CTOR_OFFSET))(nullptr);
		}

	};
}

