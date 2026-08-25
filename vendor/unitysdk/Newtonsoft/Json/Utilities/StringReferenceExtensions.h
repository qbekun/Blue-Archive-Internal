#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Utilities { class StringReference; }

#define NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCEEXTENSIONS_INDEXOF_OFFSET UNITYSDK_OFFSET(0x94B7BE0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCEEXTENSIONS_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x94B7C60)
#define NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCEEXTENSIONS_ENDSWITH_OFFSET UNITYSDK_OFFSET(0x94B7D00)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int StringReferenceExtensions_TypeDefinitionIndex = 31897;

	class StringReferenceExtensions : public Il2CppObject
	{
	public:
		::System::Int32 IndexOf(::Newtonsoft::Json::Utilities::StringReference* arg, ::System::Char arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Newtonsoft::Json::Utilities::StringReference*, ::System::Char, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCEEXTENSIONS_INDEXOF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StartsWith(::Newtonsoft::Json::Utilities::StringReference* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCEEXTENSIONS_STARTSWITH_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean EndsWith(::Newtonsoft::Json::Utilities::StringReference* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCEEXTENSIONS_ENDSWITH_OFFSET))(arg, str, nullptr);
		}

	};
}

