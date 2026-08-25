#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class BeforehandGachaSnapshotDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNRESPONSE_GET_SELECTGACHASNAPSHOT_OFFSET UNITYSDK_OFFSET(0xF4F380)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F390)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F3A0)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNRESPONSE_SET_SELECTGACHASNAPSHOT_OFFSET UNITYSDK_OFFSET(0xF4F3B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBeforehandGachaRunResponse_TypeDefinitionIndex = 12131;

	class ShopBeforehandGachaRunResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* _SelectGachaSnapshot_k__BackingField; // 0x50

		::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* get_SelectGachaSnapshot()
		{
			return ((::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNRESPONSE_GET_SELECTGACHASNAPSHOT_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SelectGachaSnapshot(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNRESPONSE_SET_SELECTGACHASNAPSHOT_OFFSET))(arg, nullptr);
		}

	};
}

