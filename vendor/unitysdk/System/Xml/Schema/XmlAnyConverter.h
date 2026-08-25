#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x991AA40)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x991AA90)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x991AD80)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x991AF40)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x991B120)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x991B2F0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x991B4B0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x991B660)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x991B810)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x991B9E0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x991BD10)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x991BF00)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x991C100)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x991C2F0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x991C4D0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x991C6C0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x991C8C0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPEWILDCARDDESTINATION_OFFSET UNITYSDK_OFFSET(0x991AC50)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPEWILDCARDSOURCE_OFFSET UNITYSDK_OFFSET(0x991BBC0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TONAVIGATOR_OFFSET UNITYSDK_OFFSET(0x991DFA0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x991E030)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlAnyConverter_TypeDefinitionIndex = 28224;

	class XmlAnyConverter : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlValueConverter* Item; // 0x0
		::System::Xml::Schema::XmlValueConverter* AnyAtomic; // 0x8

		::System::Void .ctor(::System::Xml::Schema::XmlTypeCode* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlTypeCode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean ToBoolean(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::DateTime* ToDateTime(::System::Object* arg)
		{
			return (return (::System::DateTime*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODATETIME_OFFSET))(arg, nullptr);
		}

		::System::DateTimeOffset* ToDateTimeOffset(::System::Object* arg)
		{
			return (return (::System::DateTimeOffset*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODATETIMEOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Decimal* ToDecimal(::System::Object* arg)
		{
			return (return (::System::Decimal*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODECIMAL_OFFSET))(arg, nullptr);
		}

		::System::Double ToDouble(::System::Object* arg)
		{
			return (return (::System::Double(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToInt32(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOINT32_OFFSET))(arg, nullptr);
		}

		::System::Int64 ToInt64(::System::Object* arg)
		{
			return (return (::System::Int64(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOINT64_OFFSET))(arg, nullptr);
		}

		::System::Single ToSingle(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOSINGLE_OFFSET))(arg, nullptr);
		}

		::System::Object* ChangeType(::System::Boolean arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Boolean, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::DateTime* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::DateTime*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Decimal* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Decimal*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Double arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Double, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Int32 arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Int64 arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Int64, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::String* str, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ChangeTypeWildcardDestination(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPEWILDCARDDESTINATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ChangeTypeWildcardSource(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPEWILDCARDSOURCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Xml::XPath::XPathNavigator* ToNavigator(::System::Xml::XPath::XPathNavigator* arg)
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::System::Xml::XPath::XPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TONAVIGATOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

