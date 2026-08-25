#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMENUM_OFFSET UNITYSDK_OFFSET(0x99DCF90)
#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMXMLNAME_OFFSET UNITYSDK_OFFSET(0x99DD2C0)
#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMXMLNCNAME_OFFSET UNITYSDK_OFFSET(0x99DD310)
#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x99DBE20)
#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMXMLSTRING_OFFSET UNITYSDK_OFFSET(0x99DD360)
#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x99DDD70)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlCustomFormatter_TypeDefinitionIndex = 27886;

	class XmlCustomFormatter : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* allTimeFormats; // 0x0

		::System::String* FromEnum(::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::Int64, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMENUM_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::String* FromXmlName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMXMLNAME_OFFSET))(str, nullptr);
		}

		::System::String* FromXmlNCName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMXMLNCNAME_OFFSET))(str, nullptr);
		}

		::System::String* ToXmlString(::System::Xml::Serialization::TypeData* arg, ::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Xml::Serialization::TypeData*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_TOXMLSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* FromXmlString(::System::Xml::Serialization::TypeData* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::TypeData*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMXMLSTRING_OFFSET))(arg, str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

