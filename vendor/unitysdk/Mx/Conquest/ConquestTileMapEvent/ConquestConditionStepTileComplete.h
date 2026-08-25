#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }
namespace FlatData { class StageDifficulty; }
namespace MX::Conquest { class ConquestTileMap; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCondition; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestConditionType; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCONDITIONSTEPTILECOMPLETE_.CTOR_OFFSET UNITYSDK_OFFSET(0x142D350)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCONDITIONSTEPTILECOMPLETE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x142D360)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCONDITIONSTEPTILECOMPLETE_CLONE_OFFSET UNITYSDK_OFFSET(0x142D6D0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCONDITIONSTEPTILECOMPLETE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142D730)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestConditionStepTileComplete_TypeDefinitionIndex = 14869;

	class ConquestConditionStepTileComplete : public Il2CppObject
	{
	public:
		::System::Int32 Step; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCONDITIONSTEPTILECOMPLETE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg, ::FlatData::StageDifficulty* arg2, ::MX::Conquest::ConquestTileMap* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, Il2CppObject* arg7)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::FlatData::StageDifficulty*, ::MX::Conquest::ConquestTileMap*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCONDITIONSTEPTILECOMPLETE_CHECKCONDITION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCondition* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCONDITIONSTEPTILECOMPLETE_CLONE_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestConditionType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCONDITIONSTEPTILECOMPLETE_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

