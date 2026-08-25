#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class EffectArea; }

#define <>C__DISPLAYCLASS230_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1209B00)
#define <>C__DISPLAYCLASS230_1__APPLYAREASPAWNED_B__1_OFFSET UNITYSDK_OFFSET(0x1209B10)

	inline static constexpr unsigned int <>c__DisplayClass230_1_TypeDefinitionIndex = 963;

	class <>c__DisplayClass230_1 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EffectArea* area; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS230_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ApplyAreaSpawned_b__1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS230_1__APPLYAREASPAWNED_B__1_OFFSET))(nullptr);
		}

	};

