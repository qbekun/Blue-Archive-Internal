#pragma once
#include "../../unitysdk.h"

class MiniGameShootingSummary;
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLERESULTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF486E0)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLERESULTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF486F0)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLERESULTREQUEST_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF48700)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLERESULTREQUEST_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF48710)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameShootingBattleResultRequest_TypeDefinitionIndex = 11875;

	class MiniGameShootingBattleResultRequest : public Il2CppObject
	{
	public:
		MiniGameShootingSummary* _Summary_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLERESULTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLERESULTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_Summary(MiniGameShootingSummary* arg)
		{
			((::System::Void(*)(MiniGameShootingSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLERESULTREQUEST_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		MiniGameShootingSummary* get_Summary()
		{
			return ((MiniGameShootingSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLERESULTREQUEST_GET_SUMMARY_OFFSET))(nullptr);
		}

	};
}

