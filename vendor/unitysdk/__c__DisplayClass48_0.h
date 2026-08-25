#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class StatusResult; }

#define <>C__DISPLAYCLASS48_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1177820)
#define <>C__DISPLAYCLASS48_0__GETLOGICEFFECTGROUPIDCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x117DB50)

	inline static constexpr unsigned int <>c__DisplayClass48_0_TypeDefinitionIndex = 13236;

	class <>c__DisplayClass48_0 : public Il2CppObject
	{
	public:
		Il2CppObject* logicEffectGroupIdList; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS48_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetLogicEffectGroupIdCount_b__0(::MX::Logic::BattleEntities::StatusResult* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::StatusResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS48_0__GETLOGICEFFECTGROUPIDCOUNT_B__0_OFFSET))(arg, nullptr);
		}

	};

