#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERFLATLIST_GET_LISTMAP_OFFSET UNITYSDK_OFFSET(0x9A00A00)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERFLATLIST_SET_LISTMAP_OFFSET UNITYSDK_OFFSET(0x9A00A10)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERFLATLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A00A20)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberFlatList_TypeDefinitionIndex = 27933;

	class XmlTypeMapMemberFlatList : public Il2CppObject
	{
	public:
		::System::Xml::Serialization::ListMap* _listMap; // 0x80

		::System::Xml::Serialization::ListMap* get_ListMap()
		{
			return (return (::System::Xml::Serialization::ListMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERFLATLIST_GET_LISTMAP_OFFSET))(nullptr);
		}

		::System::Void set_ListMap(::System::Xml::Serialization::ListMap* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::ListMap*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERFLATLIST_SET_LISTMAP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERFLATLIST_.CTOR_OFFSET))(nullptr);
		}

	};
}

