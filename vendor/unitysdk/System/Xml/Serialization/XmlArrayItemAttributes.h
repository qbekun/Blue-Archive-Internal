#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x99DA400)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES_ADD_OFFSET UNITYSDK_OFFSET(0x99DA4F0)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x99DA5A0)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x99DA650)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlArrayItemAttributes_TypeDefinitionIndex = 27881;

	class XmlArrayItemAttributes : public Il2CppObject
	{
	public:
		::System::Xml::Serialization::XmlArrayItemAttribute* get_Item(::System::Int32 arg)
		{
			return (return (::System::Xml::Serialization::XmlArrayItemAttribute*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 Add(::System::Xml::Serialization::XmlArrayItemAttribute* arg)
		{
			return (return (::System::Int32(*)(::System::Xml::Serialization::XmlArrayItemAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES_ADDKEYHASH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES_.CTOR_OFFSET))(nullptr);
		}

	};
}

