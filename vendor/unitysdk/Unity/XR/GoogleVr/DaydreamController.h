#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_APP_OFFSET UNITYSDK_OFFSET(0x9E3F560)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E3F570)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_APP_OFFSET UNITYSDK_OFFSET(0x9E3F830)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3F850)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_TOUCHPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x9E3F860)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3F880)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_VOLUMEUP_OFFSET UNITYSDK_OFFSET(0x9E3F890)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_RECENTERING_OFFSET UNITYSDK_OFFSET(0x9E3F8B0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x9E3F8C0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3F8D0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_VOLUMEDOWN_OFFSET UNITYSDK_OFFSET(0x9E3F8F0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3F900)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_HOME_OFFSET UNITYSDK_OFFSET(0x9E3F920)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_RECENTERED_OFFSET UNITYSDK_OFFSET(0x9E3F930)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_TOUCHPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x9E3F950)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3F960)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_VOLUMEDOWN_OFFSET UNITYSDK_OFFSET(0x9E3F970)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_VOLUMEUP_OFFSET UNITYSDK_OFFSET(0x9E3F990)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_HOME_OFFSET UNITYSDK_OFFSET(0x9E3F9A0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x9E3F9C0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_RECENTERING_OFFSET UNITYSDK_OFFSET(0x9E3F9E0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_TOUCHPADCLICKED_OFFSET UNITYSDK_OFFSET(0x9E3FA00)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_RECENTERED_OFFSET UNITYSDK_OFFSET(0x9E3FA20)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_TOUCHPADCLICKED_OFFSET UNITYSDK_OFFSET(0x9E3FA30)

namespace Unity::XR::GoogleVr
{
	inline static constexpr unsigned int DaydreamController_TypeDefinitionIndex = 28369;

	class DaydreamController : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::ButtonControl* _volumeUp_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::ButtonControl* _recentered_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _volumeDown_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _recentering_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::ButtonControl* _app_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::ButtonControl* _home_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadClicked_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadTouched_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAcceleration_k__BackingField; // 0x1E0

		::UnityEngine::InputSystem::Controls::ButtonControl* get_app()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_APP_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void set_app(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_APP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAcceleration()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_DEVICEACCELERATION_OFFSET))(nullptr);
		}

		::System::Void set_touchpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_TOUCHPADTOUCHED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_volumeUp(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_VOLUMEUP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_recentering()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_RECENTERING_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_TOUCHPAD_OFFSET))(nullptr);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_DEVICEVELOCITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_volumeDown()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_VOLUMEDOWN_OFFSET))(nullptr);
		}

		::System::Void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_DEVICEACCELERATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_home()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_HOME_OFFSET))(nullptr);
		}

		::System::Void set_recentered(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_RECENTERED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouched()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_TOUCHPADTOUCHED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_DEVICEVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_volumeDown(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_VOLUMEDOWN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_volumeUp()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_VOLUMEUP_OFFSET))(nullptr);
		}

		::System::Void set_home(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_HOME_OFFSET))(arg, nullptr);
		}

		::System::Void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector2Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_TOUCHPAD_OFFSET))(arg, nullptr);
		}

		::System::Void set_recentering(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_RECENTERING_OFFSET))(arg, nullptr);
		}

		::System::Void set_touchpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_TOUCHPADCLICKED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_recentered()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_RECENTERED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClicked()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_TOUCHPADCLICKED_OFFSET))(nullptr);
		}

	};
}

