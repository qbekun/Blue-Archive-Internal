#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTREQUESTBIRTHDAYMAILREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10740)
#define MX_NETWORKPROTOCOL_ACCOUNTREQUESTBIRTHDAYMAILREQUEST_SET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0xF10750)
#define MX_NETWORKPROTOCOL_ACCOUNTREQUESTBIRTHDAYMAILREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10760)
#define MX_NETWORKPROTOCOL_ACCOUNTREQUESTBIRTHDAYMAILREQUEST_GET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0xF10770)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountRequestBirthdayMailRequest_TypeDefinitionIndex = 11271;

	class AccountRequestBirthdayMailRequest : public Il2CppObject
	{
	public:
		::System::DateTime* _Birthday_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTREQUESTBIRTHDAYMAILREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_Birthday(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTREQUESTBIRTHDAYMAILREQUEST_SET_BIRTHDAY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTREQUESTBIRTHDAYMAILREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::DateTime* get_Birthday()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTREQUESTBIRTHDAYMAILREQUEST_GET_BIRTHDAY_OFFSET))(nullptr);
		}

	};
}

