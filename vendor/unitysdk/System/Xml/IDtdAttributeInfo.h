#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_IDTDATTRIBUTEINFO_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISNONCDATATYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISDECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISXMLATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Xml
{
	inline static constexpr unsigned int IDtdAttributeInfo_TypeDefinitionIndex = 27639;

	class IDtdAttributeInfo : public Il2CppObject
	{
	public:
		::System::String* get_Prefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDATTRIBUTEINFO_GET_PREFIX_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LINEPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNonCDataType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISNONCDATATYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDeclaredInExternal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISDECLAREDINEXTERNAL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsXmlAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISXMLATTRIBUTE_OFFSET))(nullptr);
		}

	};
}

