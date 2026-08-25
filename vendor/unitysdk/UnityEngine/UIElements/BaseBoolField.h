#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Label; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class Clickable; }
namespace UnityEngine::UIElements { class NavigationSubmitEvent; }
namespace UnityEngine::UIElements { class KeyDownEvent; }
namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA397B70)
#define UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_ONNAVIGATIONSUBMIT_OFFSET UNITYSDK_OFFSET(0xA397F20)
#define UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_ONKEYDOWN_OFFSET UNITYSDK_OFFSET(0xA397F60)
#define UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xA398060)
#define UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xA397E80)
#define UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_INITLABEL_OFFSET UNITYSDK_OFFSET(0xA398090)
#define UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0xA3981C0)
#define UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_ONCLICKEVENT_OFFSET UNITYSDK_OFFSET(0xA398290)
#define UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_TOGGLEVALUE_OFFSET UNITYSDK_OFFSET(0xA398540)
#define UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_UPDATEMIXEDVALUECONTENT_OFFSET UNITYSDK_OFFSET(0xA398580)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int BaseBoolField_TypeDefinitionIndex = 30293;

	class BaseBoolField : public ::MXUnderCover::UCRuntimeObjectType
	{
	public:
		::UnityEngine::UIElements::Label* m_Label; // 0x408
		::UnityEngine::UIElements::VisualElement* m_CheckMark; // 0x410
		::UnityEngine::UIElements::Clickable* m_Clickable; // 0x418
		::System::String* m_OriginalText; // 0x420

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::NavigationSubmitEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_ONNAVIGATIONSUBMIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::KeyDownEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_ONKEYDOWN_OFFSET))(arg, nullptr);
		}

		::System::String* get_text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::Void InitLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_INITLABEL_OFFSET))(nullptr);
		}

		::System::Void SetValueWithoutNotify(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_SETVALUEWITHOUTNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_ONCLICKEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void ToggleValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_TOGGLEVALUE_OFFSET))(nullptr);
		}

		::System::Void UpdateMixedValueContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEBOOLFIELD_UPDATEMIXEDVALUECONTENT_OFFSET))(nullptr);
		}

	};
}

