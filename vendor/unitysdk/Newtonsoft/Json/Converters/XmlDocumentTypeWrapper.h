#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9535A80)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x95360C0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x95360F0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_PUBLIC_OFFSET UNITYSDK_OFFSET(0x9536110)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_INTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x9536130)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x9536150)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XmlDocumentTypeWrapper_TypeDefinitionIndex = 32108;

	class XmlDocumentTypeWrapper : public Il2CppObject
	{
	public:
		::System::Xml::XmlDocumentType* _documentType; // 0x28

		::System::Void .ctor(::System::Xml::XmlDocumentType* arg)
		{
			((::System::Void(*)(::System::Xml::XmlDocumentType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_System()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_SYSTEM_OFFSET))(nullptr);
		}

		::System::String* get_Public()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_PUBLIC_OFFSET))(nullptr);
		}

		::System::String* get_InternalSubset()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_INTERNALSUBSET_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_LOCALNAME_OFFSET))(nullptr);
		}

	};
}

