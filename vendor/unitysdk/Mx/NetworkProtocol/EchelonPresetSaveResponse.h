#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EchelonPresetDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ECHELONPRESETSAVERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF426E0)
#define MX_NETWORKPROTOCOL_ECHELONPRESETSAVERESPONSE_GET_PRESETDB_OFFSET UNITYSDK_OFFSET(0xF426F0)
#define MX_NETWORKPROTOCOL_ECHELONPRESETSAVERESPONSE_SET_PRESETDB_OFFSET UNITYSDK_OFFSET(0xF42700)
#define MX_NETWORKPROTOCOL_ECHELONPRESETSAVERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42710)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EchelonPresetSaveResponse_TypeDefinitionIndex = 11636;

	class EchelonPresetSaveResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EchelonPresetDB* _PresetDB_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETSAVERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EchelonPresetDB* get_PresetDB()
		{
			return ((::MX::GameLogic::DBModel::EchelonPresetDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETSAVERESPONSE_GET_PRESETDB_OFFSET))(nullptr);
		}

		::System::Void set_PresetDB(::MX::GameLogic::DBModel::EchelonPresetDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonPresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETSAVERESPONSE_SET_PRESETDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETSAVERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

