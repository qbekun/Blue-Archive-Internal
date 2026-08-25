#pragma once
#include "../unitysdk.h"

namespace TMPro { class FontStyles; }

#define TMPRO_TMP_FONTSTYLESTACK_CLEAR_OFFSET UNITYSDK_OFFSET(0xA17FFC0)
#define TMPRO_TMP_FONTSTYLESTACK_REMOVE_OFFSET UNITYSDK_OFFSET(0xA17FFD0)
#define TMPRO_TMP_FONTSTYLESTACK_ADD_OFFSET UNITYSDK_OFFSET(0xA180070)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontStyleStack_TypeDefinitionIndex = 33754;

	class TMP_FontStyleStack : public Il2CppObject
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
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTSTYLESTACK_CLEAR_OFFSET))(nullptr);
		}

		::System::Byte Remove(::TMPro::FontStyles* arg)
		{
			return (return (::System::Byte(*)(::TMPro::FontStyles*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTSTYLESTACK_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Byte Add(::TMPro::FontStyles* arg)
		{
			return (return (::System::Byte(*)(::TMPro::FontStyles*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTSTYLESTACK_ADD_OFFSET))(arg, nullptr);
		}

	};
}

