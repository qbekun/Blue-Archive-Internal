#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_SIMPLETYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97717C0)
#define SYSTEM_DATA_SIMPLETYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9771910)
#define SYSTEM_DATA_SIMPLETYPE_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9772540)
#define SYSTEM_DATA_SIMPLETYPE_LOADTYPEVALUES_OFFSET UNITYSDK_OFFSET(0x9771B00)
#define SYSTEM_DATA_SIMPLETYPE_ISPLAINSTRING_OFFSET UNITYSDK_OFFSET(0x9772590)
#define SYSTEM_DATA_SIMPLETYPE_GET_BASETYPE_OFFSET UNITYSDK_OFFSET(0x9772690)
#define SYSTEM_DATA_SIMPLETYPE_GET_XMLBASETYPE_OFFSET UNITYSDK_OFFSET(0x97726A0)
#define SYSTEM_DATA_SIMPLETYPE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x97726B0)
#define SYSTEM_DATA_SIMPLETYPE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x97726C0)
#define SYSTEM_DATA_SIMPLETYPE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x97726D0)
#define SYSTEM_DATA_SIMPLETYPE_GET_MAXLENGTH_OFFSET UNITYSDK_OFFSET(0x97726E0)
#define SYSTEM_DATA_SIMPLETYPE_SET_MAXLENGTH_OFFSET UNITYSDK_OFFSET(0x97726F0)
#define SYSTEM_DATA_SIMPLETYPE_GET_BASESIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x9772700)
#define SYSTEM_DATA_SIMPLETYPE_GET_SIMPLETYPEQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x9772710)
#define SYSTEM_DATA_SIMPLETYPE_QUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x9772770)
#define SYSTEM_DATA_SIMPLETYPE_TONODE_OFFSET UNITYSDK_OFFSET(0x97727E0)
#define SYSTEM_DATA_SIMPLETYPE_CREATEENUMERATEDTYPE_OFFSET UNITYSDK_OFFSET(0x9772D50)
#define SYSTEM_DATA_SIMPLETYPE_CREATEBYTEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x9772DD0)
#define SYSTEM_DATA_SIMPLETYPE_CREATELIMITEDSTRINGTYPE_OFFSET UNITYSDK_OFFSET(0x9772E30)
#define SYSTEM_DATA_SIMPLETYPE_CREATESIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x9772EA0)
#define SYSTEM_DATA_SIMPLETYPE_HASCONFLICTINGDEFINITION_OFFSET UNITYSDK_OFFSET(0x9772F70)
#define SYSTEM_DATA_SIMPLETYPE_CANHAVEMAXLENGTH_OFFSET UNITYSDK_OFFSET(0x9773060)
#define SYSTEM_DATA_SIMPLETYPE_CONVERTTOANNONYMOUSSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x97730D0)

namespace System::Data
{
	inline static constexpr unsigned int SimpleType_TypeDefinitionIndex = 32300;

	class SimpleType : public Il2CppObject
	{
	public:
		::System::String* _baseType; // 0x10
		::System::Data::SimpleType* _baseSimpleType; // 0x18
		::System::Xml::XmlQualifiedName* _xmlBaseType; // 0x20
		::System::String* _name; // 0x28
		::System::Int32 _length; // 0x30
		::System::Int32 _minLength; // 0x34
		::System::Int32 _maxLength; // 0x38
		::System::String* _pattern; // 0x40
		::System::String* _ns; // 0x48
		::System::String* _maxExclusive; // 0x50
		::System::String* _maxInclusive; // 0x58
		::System::String* _minExclusive; // 0x60
		::System::String* _minInclusive; // 0x68
		::System::String* _enumeration; // 0x70

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaSimpleType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoadTypeValues(::System::Xml::Schema::XmlSchemaSimpleType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_LOADTYPEVALUES_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPlainString()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_ISPLAINSTRING_OFFSET))(nullptr);
		}

		::System::String* get_BaseType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_GET_BASETYPE_OFFSET))(nullptr);
		}

		::System::Xml::XmlQualifiedName* get_XmlBaseType()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_GET_XMLBASETYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_GET_MAXLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_MaxLength(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_SET_MAXLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Data::SimpleType* get_BaseSimpleType()
		{
			return (return (::System::Data::SimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_GET_BASESIMPLETYPE_OFFSET))(nullptr);
		}

		::System::String* get_SimpleTypeQualifiedName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_GET_SIMPLETYPEQUALIFIEDNAME_OFFSET))(nullptr);
		}

		::System::String* QualifiedName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_QUALIFIEDNAME_OFFSET))(str, nullptr);
		}

		::System::Xml::XmlNode* ToNode(::System::Xml::XmlDocument* arg, ::System::Collections::Hashtable* arg, ::System::Boolean arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XmlDocument*, ::System::Collections::Hashtable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_TONODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Data::SimpleType* CreateEnumeratedType(::System::String* str)
		{
			return (return (::System::Data::SimpleType*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_CREATEENUMERATEDTYPE_OFFSET))(str, nullptr);
		}

		::System::Data::SimpleType* CreateByteArrayType(::System::String* str)
		{
			return (return (::System::Data::SimpleType*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_CREATEBYTEARRAYTYPE_OFFSET))(str, nullptr);
		}

		::System::Data::SimpleType* CreateLimitedStringType(::System::Int32 arg)
		{
			return (return (::System::Data::SimpleType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_CREATELIMITEDSTRINGTYPE_OFFSET))(arg, nullptr);
		}

		::System::Data::SimpleType* CreateSimpleType(::System::Data::Common::StorageType* arg, ::System::Type* arg)
		{
			return (return (::System::Data::SimpleType*(*)(::System::Data::Common::StorageType*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_CREATESIMPLETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* HasConflictingDefinition(::System::Data::SimpleType* arg)
		{
			return (return (::System::String*(*)(::System::Data::SimpleType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_HASCONFLICTINGDEFINITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanHaveMaxLength()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_CANHAVEMAXLENGTH_OFFSET))(nullptr);
		}

		::System::Void ConvertToAnnonymousSimpleType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SIMPLETYPE_CONVERTTOANNONYMOUSSIMPLETYPE_OFFSET))(nullptr);
		}

	};
}

