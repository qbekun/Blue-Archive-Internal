#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLANYLISTCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x991E160)
#define SYSTEM_XML_SCHEMA_XMLANYLISTCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x991E240)
#define SYSTEM_XML_SCHEMA_XMLANYLISTCONVERTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x991E4C0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlAnyListConverter_TypeDefinitionIndex = 28225;

	class XmlAnyListConverter : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlValueConverter* ItemList; // 0x0
		::System::Xml::Schema::XmlValueConverter* AnyAtomicList; // 0x8

		::System::Void .ctor(::System::Xml::Schema::XmlBaseConverter* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlBaseConverter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYLISTCONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* ChangeType(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYLISTCONVERTER_CHANGETYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYLISTCONVERTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

