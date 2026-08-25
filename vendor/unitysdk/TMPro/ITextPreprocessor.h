#pragma once
#include "../unitysdk.h"

#define TMPRO_ITEXTPREPROCESSOR_PREPROCESSTEXT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace TMPro
{
	inline static constexpr unsigned int ITextPreprocessor_TypeDefinitionIndex = 33603;

	class ITextPreprocessor : public Il2CppObject
	{
	public:
		::System::String* PreprocessText(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_ITEXTPREPROCESSOR_PREPROCESSTEXT_OFFSET))(str, nullptr);
		}

	};
}

