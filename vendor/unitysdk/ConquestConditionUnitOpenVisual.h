#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestConditionUnitOpen; }
class ConquestTileVisual;
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCondition; }

#define CONQUESTCONDITIONUNITOPENVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1ADDC90)
#define CONQUESTCONDITIONUNITOPENVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1ADDCA0)
#define CONQUESTCONDITIONUNITOPENVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADDD60)

	inline static constexpr unsigned int ConquestConditionUnitOpenVisual_TypeDefinitionIndex = 1474;

	class ConquestConditionUnitOpenVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestConditionUnitOpen* UnitOpen; // 0x18
		ConquestTileVisual* Tile; // 0x20

		::MX::Conquest::ConquestTileMapEvent::ConquestCondition* GetCondition()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONUNITOPENVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Conquest::ConquestTileMapEvent::ConquestCondition* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCondition*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONUNITOPENVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONUNITOPENVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

