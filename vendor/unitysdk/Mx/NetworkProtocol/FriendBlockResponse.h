#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_GET_BLOCKEDUSERDBS_OFFSET UNITYSDK_OFFSET(0xF47400)
#define MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47410)
#define MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_SET_FRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47420)
#define MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_SET_RECEIVEDREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47430)
#define MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_GET_RECEIVEDREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47440)
#define MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_GET_SENTREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47450)
#define MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_SET_SENTREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47460)
#define MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_GET_FRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47470)
#define MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47480)
#define MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_SET_BLOCKEDUSERDBS_OFFSET UNITYSDK_OFFSET(0xF47490)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendBlockResponse_TypeDefinitionIndex = 11820;

	class FriendBlockResponse : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _FriendDBs_k__BackingField; // 0x50
		::Il2CppArray<::System::Object*>* _SentRequestFriendDBs_k__BackingField; // 0x58
		::Il2CppArray<::System::Object*>* _ReceivedRequestFriendDBs_k__BackingField; // 0x60
		::Il2CppArray<::System::Object*>* _BlockedUserDBs_k__BackingField; // 0x68

		::Il2CppArray<::System::Object*>* get_BlockedUserDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_GET_BLOCKEDUSERDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_FriendDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_SET_FRIENDDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ReceivedRequestFriendDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_SET_RECEIVEDREQUESTFRIENDDBS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ReceivedRequestFriendDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_GET_RECEIVEDREQUESTFRIENDDBS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SentRequestFriendDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_GET_SENTREQUESTFRIENDDBS_OFFSET))(nullptr);
		}

		::System::Void set_SentRequestFriendDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_SET_SENTREQUESTFRIENDDBS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_FriendDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_GET_FRIENDDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_BlockedUserDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDBLOCKRESPONSE_SET_BLOCKEDUSERDBS_OFFSET))(arg, nullptr);
		}

	};
}

