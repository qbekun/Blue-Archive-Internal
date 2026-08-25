#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SupportActor; }

#define <>C__DISPLAYCLASS20_3_.CTOR_OFFSET UNITYSDK_OFFSET(0x2182990)
#define <>C__DISPLAYCLASS20_3__CHECKALLREMOVED_B__7_OFFSET UNITYSDK_OFFSET(0x21829A0)

	inline static constexpr unsigned int <>c__DisplayClass20_3_TypeDefinitionIndex = 4048;

	class <>c__DisplayClass20_3 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::SupportActor* a; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS20_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CheckAllRemoved_b__7(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS20_3__CHECKALLREMOVED_B__7_OFFSET))(str, nullptr);
		}

	};

