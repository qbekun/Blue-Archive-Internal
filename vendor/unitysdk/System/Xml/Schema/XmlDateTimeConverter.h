#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x990DD80)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x990DDE0)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x990DE70)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x990DED0)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x990E050)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x990E3D0)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x990E400)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x990E590)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x990E920)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x990EA40)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x990EC60)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x990EFD0)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x990F380)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x990F750)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlDateTimeConverter_TypeDefinitionIndex = 28219;

	class XmlDateTimeConverter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Xml::Schema::XmlSchemaType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CREATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* ToDateTime(::System::DateTimeOffset* arg)
		{
			return (return (::System::DateTime*(*)(::System::DateTimeOffset*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* ToDateTime(::System::String* str)
		{
			return (return (::System::DateTime*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIME_OFFSET))(str, nullptr);
		}

		::System::DateTime* ToDateTime(::System::Object* arg)
		{
			return (return (::System::DateTime*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIME_OFFSET))(arg, nullptr);
		}

		::System::DateTimeOffset* ToDateTimeOffset(::System::DateTime* arg)
		{
			return (return (::System::DateTimeOffset*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIMEOFFSET_OFFSET))(arg, nullptr);
		}

		::System::DateTimeOffset* ToDateTimeOffset(::System::String* str)
		{
			return (return (::System::DateTimeOffset*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIMEOFFSET_OFFSET))(str, nullptr);
		}

		::System::DateTimeOffset* ToDateTimeOffset(::System::Object* arg)
		{
			return (return (::System::DateTimeOffset*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIMEOFFSET_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::DateTime* arg)
		{
			return (return (::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::DateTimeOffset* arg)
		{
			return (return (::System::String*(*)(::System::DateTimeOffset*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::DateTime* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::DateTime*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::String* str, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CHANGETYPE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CHANGETYPE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

