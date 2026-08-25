#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CraftNodeDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTSELECTNODERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41B00)
#define MX_NETWORKPROTOCOL_CRAFTSELECTNODERESPONSE_GET_SELECTEDNODEDB_OFFSET UNITYSDK_OFFSET(0xF41B10)
#define MX_NETWORKPROTOCOL_CRAFTSELECTNODERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41B20)
#define MX_NETWORKPROTOCOL_CRAFTSELECTNODERESPONSE_SET_SELECTEDNODEDB_OFFSET UNITYSDK_OFFSET(0xF41B30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftSelectNodeResponse_TypeDefinitionIndex = 11598;

	class CraftSelectNodeResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CraftNodeDB* _SelectedNodeDB_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSELECTNODERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CraftNodeDB* get_SelectedNodeDB()
		{
			return ((::MX::GameLogic::DBModel::CraftNodeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSELECTNODERESPONSE_GET_SELECTEDNODEDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSELECTNODERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SelectedNodeDB(::MX::GameLogic::DBModel::CraftNodeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftNodeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSELECTNODERESPONSE_SET_SELECTEDNODEDB_OFFSET))(arg, nullptr);
		}

	};
}

