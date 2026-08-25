#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBEREXPANDABLE_GET_FLATARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x9A00970)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBEREXPANDABLE_SET_FLATARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x9A00980)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBEREXPANDABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A00990)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberExpandable_TypeDefinitionIndex = 27932;

	class XmlTypeMapMemberExpandable : public Il2CppObject
	{
	public:
		::System::Int32 _flatArrayIndex; // 0x78

		::System::Int32 get_FlatArrayIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBEREXPANDABLE_GET_FLATARRAYINDEX_OFFSET))(nullptr);
		}

		::System::Void set_FlatArrayIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBEREXPANDABLE_SET_FLATARRAYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBEREXPANDABLE_.CTOR_OFFSET))(nullptr);
		}

	};
}

