#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class MonthlyProductPurchaseDB; }
namespace MX::GameLogic::DBModel { class DailyRecordDB; }
namespace MX::GameLogic::DBModel { class BattlePassProductPurchaseDB; }
namespace MX::GameLogic::DBModel { class BattlePassInfoDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_SET_APPLIEDDAILYRECORDDB_OFFSET UNITYSDK_OFFSET(0xF47DC0)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_SET_APPLIEDBATTLEPASSINFODB_OFFSET UNITYSDK_OFFSET(0xF47DD0)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47DE0)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_GET_APPLIEDBATTLEPASSINFODB_OFFSET UNITYSDK_OFFSET(0xF47DF0)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_GET_APPLIEDMONTHLYPRODUCTPURCHASEDB_OFFSET UNITYSDK_OFFSET(0xF47E00)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_GET_BATTLEPASSINFODBS_OFFSET UNITYSDK_OFFSET(0xF47E10)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_GET_APPLIEDBATTLEPASSPRODUCTPURCHASEDB_OFFSET UNITYSDK_OFFSET(0xF47E20)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_SET_MAILDBID_OFFSET UNITYSDK_OFFSET(0xF47E30)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47E40)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_GET_APPLIEDDAILYRECORDDB_OFFSET UNITYSDK_OFFSET(0xF47E50)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_SET_BATTLEPASSINFODBS_OFFSET UNITYSDK_OFFSET(0xF47E60)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_SET_APPLIEDMONTHLYPRODUCTPURCHASEDB_OFFSET UNITYSDK_OFFSET(0xF47E70)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF47E80)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF47E90)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_SET_APPLIEDBATTLEPASSPRODUCTPURCHASEDB_OFFSET UNITYSDK_OFFSET(0xF47EA0)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_GET_MAILDBID_OFFSET UNITYSDK_OFFSET(0xF47EB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MailReceiveSemiPermanentResponse_TypeDefinitionIndex = 11846;

	class MailReceiveSemiPermanentResponse : public Il2CppObject
	{
	public:
		::System::Int64 _MailDBId_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* _AppliedMonthlyProductPurchaseDB_k__BackingField; // 0x60
		::MX::GameLogic::DBModel::DailyRecordDB* _AppliedDailyRecordDB_k__BackingField; // 0x68
		::MX::GameLogic::DBModel::BattlePassProductPurchaseDB* _AppliedBattlePassProductPurchaseDB_k__BackingField; // 0x70
		::MX::GameLogic::DBModel::BattlePassInfoDB* _AppliedBattlePassInfoDB_k__BackingField; // 0x78
		Il2CppObject* _BattlePassInfoDBs_k__BackingField; // 0x80

		::System::Void set_AppliedDailyRecordDB(::MX::GameLogic::DBModel::DailyRecordDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::DailyRecordDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_SET_APPLIEDDAILYRECORDDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_AppliedBattlePassInfoDB(::MX::GameLogic::DBModel::BattlePassInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BattlePassInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_SET_APPLIEDBATTLEPASSINFODB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::BattlePassInfoDB* get_AppliedBattlePassInfoDB()
		{
			return ((::MX::GameLogic::DBModel::BattlePassInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_GET_APPLIEDBATTLEPASSINFODB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* get_AppliedMonthlyProductPurchaseDB()
		{
			return ((::MX::GameLogic::DBModel::MonthlyProductPurchaseDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_GET_APPLIEDMONTHLYPRODUCTPURCHASEDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_BattlePassInfoDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_GET_BATTLEPASSINFODBS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::BattlePassProductPurchaseDB* get_AppliedBattlePassProductPurchaseDB()
		{
			return ((::MX::GameLogic::DBModel::BattlePassProductPurchaseDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_GET_APPLIEDBATTLEPASSPRODUCTPURCHASEDB_OFFSET))(nullptr);
		}

		::System::Void set_MailDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_SET_MAILDBID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::DailyRecordDB* get_AppliedDailyRecordDB()
		{
			return ((::MX::GameLogic::DBModel::DailyRecordDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_GET_APPLIEDDAILYRECORDDB_OFFSET))(nullptr);
		}

		::System::Void set_BattlePassInfoDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_SET_BATTLEPASSINFODBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_AppliedMonthlyProductPurchaseDB(::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MonthlyProductPurchaseDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_SET_APPLIEDMONTHLYPRODUCTPURCHASEDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_AppliedBattlePassProductPurchaseDB(::MX::GameLogic::DBModel::BattlePassProductPurchaseDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BattlePassProductPurchaseDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_SET_APPLIEDBATTLEPASSPRODUCTPURCHASEDB_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MailDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTRESPONSE_GET_MAILDBID_OFFSET))(nullptr);
		}

	};
}

