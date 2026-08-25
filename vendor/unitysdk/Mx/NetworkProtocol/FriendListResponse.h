#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class FriendIdCardDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF468B0)
#define MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_GET_BLOCKEDUSERDBS_OFFSET UNITYSDK_OFFSET(0xF468C0)
#define MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_GET_SENTREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF468D0)
#define MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_SET_BLOCKEDUSERDBS_OFFSET UNITYSDK_OFFSET(0xF468E0)
#define MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_GET_FRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF468F0)
#define MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_GET_RECEIVEDREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF46900)
#define MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_SET_RECEIVEDREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF46910)
#define MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_SET_IDCARDBACKGROUNDDBS_OFFSET UNITYSDK_OFFSET(0xF46920)
#define MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_SET_SENTREQUESTFRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF46930)
#define MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46940)
#define MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_SET_FRIENDDBS_OFFSET UNITYSDK_OFFSET(0xF46950)
#define MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_GET_IDCARDBACKGROUNDDBS_OFFSET UNITYSDK_OFFSET(0xF46960)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendListResponse_TypeDefinitionIndex = 11796;

	class FriendListResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::FriendIdCardDB* FriendIdCardDB; // 0x50
		::Il2CppArray<::System::Object*>* _IdCardBackgroundDBs_k__BackingField; // 0x58
		::Il2CppArray<::System::Object*>* _FriendDBs_k__BackingField; // 0x60
		::Il2CppArray<::System::Object*>* _SentRequestFriendDBs_k__BackingField; // 0x68
		::Il2CppArray<::System::Object*>* _ReceivedRequestFriendDBs_k__BackingField; // 0x70
		::Il2CppArray<::System::Object*>* _BlockedUserDBs_k__BackingField; // 0x78

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BlockedUserDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_GET_BLOCKEDUSERDBS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SentRequestFriendDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_GET_SENTREQUESTFRIENDDBS_OFFSET))(nullptr);
		}

		::System::Void set_BlockedUserDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_SET_BLOCKEDUSERDBS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_FriendDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_GET_FRIENDDBS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ReceivedRequestFriendDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_GET_RECEIVEDREQUESTFRIENDDBS_OFFSET))(nullptr);
		}

		::System::Void set_ReceivedRequestFriendDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_SET_RECEIVEDREQUESTFRIENDDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_IdCardBackgroundDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_SET_IDCARDBACKGROUNDDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_SentRequestFriendDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_SET_SENTREQUESTFRIENDDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_FriendDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_SET_FRIENDDBS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_IdCardBackgroundDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTRESPONSE_GET_IDCARDBACKGROUNDDBS_OFFSET))(nullptr);
		}

	};
}

