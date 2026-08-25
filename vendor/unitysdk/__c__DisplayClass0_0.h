#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define <>C__DISPLAYCLASS0_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D2D50)
#define <>C__DISPLAYCLASS0_0__REORDER_G__COMPAREDESCENDINGDEFAULT|0_OFFSET UNITYSDK_OFFSET(0x11D3040)
#define <>C__DISPLAYCLASS0_0__REORDER_G__COMPAREASCENDINGDEFAULT|1_OFFSET UNITYSDK_OFFSET(0x11D3280)

	inline static constexpr unsigned int <>c__DisplayClass0_0_TypeDefinitionIndex = 13372;

	class <>c__DisplayClass0_0 : public Il2CppObject
	{
	public:
		::System::Boolean isCharacterFirst; // 0x10
		::MX::Logic::BattleEntities::BattleEntity* self; // 0x18
		Il2CppObject* position; // 0x20
		::MX::Logic::Skills::TargetSortRule* rule; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS0_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 _Reorder_g__CompareDescendingDefault|0(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS0_0__REORDER_G__COMPAREDESCENDINGDEFAULT|0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 _Reorder_g__CompareAscendingDefault|1(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS0_0__REORDER_G__COMPAREASCENDINGDEFAULT|1_OFFSET))(arg, arg2, nullptr);
		}

	};

