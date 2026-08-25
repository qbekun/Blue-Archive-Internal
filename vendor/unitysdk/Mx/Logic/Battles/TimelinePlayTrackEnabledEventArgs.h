#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLES_TIMELINEPLAYTRACKENABLEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1273AD0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int TimelinePlayTrackEnabledEventArgs_TypeDefinitionIndex = 14053;

	class TimelinePlayTrackEnabledEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* InvokerId; // 0x10
		::Il2CppArray<::System::Object*>* PlayTrackGroupName; // 0x18
		::Il2CppArray<::System::Object*>* MuteTrackGroupName; // 0x20

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::Il2CppArray<::System::Object*>* arg2, ::Il2CppArray<::System::Object*>* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_TIMELINEPLAYTRACKENABLEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

