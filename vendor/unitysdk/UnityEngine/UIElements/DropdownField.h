#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class TextElement; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class IGenericMenu; }
namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_GET_TEXTELEMENT_OFFSET UNITYSDK_OFFSET(0xA3A0B20)
#define UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_GETVALUETODISPLAY_OFFSET UNITYSDK_OFFSET(0xA3A0B30)
#define UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_GETLISTITEMTODISPLAY_OFFSET UNITYSDK_OFFSET(0xA3A0BB0)
#define UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xA3A0C60)
#define UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3A0CE0)
#define UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3A0CF0)
#define UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_ADDMENUITEMS_OFFSET UNITYSDK_OFFSET(0xA3A10E0)
#define UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_CHANGEVALUEFROMMENU_OFFSET UNITYSDK_OFFSET(0xA3A14F0)
#define UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_SET_CHOICES_OFFSET UNITYSDK_OFFSET(0xA3A1510)
#define UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA3A1580)
#define UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA3A15C0)
#define UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0xA3A1650)
#define UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_EXECUTEDEFAULTACTIONATTARGET_OFFSET UNITYSDK_OFFSET(0xA3A17C0)
#define UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_SHOWMENU_OFFSET UNITYSDK_OFFSET(0xA3A1960)
#define UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_UPDATEMIXEDVALUECONTENT_OFFSET UNITYSDK_OFFSET(0xA3A1E40)
#define UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3A1F20)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DropdownField_TypeDefinitionIndex = 30320;

	class DropdownField : public <co_RunTimeObjectLifeCycle>d__8
	{
	public:
		Il2CppObject* m_Choices; // 0x408
		::UnityEngine::UIElements::TextElement* m_TextElement; // 0x410
		::UnityEngine::UIElements::VisualElement* m_ArrowElement; // 0x418
		Il2CppObject* m_FormatSelectedValueCallback; // 0x420
		Il2CppObject* m_FormatListItemCallback; // 0x428
		Il2CppObject* createMenuCallback; // 0x430
		::System::Int32 m_Index; // 0x438
		::System::String* ussClassNameBasePopupField; // 0x0
		::System::String* textUssClassNameBasePopupField; // 0x8
		::System::String* arrowUssClassNameBasePopupField; // 0x10
		::System::String* labelUssClassNameBasePopupField; // 0x18
		::System::String* inputUssClassNameBasePopupField; // 0x20
		::System::String* ussClassNamePopupField; // 0x28
		::System::String* labelUssClassNamePopupField; // 0x30
		::System::String* inputUssClassNamePopupField; // 0x38

		::UnityEngine::UIElements::TextElement* get_textElement()
		{
			return (return (::UnityEngine::UIElements::TextElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_GET_TEXTELEMENT_OFFSET))(nullptr);
		}

		::System::String* GetValueToDisplay()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_GETVALUETODISPLAY_OFFSET))(nullptr);
		}

		::System::String* GetListItemToDisplay(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_GETLISTITEMTODISPLAY_OFFSET))(str, nullptr);
		}

		::System::Void set_index(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_SET_INDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void AddMenuItems(::UnityEngine::UIElements::IGenericMenu* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IGenericMenu*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_ADDMENUITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeValueFromMenu(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_CHANGEVALUEFROMMENU_OFFSET))(str, nullptr);
		}

		::System::Void set_choices(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_SET_CHOICES_OFFSET))(arg, nullptr);
		}

		::System::String* get_value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Void SetValueWithoutNotify(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_SETVALUEWITHOUTNOTIFY_OFFSET))(str, nullptr);
		}

		::System::Void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_EXECUTEDEFAULTACTIONATTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void ShowMenu()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_SHOWMENU_OFFSET))(nullptr);
		}

		::System::Void UpdateMixedValueContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_UPDATEMIXEDVALUECONTENT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNFIELD_.CCTOR_OFFSET))(nullptr);
		}

	};
}

