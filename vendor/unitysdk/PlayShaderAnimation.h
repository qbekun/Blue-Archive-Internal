#pragma once
#include "unitysdk.h"

class ShaderBaseAnimationData;
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class ShadowCastingMode; }

#define PLAYSHADERANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x20D4A20)
#define PLAYSHADERANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0x20D4A30)
#define PLAYSHADERANIMATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20D5000)
#define PLAYSHADERANIMATION_DELAYSETSHADOW_OFFSET UNITYSDK_OFFSET(0x20D4EB0)
#define PLAYSHADERANIMATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20D50D0)

	inline static constexpr unsigned int PlayShaderAnimation_TypeDefinitionIndex = 3724;

	class PlayShaderAnimation : public Il2CppObject
	{
	public:
		ShaderBaseAnimationData* animationData; // 0x18
		::Il2CppArray<::System::Object*>* materialInfos; // 0x20
		::System::Boolean PlayOnAwake; // 0x28
		::System::Boolean ResetOnDisable; // 0x29
		ShaderBaseAnimationData* animationInstance; // 0x30
		::Il2CppArray<::System::Object*>* materials; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYSHADERANIMATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYSHADERANIMATION_PLAY_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYSHADERANIMATION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* DelaySetShadow(::UnityEngine::Renderer* arg, ::System::Single arg2, ::UnityEngine::Rendering::ShadowCastingMode* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Renderer*, ::System::Single, ::UnityEngine::Rendering::ShadowCastingMode*, ::PVOID))((::PBYTE)hIl2Cpp + PLAYSHADERANIMATION_DELAYSETSHADOW_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYSHADERANIMATION_ONDISABLE_OFFSET))(nullptr);
		}

	};

