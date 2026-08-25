#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_GET_SENTREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47260)
#define MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_GET_BLOCKEDUSERDBS_OFFSET UNITYSDK_OFFSET(0xF47270)
#define MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_GET_FRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47280)
#define MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47290)
#define MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_SET_FRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF472A0)
#define MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_SET_BLOCKEDUSERDBS_OFFSET UNITYSDK_OFFSET(0xF472B0)
#define MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_SET_RECEIVEDREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF472C0)
#define MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_SET_SENTREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF472D0)
#define MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF472E0)
#define MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_GET_RECEIVEDREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF472F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendCancelFriendRequestResponse_TypeDefinitionIndex = 11814;

	class FriendCancelFriendRequestResponse : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _FriendDBs_k__BackingField; // 0x50
		::Il2CppArray<::System::Object*>* _SentRequestFriendDBs_k__BackingField; // 0x58
		::Il2CppArray<::System::Object*>* _ReceivedRequestFriendDBs_k__BackingField; // 0x60
		::Il2CppArray<::System::Object*>* _BlockedUserDBs_k__BackingField; // 0x68

		::Il2CppArray<::System::Object*>* get_SentRequestFriendDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_GET_SENTREQUESTFRIENDDBS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BlockedUserDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_GET_BLOCKEDUSERDBS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_FriendDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_GET_FRIENDDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_FriendDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_SET_FRIENDDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_BlockedUserDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_SET_BLOCKEDUSERDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ReceivedRequestFriendDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_SET_RECEIVEDREQUESTFRIENDDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_SentRequestFriendDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_SET_SENTREQUESTFRIENDDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ReceivedRequestFriendDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTRESPONSE_GET_RECEIVEDREQUESTFRIENDDBS_OFFSET))(nullptr);
		}

	};
}

