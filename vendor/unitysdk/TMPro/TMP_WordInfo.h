#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_Text; }

#define TMPRO_TMP_WORDINFO_GETWORD_OFFSET UNITYSDK_OFFSET(0xA11F6D0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_WordInfo_TypeDefinitionIndex = 33622;

	class TMP_WordInfo : public Il2CppObject
	{
	public:
		::TMPro::TMP_Text* textComponent; // 0x10
		::System::Int32 firstCharacterIndex; // 0x18
		::System::Int32 lastCharacterIndex; // 0x1C
		::System::Int32 characterCount; // 0x20

		::System::String* GetWord()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_WORDINFO_GETWORD_OFFSET))(nullptr);
		}

	};
}

