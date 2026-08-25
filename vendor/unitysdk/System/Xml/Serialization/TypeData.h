#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_TYPEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x99D2860)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x99D2880)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_LOOKUPTYPECONVERTOR_OFFSET UNITYSDK_OFFSET(0x99D2E90)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_CONVERTFORASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x99D2F40)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x99D3020)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x99D3030)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x99D3040)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_FULLTYPENAME_OFFSET UNITYSDK_OFFSET(0x99D3050)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x99D3060)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISLISTTYPE_OFFSET UNITYSDK_OFFSET(0x99D2370)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x99D3070)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x99D30A0)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x99D3120)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_SET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x99D3280)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_LISTITEMTYPEDATA_OFFSET UNITYSDK_OFFSET(0x99D2CB0)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_LISTITEMTYPE_OFFSET UNITYSDK_OFFSET(0x99D3290)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISXSDTYPE_OFFSET UNITYSDK_OFFSET(0x99D3090)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_HASPUBLICCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x99D3E60)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GETINDEXERPROPERTY_OFFSET UNITYSDK_OFFSET(0x99D3C00)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_CREATEMISSINGADDMETHODEXCEPTION_OFFSET UNITYSDK_OFFSET(0x99D3D40)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GETGENERICLISTITEMTYPE_OFFSET UNITYSDK_OFFSET(0x99D3A30)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x99D3E70)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int TypeData_TypeDefinitionIndex = 27873;

	class TypeData : public Il2CppObject
	{
	public:
		::System::Type* type; // 0x10
		::System::String* elementName; // 0x18
		::System::Xml::Serialization::SchemaTypes* sType; // 0x20
		::System::Type* listItemType; // 0x28
		::System::String* typeName; // 0x30
		::System::String* fullTypeName; // 0x38
		::System::Xml::Serialization::TypeData* listItemTypeData; // 0x40
		::System::Xml::Serialization::TypeData* mappedType; // 0x48
		::System::Xml::Schema::XmlSchemaPatternFacet* facet; // 0x50
		::System::Reflection::MethodInfo* typeConvertor; // 0x58
		::System::Boolean hasPublicConstructor; // 0x60
		::System::Boolean nullableOverride; // 0x61
		::Il2CppArray<::System::Object*>* keywords; // 0x0

		::System::Void .ctor(::System::Type* arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::String* str, ::System::Boolean arg, ::System::Xml::Serialization::TypeData* arg, ::System::Xml::Schema::XmlSchemaPatternFacet* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::System::Boolean, ::System::Xml::Serialization::TypeData*, ::System::Xml::Schema::XmlSchemaPatternFacet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_.CTOR_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Void LookupTypeConvertor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_LOOKUPTYPECONVERTOR_OFFSET))(nullptr);
		}

		::System::Void ConvertForAssignment(::System::Object&* arg)
		{
			((::System::Void(*)(::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_CONVERTFORASSIGNMENT_OFFSET))(arg, nullptr);
		}

		::System::String* get_TypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_TYPENAME_OFFSET))(nullptr);
		}

		::System::String* get_XmlType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_XMLTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_TYPE_OFFSET))(nullptr);
		}

		::System::String* get_FullTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_FULLTYPENAME_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::SchemaTypes* get_SchemaType()
		{
			return (return (::System::Xml::Serialization::SchemaTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_SCHEMATYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsListType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISLISTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsComplexType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISCOMPLEXTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValueType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISVALUETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNullable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISNULLABLE_OFFSET))(nullptr);
		}

		::System::Void set_IsNullable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_SET_ISNULLABLE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::TypeData* get_ListItemTypeData()
		{
			return (return (::System::Xml::Serialization::TypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_LISTITEMTYPEDATA_OFFSET))(nullptr);
		}

		::System::Type* get_ListItemType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_LISTITEMTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsXsdType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISXSDTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasPublicConstructor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_HASPUBLICCONSTRUCTOR_OFFSET))(nullptr);
		}

		::System::Reflection::PropertyInfo* GetIndexerProperty(::System::Type* arg)
		{
			return (return (::System::Reflection::PropertyInfo*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GETINDEXERPROPERTY_OFFSET))(arg, nullptr);
		}

		::System::InvalidOperationException* CreateMissingAddMethodException(::System::Type* arg, ::System::String* str, ::System::Type* arg)
		{
			return (return (::System::InvalidOperationException*(*)(::System::Type*, ::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_CREATEMISSINGADDMETHODEXCEPTION_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Type* GetGenericListItemType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GETGENERICLISTITEMTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_.CCTOR_OFFSET))(nullptr);
		}

	};
}

