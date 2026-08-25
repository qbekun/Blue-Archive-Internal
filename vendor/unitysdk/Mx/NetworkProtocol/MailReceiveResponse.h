#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MAILRECEIVERESPONSE_GET_BATTLEPASSINFODBS_OFFSET UNITYSDK_OFFSET(0xF47BC0)
#define MX_NETWORKPROTOCOL_MAILRECEIVERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF47BD0)
#define MX_NETWORKPROTOCOL_MAILRECEIVERESPONSE_SET_BATTLEPASSINFODBS_OFFSET UNITYSDK_OFFSET(0xF47BE0)
#define MX_NETWORKPROTOCOL_MAILRECEIVERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47BF0)
#define MX_NETWORKPROTOCOL_MAILRECEIVERESPONSE_GET_MAILSERVERIDS_OFFSET UNITYSDK_OFFSET(0xF47C00)
#define MX_NETWORKPROTOCOL_MAILRECEIVERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF47C10)
#define MX_NETWORKPROTOCOL_MAILRECEIVERESPONSE_SET_MAILSERVERIDS_OFFSET UNITYSDK_OFFSET(0xF47C20)
#define MX_NETWORKPROTOCOL_MAILRECEIVERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47C30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MailReceiveResponse_TypeDefinitionIndex = 11842;

	class MailReceiveResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _MailServerIds_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58
		Il2CppObject* _BattlePassInfoDBs_k__BackingField; // 0x60

		Il2CppObject* get_BattlePassInfoDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVERESPONSE_GET_BATTLEPASSINFODBS_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattlePassInfoDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVERESPONSE_SET_BATTLEPASSINFODBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_MailServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVERESPONSE_GET_MAILSERVERIDS_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_MailServerIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVERESPONSE_SET_MAILSERVERIDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

