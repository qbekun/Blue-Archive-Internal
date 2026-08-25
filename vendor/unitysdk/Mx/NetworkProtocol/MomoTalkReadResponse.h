#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MomoTalkOutLineDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MOMOTALKREADRESPONSE_SET_MOMOTALKOUTLINEDB_OFFSET UNITYSDK_OFFSET(0xF4A9E0)
#define MX_NETWORKPROTOCOL_MOMOTALKREADRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A9F0)
#define MX_NETWORKPROTOCOL_MOMOTALKREADRESPONSE_GET_MOMOTALKOUTLINEDB_OFFSET UNITYSDK_OFFSET(0xF4AA00)
#define MX_NETWORKPROTOCOL_MOMOTALKREADRESPONSE_SET_MOMOTALKCHOICEDBS_OFFSET UNITYSDK_OFFSET(0xF4AA10)
#define MX_NETWORKPROTOCOL_MOMOTALKREADRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4AA20)
#define MX_NETWORKPROTOCOL_MOMOTALKREADRESPONSE_GET_MOMOTALKCHOICEDBS_OFFSET UNITYSDK_OFFSET(0xF4AA30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MomoTalkReadResponse_TypeDefinitionIndex = 11964;

	class MomoTalkReadResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MomoTalkOutLineDB* _MomoTalkOutLineDB_k__BackingField; // 0x50
		Il2CppObject* _MomoTalkChoiceDBs_k__BackingField; // 0x58

		::System::Void set_MomoTalkOutLineDB(::MX::GameLogic::DBModel::MomoTalkOutLineDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MomoTalkOutLineDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKREADRESPONSE_SET_MOMOTALKOUTLINEDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKREADRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MomoTalkOutLineDB* get_MomoTalkOutLineDB()
		{
			return ((::MX::GameLogic::DBModel::MomoTalkOutLineDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKREADRESPONSE_GET_MOMOTALKOUTLINEDB_OFFSET))(nullptr);
		}

		::System::Void set_MomoTalkChoiceDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKREADRESPONSE_SET_MOMOTALKCHOICEDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKREADRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_MomoTalkChoiceDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKREADRESPONSE_GET_MOMOTALKCHOICEDBS_OFFSET))(nullptr);
		}

	};
}

