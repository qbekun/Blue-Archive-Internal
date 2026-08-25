#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestConditionTileFriendlyTerritory; }
class ConquestTileVisual;
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCondition; }

#define CONQUESTCONDITIONTILEFRIENDLYTERRITORYVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1ADDA10)
#define CONQUESTCONDITIONTILEFRIENDLYTERRITORYVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADDAD0)
#define CONQUESTCONDITIONTILEFRIENDLYTERRITORYVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1ADDB40)

	inline static constexpr unsigned int ConquestConditionTileFriendlyTerritoryVisual_TypeDefinitionIndex = 1472;

	class ConquestConditionTileFriendlyTerritoryVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestConditionTileFriendlyTerritory* TileFriendlyTerritory; // 0x18
		ConquestTileVisual* Tile; // 0x20

		::System::Void SetCondition(::MX::Conquest::ConquestTileMapEvent::ConquestCondition* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCondition*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONTILEFRIENDLYTERRITORYVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONTILEFRIENDLYTERRITORYVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCondition* GetCondition()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONTILEFRIENDLYTERRITORYVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

	};

