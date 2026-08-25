#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EchelonPresetDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ECHELONPRESETSAVEREQUEST_SET_PRESETDB_OFFSET UNITYSDK_OFFSET(0xF426A0)
#define MX_NETWORKPROTOCOL_ECHELONPRESETSAVEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF426B0)
#define MX_NETWORKPROTOCOL_ECHELONPRESETSAVEREQUEST_GET_PRESETDB_OFFSET UNITYSDK_OFFSET(0xF426C0)
#define MX_NETWORKPROTOCOL_ECHELONPRESETSAVEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF426D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EchelonPresetSaveRequest_TypeDefinitionIndex = 11635;

	class EchelonPresetSaveRequest : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EchelonPresetDB* _PresetDB_k__BackingField; // 0x40

		::System::Void set_PresetDB(::MX::GameLogic::DBModel::EchelonPresetDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonPresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETSAVEREQUEST_SET_PRESETDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETSAVEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EchelonPresetDB* get_PresetDB()
		{
			return ((::MX::GameLogic::DBModel::EchelonPresetDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETSAVEREQUEST_GET_PRESETDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETSAVEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

