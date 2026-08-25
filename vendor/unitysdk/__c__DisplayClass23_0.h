#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }

#define <>C__DISPLAYCLASS23_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1223C90)
#define <>C__DISPLAYCLASS23_0__CHECKSQUADTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1224AD0)

	inline static constexpr unsigned int <>c__DisplayClass23_0_TypeDefinitionIndex = 13756;

	class <>c__DisplayClass23_0 : public Il2CppObject
	{
	public:
		Il2CppObject* squadTypeList; // 0x10
		::System::Int32 count; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS23_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CheckSquadType_b__0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS23_0__CHECKSQUADTYPE_B__0_OFFSET))(arg, nullptr);
		}

	};

