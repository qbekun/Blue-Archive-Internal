#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_DECLARATION_OFFSET UNITYSDK_OFFSET(0x9537030)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9537040)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x95370B0)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x95370C0)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x95370E0)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_SET_ENCODING_OFFSET UNITYSDK_OFFSET(0x9537100)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x9537130)
#define NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_SET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x9537150)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XDeclarationWrapper_TypeDefinitionIndex = 32115;

	class XDeclarationWrapper : public Il2CppObject
	{
	public:
		::System::Xml::Linq::XDeclaration* _Declaration_k__BackingField; // 0x18

		::System::Xml::Linq::XDeclaration* get_Declaration()
		{
			return (return (::System::Xml::Linq::XDeclaration*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_DECLARATION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XDeclaration* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XDeclaration*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_Version()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_VERSION_OFFSET))(nullptr);
		}

		::System::String* get_Encoding()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_ENCODING_OFFSET))(nullptr);
		}

		::System::Void set_Encoding(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_SET_ENCODING_OFFSET))(str, nullptr);
		}

		::System::String* get_Standalone()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_GET_STANDALONE_OFFSET))(nullptr);
		}

		::System::Void set_Standalone(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDECLARATIONWRAPPER_SET_STANDALONE_OFFSET))(str, nullptr);
		}

	};
}

