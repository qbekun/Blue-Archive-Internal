#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define IPROPANIMATIONVISUAL_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define IPROPANIMATIONVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define IPROPANIMATIONVISUAL_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define IPROPANIMATIONVISUAL_RESETANIMATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define IPROPANIMATIONVISUAL_STOPANIMATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define IPROPANIMATIONVISUAL_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IPropAnimationVisual_TypeDefinitionIndex = 880;

	class IPropAnimationVisual : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* get_GameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPROPANIMATIONVISUAL_GET_GAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPROPANIMATIONVISUAL_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void PlayAnimation(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + IPROPANIMATIONVISUAL_PLAYANIMATION_OFFSET))(str, nullptr);
		}

		::System::Void ResetAnimation(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + IPROPANIMATIONVISUAL_RESETANIMATION_OFFSET))(str, nullptr);
		}

		::System::Void StopAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPROPANIMATIONVISUAL_STOPANIMATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayAnimation(::System::String* str, ::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + IPROPANIMATIONVISUAL_PLAYANIMATION_OFFSET))(str, arg, nullptr);
		}

	};

