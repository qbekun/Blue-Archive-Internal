#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98DBAD0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98DBB60)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98DBBF0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98DBC90)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98DBD20)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98DBDB0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98DBE80)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98DC1A0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98DC270)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x98DC4D0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x98DC4E0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x98DC4F0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_TYPEDVALUE_OFFSET UNITYSDK_OFFSET(0x98DC530)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASBOOLEAN_OFFSET UNITYSDK_OFFSET(0x98DC730)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASDATETIME_OFFSET UNITYSDK_OFFSET(0x98DC840)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASDOUBLE_OFFSET UNITYSDK_OFFSET(0x98DC960)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASINT_OFFSET UNITYSDK_OFFSET(0x98DCA70)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASLONG_OFFSET UNITYSDK_OFFSET(0x98DCB80)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_VALUEAS_OFFSET UNITYSDK_OFFSET(0x98DCC90)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x98DCEC0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x98DD000)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GETPREFIXFROMQNAME_OFFSET UNITYSDK_OFFSET(0x98DC090)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlAtomicValue_TypeDefinitionIndex = 28121;

	class XmlAtomicValue : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaType* xmlType; // 0x10
		::System::Object* objVal; // 0x18
		::System::TypeCode* clrType; // 0x20
		Union* unionVal; // 0x28
		NamespacePrefixForQName* nsPrefix; // 0x30

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaType* arg, ::System::DateTime* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaType* arg, ::System::Double arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaType* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaType* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaType* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaType* arg, ::System::String* str, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::System::String*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaType* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaType* arg, ::System::Object* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaType* get_XmlType()
		{
			return (return (::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_XMLTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_ValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Object* get_TypedValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_TYPEDVALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_ValueAsBoolean()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASBOOLEAN_OFFSET))(nullptr);
		}

		::System::DateTime* get_ValueAsDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASDATETIME_OFFSET))(nullptr);
		}

		::System::Double get_ValueAsDouble()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASDOUBLE_OFFSET))(nullptr);
		}

		::System::Int32 get_ValueAsInt()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASINT_OFFSET))(nullptr);
		}

		::System::Int64 get_ValueAsLong()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASLONG_OFFSET))(nullptr);
		}

		::System::Object* ValueAs(::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_VALUEAS_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* GetPrefixFromQName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GETPREFIXFROMQNAME_OFFSET))(str, nullptr);
		}

	};
}

