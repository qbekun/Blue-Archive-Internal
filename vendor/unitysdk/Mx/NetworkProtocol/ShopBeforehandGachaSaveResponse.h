#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class BeforehandGachaSnapshotDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVERESPONSE_SET_SELECTGACHASNAPSHOT_OFFSET UNITYSDK_OFFSET(0xF4F420)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVERESPONSE_GET_SELECTGACHASNAPSHOT_OFFSET UNITYSDK_OFFSET(0xF4F430)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F440)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F450)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBeforehandGachaSaveResponse_TypeDefinitionIndex = 12133;

	class ShopBeforehandGachaSaveResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* _SelectGachaSnapshot_k__BackingField; // 0x50

		::System::Void set_SelectGachaSnapshot(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVERESPONSE_SET_SELECTGACHASNAPSHOT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* get_SelectGachaSnapshot()
		{
			return ((::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVERESPONSE_GET_SELECTGACHASNAPSHOT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

