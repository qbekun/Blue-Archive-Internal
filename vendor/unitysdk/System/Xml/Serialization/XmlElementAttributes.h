#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x99DE970)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_ADD_OFFSET UNITYSDK_OFFSET(0x99DBBF0)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x99DBD70)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x99DCBB0)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x99DB3B0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlElementAttributes_TypeDefinitionIndex = 27888;

	class XmlElementAttributes : public Il2CppObject
	{
	public:
		::System::Xml::Serialization::XmlElementAttribute* get_Item(::System::Int32 arg)
		{
			return (return (::System::Xml::Serialization::XmlElementAttribute*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 Add(::System::Xml::Serialization::XmlElementAttribute* arg)
		{
			return (return (::System::Int32(*)(::System::Xml::Serialization::XmlElementAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_ADDKEYHASH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Order()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_.CTOR_OFFSET))(nullptr);
		}

	};
}

