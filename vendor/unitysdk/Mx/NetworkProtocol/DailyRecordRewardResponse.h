#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class DailyRecordDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_DAILYRECORDREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF42480)
#define MX_NETWORKPROTOCOL_DAILYRECORDREWARDRESPONSE_GET_DAILYRECORDDB_OFFSET UNITYSDK_OFFSET(0xF42490)
#define MX_NETWORKPROTOCOL_DAILYRECORDREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF424A0)
#define MX_NETWORKPROTOCOL_DAILYRECORDREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF424B0)
#define MX_NETWORKPROTOCOL_DAILYRECORDREWARDRESPONSE_SET_DAILYRECORDDB_OFFSET UNITYSDK_OFFSET(0xF424C0)
#define MX_NETWORKPROTOCOL_DAILYRECORDREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF424D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int DailyRecordRewardResponse_TypeDefinitionIndex = 11628;

	class DailyRecordRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::DailyRecordDB* _DailyRecordDB_k__BackingField; // 0x58

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_DAILYRECORDREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::DailyRecordDB* get_DailyRecordDB()
		{
			return ((::MX::GameLogic::DBModel::DailyRecordDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_DAILYRECORDREWARDRESPONSE_GET_DAILYRECORDDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_DAILYRECORDREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_DAILYRECORDREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_DailyRecordDB(::MX::GameLogic::DBModel::DailyRecordDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::DailyRecordDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_DAILYRECORDREWARDRESPONSE_SET_DAILYRECORDDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_DAILYRECORDREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

