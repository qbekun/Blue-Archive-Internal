#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class Toggle; }

#define UNITYENGINE_UI_TOGGLEGROUP_START_OFFSET UNITYSDK_OFFSET(0xA485D10)
#define UNITYENGINE_UI_TOGGLEGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA485D30)
#define UNITYENGINE_UI_TOGGLEGROUP_ANYTOGGLESON_OFFSET UNITYSDK_OFFSET(0xA484AE0)
#define UNITYENGINE_UI_TOGGLEGROUP_GET_ALLOWSWITCHOFF_OFFSET UNITYSDK_OFFSET(0xA485D50)
#define UNITYENGINE_UI_TOGGLEGROUP_ACTIVETOGGLES_OFFSET UNITYSDK_OFFSET(0xA485D60)
#define UNITYENGINE_UI_TOGGLEGROUP_VALIDATETOGGLEISINGROUP_OFFSET UNITYSDK_OFFSET(0xA485E70)
#define UNITYENGINE_UI_TOGGLEGROUP_NOTIFYTOGGLEON_OFFSET UNITYSDK_OFFSET(0xA484C30)
#define UNITYENGINE_UI_TOGGLEGROUP_GETFIRSTACTIVETOGGLE_OFFSET UNITYSDK_OFFSET(0xA485FC0)
#define UNITYENGINE_UI_TOGGLEGROUP_SETALLTOGGLESOFF_OFFSET UNITYSDK_OFFSET(0xA486030)
#define UNITYENGINE_UI_TOGGLEGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA486110)
#define UNITYENGINE_UI_TOGGLEGROUP_UNREGISTERTOGGLE_OFFSET UNITYSDK_OFFSET(0xA485830)
#define UNITYENGINE_UI_TOGGLEGROUP_SET_ALLOWSWITCHOFF_OFFSET UNITYSDK_OFFSET(0xA486190)
#define UNITYENGINE_UI_TOGGLEGROUP_REGISTERTOGGLE_OFFSET UNITYSDK_OFFSET(0xA4858B0)
#define UNITYENGINE_UI_TOGGLEGROUP_ENSUREVALIDSTATE_OFFSET UNITYSDK_OFFSET(0xA484FF0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ToggleGroup_TypeDefinitionIndex = 34858;

	class ToggleGroup : public Il2CppObject
	{
	public:
		::System::Boolean m_AllowSwitchOff; // 0x18
		Il2CppObject* m_Toggles; // 0x20

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_START_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean AnyTogglesOn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_ANYTOGGLESON_OFFSET))(nullptr);
		}

		::System::Boolean get_allowSwitchOff()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_GET_ALLOWSWITCHOFF_OFFSET))(nullptr);
		}

		Il2CppObject* ActiveToggles()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_ACTIVETOGGLES_OFFSET))(nullptr);
		}

		::System::Void ValidateToggleIsInGroup(::UnityEngine::UI::Toggle* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Toggle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_VALIDATETOGGLEISINGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void NotifyToggleOn(::UnityEngine::UI::Toggle* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Toggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_NOTIFYTOGGLEON_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UI::Toggle* GetFirstActiveToggle()
		{
			return (return (::UnityEngine::UI::Toggle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_GETFIRSTACTIVETOGGLE_OFFSET))(nullptr);
		}

		::System::Void SetAllTogglesOff(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_SETALLTOGGLESOFF_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UnregisterToggle(::UnityEngine::UI::Toggle* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Toggle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_UNREGISTERTOGGLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_allowSwitchOff(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_SET_ALLOWSWITCHOFF_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterToggle(::UnityEngine::UI::Toggle* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Toggle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_REGISTERTOGGLE_OFFSET))(arg, nullptr);
		}

		::System::Void EnsureValidState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_ENSUREVALIDSTATE_OFFSET))(nullptr);
		}

	};
}

