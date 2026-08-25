#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MomoTalkOutLineDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MOMOTALKMESSAGELISTRESPONSE_SET_MOMOTALKOUTLINEDB_OFFSET UNITYSDK_OFFSET(0xF4A900)
#define MX_NETWORKPROTOCOL_MOMOTALKMESSAGELISTRESPONSE_SET_MOMOTALKCHOICEDBS_OFFSET UNITYSDK_OFFSET(0xF4A910)
#define MX_NETWORKPROTOCOL_MOMOTALKMESSAGELISTRESPONSE_GET_MOMOTALKOUTLINEDB_OFFSET UNITYSDK_OFFSET(0xF4A920)
#define MX_NETWORKPROTOCOL_MOMOTALKMESSAGELISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A930)
#define MX_NETWORKPROTOCOL_MOMOTALKMESSAGELISTRESPONSE_GET_MOMOTALKCHOICEDBS_OFFSET UNITYSDK_OFFSET(0xF4A940)
#define MX_NETWORKPROTOCOL_MOMOTALKMESSAGELISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A950)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MomoTalkMessageListResponse_TypeDefinitionIndex = 11962;

	class MomoTalkMessageListResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MomoTalkOutLineDB* _MomoTalkOutLineDB_k__BackingField; // 0x50
		Il2CppObject* _MomoTalkChoiceDBs_k__BackingField; // 0x58

		::System::Void set_MomoTalkOutLineDB(::MX::GameLogic::DBModel::MomoTalkOutLineDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MomoTalkOutLineDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKMESSAGELISTRESPONSE_SET_MOMOTALKOUTLINEDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_MomoTalkChoiceDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKMESSAGELISTRESPONSE_SET_MOMOTALKCHOICEDBS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MomoTalkOutLineDB* get_MomoTalkOutLineDB()
		{
			return ((::MX::GameLogic::DBModel::MomoTalkOutLineDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKMESSAGELISTRESPONSE_GET_MOMOTALKOUTLINEDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKMESSAGELISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_MomoTalkChoiceDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKMESSAGELISTRESPONSE_GET_MOMOTALKCHOICEDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKMESSAGELISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

