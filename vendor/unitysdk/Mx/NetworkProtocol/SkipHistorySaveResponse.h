#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class SkipHistoryDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SKIPHISTORYSAVERESPONSE_GET_SKIPHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF4F8B0)
#define MX_NETWORKPROTOCOL_SKIPHISTORYSAVERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F8C0)
#define MX_NETWORKPROTOCOL_SKIPHISTORYSAVERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F8D0)
#define MX_NETWORKPROTOCOL_SKIPHISTORYSAVERESPONSE_SET_SKIPHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF4F8E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int SkipHistorySaveResponse_TypeDefinitionIndex = 12145;

	class SkipHistorySaveResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::SkipHistoryDB* _SkipHistoryDB_k__BackingField; // 0x50

		::MX::GameLogic::DBModel::SkipHistoryDB* get_SkipHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::SkipHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SKIPHISTORYSAVERESPONSE_GET_SKIPHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SKIPHISTORYSAVERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SKIPHISTORYSAVERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SkipHistoryDB(::MX::GameLogic::DBModel::SkipHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::SkipHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SKIPHISTORYSAVERESPONSE_SET_SKIPHISTORYDB_OFFSET))(arg, nullptr);
		}

	};
}

