#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x99D9A40)
#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_ADD_OFFSET UNITYSDK_OFFSET(0x99D9B30)
#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x99D9BE0)
#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x99D9C90)
#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x99D9FA0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAnyElementAttributes_TypeDefinitionIndex = 27878;

	class XmlAnyElementAttributes : public Il2CppObject
	{
	public:
		::System::Xml::Serialization::XmlAnyElementAttribute* get_Item(::System::Int32 arg)
		{
			return (return (::System::Xml::Serialization::XmlAnyElementAttribute*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 Add(::System::Xml::Serialization::XmlAnyElementAttribute* arg)
		{
			return (return (::System::Int32(*)(::System::Xml::Serialization::XmlAnyElementAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_ADDKEYHASH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Order()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_.CTOR_OFFSET))(nullptr);
		}

	};
}

