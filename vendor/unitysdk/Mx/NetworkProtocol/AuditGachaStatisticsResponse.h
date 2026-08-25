#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11780)
#define MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11790)
#define MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSRESPONSE_SET_GACHARESULT_OFFSET UNITYSDK_OFFSET(0xF117A0)
#define MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSRESPONSE_GET_GACHARESULT_OFFSET UNITYSDK_OFFSET(0xF117B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AuditGachaStatisticsResponse_TypeDefinitionIndex = 11318;

	class AuditGachaStatisticsResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _GachaResult_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_GachaResult(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSRESPONSE_SET_GACHARESULT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_GachaResult()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSRESPONSE_GET_GACHARESULT_OFFSET))(nullptr);
		}

	};
}

