#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x9F28C90)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_MENU_OFFSET UNITYSDK_OFFSET(0x9F28D80)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_VIEW_OFFSET UNITYSDK_OFFSET(0x9F28D90)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F28DA0)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F28DF0)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9F28E00)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_SET_MENU_OFFSET UNITYSDK_OFFSET(0x9F28E80)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_SET_VIEW_OFFSET UNITYSDK_OFFSET(0x9F28EA0)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_PARSECAPABILITIES_OFFSET UNITYSDK_OFFSET(0x9F28D10)

namespace UnityEngine::InputSystem::XInput
{
	inline static constexpr unsigned int XInputController_TypeDefinitionIndex = 28604;

	class XInputController : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField; // 0x1F0
		::UnityEngine::InputSystem::Controls::ButtonControl* _view_k__BackingField; // 0x1F8
		::System::Boolean m_HaveParsedCapabilities; // 0x200
		DeviceSubType* m_SubType; // 0x204
		DeviceFlags* m_Flags; // 0x208

		DeviceSubType* get_subType()
		{
			return (return (DeviceSubType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_SUBTYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_menu()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_MENU_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_view()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_VIEW_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		DeviceFlags* get_flags()
		{
			return (return (DeviceFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_FLAGS_OFFSET))(nullptr);
		}

		::System::Void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_SET_MENU_OFFSET))(arg, nullptr);
		}

		::System::Void set_view(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_SET_VIEW_OFFSET))(arg, nullptr);
		}

		::System::Void ParseCapabilities()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_PARSECAPABILITIES_OFFSET))(nullptr);
		}

	};
}

