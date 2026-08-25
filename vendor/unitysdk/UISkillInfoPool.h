#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
class UIBossSkillViewInfo;

#define UISKILLINFOPOOL_SET_APPLYMAXLEVELCOLOR_OFFSET UNITYSDK_OFFSET(0x2324990)
#define UISKILLINFOPOOL_GET_APPLYMAXLEVELCOLOR_OFFSET UNITYSDK_OFFSET(0x23249A0)
#define UISKILLINFOPOOL_SET_BOSSPHASE_OFFSET UNITYSDK_OFFSET(0x23249B0)
#define UISKILLINFOPOOL_SET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x23249C0)
#define UISKILLINFOPOOL_GET_SKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x23249D0)
#define UISKILLINFOPOOL_GET_SKILLSLOT_OFFSET UNITYSDK_OFFSET(0x23249E0)
#define UISKILLINFOPOOL_SET_SKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x23249F0)
#define UISKILLINFOPOOL_GET_CHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x2324A10)
#define UISKILLINFOPOOL_GET_BOSSPHASE_OFFSET UNITYSDK_OFFSET(0x2324A20)
#define UISKILLINFOPOOL_SET_CHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x2324A30)
#define UISKILLINFOPOOL_GET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x2324A40)
#define UISKILLINFOPOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x2324A50)
#define UISKILLINFOPOOL_SET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x2324A60)
#define UISKILLINFOPOOL_GET_SKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x2324A70)
#define UISKILLINFOPOOL_SET_SKILLSLOT_OFFSET UNITYSDK_OFFSET(0x2324A90)
#define UISKILLINFOPOOL_SET_SKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x2324AA0)
#define UISKILLINFOPOOL_SETDATAPOOL_OFFSET UNITYSDK_OFFSET(0x2324AB0)
#define UISKILLINFOPOOL_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x2324DC0)

	inline static constexpr unsigned int UISkillInfoPool_TypeDefinitionIndex = 4919;

	class UISkillInfoPool : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterServerId_k__BackingField; // 0x10
		::System::String* _SkillGroupId_k__BackingField; // 0x18
		Il2CppObject* _SkillExcel_k__BackingField; // 0x20
		::MX::Logic::BattleEntities::SkillSlot* _SkillSlot_k__BackingField; // 0x38
		::System::Boolean _IsMaxLevel_k__BackingField; // 0x3C
		::System::Int32 _SkillLevel_k__BackingField; // 0x40
		::System::Int32 _BossPhase_k__BackingField; // 0x44
		::System::Boolean _ApplyMaxLevelColor_k__BackingField; // 0x48

		::System::Void set_ApplyMaxLevelColor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOPOOL_SET_APPLYMAXLEVELCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyMaxLevelColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOPOOL_GET_APPLYMAXLEVELCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_BossPhase(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOPOOL_SET_BOSSPHASE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOPOOL_SET_SKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::String* get_SkillGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOPOOL_GET_SKILLGROUPID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* get_SkillSlot()
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOPOOL_GET_SKILLSLOT_OFFSET))(nullptr);
		}

		::System::Void set_SkillExcel(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOPOOL_SET_SKILLEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOPOOL_GET_CHARACTERSERVERID_OFFSET))(nullptr);
		}

		::System::Int32 get_BossPhase()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOPOOL_GET_BOSSPHASE_OFFSET))(nullptr);
		}

		::System::Void set_CharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOPOOL_SET_CHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOPOOL_GET_SKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOPOOL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsMaxLevel(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOPOOL_SET_ISMAXLEVEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SkillExcel()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOPOOL_GET_SKILLEXCEL_OFFSET))(nullptr);
		}

		::System::Void set_SkillSlot(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOPOOL_SET_SKILLSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void set_SkillGroupId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOPOOL_SET_SKILLGROUPID_OFFSET))(str, nullptr);
		}

		::System::Void SetDataPool(UIBossSkillViewInfo* arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(UIBossSkillViewInfo*, ::System::Int64, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOPOOL_SETDATAPOOL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean get_IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOPOOL_GET_ISMAXLEVEL_OFFSET))(nullptr);
		}

	};

