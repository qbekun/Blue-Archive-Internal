#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPESERIALIZATIONSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x99D25B0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPESERIALIZATIONSOURCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x99D2700)
#define SYSTEM_XML_SERIALIZATION_XMLTYPESERIALIZATIONSOURCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x99D27E0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeSerializationSource_TypeDefinitionIndex = 27871;

	class XmlTypeSerializationSource : public Il2CppObject
	{
	public:
		::System::String* attributeOverridesHash; // 0x28
		::System::Type* type; // 0x30
		::System::String* rootHash; // 0x38

		::System::Void .ctor(::System::Type* arg, ::System::Xml::Serialization::XmlRootAttribute* arg, ::System::Xml::Serialization::XmlAttributeOverrides* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::Xml::Serialization::XmlAttributeOverrides*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPESERIALIZATIONSOURCE_.CTOR_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPESERIALIZATIONSOURCE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPESERIALIZATIONSOURCE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

