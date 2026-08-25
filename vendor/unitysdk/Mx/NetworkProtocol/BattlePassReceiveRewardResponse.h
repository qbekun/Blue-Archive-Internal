#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class BattlePassInfoDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11DB0)
#define MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDRESPONSE_GET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0xF11DC0)
#define MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDRESPONSE_GET_BATTLEPASSINFO_OFFSET UNITYSDK_OFFSET(0xF11DD0)
#define MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11DE0)
#define MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDRESPONSE_SET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0xF11DF0)
#define MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDRESPONSE_SET_BATTLEPASSINFO_OFFSET UNITYSDK_OFFSET(0xF11E00)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BattlePassReceiveRewardResponse_TypeDefinitionIndex = 11336;

	class BattlePassReceiveRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::BattlePassInfoDB* _BattlePassInfo_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResult_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResult()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDRESPONSE_GET_PARCELRESULT_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::BattlePassInfoDB* get_BattlePassInfo()
		{
			return ((::MX::GameLogic::DBModel::BattlePassInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDRESPONSE_GET_BATTLEPASSINFO_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResult(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDRESPONSE_SET_PARCELRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattlePassInfo(::MX::GameLogic::DBModel::BattlePassInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BattlePassInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDRESPONSE_SET_BATTLEPASSINFO_OFFSET))(arg, nullptr);
		}

	};
}

