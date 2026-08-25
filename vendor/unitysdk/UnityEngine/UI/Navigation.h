#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class Selectable; }
namespace UnityEngine::UI { class Navigation; }

#define UNITYENGINE_UI_NAVIGATION_SET_WRAPAROUND_OFFSET UNITYSDK_OFFSET(0xA4703A0)
#define UNITYENGINE_UI_NAVIGATION_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4703B0)
#define UNITYENGINE_UI_NAVIGATION_GET_DEFAULTNAVIGATION_OFFSET UNITYSDK_OFFSET(0xA4704C0)
#define UNITYENGINE_UI_NAVIGATION_SET_MODE_OFFSET UNITYSDK_OFFSET(0xA4704E0)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONLEFT_OFFSET UNITYSDK_OFFSET(0xA4704F0)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONUP_OFFSET UNITYSDK_OFFSET(0xA470500)
#define UNITYENGINE_UI_NAVIGATION_GET_MODE_OFFSET UNITYSDK_OFFSET(0xA470510)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONDOWN_OFFSET UNITYSDK_OFFSET(0xA470520)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONRIGHT_OFFSET UNITYSDK_OFFSET(0xA470530)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONUP_OFFSET UNITYSDK_OFFSET(0xA470540)
#define UNITYENGINE_UI_NAVIGATION_GET_WRAPAROUND_OFFSET UNITYSDK_OFFSET(0xA470550)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONDOWN_OFFSET UNITYSDK_OFFSET(0xA470560)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONLEFT_OFFSET UNITYSDK_OFFSET(0xA470570)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONRIGHT_OFFSET UNITYSDK_OFFSET(0xA470580)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Navigation_TypeDefinitionIndex = 34830;

	class Navigation : public Il2CppObject
	{
	public:
		Mode* m_Mode; // 0x10
		::System::Boolean m_WrapAround; // 0x14
		::UnityEngine::UI::Selectable* m_SelectOnUp; // 0x18
		::UnityEngine::UI::Selectable* m_SelectOnDown; // 0x20
		::UnityEngine::UI::Selectable* m_SelectOnLeft; // 0x28
		::UnityEngine::UI::Selectable* m_SelectOnRight; // 0x30

		::System::Void set_wrapAround(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_WRAPAROUND_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UI::Navigation* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UI::Navigation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_EQUALS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UI::Navigation* get_defaultNavigation()
		{
			return (return (::UnityEngine::UI::Navigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_DEFAULTNAVIGATION_OFFSET))(nullptr);
		}

		::System::Void set_mode(Mode* arg)
		{
			((::System::Void(*)(Mode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_MODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UI::Selectable* get_selectOnLeft()
		{
			return (return (::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONLEFT_OFFSET))(nullptr);
		}

		::UnityEngine::UI::Selectable* get_selectOnUp()
		{
			return (return (::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONUP_OFFSET))(nullptr);
		}

		Mode* get_mode()
		{
			return (return (Mode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_MODE_OFFSET))(nullptr);
		}

		::System::Void set_selectOnDown(::UnityEngine::UI::Selectable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Selectable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONDOWN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UI::Selectable* get_selectOnRight()
		{
			return (return (::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONRIGHT_OFFSET))(nullptr);
		}

		::System::Void set_selectOnUp(::UnityEngine::UI::Selectable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Selectable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_wrapAround()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_WRAPAROUND_OFFSET))(nullptr);
		}

		::UnityEngine::UI::Selectable* get_selectOnDown()
		{
			return (return (::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONDOWN_OFFSET))(nullptr);
		}

		::System::Void set_selectOnLeft(::UnityEngine::UI::Selectable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Selectable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONLEFT_OFFSET))(arg, nullptr);
		}

		::System::Void set_selectOnRight(::UnityEngine::UI::Selectable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Selectable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONRIGHT_OFFSET))(arg, nullptr);
		}

	};
}

