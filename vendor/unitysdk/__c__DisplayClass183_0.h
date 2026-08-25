#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class GroundObstacle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Battles { class SummonedEntityClearRequestEventArgs; }
namespace MX::Logic::Battles { class BattleEntityRemovedEventArgs; }

#define <>C__DISPLAYCLASS183_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1171C40)
#define <>C__DISPLAYCLASS183_0__SETSUMMONERINFO_G__SUMMONEDENTITYCLEARREQUESTED|0_OFFSET UNITYSDK_OFFSET(0x1172290)
#define <>C__DISPLAYCLASS183_0__SETSUMMONERINFO_G__BATTLECACHE_BATTLEENTITYREMOVED|1_OFFSET UNITYSDK_OFFSET(0x1172450)

	inline static constexpr unsigned int <>c__DisplayClass183_0_TypeDefinitionIndex = 13204;

	class <>c__DisplayClass183_0 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::GroundObstacle* __4__this; // 0x10
		::MX::Logic::BattleEntities::BattleEntity* summoner; // 0x18
		::MX::Logic::Skills::SkillSpecification* skillSpecification; // 0x20
		::System::Int32 index; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS183_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetSummonerInfo_g__SummonedEntityClearRequested|0(::System::Object* arg, ::MX::Logic::Battles::SummonedEntityClearRequestEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::SummonedEntityClearRequestEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS183_0__SETSUMMONERINFO_G__SUMMONEDENTITYCLEARREQUESTED|0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _SetSummonerInfo_g__BattleCache_BattleEntityRemoved|1(::System::Object* arg, ::MX::Logic::Battles::BattleEntityRemovedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntityRemovedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS183_0__SETSUMMONERINFO_G__BATTLECACHE_BATTLEENTITYREMOVED|1_OFFSET))(arg, arg2, nullptr);
		}

	};

