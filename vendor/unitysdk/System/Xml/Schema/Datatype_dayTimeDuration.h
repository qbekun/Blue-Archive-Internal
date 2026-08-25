#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_DAYTIMEDURATION_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A273B0)
#define SYSTEM_XML_SCHEMA_DATATYPE_DAYTIMEDURATION_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A275B0)
#define SYSTEM_XML_SCHEMA_DATATYPE_DAYTIMEDURATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A20760)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_dayTimeDuration_TypeDefinitionIndex = 28009;

	class Datatype_dayTimeDuration : public Il2CppObject
	{
	public:
		::System::Exception* TryParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Object&* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DAYTIMEDURATION_TRYPARSEVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DAYTIMEDURATION_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DAYTIMEDURATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

