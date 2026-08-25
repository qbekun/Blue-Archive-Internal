#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class RaidBossResultCollection; }
namespace MX::Logic::Battles { class SingleRaidBattle; }

#define MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_SHOULDSERIALIZERAIDBOSSRESULTS_OFFSET UNITYSDK_OFFSET(0x13B13C0)
#define MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_SET_RAIDSEASONID_OFFSET UNITYSDK_OFFSET(0x13B1400)
#define MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_GET_GIVENDAMAGE_OFFSET UNITYSDK_OFFSET(0x13B1410)
#define MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_GET_RAIDBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x13B1430)
#define MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_GET_RAIDBOSSRESULTS_OFFSET UNITYSDK_OFFSET(0x13B1450)
#define MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x13A50E0)
#define MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_SET_RAIDBOSSRESULTS_OFFSET UNITYSDK_OFFSET(0x13B1460)
#define MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_GET_TOTALGROGGYCOUNT_OFFSET UNITYSDK_OFFSET(0x13B1470)
#define MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_WRITEBOSSRESULT_OFFSET UNITYSDK_OFFSET(0x13A6730)
#define MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_GET_RAIDSEASONID_OFFSET UNITYSDK_OFFSET(0x13B1490)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int RaidSummary_TypeDefinitionIndex = 14478;

	class RaidSummary : public Il2CppObject
	{
	public:
		::System::Int64 _RaidSeasonId_k__BackingField; // 0x10
		::MX::Logic::Data::RaidBossResultCollection* _RaidBossResults_k__BackingField; // 0x18

		::System::Boolean ShouldSerializeRaidBossResults()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_SHOULDSERIALIZERAIDBOSSRESULTS_OFFSET))(nullptr);
		}

		::System::Void set_RaidSeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_SET_RAIDSEASONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GivenDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_GET_GIVENDAMAGE_OFFSET))(nullptr);
		}

		::System::Int32 get_RaidBossIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_GET_RAIDBOSSINDEX_OFFSET))(nullptr);
		}

		::MX::Logic::Data::RaidBossResultCollection* get_RaidBossResults()
		{
			return ((::MX::Logic::Data::RaidBossResultCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_GET_RAIDBOSSRESULTS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_RaidBossResults(::MX::Logic::Data::RaidBossResultCollection* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::RaidBossResultCollection*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_SET_RAIDBOSSRESULTS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TotalGroggyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_GET_TOTALGROGGYCOUNT_OFFSET))(nullptr);
		}

		::System::Void WriteBossResult(::MX::Logic::Battles::SingleRaidBattle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::SingleRaidBattle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_WRITEBOSSRESULT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RaidSeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_RAIDSUMMARY_GET_RAIDSEASONID_OFFSET))(nullptr);
		}

	};
}

