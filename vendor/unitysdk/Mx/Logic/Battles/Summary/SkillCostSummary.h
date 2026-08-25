#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class CostRegenSnapshotCollection; }

#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_GET_INITIALCOST_OFFSET UNITYSDK_OFFSET(0x13B16C0)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B16D0)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_GET_COSTPERFRAMESNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x13B1800)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_SETINITIALSKILLCOST_OFFSET UNITYSDK_OFFSET(0x13A6FA0)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_GET_COSTADDSNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x13B1810)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_SET_COSTUSESNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x13B1820)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_GET_COSTUSESNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x13B1830)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_WRITEIFCOSTUSED_OFFSET UNITYSDK_OFFSET(0x13A9AD0)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_WRITEIFCOSTPERFRAMECHANGED_OFFSET UNITYSDK_OFFSET(0x13A99B0)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_SET_INITIALCOST_OFFSET UNITYSDK_OFFSET(0x13B1840)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_SET_COSTADDSNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x13B1850)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_SET_COSTPERFRAMESNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x13B1860)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_WRITEIFCOSTADDED_OFFSET UNITYSDK_OFFSET(0x13A97E0)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int SkillCostSummary_TypeDefinitionIndex = 14483;

	class SkillCostSummary : public Il2CppObject
	{
	public:
		::System::Single _InitialCost_k__BackingField; // 0x10
		::MX::Logic::Battles::Summary::CostRegenSnapshotCollection* _CostPerFrameSnapshots_k__BackingField; // 0x18
		Il2CppObject* _CostAddSnapshots_k__BackingField; // 0x20
		Il2CppObject* _CostUseSnapshots_k__BackingField; // 0x28

		::System::Single get_InitialCost()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_GET_INITIALCOST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::CostRegenSnapshotCollection* get_CostPerFrameSnapshots()
		{
			return ((::MX::Logic::Battles::Summary::CostRegenSnapshotCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_GET_COSTPERFRAMESNAPSHOTS_OFFSET))(nullptr);
		}

		::System::Void SetInitialSkillCost(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_SETINITIALSKILLCOST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CostAddSnapshots()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_GET_COSTADDSNAPSHOTS_OFFSET))(nullptr);
		}

		::System::Void set_CostUseSnapshots(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_SET_COSTUSESNAPSHOTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CostUseSnapshots()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_GET_COSTUSESNAPSHOTS_OFFSET))(nullptr);
		}

		::System::Void WriteIfCostUsed(::System::Int64 arg, ::System::Int64 arg2, ::System::Single arg3, ::System::String* str, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Single, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_WRITEIFCOSTUSED_OFFSET))(arg, arg2, arg3, str, arg4, nullptr);
		}

		::System::Void WriteIfCostPerFrameChanged(::System::Int64 arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_WRITEIFCOSTPERFRAMECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_InitialCost(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_SET_INITIALCOST_OFFSET))(arg, nullptr);
		}

		::System::Void set_CostAddSnapshots(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_SET_COSTADDSNAPSHOTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_CostPerFrameSnapshots(::MX::Logic::Battles::Summary::CostRegenSnapshotCollection* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::CostRegenSnapshotCollection*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_SET_COSTPERFRAMESNAPSHOTS_OFFSET))(arg, nullptr);
		}

		::System::Void WriteIfCostAdded(::System::Int64 arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTSUMMARY_WRITEIFCOSTADDED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

