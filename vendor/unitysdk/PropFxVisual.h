#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class GameObject; }

#define PROPFXVISUAL_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x10AAD60)
#define PROPFXVISUAL_AWAKE_OFFSET UNITYSDK_OFFSET(0x10AAD70)
#define PROPFXVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10AAD80)
#define PROPFXVISUAL_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x10AAE90)
#define PROPFXVISUAL_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x10AAEF0)
#define PROPFXVISUAL_RESETANIMATION_OFFSET UNITYSDK_OFFSET(0x10AAFA0)
#define PROPFXVISUAL_STOPANIMATION_OFFSET UNITYSDK_OFFSET(0x10AAFF0)
#define PROPFXVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x10AB040)

	inline static constexpr unsigned int PropFxVisual_TypeDefinitionIndex = 888;

	class PropFxVisual : public Il2CppObject
	{
	public:
		::System::Int32 propKey; // 0x18
		::UnityEngine::ParticleSystem* propFx; // 0x20
		::System::Boolean isInitialized; // 0x28

		::UnityEngine::GameObject* get_GameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPFXVISUAL_GET_GAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPFXVISUAL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPFXVISUAL_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void PlayAnimation(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PROPFXVISUAL_PLAYANIMATION_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* PlayAnimation(::System::String* str, ::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PROPFXVISUAL_PLAYANIMATION_OFFSET))(str, arg, nullptr);
		}

		::System::Void ResetAnimation(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PROPFXVISUAL_RESETANIMATION_OFFSET))(str, nullptr);
		}

		::System::Void StopAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPFXVISUAL_STOPANIMATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPFXVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

