#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_IDTDINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDINFO_GET_INTERNALDTDSUBSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDINFO_GET_HASDEFAULTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDINFO_GET_HASNONCDATAATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDINFO_LOOKUPATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDINFO_LOOKUPENTITY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Xml
{
	inline static constexpr unsigned int IDtdInfo_TypeDefinitionIndex = 27637;

	class IDtdInfo : public Il2CppObject
	{
	public:
		::System::Xml::XmlQualifiedName* get_Name()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_InternalDtdSubset()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDINFO_GET_INTERNALDTDSUBSET_OFFSET))(nullptr);
		}

		::System::Boolean get_HasDefaultAttributes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDINFO_GET_HASDEFAULTATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Boolean get_HasNonCDataAttributes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDINFO_GET_HASNONCDATAATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Xml::IDtdAttributeListInfo* LookupAttributeList(::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::IDtdAttributeListInfo*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDINFO_LOOKUPATTRIBUTELIST_OFFSET))(str, str, nullptr);
		}

		::System::Xml::IDtdEntityInfo* LookupEntity(::System::String* str)
		{
			return (return (::System::Xml::IDtdEntityInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDINFO_LOOKUPENTITY_OFFSET))(str, nullptr);
		}

	};
}

