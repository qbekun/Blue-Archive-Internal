#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class SupportActor; }

#define <>C__DISPLAYCLASS151_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x138F0A0)
#define <>C__DISPLAYCLASS151_0__FINDCHARACTERBYCHARACTERID_B__0_OFFSET UNITYSDK_OFFSET(0x1397620)
#define <>C__DISPLAYCLASS151_0__FINDCHARACTERBYCHARACTERID_B__1_OFFSET UNITYSDK_OFFSET(0x1397650)

	inline static constexpr unsigned int <>c__DisplayClass151_0_TypeDefinitionIndex = 14423;

	class <>c__DisplayClass151_0 : public Il2CppObject
	{
	public:
		::System::Int64 characterId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS151_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _FindCharacterByCharacterId_b__0(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS151_0__FINDCHARACTERBYCHARACTERID_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _FindCharacterByCharacterId_b__1(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS151_0__FINDCHARACTERBYCHARACTERID_B__1_OFFSET))(arg, nullptr);
		}

	};

