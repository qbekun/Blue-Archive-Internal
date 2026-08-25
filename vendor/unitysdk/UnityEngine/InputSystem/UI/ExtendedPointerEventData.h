#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::UI { class UIPointerType; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine::EventSystems { class EventSystem; }
namespace UnityEngine::InputSystem::Controls { class TouchControl; }
namespace UnityEngine::InputSystem { class Pen; }

#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_DEVICE_OFFSET UNITYSDK_OFFSET(0x9F2EF30)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_TOUCHID_OFFSET UNITYSDK_OFFSET(0x9F2EF50)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_TRACKEDDEVICEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F2EF60)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F2EF80)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GETTOUCHPOINTERID_OFFSET UNITYSDK_OFFSET(0x9F2EF90)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x9F2F090)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x9F2F0A0)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_POINTERTYPE_OFFSET UNITYSDK_OFFSET(0x9F2F0B0)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_TRACKEDDEVICEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F2F0C0)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_POINTERTYPE_OFFSET UNITYSDK_OFFSET(0x9F2F0E0)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_READDEVICESTATE_OFFSET UNITYSDK_OFFSET(0x9F2F0F0)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_TRACKEDDEVICEORIENTATION_OFFSET UNITYSDK_OFFSET(0x9F2F600)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_UITOOLKITPOINTERID_OFFSET UNITYSDK_OFFSET(0x9F2F610)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_UITOOLKITPOINTERID_OFFSET UNITYSDK_OFFSET(0x9F2F620)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_MAKEPOINTERIDFORTOUCH_OFFSET UNITYSDK_OFFSET(0x9F2F630)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F2F640)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_CONTROL_OFFSET UNITYSDK_OFFSET(0x9F2FB20)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GETPENPOINTERID_OFFSET UNITYSDK_OFFSET(0x9F2F3A0)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_TRACKEDDEVICEORIENTATION_OFFSET UNITYSDK_OFFSET(0x9F2FB40)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_TOUCHIDFROMPOINTERID_OFFSET UNITYSDK_OFFSET(0x9F2FB50)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_TOUCHID_OFFSET UNITYSDK_OFFSET(0x9F2FB60)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int ExtendedPointerEventData_TypeDefinitionIndex = 28623;

	class ExtendedPointerEventData : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputControl* _control_k__BackingField; // 0x170
		::UnityEngine::InputSystem::InputDevice* _device_k__BackingField; // 0x178
		::System::Int32 _touchId_k__BackingField; // 0x180
		::UnityEngine::InputSystem::UI::UIPointerType* _pointerType_k__BackingField; // 0x184
		::System::Int32 _uiToolkitPointerId_k__BackingField; // 0x188
		::UnityEngine::Vector3* _trackedDevicePosition_k__BackingField; // 0x18C
		::UnityEngine::Quaternion* _trackedDeviceOrientation_k__BackingField; // 0x198

		::System::Void set_device(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_DEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void set_touchId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_TOUCHID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_trackedDevicePosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_TRACKEDDEVICEPOSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::EventSystems::EventSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::EventSystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetTouchPointerId(::UnityEngine::InputSystem::Controls::TouchControl* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::Controls::TouchControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GETTOUCHPOINTERID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* get_device()
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_DEVICE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputControl* get_control()
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_CONTROL_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::UI::UIPointerType* get_pointerType()
		{
			return (return (::UnityEngine::InputSystem::UI::UIPointerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_POINTERTYPE_OFFSET))(nullptr);
		}

		::System::Void set_trackedDevicePosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_TRACKEDDEVICEPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_pointerType(::UnityEngine::InputSystem::UI::UIPointerType* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::UI::UIPointerType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_POINTERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void ReadDeviceState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_READDEVICESTATE_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* get_trackedDeviceOrientation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_TRACKEDDEVICEORIENTATION_OFFSET))(nullptr);
		}

		::System::Int32 get_uiToolkitPointerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_UITOOLKITPOINTERID_OFFSET))(nullptr);
		}

		::System::Void set_uiToolkitPointerId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_UITOOLKITPOINTERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 MakePointerIdForTouch(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_MAKEPOINTERIDFORTOUCH_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void set_control(::UnityEngine::InputSystem::InputControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_CONTROL_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPenPointerId(::UnityEngine::InputSystem::Pen* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::Pen*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GETPENPOINTERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_trackedDeviceOrientation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_TRACKEDDEVICEORIENTATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 TouchIdFromPointerId(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_TOUCHIDFROMPOINTERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_touchId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_TOUCHID_OFFSET))(nullptr);
		}

	};
}

