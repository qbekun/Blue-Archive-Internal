#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9535980)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9536020)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x9536040)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER_SET_ENCODING_OFFSET UNITYSDK_OFFSET(0x9536060)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER_GET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x9536080)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER_SET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x95360A0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XmlDeclarationWrapper_TypeDefinitionIndex = 32107;

	class XmlDeclarationWrapper : public Il2CppObject
	{
	public:
		::System::Xml::XmlDeclaration* _declaration; // 0x28

		::System::Void .ctor(::System::Xml::XmlDeclaration* arg)
		{
			((::System::Void(*)(::System::Xml::XmlDeclaration*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Version()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER_GET_VERSION_OFFSET))(nullptr);
		}

		::System::String* get_Encoding()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER_GET_ENCODING_OFFSET))(nullptr);
		}

		::System::Void set_Encoding(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER_SET_ENCODING_OFFSET))(str, nullptr);
		}

		::System::String* get_Standalone()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER_GET_STANDALONE_OFFSET))(nullptr);
		}

		::System::Void set_Standalone(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDECLARATIONWRAPPER_SET_STANDALONE_OFFSET))(str, nullptr);
		}

	};
}

