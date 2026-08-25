#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZABLEMAPPING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A01640)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializableMapping_TypeDefinitionIndex = 27938;

	class XmlSerializableMapping : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchema* _schema; // 0x78
		::System::Xml::Schema::XmlSchemaComplexType* _schemaType; // 0x80
		::System::Xml::XmlQualifiedName* _schemaTypeName; // 0x88

		::System::Void .ctor(::System::Xml::Serialization::XmlRootAttribute* arg, ::System::String* str, ::System::String* str, ::System::Xml::Serialization::TypeData* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::System::String*, ::System::Xml::Serialization::TypeData*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZABLEMAPPING_.CTOR_OFFSET))(arg, str, str, arg, str, str, nullptr);
		}

	};
}

