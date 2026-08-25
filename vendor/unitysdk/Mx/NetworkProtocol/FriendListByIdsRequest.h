#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDLISTBYIDSREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47340)
#define MX_NETWORKPROTOCOL_FRIENDLISTBYIDSREQUEST_SET_TARGETACCOUNTIDS_OFFSET UNITYSDK_OFFSET(0xF47350)
#define MX_NETWORKPROTOCOL_FRIENDLISTBYIDSREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47360)
#define MX_NETWORKPROTOCOL_FRIENDLISTBYIDSREQUEST_GET_TARGETACCOUNTIDS_OFFSET UNITYSDK_OFFSET(0xF47370)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendListByIdsRequest_TypeDefinitionIndex = 11817;

	class FriendListByIdsRequest : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _TargetAccountIds_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTBYIDSREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_TargetAccountIds(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTBYIDSREQUEST_SET_TARGETACCOUNTIDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTBYIDSREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_TargetAccountIds()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTBYIDSREQUEST_GET_TARGETACCOUNTIDS_OFFSET))(nullptr);
		}

	};
}

