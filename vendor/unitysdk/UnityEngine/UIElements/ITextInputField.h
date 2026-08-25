#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class TextEditorEngine; }

#define UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_GET_HASFOCUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_GET_DOUBLECLICKSELECTSWORD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_GET_TRIPLECLICKSELECTSLINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_GET_ISDELAYED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_GET_ISPASSWORDFIELD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_GET_EDITORENGINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_SYNCTEXTENGINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_ACCEPTCHARACTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_CULLSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_UPDATEVALUEFROMTEXT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ITextInputField_TypeDefinitionIndex = 30393;

	class ITextInputField : public Il2CppObject
	{
	public:
		::System::Boolean get_hasFocus()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_GET_HASFOCUS_OFFSET))(nullptr);
		}

		::System::Boolean get_doubleClickSelectsWord()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_GET_DOUBLECLICKSELECTSWORD_OFFSET))(nullptr);
		}

		::System::Boolean get_tripleClickSelectsLine()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_GET_TRIPLECLICKSELECTSLINE_OFFSET))(nullptr);
		}

		::System::Boolean get_isReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean get_isDelayed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_GET_ISDELAYED_OFFSET))(nullptr);
		}

		::System::Boolean get_isPasswordField()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_GET_ISPASSWORDFIELD_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::TextEditorEngine* get_editorEngine()
		{
			return (return (::UnityEngine::UIElements::TextEditorEngine*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_GET_EDITORENGINE_OFFSET))(nullptr);
		}

		::System::Void SyncTextEngine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_SYNCTEXTENGINE_OFFSET))(nullptr);
		}

		::System::Boolean AcceptCharacter(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_ACCEPTCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::String* CullString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_CULLSTRING_OFFSET))(str, nullptr);
		}

		::System::Void UpdateText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_UPDATETEXT_OFFSET))(str, nullptr);
		}

		::System::Void UpdateValueFromText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTINPUTFIELD_UPDATEVALUEFROMTEXT_OFFSET))(nullptr);
		}

	};
}

