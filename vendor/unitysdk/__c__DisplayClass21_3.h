#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SupportActor; }

#define <>C__DISPLAYCLASS21_3_.CTOR_OFFSET UNITYSDK_OFFSET(0x2182A90)
#define <>C__DISPLAYCLASS21_3__CHECKALREADYADDED_B__7_OFFSET UNITYSDK_OFFSET(0x2182AA0)

	inline static constexpr unsigned int <>c__DisplayClass21_3_TypeDefinitionIndex = 4052;

	class <>c__DisplayClass21_3 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::SupportActor* a; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS21_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CheckAlreadyAdded_b__7(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS21_3__CHECKALREADYADDED_B__7_OFFSET))(str, nullptr);
		}

	};

