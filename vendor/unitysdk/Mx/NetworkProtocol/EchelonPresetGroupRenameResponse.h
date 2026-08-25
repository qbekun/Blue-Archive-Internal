#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EchelonPresetGroupDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMERESPONSE_SET_PRESETGROUPDB_OFFSET UNITYSDK_OFFSET(0xF427A0)
#define MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF427B0)
#define MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF427C0)
#define MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMERESPONSE_GET_PRESETGROUPDB_OFFSET UNITYSDK_OFFSET(0xF427D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EchelonPresetGroupRenameResponse_TypeDefinitionIndex = 11638;

	class EchelonPresetGroupRenameResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EchelonPresetGroupDB* _PresetGroupDB_k__BackingField; // 0x50

		::System::Void set_PresetGroupDB(::MX::GameLogic::DBModel::EchelonPresetGroupDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonPresetGroupDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMERESPONSE_SET_PRESETGROUPDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EchelonPresetGroupDB* get_PresetGroupDB()
		{
			return ((::MX::GameLogic::DBModel::EchelonPresetGroupDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMERESPONSE_GET_PRESETGROUPDB_OFFSET))(nullptr);
		}

	};
}

