#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOCLEARREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D800)
#define MX_NETWORKPROTOCOL_SCENARIOCLEARREQUEST_SET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0xF4D810)
#define MX_NETWORKPROTOCOL_SCENARIOCLEARREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D820)
#define MX_NETWORKPROTOCOL_SCENARIOCLEARREQUEST_GET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0xF4D830)
#define MX_NETWORKPROTOCOL_SCENARIOCLEARREQUEST_GET_SCENARIOID_OFFSET UNITYSDK_OFFSET(0xF4D840)
#define MX_NETWORKPROTOCOL_SCENARIOCLEARREQUEST_SET_SCENARIOID_OFFSET UNITYSDK_OFFSET(0xF4D850)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioClearRequest_TypeDefinitionIndex = 12059;

	class ScenarioClearRequest : public Il2CppObject
	{
	public:
		::System::Int64 _ScenarioId_k__BackingField; // 0x40
		::MX::Logic::Battles::Summary::BattleSummary* _BattleSummary_k__BackingField; // 0x48

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCLEARREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_BattleSummary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCLEARREQUEST_SET_BATTLESUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCLEARREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_BattleSummary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCLEARREQUEST_GET_BATTLESUMMARY_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCLEARREQUEST_GET_SCENARIOID_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCLEARREQUEST_SET_SCENARIOID_OFFSET))(arg, nullptr);
		}

	};
}

