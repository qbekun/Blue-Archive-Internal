#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MultiFloorRaidDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4ADC0)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4ADD0)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDRESPONSE_GET_MULTIFLOORRAIDDB_OFFSET UNITYSDK_OFFSET(0xF4ADE0)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDRESPONSE_SET_MULTIFLOORRAIDDB_OFFSET UNITYSDK_OFFSET(0xF4ADF0)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4AE00)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4AE10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MultiFloorRaidReceiveRewardResponse_TypeDefinitionIndex = 11974;

	class MultiFloorRaidReceiveRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MultiFloorRaidDB* _MultiFloorRaidDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MultiFloorRaidDB* get_MultiFloorRaidDB()
		{
			return ((::MX::GameLogic::DBModel::MultiFloorRaidDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDRESPONSE_GET_MULTIFLOORRAIDDB_OFFSET))(nullptr);
		}

		::System::Void set_MultiFloorRaidDB(::MX::GameLogic::DBModel::MultiFloorRaidDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MultiFloorRaidDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDRESPONSE_SET_MULTIFLOORRAIDDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

	};
}

