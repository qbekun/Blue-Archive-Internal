#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
class Location;

#define <>C__DISPLAYCLASS417_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1263570)
#define <>C__DISPLAYCLASS417_0__SPAWNPLAYERCHARACTERS_B__0_OFFSET UNITYSDK_OFFSET(0x126C650)

	inline static constexpr unsigned int <>c__DisplayClass417_0_TypeDefinitionIndex = 13994;

	class <>c__DisplayClass417_0 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* character; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS417_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SpawnPlayerCharacters_b__0(Location* arg)
		{
			return ((::System::Boolean(*)(Location*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS417_0__SPAWNPLAYERCHARACTERS_B__0_OFFSET))(arg, nullptr);
		}

	};

