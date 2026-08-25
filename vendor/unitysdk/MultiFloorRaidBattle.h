#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleSetting; }

#define MULTIFLOORRAIDBATTLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2162DF0)

	inline static constexpr unsigned int MultiFloorRaidBattle_TypeDefinitionIndex = 3999;

	class MultiFloorRaidBattle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDBATTLE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

