#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9537180)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x95371C0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x95371E0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_PUBLIC_OFFSET UNITYSDK_OFFSET(0x9537200)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_INTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x9537220)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x9537240)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XDocumentTypeWrapper_TypeDefinitionIndex = 32116;

	class XDocumentTypeWrapper : public Il2CppObject
	{
	public:
		::System::Xml::Linq::XDocumentType* _documentType; // 0x18

		::System::Void .ctor(::System::Xml::Linq::XDocumentType* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XDocumentType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_System()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_SYSTEM_OFFSET))(nullptr);
		}

		::System::String* get_Public()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_PUBLIC_OFFSET))(nullptr);
		}

		::System::String* get_InternalSubset()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_INTERNALSUBSET_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_LOCALNAME_OFFSET))(nullptr);
		}

	};
}

