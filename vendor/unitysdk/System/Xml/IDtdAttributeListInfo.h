#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_IDTDATTRIBUTELISTINFO_GET_HASNONCDATAATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDATTRIBUTELISTINFO_LOOKUPATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDATTRIBUTELISTINFO_LOOKUPDEFAULTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Xml
{
	inline static constexpr unsigned int IDtdAttributeListInfo_TypeDefinitionIndex = 27638;

	class IDtdAttributeListInfo : public Il2CppObject
	{
	public:
		::System::Boolean get_HasNonCDataAttributes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDATTRIBUTELISTINFO_GET_HASNONCDATAATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Xml::IDtdAttributeInfo* LookupAttribute(::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::IDtdAttributeInfo*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDATTRIBUTELISTINFO_LOOKUPATTRIBUTE_OFFSET))(str, str, nullptr);
		}

		Il2CppObject* LookupDefaultAttributes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDATTRIBUTELISTINFO_LOOKUPDEFAULTATTRIBUTES_OFFSET))(nullptr);
		}

	};
}

