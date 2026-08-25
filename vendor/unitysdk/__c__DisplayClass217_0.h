#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntityType; }
namespace MX::Logic::Battles::Summary { class BattleLogCategory; }
namespace MX::Logic::Battles::Summary { class BattleLogSourceType; }
namespace MX::Logic::Battles::Summary { class BattleNumericLog; }

#define <>C__DISPLAYCLASS217_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x13ADE40)
#define <>C__DISPLAYCLASS217_0__FINDNUMERICLOG_B__0_OFFSET UNITYSDK_OFFSET(0x13B0280)

	inline static constexpr unsigned int <>c__DisplayClass217_0_TypeDefinitionIndex = 14470;

	class <>c__DisplayClass217_0 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntityType* entityType; // 0x10
		::MX::Logic::Battles::Summary::BattleLogCategory* category; // 0x14
		::MX::Logic::Battles::Summary::BattleLogSourceType* sourceType; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS217_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _FindNumericLog_b__0(::MX::Logic::Battles::Summary::BattleNumericLog* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Summary::BattleNumericLog*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS217_0__FINDNUMERICLOG_B__0_OFFSET))(arg, nullptr);
		}

	};

