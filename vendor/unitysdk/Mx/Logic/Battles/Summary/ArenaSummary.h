#pragma once
#include "../../../../unitysdk.h"

#define MX_LOGIC_BATTLES_SUMMARY_ARENASUMMARY_SET_ENEMYACCOUNTID_OFFSET UNITYSDK_OFFSET(0x13A2D70)
#define MX_LOGIC_BATTLES_SUMMARY_ARENASUMMARY_GET_ENEMYACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x13A2D80)
#define MX_LOGIC_BATTLES_SUMMARY_ARENASUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x13A2D90)
#define MX_LOGIC_BATTLES_SUMMARY_ARENASUMMARY_GET_ARENAMAPID_OFFSET UNITYSDK_OFFSET(0x13A2DA0)
#define MX_LOGIC_BATTLES_SUMMARY_ARENASUMMARY_SET_ENEMYACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x13A2DB0)
#define MX_LOGIC_BATTLES_SUMMARY_ARENASUMMARY_GET_ENEMYACCOUNTID_OFFSET UNITYSDK_OFFSET(0x13A2DC0)
#define MX_LOGIC_BATTLES_SUMMARY_ARENASUMMARY_SET_ARENAMAPID_OFFSET UNITYSDK_OFFSET(0x13A2DD0)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int ArenaSummary_TypeDefinitionIndex = 14457;

	class ArenaSummary : public Il2CppObject
	{
	public:
		::System::Int64 _ArenaMapId_k__BackingField; // 0x10
		::System::Int64 _EnemyAccountId_k__BackingField; // 0x18
		::System::Int64 _EnemyAccountLevel_k__BackingField; // 0x20

		::System::Void set_EnemyAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_ARENASUMMARY_SET_ENEMYACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EnemyAccountLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_ARENASUMMARY_GET_ENEMYACCOUNTLEVEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_ARENASUMMARY_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ArenaMapId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_ARENASUMMARY_GET_ARENAMAPID_OFFSET))(nullptr);
		}

		::System::Void set_EnemyAccountLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_ARENASUMMARY_SET_ENEMYACCOUNTLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EnemyAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_ARENASUMMARY_GET_ENEMYACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_ArenaMapId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_ARENASUMMARY_SET_ARENAMAPID_OFFSET))(arg, nullptr);
		}

	};
}

