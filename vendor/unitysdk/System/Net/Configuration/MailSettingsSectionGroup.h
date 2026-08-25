#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_MAILSETTINGSSECTIONGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB3720)
#define SYSTEM_NET_CONFIGURATION_MAILSETTINGSSECTIONGROUP_GET_SMTP_OFFSET UNITYSDK_OFFSET(0x9AB3750)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int MailSettingsSectionGroup_TypeDefinitionIndex = 29992;

	class MailSettingsSectionGroup : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_MAILSETTINGSSECTIONGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::Configuration::SmtpSection* get_Smtp()
		{
			return (return (::System::Net::Configuration::SmtpSection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_MAILSETTINGSSECTIONGROUP_GET_SMTP_OFFSET))(nullptr);
		}

	};
}

