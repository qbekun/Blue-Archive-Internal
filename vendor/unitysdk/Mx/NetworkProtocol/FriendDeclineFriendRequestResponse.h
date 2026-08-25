#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_GET_FRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF471A0)
#define MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_SET_BLOCKEDUSERDBS_OFFSET UNITYSDK_OFFSET(0xF471B0)
#define MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF471C0)
#define MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_SET_FRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF471D0)
#define MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_GET_BLOCKEDUSERDBS_OFFSET UNITYSDK_OFFSET(0xF471E0)
#define MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF471F0)
#define MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_GET_SENTREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47200)
#define MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_SET_RECEIVEDREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47210)
#define MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_SET_SENTREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47220)
#define MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_GET_RECEIVEDREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF47230)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendDeclineFriendRequestResponse_TypeDefinitionIndex = 11812;

	class FriendDeclineFriendRequestResponse : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _FriendDBs_k__BackingField; // 0x50
		::Il2CppArray<::System::Object*>* _SentRequestFriendDBs_k__BackingField; // 0x58
		::Il2CppArray<::System::Object*>* _ReceivedRequestFriendDBs_k__BackingField; // 0x60
		::Il2CppArray<::System::Object*>* _BlockedUserDBs_k__BackingField; // 0x68

		::Il2CppArray<::System::Object*>* get_FriendDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_GET_FRIENDDBS_OFFSET))(nullptr);
		}

		::System::Void set_BlockedUserDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_SET_BLOCKEDUSERDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_FriendDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_SET_FRIENDDBS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BlockedUserDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_GET_BLOCKEDUSERDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SentRequestFriendDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_GET_SENTREQUESTFRIENDDBS_OFFSET))(nullptr);
		}

		::System::Void set_ReceivedRequestFriendDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_SET_RECEIVEDREQUESTFRIENDDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_SentRequestFriendDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_SET_SENTREQUESTFRIENDDBS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ReceivedRequestFriendDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTRESPONSE_GET_RECEIVEDREQUESTFRIENDDBS_OFFSET))(nullptr);
		}

	};
}

