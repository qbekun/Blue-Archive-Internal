#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Rect; }

#define UNITYENGINE_UIELEMENTS_TEXTEDITORENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3C0A30)
#define UNITYENGINE_UIELEMENTS_TEXTEDITORENGINE_GET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xA3C0A80)
#define UNITYENGINE_UIELEMENTS_TEXTEDITORENGINE_ONDETECTFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0xA3C0B30)
#define UNITYENGINE_UIELEMENTS_TEXTEDITORENGINE_ONCURSORINDEXCHANGE_OFFSET UNITYSDK_OFFSET(0xA3C0B60)
#define UNITYENGINE_UIELEMENTS_TEXTEDITORENGINE_ONSELECTINDEXCHANGE_OFFSET UNITYSDK_OFFSET(0xA3C0B90)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TextEditorEngine_TypeDefinitionIndex = 30388;

	class TextEditorEngine : public Il2CppObject
	{
	public:
		OnDetectFocusChangeFunction* m_DetectFocusChangeFunction; // 0x90
		OnIndexChangeFunction* m_IndexChangeFunction; // 0x98

		::System::Void .ctor(OnDetectFocusChangeFunction* arg, OnIndexChangeFunction* arg)
		{
			((::System::Void(*)(OnDetectFocusChangeFunction*, OnIndexChangeFunction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTEDITORENGINE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rect* get_localPosition()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTEDITORENGINE_GET_LOCALPOSITION_OFFSET))(nullptr);
		}

		::System::Void OnDetectFocusChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTEDITORENGINE_ONDETECTFOCUSCHANGE_OFFSET))(nullptr);
		}

		::System::Void OnCursorIndexChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTEDITORENGINE_ONCURSORINDEXCHANGE_OFFSET))(nullptr);
		}

		::System::Void OnSelectIndexChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTEDITORENGINE_ONSELECTINDEXCHANGE_OFFSET))(nullptr);
		}

	};
}

