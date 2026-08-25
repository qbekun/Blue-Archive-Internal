#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
class CharacterVisual;

#define <>C__DISPLAYCLASS28_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xE1DE90)
#define <>C__DISPLAYCLASS28_1__ONSTOPPED_B__1_OFFSET UNITYSDK_OFFSET(0xE1E190)

	inline static constexpr unsigned int <>c__DisplayClass28_1_TypeDefinitionIndex = 10351;

	class <>c__DisplayClass28_1 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* tss; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS28_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _OnStopped_b__1(CharacterVisual* arg)
		{
			return ((::System::Boolean(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS28_1__ONSTOPPED_B__1_OFFSET))(arg, nullptr);
		}

	};

