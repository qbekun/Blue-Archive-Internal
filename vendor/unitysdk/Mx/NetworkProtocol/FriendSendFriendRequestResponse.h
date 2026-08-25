#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_SET_RECEIVEDREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF46FE0)
#define MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46FF0)
#define MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_GET_SENTREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47000)
#define MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47010)
#define MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_SET_SENTREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47020)
#define MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_SET_BLOCKEDUSERDBS_OFFSET UNITYSDK_OFFSET(0xF47030)
#define MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_GET_FRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47040)
#define MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_GET_RECEIVEDREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47050)
#define MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_SET_FRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47060)
#define MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_GET_BLOCKEDUSERDBS_OFFSET UNITYSDK_OFFSET(0xF47070)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendSendFriendRequestResponse_TypeDefinitionIndex = 11808;

	class FriendSendFriendRequestResponse : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _FriendDBs_k__BackingField; // 0x50
		::Il2CppArray<::System::Object*>* _SentRequestFriendDBs_k__BackingField; // 0x58
		::Il2CppArray<::System::Object*>* _ReceivedRequestFriendDBs_k__BackingField; // 0x60
		::Il2CppArray<::System::Object*>* _BlockedUserDBs_k__BackingField; // 0x68

		::System::Void set_ReceivedRequestFriendDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_SET_RECEIVEDREQUESTFRIENDDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SentRequestFriendDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_GET_SENTREQUESTFRIENDDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SentRequestFriendDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_SET_SENTREQUESTFRIENDDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_BlockedUserDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_SET_BLOCKEDUSERDBS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_FriendDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_GET_FRIENDDBS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ReceivedRequestFriendDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_GET_RECEIVEDREQUESTFRIENDDBS_OFFSET))(nullptr);
		}

		::System::Void set_FriendDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_SET_FRIENDDBS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BlockedUserDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTRESPONSE_GET_BLOCKEDUSERDBS_OFFSET))(nullptr);
		}

	};
}

