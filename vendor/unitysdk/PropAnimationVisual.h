#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define PROPANIMATIONVISUAL_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x10A9D10)
#define PROPANIMATIONVISUAL_START_OFFSET UNITYSDK_OFFSET(0x10A9D20)
#define PROPANIMATIONVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10A9D30)
#define PROPANIMATIONVISUAL_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x10A9ED0)
#define PROPANIMATIONVISUAL_STOPANIMATION_OFFSET UNITYSDK_OFFSET(0x10A9EF0)
#define PROPANIMATIONVISUAL_RESETANIMATION_OFFSET UNITYSDK_OFFSET(0x10A9F10)
#define PROPANIMATIONVISUAL_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x10A9F90)
#define PROPANIMATIONVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x10AA050)

	inline static constexpr unsigned int PropAnimationVisual_TypeDefinitionIndex = 882;

	class PropAnimationVisual : public Il2CppObject
	{
	public:
		::System::Int32 propKey; // 0x18
		::UnityEngine::Animation* propAnimation; // 0x20
		::System::Boolean isInitialized; // 0x28

		::UnityEngine::GameObject* get_GameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONVISUAL_GET_GAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONVISUAL_START_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONVISUAL_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void PlayAnimation(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONVISUAL_PLAYANIMATION_OFFSET))(str, nullptr);
		}

		::System::Void StopAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONVISUAL_STOPANIMATION_OFFSET))(nullptr);
		}

		::System::Void ResetAnimation(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONVISUAL_RESETANIMATION_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* PlayAnimation(::System::String* str, ::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONVISUAL_PLAYANIMATION_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

