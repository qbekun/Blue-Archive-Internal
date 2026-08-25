#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9913940)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9913AE0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x9913C60)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x9913D00)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x9914000)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x99140A0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x9914260)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x9914310)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x99144D0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x9914580)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x9914760)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x9914800)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x99149D0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x9914A70)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x9914C40)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x9914CE0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x9914EB0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x9914F50)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9915120)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9915170)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x99151C0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9915220)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9915280)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x99152D0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9915320)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9915370)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x99153C0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x9916060)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x99163A0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x9916560)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x9916740)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x9916910)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x9916AE0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x9916CB0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x99179C0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPEWILDCARDDESTINATION_OFFSET UNITYSDK_OFFSET(0x9913ED0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPEWILDCARDSOURCE_OFFSET UNITYSDK_OFFSET(0x9916230)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGELISTTYPE_OFFSET UNITYSDK_OFFSET(0x9919180)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x9919490)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x991A940)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlUntypedConverter_TypeDefinitionIndex = 28223;

	class XmlUntypedConverter : public Il2CppObject
	{
	public:
		::System::Boolean allowListToList; // 0x30
		::System::Xml::Schema::XmlValueConverter* Untyped; // 0x0
		::System::Xml::Schema::XmlValueConverter* UntypedList; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XmlUntypedConverter* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlUntypedConverter*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ToBoolean(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOBOOLEAN_OFFSET))(str, nullptr);
		}

		::System::Boolean ToBoolean(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::DateTime* ToDateTime(::System::String* str)
		{
			return (return (::System::DateTime*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIME_OFFSET))(str, nullptr);
		}

		::System::DateTime* ToDateTime(::System::Object* arg)
		{
			return (return (::System::DateTime*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIME_OFFSET))(arg, nullptr);
		}

		::System::DateTimeOffset* ToDateTimeOffset(::System::String* str)
		{
			return (return (::System::DateTimeOffset*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIMEOFFSET_OFFSET))(str, nullptr);
		}

		::System::DateTimeOffset* ToDateTimeOffset(::System::Object* arg)
		{
			return (return (::System::DateTimeOffset*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIMEOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Decimal* ToDecimal(::System::String* str)
		{
			return (return (::System::Decimal*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODECIMAL_OFFSET))(str, nullptr);
		}

		::System::Decimal* ToDecimal(::System::Object* arg)
		{
			return (return (::System::Decimal*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODECIMAL_OFFSET))(arg, nullptr);
		}

		::System::Double ToDouble(::System::String* str)
		{
			return (return (::System::Double(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODOUBLE_OFFSET))(str, nullptr);
		}

		::System::Double ToDouble(::System::Object* arg)
		{
			return (return (::System::Double(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToInt32(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT32_OFFSET))(str, nullptr);
		}

		::System::Int32 ToInt32(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT32_OFFSET))(arg, nullptr);
		}

		::System::Int64 ToInt64(::System::String* str)
		{
			return (return (::System::Int64(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT64_OFFSET))(str, nullptr);
		}

		::System::Int64 ToInt64(::System::Object* arg)
		{
			return (return (::System::Int64(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT64_OFFSET))(arg, nullptr);
		}

		::System::Single ToSingle(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSINGLE_OFFSET))(str, nullptr);
		}

		::System::Single ToSingle(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSINGLE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::DateTime* arg)
		{
			return (return (::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::DateTimeOffset* arg)
		{
			return (return (::System::String*(*)(::System::DateTimeOffset*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Decimal* arg)
		{
			return (return (::System::String*(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Double arg)
		{
			return (return (::System::String*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Single arg)
		{
			return (return (::System::String*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Boolean arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Boolean, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::DateTime* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::DateTime*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Decimal* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Decimal*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Double arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Double, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Int32 arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Int64 arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Int64, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::String* str, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ChangeTypeWildcardDestination(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPEWILDCARDDESTINATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ChangeTypeWildcardSource(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPEWILDCARDSOURCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ChangeListType(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGELISTTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

