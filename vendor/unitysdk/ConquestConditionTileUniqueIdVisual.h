#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestConditionTileUniqueId; }
class ConquestTileVisual;
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCondition; }

#define CONQUESTCONDITIONTILEUNIQUEIDVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1ADDB50)
#define CONQUESTCONDITIONTILEUNIQUEIDVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADDC10)
#define CONQUESTCONDITIONTILEUNIQUEIDVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1ADDC80)

	inline static constexpr unsigned int ConquestConditionTileUniqueIdVisual_TypeDefinitionIndex = 1473;

	class ConquestConditionTileUniqueIdVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestConditionTileUniqueId* TileUniqueId; // 0x18
		ConquestTileVisual* Tile; // 0x20

		::System::Void SetCondition(::MX::Conquest::ConquestTileMapEvent::ConquestCondition* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCondition*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONTILEUNIQUEIDVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONTILEUNIQUEIDVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCondition* GetCondition()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONTILEUNIQUEIDVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

	};

