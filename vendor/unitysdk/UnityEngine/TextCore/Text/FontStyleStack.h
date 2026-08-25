#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class FontStyles; }

#define UNITYENGINE_TEXTCORE_TEXT_FONTSTYLESTACK_CLEAR_OFFSET UNITYSDK_OFFSET(0xA2E1410)
#define UNITYENGINE_TEXTCORE_TEXT_FONTSTYLESTACK_ADD_OFFSET UNITYSDK_OFFSET(0xA2E1420)
#define UNITYENGINE_TEXTCORE_TEXT_FONTSTYLESTACK_REMOVE_OFFSET UNITYSDK_OFFSET(0xA2E14D0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int FontStyleStack_TypeDefinitionIndex = 35606;

	class FontStyleStack : public Il2CppObject
	{
	public:
		::System::Byte bold; // 0x10
		::System::Byte italic; // 0x11
		::System::Byte underline; // 0x12
		::System::Byte strikethrough; // 0x13
		::System::Byte highlight; // 0x14
		::System::Byte superscript; // 0x15
		::System::Byte subscript; // 0x16
		::System::Byte uppercase; // 0x17
		::System::Byte lowercase; // 0x18
		::System::Byte smallcaps; // 0x19

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTSTYLESTACK_CLEAR_OFFSET))(nullptr);
		}

		::System::Byte Add(::UnityEngine::TextCore::Text::FontStyles* arg)
		{
			return (return (::System::Byte(*)(::UnityEngine::TextCore::Text::FontStyles*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTSTYLESTACK_ADD_OFFSET))(arg, nullptr);
		}

		::System::Byte Remove(::UnityEngine::TextCore::Text::FontStyles* arg)
		{
			return (return (::System::Byte(*)(::UnityEngine::TextCore::Text::FontStyles*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTSTYLESTACK_REMOVE_OFFSET))(arg, nullptr);
		}

	};
}

