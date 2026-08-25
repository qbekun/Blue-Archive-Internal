#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_DEFAULTVALUEEXPANDED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_DEFAULTVALUETYPED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_VALUELINENUMBER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_VALUELINEPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Xml
{
	inline static constexpr unsigned int IDtdDefaultAttributeInfo_TypeDefinitionIndex = 27640;

	class IDtdDefaultAttributeInfo : public Il2CppObject
	{
	public:
		::System::String* get_DefaultValueExpanded()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_DEFAULTVALUEEXPANDED_OFFSET))(nullptr);
		}

		::System::Object* get_DefaultValueTyped()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_DEFAULTVALUETYPED_OFFSET))(nullptr);
		}

		::System::Int32 get_ValueLineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_VALUELINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_ValueLinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_VALUELINEPOSITION_OFFSET))(nullptr);
		}

	};
}

