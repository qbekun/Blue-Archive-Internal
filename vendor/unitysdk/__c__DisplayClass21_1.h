#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SupportActor; }

#define <>C__DISPLAYCLASS21_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x2182A10)
#define <>C__DISPLAYCLASS21_1__CHECKALREADYADDED_B__5_OFFSET UNITYSDK_OFFSET(0x2182A20)

	inline static constexpr unsigned int <>c__DisplayClass21_1_TypeDefinitionIndex = 4050;

	class <>c__DisplayClass21_1 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::SupportActor* a; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS21_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CheckAlreadyAdded_b__5(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS21_1__CHECKALREADYADDED_B__5_OFFSET))(str, nullptr);
		}

	};

