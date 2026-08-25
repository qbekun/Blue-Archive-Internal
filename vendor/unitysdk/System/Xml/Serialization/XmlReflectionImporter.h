#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99DEC00)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_OFFSET UNITYSDK_OFFSET(0x99DED80)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_OFFSET UNITYSDK_OFFSET(0x99DEF70)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_OFFSET UNITYSDK_OFFSET(0x99DEDA0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_OFFSET UNITYSDK_OFFSET(0x99DEF90)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_CREATETYPEMAPPING_OFFSET UNITYSDK_OFFSET(0x99E2010)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTCLASSMAPPING_OFFSET UNITYSDK_OFFSET(0x99E25B0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTCLASSMAPPING_OFFSET UNITYSDK_OFFSET(0x99DF420)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_REGISTERDERIVEDMAP_OFFSET UNITYSDK_OFFSET(0x99E4420)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_GETTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x99E2630)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTLISTMAPPING_OFFSET UNITYSDK_OFFSET(0x99E46B0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTLISTMAPPING_OFFSET UNITYSDK_OFFSET(0x99E0740)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTXMLNODEMAPPING_OFFSET UNITYSDK_OFFSET(0x99E1660)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTPRIMITIVEMAPPING_OFFSET UNITYSDK_OFFSET(0x99E1850)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTENUMMAPPING_OFFSET UNITYSDK_OFFSET(0x99E1910)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTXMLSERIALIZABLEMAPPING_OFFSET UNITYSDK_OFFSET(0x99E1F00)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTINCLUDEDTYPES_OFFSET UNITYSDK_OFFSET(0x99E45A0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_GETREFLECTIONMEMBERS_OFFSET UNITYSDK_OFFSET(0x99E2780)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_CREATEMAPMEMBER_OFFSET UNITYSDK_OFFSET(0x99E3720)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x99E4E90)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTANYELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x99E47A0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTEXTELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x99E61A0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_CANBENULL_OFFSET UNITYSDK_OFFSET(0x99E2510)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_INCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x99E6530)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_GETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x99E5FD0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x99E6A90)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlReflectionImporter_TypeDefinitionIndex = 27899;

	class XmlReflectionImporter : public Il2CppObject
	{
	public:
		::System::String* initialDefaultNamespace; // 0x10
		::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides; // 0x18
		::System::Collections::ArrayList* includedTypes; // 0x20
		::System::Xml::Serialization::ReflectionHelper* helper; // 0x28
		::System::Int32 arrayChoiceCount; // 0x30
		::System::Collections::ArrayList* relatedMaps; // 0x38
		::System::Boolean allowPrivateTypes; // 0x40
		::System::String* errSimple; // 0x0
		::System::String* errSimple2; // 0x8

		::System::Void .ctor(::System::Xml::Serialization::XmlAttributeOverrides* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlAttributeOverrides*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping(::System::Type* arg)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping(::System::Type* arg, ::System::String* str)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_OFFSET))(arg, str, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping(::System::Type* arg, ::System::Xml::Serialization::XmlRootAttribute* arg, ::System::String* str)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping(::System::Xml::Serialization::TypeData* arg, ::System::Xml::Serialization::XmlRootAttribute* arg, ::System::String* str)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* CreateTypeMapping(::System::Xml::Serialization::TypeData* arg, ::System::Xml::Serialization::XmlRootAttribute* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_CREATETYPEMAPPING_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportClassMapping(::System::Type* arg, ::System::Xml::Serialization::XmlRootAttribute* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTCLASSMAPPING_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportClassMapping(::System::Xml::Serialization::TypeData* arg, ::System::Xml::Serialization::XmlRootAttribute* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTCLASSMAPPING_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void RegisterDerivedMap(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Xml::Serialization::XmlTypeMapping* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Xml::Serialization::XmlTypeMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_REGISTERDERIVEDMAP_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetTypeNamespace(::System::Xml::Serialization::TypeData* arg, ::System::Xml::Serialization::XmlRootAttribute* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_GETTYPENAMESPACE_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportListMapping(::System::Type* arg, ::System::Xml::Serialization::XmlRootAttribute* arg, ::System::String* str, ::System::Xml::Serialization::XmlAttributes* arg, ::System::Int32 arg)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::System::Xml::Serialization::XmlAttributes*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTLISTMAPPING_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportListMapping(::System::Xml::Serialization::TypeData* arg, ::System::Xml::Serialization::XmlRootAttribute* arg, ::System::String* str, ::System::Xml::Serialization::XmlAttributes* arg, ::System::Int32 arg)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::System::Xml::Serialization::XmlAttributes*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTLISTMAPPING_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportXmlNodeMapping(::System::Xml::Serialization::TypeData* arg, ::System::Xml::Serialization::XmlRootAttribute* arg, ::System::String* str)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTXMLNODEMAPPING_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportPrimitiveMapping(::System::Xml::Serialization::TypeData* arg, ::System::Xml::Serialization::XmlRootAttribute* arg, ::System::String* str)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTPRIMITIVEMAPPING_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportEnumMapping(::System::Xml::Serialization::TypeData* arg, ::System::Xml::Serialization::XmlRootAttribute* arg, ::System::String* str)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTENUMMAPPING_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportXmlSerializableMapping(::System::Xml::Serialization::TypeData* arg, ::System::Xml::Serialization::XmlRootAttribute* arg, ::System::String* str)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTXMLSERIALIZABLEMAPPING_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void ImportIncludedTypes(::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTINCLUDEDTYPES_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* GetReflectionMembers(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_GETREFLECTIONMEMBERS_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapMember* CreateMapMember(::System::Type* arg, ::System::Xml::Serialization::XmlReflectionMember* arg, ::System::String* str)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapMember*(*)(::System::Type*, ::System::Xml::Serialization::XmlReflectionMember*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_CREATEMAPMEMBER_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfoList* ImportElementInfo(::System::Type* arg, ::System::String* str, ::System::String* str, ::System::Type* arg, ::System::Xml::Serialization::XmlTypeMapMemberElement* arg, ::System::Xml::Serialization::XmlAttributes* arg)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapElementInfoList*(*)(::System::Type*, ::System::String*, ::System::String*, ::System::Type*, ::System::Xml::Serialization::XmlTypeMapMemberElement*, ::System::Xml::Serialization::XmlAttributes*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTELEMENTINFO_OFFSET))(arg, str, str, arg, arg, arg, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfoList* ImportAnyElementInfo(::System::String* str, ::System::Xml::Serialization::XmlReflectionMember* arg, ::System::Xml::Serialization::XmlTypeMapMemberElement* arg, ::System::Xml::Serialization::XmlAttributes* arg)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapElementInfoList*(*)(::System::String*, ::System::Xml::Serialization::XmlReflectionMember*, ::System::Xml::Serialization::XmlTypeMapMemberElement*, ::System::Xml::Serialization::XmlAttributes*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTANYELEMENTINFO_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void ImportTextElementInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* arg, ::System::Type* arg, ::System::Xml::Serialization::XmlTypeMapMemberElement* arg, ::System::Xml::Serialization::XmlAttributes* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapElementInfoList*, ::System::Type*, ::System::Xml::Serialization::XmlTypeMapMemberElement*, ::System::Xml::Serialization::XmlAttributes*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTEXTELEMENTINFO_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Boolean CanBeNull(::System::Xml::Serialization::TypeData* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Serialization::TypeData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_CANBENULL_OFFSET))(arg, nullptr);
		}

		::System::Void IncludeType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_INCLUDETYPE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetDefaultValue(::System::Xml::Serialization::TypeData* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::TypeData*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_GETDEFAULTVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

