#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class SkillCommandInput; }

#define MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x114A180)
#define MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINPUT_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x114AC00)
#define MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINPUT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x114AD60)
#define MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINPUT_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x114AD70)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SkillCommandInput_TypeDefinitionIndex = 13122;

	class SkillCommandInput : public Il2CppObject
	{
	public:
		::System::Boolean _IsEmpty_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::BattleEntity* TargetBattleEntity; // 0x18
		::UnityEngine::Vector2* TargetPosition2D; // 0x20
		::UnityEngine::Vector2* TargetDirection2D; // 0x28
		::System::Boolean AutoTargeting; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINPUT_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::SkillCommandInput* get_Empty()
		{
			return ((::MX::Logic::BattleEntities::SkillCommandInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINPUT_GET_EMPTY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINPUT_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Void set_IsEmpty(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINPUT_SET_ISEMPTY_OFFSET))(arg, nullptr);
		}

	};
}

