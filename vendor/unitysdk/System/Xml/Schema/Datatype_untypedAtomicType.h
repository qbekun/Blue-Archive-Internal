#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_UNTYPEDATOMICTYPE_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x9A25A50)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNTYPEDATOMICTYPE_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x9A25AA0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNTYPEDATOMICTYPE_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A25AB0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNTYPEDATOMICTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A20870)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_untypedAtomicType_TypeDefinitionIndex = 28001;

	class Datatype_untypedAtomicType : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNTYPEDATOMICTYPE_CREATEVALUECONVERTER_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace* get_BuiltInWhitespaceFacet()
		{
			return (return (::System::Xml::Schema::XmlSchemaWhiteSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNTYPEDATOMICTYPE_GET_BUILTINWHITESPACEFACET_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNTYPEDATOMICTYPE_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNTYPEDATOMICTYPE_.CTOR_OFFSET))(nullptr);
		}

	};
}

