#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameDreamMakerInfoDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49100)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETRESPONSE_SET_INFODB_OFFSET UNITYSDK_OFFSET(0xF49110)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETRESPONSE_GET_INFODB_OFFSET UNITYSDK_OFFSET(0xF49120)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETRESPONSE_SET_PARAMETERDBS_OFFSET UNITYSDK_OFFSET(0xF49130)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49140)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETRESPONSE_GET_PARAMETERDBS_OFFSET UNITYSDK_OFFSET(0xF49150)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameDreamMakerResetResponse_TypeDefinitionIndex = 11900;

	class MiniGameDreamMakerResetResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB* _InfoDB_k__BackingField; // 0x50
		Il2CppObject* _ParameterDBs_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_InfoDB(::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETRESPONSE_SET_INFODB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB* get_InfoDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETRESPONSE_GET_INFODB_OFFSET))(nullptr);
		}

		::System::Void set_ParameterDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETRESPONSE_SET_PARAMETERDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParameterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETRESPONSE_GET_PARAMETERDBS_OFFSET))(nullptr);
		}

	};
}

