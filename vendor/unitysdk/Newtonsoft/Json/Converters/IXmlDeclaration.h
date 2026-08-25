#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_CONVERTERS_IXMLDECLARATION_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDECLARATION_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDECLARATION_SET_ENCODING_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDECLARATION_GET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDECLARATION_SET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int IXmlDeclaration_TypeDefinitionIndex = 32111;

	class IXmlDeclaration : public Il2CppObject
	{
	public:
		::System::String* get_Version()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDECLARATION_GET_VERSION_OFFSET))(nullptr);
		}

		::System::String* get_Encoding()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDECLARATION_GET_ENCODING_OFFSET))(nullptr);
		}

		::System::Void set_Encoding(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDECLARATION_SET_ENCODING_OFFSET))(str, nullptr);
		}

		::System::String* get_Standalone()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDECLARATION_GET_STANDALONE_OFFSET))(nullptr);
		}

		::System::Void set_Standalone(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDECLARATION_SET_STANDALONE_OFFSET))(str, nullptr);
		}

	};
}

