#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTNICKNAMEREQUEST_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xF0F520)
#define MX_NETWORKPROTOCOL_ACCOUNTNICKNAMEREQUEST_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xF0F530)
#define MX_NETWORKPROTOCOL_ACCOUNTNICKNAMEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0F540)
#define MX_NETWORKPROTOCOL_ACCOUNTNICKNAMEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0F550)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountNicknameRequest_TypeDefinitionIndex = 11235;

	class AccountNicknameRequest : public Il2CppObject
	{
	public:
		::System::String* _Nickname_k__BackingField; // 0x40

		::System::String* get_Nickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTNICKNAMEREQUEST_GET_NICKNAME_OFFSET))(nullptr);
		}

		::System::Void set_Nickname(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTNICKNAMEREQUEST_SET_NICKNAME_OFFSET))(str, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTNICKNAMEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTNICKNAMEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

