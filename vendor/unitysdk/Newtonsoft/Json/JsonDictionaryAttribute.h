#pragma once
#include "../../unitysdk.h"

#define NEWTONSOFT_JSON_JSONDICTIONARYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944F830)
#define NEWTONSOFT_JSON_JSONDICTIONARYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944F840)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonDictionaryAttribute_TypeDefinitionIndex = 31689;

	class JsonDictionaryAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONDICTIONARYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONDICTIONARYATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

