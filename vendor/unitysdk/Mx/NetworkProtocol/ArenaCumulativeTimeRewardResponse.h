#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDRESPONSE_SET_TIMEREWARDLASTUPDATETIME_OFFSET UNITYSDK_OFFSET(0xF110E0)
#define MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDRESPONSE_GET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0xF110F0)
#define MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11100)
#define MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDRESPONSE_SET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0xF11110)
#define MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11120)
#define MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDRESPONSE_SET_TIMEREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0xF11130)
#define MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDRESPONSE_GET_TIMEREWARDLASTUPDATETIME_OFFSET UNITYSDK_OFFSET(0xF11140)
#define MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDRESPONSE_GET_TIMEREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0xF11150)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaCumulativeTimeRewardResponse_TypeDefinitionIndex = 11294;

	class ArenaCumulativeTimeRewardResponse : public Il2CppObject
	{
	public:
		::System::Int64 _TimeRewardAmount_k__BackingField; // 0x50
		::System::DateTime* _TimeRewardLastUpdateTime_k__BackingField; // 0x58
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResult_k__BackingField; // 0x60

		::System::Void set_TimeRewardLastUpdateTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDRESPONSE_SET_TIMEREWARDLASTUPDATETIME_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResult()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDRESPONSE_GET_PARCELRESULT_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResult(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDRESPONSE_SET_PARCELRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TimeRewardAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDRESPONSE_SET_TIMEREWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_TimeRewardLastUpdateTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDRESPONSE_GET_TIMEREWARDLASTUPDATETIME_OFFSET))(nullptr);
		}

		::System::Int64 get_TimeRewardAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDRESPONSE_GET_TIMEREWARDAMOUNT_OFFSET))(nullptr);
		}

	};
}

