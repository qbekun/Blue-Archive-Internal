#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SpawnPointBase; }

#define <>C__DISPLAYCLASS28_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x12B2E80)
#define <>C__DISPLAYCLASS28_0__EXECUTE_B__1_OFFSET UNITYSDK_OFFSET(0x12B7730)

	inline static constexpr unsigned int <>c__DisplayClass28_0_TypeDefinitionIndex = 14130;

	class <>c__DisplayClass28_0 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::SpawnPointBase* u; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS28_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _Execute_b__1(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS28_0__EXECUTE_B__1_OFFSET))(str, nullptr);
		}

	};

