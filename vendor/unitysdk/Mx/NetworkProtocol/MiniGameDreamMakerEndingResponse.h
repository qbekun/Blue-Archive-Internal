#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameDreamMakerInfoDB; }
namespace MX::GameLogic::DBModel { class MiniGameDreamMakerEndingDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF493C0)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_GET_INFODB_OFFSET UNITYSDK_OFFSET(0xF493D0)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_SET_ENDINGDB_OFFSET UNITYSDK_OFFSET(0xF493E0)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_SET_INFODB_OFFSET UNITYSDK_OFFSET(0xF493F0)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_GET_ENDINGDB_OFFSET UNITYSDK_OFFSET(0xF49400)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_GET_PARAMETERDBS_OFFSET UNITYSDK_OFFSET(0xF49410)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_SET_PARAMETERDBS_OFFSET UNITYSDK_OFFSET(0xF49420)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49430)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF49440)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF49450)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameDreamMakerEndingResponse_TypeDefinitionIndex = 11906;

	class MiniGameDreamMakerEndingResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB* _InfoDB_k__BackingField; // 0x50
		Il2CppObject* _ParameterDBs_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::MiniGameDreamMakerEndingDB* _EndingDB_k__BackingField; // 0x60
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB* get_InfoDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_GET_INFODB_OFFSET))(nullptr);
		}

		::System::Void set_EndingDB(::MX::GameLogic::DBModel::MiniGameDreamMakerEndingDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameDreamMakerEndingDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_SET_ENDINGDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_InfoDB(::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_SET_INFODB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameDreamMakerEndingDB* get_EndingDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameDreamMakerEndingDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_GET_ENDINGDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParameterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_GET_PARAMETERDBS_OFFSET))(nullptr);
		}

		::System::Void set_ParameterDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_SET_PARAMETERDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERENDINGRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

