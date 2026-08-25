#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A00FC0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_TYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0x99FD920)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_TYPEDATA_OFFSET UNITYSDK_OFFSET(0x9A010A0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x9A010B0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x9A010C0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_XMLTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x99F7F00)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_XMLTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x9A010D0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_HASXMLTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x9A010E0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_DERIVEDTYPES_OFFSET UNITYSDK_OFFSET(0x9A010F0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_MULTIREFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x9A01100)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_BASEMAP_OFFSET UNITYSDK_OFFSET(0x9A01110)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_BASEMAP_OFFSET UNITYSDK_OFFSET(0x9A01120)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_INCLUDEINSCHEMA_OFFSET UNITYSDK_OFFSET(0x9A01130)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x9A01140)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x9A01150)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_ISANY_OFFSET UNITYSDK_OFFSET(0x9A01160)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_ISANY_OFFSET UNITYSDK_OFFSET(0x9A01170)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GETREALTYPEMAP_OFFSET UNITYSDK_OFFSET(0x99F7D60)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GETREALELEMENTMAP_OFFSET UNITYSDK_OFFSET(0x9A01180)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_UPDATEROOT_OFFSET UNITYSDK_OFFSET(0x9A015B0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapping_TypeDefinitionIndex = 27937;

	class XmlTypeMapping : public Il2CppObject
	{
	public:
		::System::String* xmlType; // 0x48
		::System::String* xmlTypeNamespace; // 0x50
		::System::Xml::Serialization::TypeData* type; // 0x58
		::System::Xml::Serialization::XmlTypeMapping* baseMap; // 0x60
		::System::Boolean multiReferenceType; // 0x68
		::System::Boolean includeInSchema; // 0x69
		::System::Boolean isNullable; // 0x6A
		::System::Boolean isAny; // 0x6B
		::System::Collections::ArrayList* _derivedTypes; // 0x70

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Xml::Serialization::TypeData* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Xml::Serialization::TypeData*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_.CTOR_OFFSET))(str, str, arg, str, str, nullptr);
		}

		::System::String* get_TypeFullName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_TYPEFULLNAME_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::TypeData* get_TypeData()
		{
			return (return (::System::Xml::Serialization::TypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_TYPEDATA_OFFSET))(nullptr);
		}

		::System::String* get_XmlType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_XMLTYPE_OFFSET))(nullptr);
		}

		::System::Void set_XmlType(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_XMLTYPE_OFFSET))(str, nullptr);
		}

		::System::String* get_XmlTypeNamespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_XMLTYPENAMESPACE_OFFSET))(nullptr);
		}

		::System::Void set_XmlTypeNamespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_XMLTYPENAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_HasXmlTypeNamespace()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_HASXMLTYPENAMESPACE_OFFSET))(nullptr);
		}

		::System::Collections::ArrayList* get_DerivedTypes()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_DERIVEDTYPES_OFFSET))(nullptr);
		}

		::System::Boolean get_MultiReferenceType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_MULTIREFERENCETYPE_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* get_BaseMap()
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_BASEMAP_OFFSET))(nullptr);
		}

		::System::Void set_BaseMap(::System::Xml::Serialization::XmlTypeMapping* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_BASEMAP_OFFSET))(arg, nullptr);
		}

		::System::Void set_IncludeInSchema(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_INCLUDEINSCHEMA_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNullable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_ISNULLABLE_OFFSET))(nullptr);
		}

		::System::Void set_IsNullable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_ISNULLABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAny()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_ISANY_OFFSET))(nullptr);
		}

		::System::Void set_IsAny(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_ISANY_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* GetRealTypeMap(::System::Type* arg)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GETREALTYPEMAP_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* GetRealElementMap(::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GETREALELEMENTMAP_OFFSET))(str, str, nullptr);
		}

		::System::Void UpdateRoot(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_UPDATEROOT_OFFSET))(arg, nullptr);
		}

	};
}

