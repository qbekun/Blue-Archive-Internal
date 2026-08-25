#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class RaidMemberCollection; }

#define MX_LOGIC_BATTLES_DAMAGEUPDATEDEVENTARGS_GET_RAIDMEMBERS_OFFSET UNITYSDK_OFFSET(0x12734E0)
#define MX_LOGIC_BATTLES_DAMAGEUPDATEDEVENTARGS_GET_RAIDBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x12734F0)
#define MX_LOGIC_BATTLES_DAMAGEUPDATEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1273500)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int DamageUpdatedEventArgs_TypeDefinitionIndex = 14046;

	class DamageUpdatedEventArgs : public Il2CppObject
	{
	public:
		::System::Int32 _RaidBossIndex_k__BackingField; // 0x10
		::MX::Logic::Data::RaidMemberCollection* _RaidMembers_k__BackingField; // 0x18

		::MX::Logic::Data::RaidMemberCollection* get_RaidMembers()
		{
			return ((::MX::Logic::Data::RaidMemberCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGEUPDATEDEVENTARGS_GET_RAIDMEMBERS_OFFSET))(nullptr);
		}

		::System::Int32 get_RaidBossIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGEUPDATEDEVENTARGS_GET_RAIDBOSSINDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::MX::Logic::Data::RaidMemberCollection* arg2)
		{
			((::System::Void(*)(::System::Int32, ::MX::Logic::Data::RaidMemberCollection*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGEUPDATEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

