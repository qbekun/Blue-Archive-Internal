#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameDreamMakerInfoDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49060)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMERESPONSE_SET_PARAMETERDBS_OFFSET UNITYSDK_OFFSET(0xF49070)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMERESPONSE_GET_INFODB_OFFSET UNITYSDK_OFFSET(0xF49080)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMERESPONSE_GET_PARAMETERDBS_OFFSET UNITYSDK_OFFSET(0xF49090)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF490A0)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMERESPONSE_SET_INFODB_OFFSET UNITYSDK_OFFSET(0xF490B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameDreamMakerNewGameResponse_TypeDefinitionIndex = 11898;

	class MiniGameDreamMakerNewGameResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB* _InfoDB_k__BackingField; // 0x50
		Il2CppObject* _ParameterDBs_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParameterDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMERESPONSE_SET_PARAMETERDBS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB* get_InfoDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMERESPONSE_GET_INFODB_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParameterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMERESPONSE_GET_PARAMETERDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_InfoDB(::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMERESPONSE_SET_INFODB_OFFSET))(arg, nullptr);
		}

	};
}

