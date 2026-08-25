#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENADAILYREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11180)
#define MX_NETWORKPROTOCOL_ARENADAILYREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11190)
#define MX_NETWORKPROTOCOL_ARENADAILYREWARDRESPONSE_GET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0xF111A0)
#define MX_NETWORKPROTOCOL_ARENADAILYREWARDRESPONSE_GET_DAILYREWARDACTIVETIME_OFFSET UNITYSDK_OFFSET(0xF111B0)
#define MX_NETWORKPROTOCOL_ARENADAILYREWARDRESPONSE_SET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0xF111C0)
#define MX_NETWORKPROTOCOL_ARENADAILYREWARDRESPONSE_SET_DAILYREWARDACTIVETIME_OFFSET UNITYSDK_OFFSET(0xF111D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaDailyRewardResponse_TypeDefinitionIndex = 11296;

	class ArenaDailyRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResult_k__BackingField; // 0x50
		::System::DateTime* _DailyRewardActiveTime_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENADAILYREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENADAILYREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResult()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENADAILYREWARDRESPONSE_GET_PARCELRESULT_OFFSET))(nullptr);
		}

		::System::DateTime* get_DailyRewardActiveTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENADAILYREWARDRESPONSE_GET_DAILYREWARDACTIVETIME_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResult(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENADAILYREWARDRESPONSE_SET_PARCELRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void set_DailyRewardActiveTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENADAILYREWARDRESPONSE_SET_DAILYREWARDACTIVETIME_OFFSET))(arg, nullptr);
		}

	};
}

