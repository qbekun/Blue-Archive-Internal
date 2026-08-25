#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityIdComparer; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles::Summary { class HeroSummary; }

#define MX_LOGIC_BATTLES_SUMMARY_HEROSUMMARYCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B0300)
#define MX_LOGIC_BATTLES_SUMMARY_HEROSUMMARYCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B0380)
#define MX_LOGIC_BATTLES_SUMMARY_HEROSUMMARYCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x13B03D0)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int HeroSummaryCollection_TypeDefinitionIndex = 14473;

	class HeroSummaryCollection : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfCodes
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_HEROSUMMARYCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityIdComparer* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityIdComparer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_HEROSUMMARYCOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* GetKeyForItem(::MX::Logic::Battles::Summary::HeroSummary* arg)
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::MX::Logic::Battles::Summary::HeroSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_HEROSUMMARYCOLLECTION_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

	};
}

