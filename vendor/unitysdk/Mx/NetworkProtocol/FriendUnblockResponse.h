#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_GET_RECEIVEDREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF474E0)
#define MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_GET_BLOCKEDUSERDBS_OFFSET UNITYSDK_OFFSET(0xF474F0)
#define MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_SET_SENTREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47500)
#define MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47510)
#define MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_SET_BLOCKEDUSERDBS_OFFSET UNITYSDK_OFFSET(0xF47520)
#define MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_GET_SENTREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47530)
#define MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_GET_FRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47540)
#define MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_SET_FRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47550)
#define MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47560)
#define MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_SET_RECEIVEDREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47570)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendUnblockResponse_TypeDefinitionIndex = 11822;

	class FriendUnblockResponse : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _FriendDBs_k__BackingField; // 0x50
		::Il2CppArray<::System::Object*>* _SentRequestFriendDBs_k__BackingField; // 0x58
		::Il2CppArray<::System::Object*>* _ReceivedRequestFriendDBs_k__BackingField; // 0x60
		::Il2CppArray<::System::Object*>* _BlockedUserDBs_k__BackingField; // 0x68

		::Il2CppArray<::System::Object*>* get_ReceivedRequestFriendDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_GET_RECEIVEDREQUESTFRIENDDBS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BlockedUserDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_GET_BLOCKEDUSERDBS_OFFSET))(nullptr);
		}

		::System::Void set_SentRequestFriendDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_SET_SENTREQUESTFRIENDDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_BlockedUserDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_SET_BLOCKEDUSERDBS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SentRequestFriendDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_GET_SENTREQUESTFRIENDDBS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_FriendDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_GET_FRIENDDBS_OFFSET))(nullptr);
		}

		::System::Void set_FriendDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_SET_FRIENDDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ReceivedRequestFriendDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDUNBLOCKRESPONSE_SET_RECEIVEDREQUESTFRIENDDBS_OFFSET))(arg, nullptr);
		}

	};
}

