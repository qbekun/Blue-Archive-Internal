#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class SkillCardInfo; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class SupportActor; }

#define <>C__DISPLAYCLASS22_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x139ABD0)
#define <>C__DISPLAYCLASS22_0__INITSKILLCARD_B__0_OFFSET UNITYSDK_OFFSET(0x139D0A0)
#define <>C__DISPLAYCLASS22_0__INITSKILLCARD_B__1_OFFSET UNITYSDK_OFFSET(0x139D0D0)

	inline static constexpr unsigned int <>c__DisplayClass22_0_TypeDefinitionIndex = 14442;

	class <>c__DisplayClass22_0 : public Il2CppObject
	{
	public:
		::MX::Campaign::SkillCardInfo* skillCardInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS22_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _InitSkillCard_b__0(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS22_0__INITSKILLCARD_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _InitSkillCard_b__1(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS22_0__INITSKILLCARD_B__1_OFFSET))(arg, nullptr);
		}

	};

