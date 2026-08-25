#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class O1655a58ff4d16ea3b1193c6c7db095276c8a032f536f2348c792bbe845767680; }
namespace FlatData { class StatType; }
namespace MX::Logic::Skills::LogicEffects { class StatChangeEffect; }

#define <>C__DISPLAYCLASS56_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1166F40)
#define <>C__DISPLAYCLASS56_0__APPLY_G__GETVALUE|0_OFFSET UNITYSDK_OFFSET(0x1166F50)
#define <>C__DISPLAYCLASS56_0__APPLY_B__4_OFFSET UNITYSDK_OFFSET(0x11673E0)

	inline static constexpr unsigned int <>c__DisplayClass56_0_TypeDefinitionIndex = 13184;

	class <>c__DisplayClass56_0 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::O1655a58ff4d16ea3b1193c6c7db095276c8a032f536f2348c792bbe845767680* __4__this; // 0x10
		::FlatData::StatType* statType; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS56_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 _Apply_g__GetValue|0(Il2CppObject* arg)
		{
			return ((::System::Int64(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS56_0__APPLY_G__GETVALUE|0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Apply_b__4(::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::StatChangeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS56_0__APPLY_B__4_OFFSET))(arg, nullptr);
		}

	};

