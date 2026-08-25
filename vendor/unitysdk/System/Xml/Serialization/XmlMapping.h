#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_.CTOR_OFFSET UNITYSDK_OFFSET(0x99DEAC0)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x99DEB10)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x99DEB20)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_SETKEY_OFFSET UNITYSDK_OFFSET(0x99DEB30)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_OBJECTMAP_OFFSET UNITYSDK_OFFSET(0x99DEB40)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_SET_OBJECTMAP_OFFSET UNITYSDK_OFFSET(0x99DEB50)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_RELATEDMAPS_OFFSET UNITYSDK_OFFSET(0x99DEB60)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_SET_RELATEDMAPS_OFFSET UNITYSDK_OFFSET(0x99DEB70)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x99DEB80)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_SET_FORMAT_OFFSET UNITYSDK_OFFSET(0x99DEB90)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x99DEBA0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlMapping_TypeDefinitionIndex = 27892;

	class XmlMapping : public Il2CppObject
	{
	public:
		::System::Xml::Serialization::ObjectMap* map; // 0x10
		::System::Collections::ArrayList* relatedMaps; // 0x18
		::System::Xml::Serialization::SerializationFormat* format; // 0x20
		::System::Xml::Serialization::SerializationSource* source; // 0x28
		::System::String* _elementName; // 0x30
		::System::String* _namespace; // 0x38
		::System::String* key; // 0x40

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::String* get_ElementName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_ELEMENTNAME_OFFSET))(nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Void SetKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_SETKEY_OFFSET))(str, nullptr);
		}

		::System::Xml::Serialization::ObjectMap* get_ObjectMap()
		{
			return (return (::System::Xml::Serialization::ObjectMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_OBJECTMAP_OFFSET))(nullptr);
		}

		::System::Void set_ObjectMap(::System::Xml::Serialization::ObjectMap* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::ObjectMap*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_SET_OBJECTMAP_OFFSET))(arg, nullptr);
		}

		::System::Collections::ArrayList* get_RelatedMaps()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_RELATEDMAPS_OFFSET))(nullptr);
		}

		::System::Void set_RelatedMaps(::System::Collections::ArrayList* arg)
		{
			((::System::Void(*)(::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_SET_RELATEDMAPS_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::SerializationFormat* get_Format()
		{
			return (return (::System::Xml::Serialization::SerializationFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_FORMAT_OFFSET))(nullptr);
		}

		::System::Void set_Format(::System::Xml::Serialization::SerializationFormat* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::SerializationFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_SET_FORMAT_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::SerializationSource* get_Source()
		{
			return (return (::System::Xml::Serialization::SerializationSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_SOURCE_OFFSET))(nullptr);
		}

	};
}

