#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_CONFIGURATION_INTERNAL_ICONFIGERRORINFO_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_CONFIGURATION_INTERNAL_ICONFIGERRORINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Configuration::Internal
{
	inline static constexpr unsigned int IConfigErrorInfo_TypeDefinitionIndex = 38074;

	class IConfigErrorInfo : public Il2CppObject
	{
	public:
		::System::String* get_Filename()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_INTERNAL_ICONFIGERRORINFO_GET_FILENAME_OFFSET))(nullptr);
		}

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_INTERNAL_ICONFIGERRORINFO_GET_LINENUMBER_OFFSET))(nullptr);
		}

	};
}

