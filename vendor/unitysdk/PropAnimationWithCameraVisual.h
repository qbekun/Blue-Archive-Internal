#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define PROPANIMATIONWITHCAMERAVISUAL_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x10AA3E0)
#define PROPANIMATIONWITHCAMERAVISUAL_START_OFFSET UNITYSDK_OFFSET(0x10AA3F0)
#define PROPANIMATIONWITHCAMERAVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10AA400)
#define PROPANIMATIONWITHCAMERAVISUAL_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x10AA510)
#define PROPANIMATIONWITHCAMERAVISUAL_RESETANIMATION_OFFSET UNITYSDK_OFFSET(0x10AA530)
#define PROPANIMATIONWITHCAMERAVISUAL_STOPANIMATION_OFFSET UNITYSDK_OFFSET(0x10AA5B0)
#define PROPANIMATIONWITHCAMERAVISUAL_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x10AA5D0)
#define PROPANIMATIONWITHCAMERAVISUAL_SWITCHCAMERATOANIMATIONCAMERA_OFFSET UNITYSDK_OFFSET(0x10AA690)
#define PROPANIMATIONWITHCAMERAVISUAL_SWITCHCAMERATOORIGINALCAMERA_OFFSET UNITYSDK_OFFSET(0x10AA740)
#define PROPANIMATIONWITHCAMERAVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x10AA810)

	inline static constexpr unsigned int PropAnimationWithCameraVisual_TypeDefinitionIndex = 886;

	class PropAnimationWithCameraVisual : public Il2CppObject
	{
	public:
		::System::Int32 propKey; // 0x18
		::UnityEngine::Camera* animationCamera; // 0x20
		::System::Single lerpT; // 0x28
		::System::Single transitionDistance; // 0x2C
		::UnityEngine::Animation* propAnimation; // 0x30
		::System::Boolean isInitialized; // 0x38

		::UnityEngine::GameObject* get_GameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONWITHCAMERAVISUAL_GET_GAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONWITHCAMERAVISUAL_START_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONWITHCAMERAVISUAL_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void PlayAnimation(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONWITHCAMERAVISUAL_PLAYANIMATION_OFFSET))(str, nullptr);
		}

		::System::Void ResetAnimation(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONWITHCAMERAVISUAL_RESETANIMATION_OFFSET))(str, nullptr);
		}

		::System::Void StopAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONWITHCAMERAVISUAL_STOPANIMATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayAnimation(::System::String* str, ::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONWITHCAMERAVISUAL_PLAYANIMATION_OFFSET))(str, arg, nullptr);
		}

		::System::Collections::IEnumerator* SwitchCameraToAnimationCamera(::UnityEngine::Camera* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONWITHCAMERAVISUAL_SWITCHCAMERATOANIMATIONCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void SwitchCameraToOriginalCamera(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONWITHCAMERAVISUAL_SWITCHCAMERATOORIGINALCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONWITHCAMERAVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

