#pragma once
#include "unitysdk.h"

namespace FlatData { class RaidBossGroupType; }

#define PERMANENTRAIDBOSSGROUPSELECTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26FA760)
#define PERMANENTRAIDBOSSGROUPSELECTMESSAGE_GET_SELECTEDRAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x26FA770)
#define PERMANENTRAIDBOSSGROUPSELECTMESSAGE_SET_SELECTEDRAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x26FA780)

	inline static constexpr unsigned int PermanentRaidBossGroupSelectMessage_TypeDefinitionIndex = 7045;

	class PermanentRaidBossGroupSelectMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::FlatData::RaidBossGroupType* _SelectedRaidBossGroup_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDBOSSGROUPSELECTMESSAGE_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::RaidBossGroupType* get_SelectedRaidBossGroup()
		{
			return ((::FlatData::RaidBossGroupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDBOSSGROUPSELECTMESSAGE_GET_SELECTEDRAIDBOSSGROUP_OFFSET))(nullptr);
		}

		::System::Void set_SelectedRaidBossGroup(::FlatData::RaidBossGroupType* arg)
		{
			((::System::Void(*)(::FlatData::RaidBossGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDBOSSGROUPSELECTMESSAGE_SET_SELECTEDRAIDBOSSGROUP_OFFSET))(arg, nullptr);
		}

	};

