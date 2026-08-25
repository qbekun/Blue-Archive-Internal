#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Actions { class HeroAction; }
namespace MX::Data { class CharacterSkillListKey; }
namespace MX::Logic::BattleEntities { class SupportActor; }

#define <>C__DISPLAYCLASS744_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1135EA0)
#define <>C__DISPLAYCLASS744_0__CHARACTER_ACTIONCHANGED_G__ACTIONFINISHED|0_OFFSET UNITYSDK_OFFSET(0x1135EB0)
#define <>C__DISPLAYCLASS744_0__CHARACTER_ACTIONCHANGED_G__ACTION_INTERRUPTED|1_OFFSET UNITYSDK_OFFSET(0x11361A0)

	inline static constexpr unsigned int <>c__DisplayClass744_0_TypeDefinitionIndex = 13077;

	class <>c__DisplayClass744_0 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* __4__this; // 0x10
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* character; // 0x18
		::MX::Logic::Actions::HeroAction* action; // 0x20
		::MX::Data::CharacterSkillListKey* skillListKey; // 0x28
		::MX::Logic::BattleEntities::SupportActor* supportActor; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS744_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Character_ActionChanged_g__ActionFinished|0(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS744_0__CHARACTER_ACTIONCHANGED_G__ACTIONFINISHED|0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _Character_ActionChanged_g__Action_Interrupted|1(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS744_0__CHARACTER_ACTIONCHANGED_G__ACTION_INTERRUPTED|1_OFFSET))(arg, arg2, nullptr);
		}

	};

