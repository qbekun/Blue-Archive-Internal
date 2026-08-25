#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EchelonDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ECHELONLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42500)
#define MX_NETWORKPROTOCOL_ECHELONLISTRESPONSE_SET_ARENAECHELONDB_OFFSET UNITYSDK_OFFSET(0xF42510)
#define MX_NETWORKPROTOCOL_ECHELONLISTRESPONSE_GET_ECHELONDBS_OFFSET UNITYSDK_OFFSET(0xF42520)
#define MX_NETWORKPROTOCOL_ECHELONLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42530)
#define MX_NETWORKPROTOCOL_ECHELONLISTRESPONSE_GET_ARENAECHELONDB_OFFSET UNITYSDK_OFFSET(0xF42540)
#define MX_NETWORKPROTOCOL_ECHELONLISTRESPONSE_SET_ECHELONDBS_OFFSET UNITYSDK_OFFSET(0xF42550)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EchelonListResponse_TypeDefinitionIndex = 11630;

	class EchelonListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _EchelonDBs_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::EchelonDB* _ArenaEchelonDB_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ArenaEchelonDB(::MX::GameLogic::DBModel::EchelonDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONLISTRESPONSE_SET_ARENAECHELONDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EchelonDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONLISTRESPONSE_GET_ECHELONDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EchelonDB* get_ArenaEchelonDB()
		{
			return ((::MX::GameLogic::DBModel::EchelonDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONLISTRESPONSE_GET_ARENAECHELONDB_OFFSET))(nullptr);
		}

		::System::Void set_EchelonDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONLISTRESPONSE_SET_ECHELONDBS_OFFSET))(arg, nullptr);
		}

	};
}

