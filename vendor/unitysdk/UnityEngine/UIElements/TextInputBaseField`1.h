#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ITextHandle; }
namespace UnityEngine::UIElements { class AttachToPanelEvent; }
namespace UnityEngine::UIElements { class CustomStyleResolvedEvent; }
namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_GET_TEXTINPUTBASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_SET_ITEXTHANDLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_SET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_SET_ISPASSWORDFIELD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_SET_MAXLENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_GET_ISDELAYED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_SET_ISDELAYED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_SET_MASKCHAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_VALUETOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_ONATTACHTOPANEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_ONFIELDCUSTOMSTYLERESOLVED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_EXECUTEDEFAULTACTIONATTARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_UPDATEMIXEDVALUECONTENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TextInputBaseField`1_TypeDefinitionIndex = 30396;

	class TextInputBaseField`1 : public ::MXUnderCover::UCRuntimeCache
	{
	public:
		Il2CppObject* s_SelectionColorProperty; // 0x0
		Il2CppObject* s_CursorColorProperty; // 0x0
		::System::Int32 m_VisualInputTabIndex; // 0x0
		Il2CppObject* m_TextInputBase; // 0x0
		::UnityEngine::UIElements::ITextHandle* _iTextHandle_k__BackingField; // 0x0
		::System::String* ussClassName; // 0x0
		::System::String* labelUssClassName; // 0x0
		::System::String* inputUssClassName; // 0x0
		::System::String* singleLineInputUssClassName; // 0x0
		::System::String* multilineInputUssClassName; // 0x0
		::System::String* textInputUssName; // 0x0
		Il2CppObject* onIsReadOnlyChanged; // 0x0

		Il2CppObject* get_textInputBase()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_GET_TEXTINPUTBASE_OFFSET))(nullptr);
		}

		::System::Void set_iTextHandle(::UnityEngine::UIElements::ITextHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ITextHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_SET_ITEXTHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::Void set_isReadOnly(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_SET_ISREADONLY_OFFSET))(arg, nullptr);
		}

		::System::Void set_isPasswordField(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_SET_ISPASSWORDFIELD_OFFSET))(arg, nullptr);
		}

		::System::Void set_maxLength(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_SET_MAXLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isDelayed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_GET_ISDELAYED_OFFSET))(nullptr);
		}

		::System::Void set_isDelayed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_SET_ISDELAYED_OFFSET))(arg, nullptr);
		}

		::System::Void set_maskChar(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_SET_MASKCHAR_OFFSET))(arg, nullptr);
		}

		::System::String* ValueToString(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_VALUETOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Char arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Char, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::AttachToPanelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_ONATTACHTOPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnFieldCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::CustomStyleResolvedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_ONFIELDCUSTOMSTYLERESOLVED_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_EXECUTEDEFAULTACTIONATTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateMixedValueContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_UPDATEMIXEDVALUECONTENT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTINPUTBASEFIELD`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

