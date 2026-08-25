#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonToken; }

#define NEWTONSOFT_JSON_UTILITIES_JSONTOKENUTILS_ISENDTOKEN_OFFSET UNITYSDK_OFFSET(0x9499C90)
#define NEWTONSOFT_JSON_UTILITIES_JSONTOKENUTILS_ISSTARTTOKEN_OFFSET UNITYSDK_OFFSET(0x94B0F30)
#define NEWTONSOFT_JSON_UTILITIES_JSONTOKENUTILS_ISPRIMITIVETOKEN_OFFSET UNITYSDK_OFFSET(0x94B0F40)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int JsonTokenUtils_TypeDefinitionIndex = 31870;

	class JsonTokenUtils : public Il2CppObject
	{
	public:
		::System::Boolean IsEndToken(::Newtonsoft::Json::JsonToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::JsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JSONTOKENUTILS_ISENDTOKEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsStartToken(::Newtonsoft::Json::JsonToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::JsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JSONTOKENUTILS_ISSTARTTOKEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPrimitiveToken(::Newtonsoft::Json::JsonToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::JsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JSONTOKENUTILS_ISPRIMITIVETOKEN_OFFSET))(arg, nullptr);
		}

	};
}

