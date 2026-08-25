#pragma once
#include "../unitysdk.h"

namespace TMPro { class TextAlignmentOptions; }

#define TMPRO_TMP_COMPATIBILITY_CONVERTTEXTALIGNMENTENUMVALUES_OFFSET UNITYSDK_OFFSET(0xA120960)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Compatibility_TypeDefinitionIndex = 33638;

	class TMP_Compatibility : public Il2CppObject
	{
	public:
		::TMPro::TextAlignmentOptions* ConvertTextAlignmentEnumValues(::TMPro::TextAlignmentOptions* arg)
		{
			return (return (::TMPro::TextAlignmentOptions*(*)(::TMPro::TextAlignmentOptions*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_COMPATIBILITY_CONVERTTEXTALIGNMENTENUMVALUES_OFFSET))(arg, nullptr);
		}

	};
}

