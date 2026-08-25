#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_SET_COOLDOWNCURRENT_OFFSET UNITYSDK_OFFSET(0x1389030)
#define MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0x1389040)
#define MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_SET_CHARACTERLIST_OFFSET UNITYSDK_OFFSET(0x13891C0)
#define MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_GET_SYNCSKILLUSEGROUPID_OFFSET UNITYSDK_OFFSET(0x13891D0)
#define MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x13891E0)
#define MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_GET_COOLDOWNCURRENT_OFFSET UNITYSDK_OFFSET(0x13891F0)
#define MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_GET_CHARACTERLIST_OFFSET UNITYSDK_OFFSET(0x1389200)
#define MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_GET_SUPPORTERLIST_OFFSET UNITYSDK_OFFSET(0x1389210)
#define MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_COTRYTOSKILLUSE_OFFSET UNITYSDK_OFFSET(0x1389150)
#define MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_SET_SUPPORTERLIST_OFFSET UNITYSDK_OFFSET(0x1389240)
#define MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1389250)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int SyncUseSkillGroup_TypeDefinitionIndex = 14409;

	class SyncUseSkillGroup : public Il2CppObject
	{
	public:
		::System::Int32 _SyncSkillUseGroupId_k__BackingField; // 0x10
		::System::Int32 _CoolDown_k__BackingField; // 0x14
		::System::Int32 _CoolDownCurrent_k__BackingField; // 0x18
		Il2CppObject* _CharacterList_k__BackingField; // 0x20
		Il2CppObject* _SupporterList_k__BackingField; // 0x28
		::System::Collections::IEnumerator* coTryToSkillUse; // 0x30

		::System::Void set_CoolDownCurrent(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_SET_COOLDOWNCURRENT_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_UPDATE_OFFSET))(nullptr);
		}

		::System::Void set_CharacterList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_SET_CHARACTERLIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SyncSkillUseGroupId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_GET_SYNCSKILLUSEGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_CoolDown()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_GET_COOLDOWN_OFFSET))(nullptr);
		}

		::System::Int32 get_CoolDownCurrent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_GET_COOLDOWNCURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* get_CharacterList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_GET_CHARACTERLIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_SupporterList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_GET_SUPPORTERLIST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoTryToSkillUse()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_COTRYTOSKILLUSE_OFFSET))(nullptr);
		}

		::System::Void set_SupporterList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_SET_SUPPORTERLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SYNCUSESKILLGROUP_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

