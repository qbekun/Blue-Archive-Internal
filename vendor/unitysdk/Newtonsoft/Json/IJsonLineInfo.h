#pragma once
#include "../../unitysdk.h"

#define NEWTONSOFT_JSON_IJSONLINEINFO_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int IJsonLineInfo_TypeDefinitionIndex = 31680;

	class IJsonLineInfo : public Il2CppObject
	{
	public:
		::System::Boolean HasLineInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_IJSONLINEINFO_HASLINEINFO_OFFSET))(nullptr);
		}

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINEPOSITION_OFFSET))(nullptr);
		}

	};
}

