#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionAsset; }
namespace UnityEngine::InputSystem { class InputControlScheme; }

#define CONTROLSCHEMESYNTAX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E5DA90)
#define CONTROLSCHEMESYNTAX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E5DCE0)
#define CONTROLSCHEMESYNTAX_WITHBINDINGGROUP_OFFSET UNITYSDK_OFFSET(0x9E5DD30)
#define CONTROLSCHEMESYNTAX_WITHREQUIREDDEVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONTROLSCHEMESYNTAX_WITHOPTIONALDEVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONTROLSCHEMESYNTAX_ORWITHREQUIREDDEVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONTROLSCHEMESYNTAX_ORWITHOPTIONALDEVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONTROLSCHEMESYNTAX_WITHREQUIREDDEVICE_OFFSET UNITYSDK_OFFSET(0x9E5E090)
#define CONTROLSCHEMESYNTAX_WITHOPTIONALDEVICE_OFFSET UNITYSDK_OFFSET(0x9E5E0D0)
#define CONTROLSCHEMESYNTAX_ORWITHREQUIREDDEVICE_OFFSET UNITYSDK_OFFSET(0x9E5E370)
#define CONTROLSCHEMESYNTAX_ORWITHOPTIONALDEVICE_OFFSET UNITYSDK_OFFSET(0x9E5E480)
#define CONTROLSCHEMESYNTAX_DEVICETYPETOCONTROLPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONTROLSCHEMESYNTAX_DONE_OFFSET UNITYSDK_OFFSET(0x9E5DE60)
#define CONTROLSCHEMESYNTAX_ADDDEVICEENTRY_OFFSET UNITYSDK_OFFSET(0x9E607F0)

	inline static constexpr unsigned int ControlSchemeSyntax_TypeDefinitionIndex = 28414;

	class ControlSchemeSyntax : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputActionAsset* m_Asset; // 0x10
		::System::Int32 m_ControlSchemeIndex; // 0x18
		::UnityEngine::InputSystem::InputControlScheme* m_ControlScheme; // 0x20

		::System::Void .ctor(::UnityEngine::InputSystem::InputActionAsset* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionAsset*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLSCHEMESYNTAX_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::InputControlScheme* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControlScheme*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLSCHEMESYNTAX_.CTOR_OFFSET))(arg, nullptr);
		}

		ControlSchemeSyntax* WithBindingGroup(::System::String* str)
		{
			return (return (ControlSchemeSyntax*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLSCHEMESYNTAX_WITHBINDINGGROUP_OFFSET))(str, nullptr);
		}

		ControlSchemeSyntax* WithRequiredDevice()
		{
			return (return (ControlSchemeSyntax*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLSCHEMESYNTAX_WITHREQUIREDDEVICE_OFFSET))(nullptr);
		}

		ControlSchemeSyntax* WithOptionalDevice()
		{
			return (return (ControlSchemeSyntax*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLSCHEMESYNTAX_WITHOPTIONALDEVICE_OFFSET))(nullptr);
		}

		ControlSchemeSyntax* OrWithRequiredDevice()
		{
			return (return (ControlSchemeSyntax*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLSCHEMESYNTAX_ORWITHREQUIREDDEVICE_OFFSET))(nullptr);
		}

		ControlSchemeSyntax* OrWithOptionalDevice()
		{
			return (return (ControlSchemeSyntax*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLSCHEMESYNTAX_ORWITHOPTIONALDEVICE_OFFSET))(nullptr);
		}

		ControlSchemeSyntax* WithRequiredDevice(::System::String* str)
		{
			return (return (ControlSchemeSyntax*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLSCHEMESYNTAX_WITHREQUIREDDEVICE_OFFSET))(str, nullptr);
		}

		ControlSchemeSyntax* WithOptionalDevice(::System::String* str)
		{
			return (return (ControlSchemeSyntax*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLSCHEMESYNTAX_WITHOPTIONALDEVICE_OFFSET))(str, nullptr);
		}

		ControlSchemeSyntax* OrWithRequiredDevice(::System::String* str)
		{
			return (return (ControlSchemeSyntax*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLSCHEMESYNTAX_ORWITHREQUIREDDEVICE_OFFSET))(str, nullptr);
		}

		ControlSchemeSyntax* OrWithOptionalDevice(::System::String* str)
		{
			return (return (ControlSchemeSyntax*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLSCHEMESYNTAX_ORWITHOPTIONALDEVICE_OFFSET))(str, nullptr);
		}

		::System::String* DeviceTypeToControlPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLSCHEMESYNTAX_DEVICETYPETOCONTROLPATH_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputControlScheme* Done()
		{
			return (return (::UnityEngine::InputSystem::InputControlScheme*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLSCHEMESYNTAX_DONE_OFFSET))(nullptr);
		}

		::System::Void AddDeviceEntry(::System::String* str, Flags* arg)
		{
			((::System::Void(*)(::System::String*, Flags*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLSCHEMESYNTAX_ADDDEVICEENTRY_OFFSET))(str, arg, nullptr);
		}

	};

