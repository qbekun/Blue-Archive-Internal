#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_BATTLEENTITIES_CYCLICRANDOMALREADYSELECTEDTARGET_APPLYCYCLICRANDOMTARGETRULE_OFFSET UNITYSDK_OFFSET(0x1185420)
#define MX_LOGIC_BATTLEENTITIES_CYCLICRANDOMALREADYSELECTEDTARGET_SET_SELECTEDSUMMONEDCOUNT_OFFSET UNITYSDK_OFFSET(0x11857D0)
#define MX_LOGIC_BATTLEENTITIES_CYCLICRANDOMALREADYSELECTEDTARGET__APPLYCYCLICRANDOMTARGETRULE_B__7_0_OFFSET UNITYSDK_OFFSET(0x11857E0)
#define MX_LOGIC_BATTLEENTITIES_CYCLICRANDOMALREADYSELECTEDTARGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x1185830)
#define MX_LOGIC_BATTLEENTITIES_CYCLICRANDOMALREADYSELECTEDTARGET_CLEAR_OFFSET UNITYSDK_OFFSET(0x1185780)
#define MX_LOGIC_BATTLEENTITIES_CYCLICRANDOMALREADYSELECTEDTARGET_GET_SELECTEDSUMMONEDCOUNT_OFFSET UNITYSDK_OFFSET(0x11858C0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int CyclicRandomAlreadySelectedTarget_TypeDefinitionIndex = 13250;

	class CyclicRandomAlreadySelectedTarget : public Il2CppObject
	{
	public:
		Il2CppObject* SelectedTarget; // 0x10
		::System::Int32 _SelectedSummonedCount_k__BackingField; // 0x18

		::System::Void ApplyCyclicRandomTargetRule(Il2CppObject* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::BattleEntities::BattleEntity* arg4, ::System::Int32 arg5, ::System::Int32 arg6)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_CYCLICRANDOMALREADYSELECTEDTARGET_APPLYCYCLICRANDOMTARGETRULE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void set_SelectedSummonedCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_CYCLICRANDOMALREADYSELECTEDTARGET_SET_SELECTEDSUMMONEDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ApplyCyclicRandomTargetRule_b__7_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_CYCLICRANDOMALREADYSELECTEDTARGET__APPLYCYCLICRANDOMTARGETRULE_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_CYCLICRANDOMALREADYSELECTEDTARGET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_CYCLICRANDOMALREADYSELECTEDTARGET_CLEAR_OFFSET))(nullptr);
		}

		::System::Int32 get_SelectedSummonedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_CYCLICRANDOMALREADYSELECTEDTARGET_GET_SELECTEDSUMMONEDCOUNT_OFFSET))(nullptr);
		}

	};
}

