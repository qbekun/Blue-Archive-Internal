#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x99FEF80)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY_CREATESERIALIZER_OFFSET UNITYSDK_OFFSET(0x99FEF90)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY_CREATESERIALIZER_OFFSET UNITYSDK_OFFSET(0x99FF2B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY_CREATESERIALIZER_OFFSET UNITYSDK_OFFSET(0x99FEFB0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x99FF2E0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializerFactory_TypeDefinitionIndex = 27922;

	class XmlSerializerFactory : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* serializersBySource; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlSerializer* CreateSerializer(::System::Type* arg)
		{
			return (return (::System::Xml::Serialization::XmlSerializer*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY_CREATESERIALIZER_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::XmlSerializer* CreateSerializer(::System::Type* arg, ::System::Xml::Serialization::XmlRootAttribute* arg)
		{
			return (return (::System::Xml::Serialization::XmlSerializer*(*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY_CREATESERIALIZER_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Serialization::XmlSerializer* CreateSerializer(::System::Type* arg, ::System::Xml::Serialization::XmlAttributeOverrides* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Xml::Serialization::XmlRootAttribute* arg, ::System::String* str)
		{
			return (return (::System::Xml::Serialization::XmlSerializer*(*)(::System::Type*, ::System::Xml::Serialization::XmlAttributeOverrides*, ::Il2CppArray<::System::Object*>*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY_CREATESERIALIZER_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

