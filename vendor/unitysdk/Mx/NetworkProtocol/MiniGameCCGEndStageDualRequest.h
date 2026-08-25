#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF49DA0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49DB0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49DC0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALREQUEST_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF49DD0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALREQUEST_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF49DE0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF49DF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameCCGEndStageDualRequest_TypeDefinitionIndex = 11929;

	class MiniGameCCGEndStageDualRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::MX::GameLogic::DBModel::MiniGameCCGSummary* _Summary_k__BackingField; // 0x48

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGSummary* get_Summary()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALREQUEST_GET_SUMMARY_OFFSET))(nullptr);
		}

		::System::Void set_Summary(::MX::GameLogic::DBModel::MiniGameCCGSummary* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALREQUEST_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

