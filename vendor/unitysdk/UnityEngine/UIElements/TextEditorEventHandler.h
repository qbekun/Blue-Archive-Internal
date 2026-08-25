#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class TextEditorEngine; }
namespace UnityEngine::UIElements { class ITextInputField; }
namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_TEXTEDITOREVENTHANDLER_GET_EDITORENGINE_OFFSET UNITYSDK_OFFSET(0xA3C07B0)
#define UNITYENGINE_UIELEMENTS_TEXTEDITOREVENTHANDLER_SET_EDITORENGINE_OFFSET UNITYSDK_OFFSET(0xA3C07C0)
#define UNITYENGINE_UIELEMENTS_TEXTEDITOREVENTHANDLER_GET_TEXTINPUTFIELD_OFFSET UNITYSDK_OFFSET(0xA3C07D0)
#define UNITYENGINE_UIELEMENTS_TEXTEDITOREVENTHANDLER_SET_TEXTINPUTFIELD_OFFSET UNITYSDK_OFFSET(0xA3C07E0)
#define UNITYENGINE_UIELEMENTS_TEXTEDITOREVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3C07F0)
#define UNITYENGINE_UIELEMENTS_TEXTEDITOREVENTHANDLER_EXECUTEDEFAULTACTIONATTARGET_OFFSET UNITYSDK_OFFSET(0xA3C08C0)
#define UNITYENGINE_UIELEMENTS_TEXTEDITOREVENTHANDLER_EXECUTEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0xA3C08D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TextEditorEventHandler_TypeDefinitionIndex = 30385;

	class TextEditorEventHandler : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::TextEditorEngine* _editorEngine_k__BackingField; // 0x10
		::UnityEngine::UIElements::ITextInputField* _textInputField_k__BackingField; // 0x18

		::UnityEngine::UIElements::TextEditorEngine* get_editorEngine()
		{
			return (return (::UnityEngine::UIElements::TextEditorEngine*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTEDITOREVENTHANDLER_GET_EDITORENGINE_OFFSET))(nullptr);
		}

		::System::Void set_editorEngine(::UnityEngine::UIElements::TextEditorEngine* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TextEditorEngine*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTEDITOREVENTHANDLER_SET_EDITORENGINE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::ITextInputField* get_textInputField()
		{
			return (return (::UnityEngine::UIElements::ITextInputField*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTEDITOREVENTHANDLER_GET_TEXTINPUTFIELD_OFFSET))(nullptr);
		}

		::System::Void set_textInputField(::UnityEngine::UIElements::ITextInputField* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ITextInputField*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTEDITOREVENTHANDLER_SET_TEXTINPUTFIELD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::TextEditorEngine* arg, ::UnityEngine::UIElements::ITextInputField* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TextEditorEngine*, ::UnityEngine::UIElements::ITextInputField*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTEDITOREVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTEDITOREVENTHANDLER_EXECUTEDEFAULTACTIONATTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTEDITOREVENTHANDLER_EXECUTEDEFAULTACTION_OFFSET))(arg, nullptr);
		}

	};
}

