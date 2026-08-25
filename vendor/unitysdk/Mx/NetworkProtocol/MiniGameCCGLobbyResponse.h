#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_SET_REWARDPOINT_OFFSET UNITYSDK_OFFSET(0xF49AE0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_GET_CANSWEEP_OFFSET UNITYSDK_OFFSET(0xF49AF0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_GET_PERKS_OFFSET UNITYSDK_OFFSET(0xF49B00)
#define MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_SET_PERKS_OFFSET UNITYSDK_OFFSET(0xF49B10)
#define MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_SET_CANSWEEP_OFFSET UNITYSDK_OFFSET(0xF49B20)
#define MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_GET_REWARDPOINT_OFFSET UNITYSDK_OFFSET(0xF49B30)
#define MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49B40)
#define MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_GET_CCGSAVEDB_OFFSET UNITYSDK_OFFSET(0xF49B50)
#define MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49B60)
#define MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_SET_CCGSAVEDB_OFFSET UNITYSDK_OFFSET(0xF49B70)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameCCGLobbyResponse_TypeDefinitionIndex = 11922;

	class MiniGameCCGLobbyResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* _CCGSaveDB_k__BackingField; // 0x50
		Il2CppObject* _Perks_k__BackingField; // 0x58
		::System::Int32 _RewardPoint_k__BackingField; // 0x60
		::System::Boolean _CanSweep_k__BackingField; // 0x64

		::System::Void set_RewardPoint(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_SET_REWARDPOINT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanSweep()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_GET_CANSWEEP_OFFSET))(nullptr);
		}

		Il2CppObject* get_Perks()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_GET_PERKS_OFFSET))(nullptr);
		}

		::System::Void set_Perks(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_SET_PERKS_OFFSET))(arg, nullptr);
		}

		::System::Void set_CanSweep(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_SET_CANSWEEP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_GET_REWARDPOINT_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* get_CCGSaveDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_GET_CCGSAVEDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CCGSaveDB(::MX::GameLogic::DBModel::MiniGameCCGSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGLOBBYRESPONSE_SET_CCGSAVEDB_OFFSET))(arg, nullptr);
		}

	};
}

