#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class SkillLevel; }
namespace MX::Logic::Data { class SubPartDummySetting; }

#define MX_LOGIC_BATTLES_SPAWNCHARACTERSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x12A0600)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int SpawnCharacterSetting_TypeDefinitionIndex = 14100;

	class SpawnCharacterSetting : public Il2CppObject
	{
	public:
		::System::Int64 Delay; // 0x10
		::System::String* TemplateId; // 0x18
		::System::Int32 AIId; // 0x20
		::System::Char AIGroupId; // 0x24
		Il2CppObject* ConditionIds; // 0x28
		Il2CppObject* CommandIds; // 0x30
		::UnityEngine::Vector2* Position; // 0x38
		::UnityEngine::Vector2* Direction; // 0x40
		::System::Single Height; // 0x48
		::System::Boolean AppearAction; // 0x4C
		Il2CppObject* MovePoints; // 0x50
		::MX::Logic::BattleEntities::SkillLevel* SkillLevel; // 0x58
		::MX::Logic::Data::SubPartDummySetting* SubPartDummySetting; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SPAWNCHARACTERSETTING_.CTOR_OFFSET))(nullptr);
		}

	};
}

