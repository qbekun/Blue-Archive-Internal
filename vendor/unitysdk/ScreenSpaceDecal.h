#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine { class Camera; }

#define SCREENSPACEDECAL_ONPRERENDERCALLBACK_OFFSET UNITYSDK_OFFSET(0x20D8D70)
#define SCREENSPACEDECAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20D9570)
#define SCREENSPACEDECAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x20D9D10)
#define SCREENSPACEDECAL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20D9D20)
#define SCREENSPACEDECAL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x20D9DC0)

	inline static constexpr unsigned int ScreenSpaceDecal_TypeDefinitionIndex = 3737;

	class ScreenSpaceDecal : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* CustomFloats; // 0x18
		::UnityEngine::Renderer* rend; // 0x20
		::UnityEngine::Material* mat; // 0x28
		::System::Boolean isMatInstance; // 0x30
		::System::Boolean isPlayingAndSRPBatcherAvailable; // 0x31
		::UnityEngine::MaterialPropertyBlock* propBlock; // 0x38

		::System::Void OnPreRenderCallback(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Camera* arg2)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEDECAL_ONPRERENDERCALLBACK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEDECAL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEDECAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEDECAL_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEDECAL_ONDESTROY_OFFSET))(nullptr);
		}

	};

