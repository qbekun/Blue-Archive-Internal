#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTBIRTHDAYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0F660)
#define MX_NETWORKPROTOCOL_ACCOUNTBIRTHDAYREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0F670)
#define MX_NETWORKPROTOCOL_ACCOUNTBIRTHDAYREQUEST_SET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0xF0F680)
#define MX_NETWORKPROTOCOL_ACCOUNTBIRTHDAYREQUEST_GET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0xF0F690)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountBirthDayRequest_TypeDefinitionIndex = 11239;

	class AccountBirthDayRequest : public Il2CppObject
	{
	public:
		::System::DateTime* _BirthDay_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTBIRTHDAYREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTBIRTHDAYREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_BirthDay(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTBIRTHDAYREQUEST_SET_BIRTHDAY_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_BirthDay()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTBIRTHDAYREQUEST_GET_BIRTHDAY_OFFSET))(nullptr);
		}

	};
}

