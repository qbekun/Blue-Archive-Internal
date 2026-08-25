#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class BeforehandGachaSnapshotDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAGETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F2C0)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAGETRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F2D0)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAGETRESPONSE_SET_ALREADYPICKED_OFFSET UNITYSDK_OFFSET(0xF4F2E0)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAGETRESPONSE_SET_BEFOREHANDGACHASNAPSHOT_OFFSET UNITYSDK_OFFSET(0xF4F2F0)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAGETRESPONSE_GET_ALREADYPICKED_OFFSET UNITYSDK_OFFSET(0xF4F300)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAGETRESPONSE_GET_BEFOREHANDGACHASNAPSHOT_OFFSET UNITYSDK_OFFSET(0xF4F310)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBeforehandGachaGetResponse_TypeDefinitionIndex = 12129;

	class ShopBeforehandGachaGetResponse : public Il2CppObject
	{
	public:
		::System::Boolean _AlreadyPicked_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* _BeforehandGachaSnapshot_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAGETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAGETRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_AlreadyPicked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAGETRESPONSE_SET_ALREADYPICKED_OFFSET))(arg, nullptr);
		}

		::System::Void set_BeforehandGachaSnapshot(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAGETRESPONSE_SET_BEFOREHANDGACHASNAPSHOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AlreadyPicked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAGETRESPONSE_GET_ALREADYPICKED_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* get_BeforehandGachaSnapshot()
		{
			return ((::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAGETRESPONSE_GET_BEFOREHANDGACHASNAPSHOT_OFFSET))(nullptr);
		}

	};
}

