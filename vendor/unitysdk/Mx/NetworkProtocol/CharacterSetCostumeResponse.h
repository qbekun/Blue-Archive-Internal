#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CostumeDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMERESPONSE_SET_SETCOSTUMEDB_OFFSET UNITYSDK_OFFSET(0xF16000)
#define MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16010)
#define MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMERESPONSE_GET_UNSETCOSTUMEDB_OFFSET UNITYSDK_OFFSET(0xF16020)
#define MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMERESPONSE_SET_UNSETCOSTUMEDB_OFFSET UNITYSDK_OFFSET(0xF16030)
#define MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16040)
#define MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMERESPONSE_GET_SETCOSTUMEDB_OFFSET UNITYSDK_OFFSET(0xF16050)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterSetCostumeResponse_TypeDefinitionIndex = 11479;

	class CharacterSetCostumeResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CostumeDB* _SetCostumeDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::CostumeDB* _UnsetCostumeDB_k__BackingField; // 0x58

		::System::Void set_SetCostumeDB(::MX::GameLogic::DBModel::CostumeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CostumeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMERESPONSE_SET_SETCOSTUMEDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CostumeDB* get_UnsetCostumeDB()
		{
			return ((::MX::GameLogic::DBModel::CostumeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMERESPONSE_GET_UNSETCOSTUMEDB_OFFSET))(nullptr);
		}

		::System::Void set_UnsetCostumeDB(::MX::GameLogic::DBModel::CostumeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CostumeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMERESPONSE_SET_UNSETCOSTUMEDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CostumeDB* get_SetCostumeDB()
		{
			return ((::MX::GameLogic::DBModel::CostumeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMERESPONSE_GET_SETCOSTUMEDB_OFFSET))(nullptr);
		}

	};
}

