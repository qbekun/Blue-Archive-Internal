#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define LEAN_TOUCH_LEANCAMERAZOOM_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EB3650)
#define LEAN_TOUCH_LEANCAMERAZOOM_SETINITIALZOOM_OFFSET UNITYSDK_OFFSET(0x1EB3670)
#define LEAN_TOUCH_LEANCAMERAZOOM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EB3790)
#define LEAN_TOUCH_LEANCAMERAZOOM_SETZOOM_OFFSET UNITYSDK_OFFSET(0x1EB3700)
#define LEAN_TOUCH_LEANCAMERAZOOM_ISTOPACTIVEUI_OFFSET UNITYSDK_OFFSET(0x1EB3AD0)
#define LEAN_TOUCH_LEANCAMERAZOOM_SETACTIVEUI_OFFSET UNITYSDK_OFFSET(0x1EB3C00)
#define LEAN_TOUCH_LEANCAMERAZOOM_SETACTIVEUI_OFFSET UNITYSDK_OFFSET(0x1EB3C10)
#define LEAN_TOUCH_LEANCAMERAZOOM_SETACTIVEUI_OFFSET UNITYSDK_OFFSET(0x1EB3CF0)
#define LEAN_TOUCH_LEANCAMERAZOOM_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EB3DD0)

namespace Lean::Touch
{
	inline static constexpr unsigned int LeanCameraZoom_TypeDefinitionIndex = 21259;

	class LeanCameraZoom : public Il2CppObject
	{
	public:
		::System::String* ActiveUI; // 0x18
		::UnityEngine::Camera* Camera; // 0x20
		::System::Boolean IgnoreGuiFingers; // 0x28
		::System::Int32 RequiredFingerCount; // 0x2C
		::System::Single WheelSensitivity; // 0x30
		::System::Single Zoom; // 0x34
		::System::Boolean ZoomClamp; // 0x38
		::System::Single ZoomMin; // 0x3C
		::System::Single ZoomMax; // 0x40
		::System::Single initialZoom; // 0x44

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANCAMERAZOOM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetInitialZoom()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANCAMERAZOOM_SETINITIALZOOM_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANCAMERAZOOM_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SetZoom(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANCAMERAZOOM_SETZOOM_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTopActiveUI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANCAMERAZOOM_ISTOPACTIVEUI_OFFSET))(nullptr);
		}

		::System::Void SetActiveUI(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANCAMERAZOOM_SETACTIVEUI_OFFSET))(str, nullptr);
		}

		::System::Void SetActiveUI(::UnityEngine::Component* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Component*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANCAMERAZOOM_SETACTIVEUI_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetActiveUI(::UnityEngine::GameObject* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANCAMERAZOOM_SETACTIVEUI_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANCAMERAZOOM_.CTOR_OFFSET))(nullptr);
		}

	};
}

