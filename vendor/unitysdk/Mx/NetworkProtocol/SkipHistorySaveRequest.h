#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class SkipHistoryDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SKIPHISTORYSAVEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F870)
#define MX_NETWORKPROTOCOL_SKIPHISTORYSAVEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F880)
#define MX_NETWORKPROTOCOL_SKIPHISTORYSAVEREQUEST_GET_SKIPHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF4F890)
#define MX_NETWORKPROTOCOL_SKIPHISTORYSAVEREQUEST_SET_SKIPHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF4F8A0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int SkipHistorySaveRequest_TypeDefinitionIndex = 12144;

	class SkipHistorySaveRequest : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::SkipHistoryDB* _SkipHistoryDB_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SKIPHISTORYSAVEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SKIPHISTORYSAVEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::SkipHistoryDB* get_SkipHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::SkipHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SKIPHISTORYSAVEREQUEST_GET_SKIPHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void set_SkipHistoryDB(::MX::GameLogic::DBModel::SkipHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::SkipHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SKIPHISTORYSAVEREQUEST_SET_SKIPHISTORYDB_OFFSET))(arg, nullptr);
		}

	};
}

