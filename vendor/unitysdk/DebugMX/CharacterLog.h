#pragma once
#include "../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace DebugMX { class CharacterLogType; }

#define DEBUGMX_CHARACTERLOG_LOG_OFFSET UNITYSDK_OFFSET(0xDE0940)

namespace DebugMX
{
	inline static constexpr unsigned int CharacterLog_TypeDefinitionIndex = 10131;

	class CharacterLog : public Il2CppObject
	{
	public:
		::System::Void Log(::MX::Logic::BattleEntities::EntityId* arg, ::DebugMX::CharacterLogType* arg2, ::System::String* str)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::DebugMX::CharacterLogType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_CHARACTERLOG_LOG_OFFSET))(arg, arg2, str, nullptr);
		}

	};
}

