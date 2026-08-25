#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define <>C__DISPLAYCLASS21_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x2182A50)
#define <>C__DISPLAYCLASS21_2__CHECKALREADYADDED_B__6_OFFSET UNITYSDK_OFFSET(0x2182A60)

	inline static constexpr unsigned int <>c__DisplayClass21_2_TypeDefinitionIndex = 4051;

	class <>c__DisplayClass21_2 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* a; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS21_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CheckAlreadyAdded_b__6(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS21_2__CHECKALREADYADDED_B__6_OFFSET))(str, nullptr);
		}

	};

