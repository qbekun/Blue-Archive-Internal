#pragma once
#include "../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class SkillSlot; }

#define DEBUGMX_SKILLBATTLELOGHISTORY_CLEARHISTORY_OFFSET UNITYSDK_OFFSET(0xDE0B20)
#define DEBUGMX_SKILLBATTLELOGHISTORY_RECORDLOGHISTORY_OFFSET UNITYSDK_OFFSET(0xDE0B30)

namespace DebugMX
{
	inline static constexpr unsigned int SkillBattleLogHistory_TypeDefinitionIndex = 10133;

	class SkillBattleLogHistory : public Il2CppObject
	{
	public:
		::System::Void ClearHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_SKILLBATTLELOGHISTORY_CLEARHISTORY_OFFSET))(nullptr);
		}

		::System::Void RecordLogHistory(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::SkillSlot* arg2, ::System::String* str, ::System::Int32 arg3, ::System::String* str2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::SkillSlot*, ::System::String*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_SKILLBATTLELOGHISTORY_RECORDLOGHISTORY_OFFSET))(arg, arg2, str, arg3, str2, nullptr);
		}

	};
}

