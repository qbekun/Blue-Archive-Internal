#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x99FDDD0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99FDED0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_GET_MAPPING_OFFSET UNITYSDK_OFFSET(0x99FE040)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNKNOWNATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99FE050)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNKNOWNELEMENT_OFFSET UNITYSDK_OFFSET(0x99FE070)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNKNOWNNODE_OFFSET UNITYSDK_OFFSET(0x99FE090)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNREFERENCEDOBJECT_OFFSET UNITYSDK_OFFSET(0x99FE0B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEREADER_OFFSET UNITYSDK_OFFSET(0x99FE0D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEWRITER_OFFSET UNITYSDK_OFFSET(0x99FE120)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x99FE170)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x99FE1F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x99FE300)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x99FE5F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x99FE810)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x99FEBB0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x99FE8A0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEWRITER_OFFSET UNITYSDK_OFFSET(0x99FEBD0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEREADER_OFFSET UNITYSDK_OFFSET(0x99FE2A0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializer_TypeDefinitionIndex = 27921;

	class XmlSerializer : public Il2CppObject
	{
	public:
		::System::Int32 generationThreshold; // 0x0
		::System::Boolean backgroundGeneration; // 0x4
		::System::Boolean deleteTempFiles; // 0x5
		::System::Boolean generatorFallback; // 0x6
		::System::Boolean customSerializer; // 0x10
		::System::Xml::Serialization::XmlMapping* typeMapping; // 0x18
		SerializerData* serializerData; // 0x20
		::System::Collections::Hashtable* serializerTypes; // 0x8
		::System::Xml::Serialization::UnreferencedObjectEventHandler* onUnreferencedObject; // 0x28
		::System::Xml::Serialization::XmlAttributeEventHandler* onUnknownAttribute; // 0x30
		::System::Xml::Serialization::XmlElementEventHandler* onUnknownElement; // 0x38
		::System::Xml::Serialization::XmlNodeEventHandler* onUnknownNode; // 0x40

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::Xml::Serialization::XmlAttributeOverrides* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Xml::Serialization::XmlRootAttribute* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::Xml::Serialization::XmlAttributeOverrides*, ::Il2CppArray<::System::Object*>*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_.CTOR_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Xml::Serialization::XmlMapping* get_Mapping()
		{
			return (return (::System::Xml::Serialization::XmlMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_GET_MAPPING_OFFSET))(nullptr);
		}

		::System::Void OnUnknownAttribute(::System::Xml::Serialization::XmlAttributeEventArgs* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlAttributeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNKNOWNATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void OnUnknownElement(::System::Xml::Serialization::XmlElementEventArgs* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlElementEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNKNOWNELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnUnknownNode(::System::Xml::Serialization::XmlNodeEventArgs* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlNodeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNKNOWNNODE_OFFSET))(arg, nullptr);
		}

		::System::Void OnUnreferencedObject(::System::Xml::Serialization::UnreferencedObjectEventArgs* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::UnreferencedObjectEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNREFERENCEDOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::XmlSerializationReader* CreateReader()
		{
			return (return (::System::Xml::Serialization::XmlSerializationReader*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEREADER_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlSerializationWriter* CreateWriter()
		{
			return (return (::System::Xml::Serialization::XmlSerializationWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEWRITER_OFFSET))(nullptr);
		}

		::System::Object* Deserialize(::System::IO::TextReader* arg)
		{
			return (return (::System::Object*(*)(::System::IO::TextReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_DESERIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Object* Deserialize(::System::Xml::XmlReader* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_DESERIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Object* Deserialize(::System::Xml::Serialization::XmlSerializationReader* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::XmlSerializationReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_DESERIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::System::Object* arg, ::System::Xml::Serialization::XmlSerializationWriter* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Xml::Serialization::XmlSerializationWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::System::IO::TextWriter* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::IO::TextWriter*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::System::Xml::XmlWriter* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::System::Xml::XmlWriter* arg, ::System::Object* arg, ::System::Xml::Serialization::XmlSerializerNamespaces* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::System::Object*, ::System::Xml::Serialization::XmlSerializerNamespaces*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Xml::Serialization::XmlSerializationWriter* CreateWriter(::System::Xml::Serialization::XmlMapping* arg)
		{
			return (return (::System::Xml::Serialization::XmlSerializationWriter*(*)(::System::Xml::Serialization::XmlMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEWRITER_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::XmlSerializationReader* CreateReader(::System::Xml::Serialization::XmlMapping* arg)
		{
			return (return (::System::Xml::Serialization::XmlSerializationReader*(*)(::System::Xml::Serialization::XmlMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEREADER_OFFSET))(arg, nullptr);
		}

	};
}

