#pragma once
#include "unitysdk.h"

namespace MX::Logic::Skills { class AuraProcedureCommandType; }
namespace MX::Logic::Data { class LevelSkillEntityData; }
class Command;

#define COMMAND_EQUALS_OFFSET UNITYSDK_OFFSET(0x13DDCD0)

	inline static constexpr unsigned int Command_TypeDefinitionIndex = 14529;

	class Command : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::AuraProcedureCommandType* Type; // 0x10
		::MX::Logic::Data::LevelSkillEntityData* SkillEntityData; // 0x18

		::System::Boolean Equals(Command* arg)
		{
			return ((::System::Boolean(*)(Command*, ::PVOID))((::PBYTE)hIl2Cpp + COMMAND_EQUALS_OFFSET))(arg, nullptr);
		}

	};

