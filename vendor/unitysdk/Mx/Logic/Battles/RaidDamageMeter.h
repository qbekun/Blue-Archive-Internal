#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class RaidMemberCollection; }
namespace MX::Logic::Data { class RaidMemberDescription; }

#define MX_LOGIC_BATTLES_RAIDDAMAGEMETER_UPDATEOTHERDAMAGE_OFFSET UNITYSDK_OFFSET(0x1298CB0)
#define MX_LOGIC_BATTLES_RAIDDAMAGEMETER_GET_CURRENTBOSSPLAYERDAMAGE_OFFSET UNITYSDK_OFFSET(0x1298CF0)
#define MX_LOGIC_BATTLES_RAIDDAMAGEMETER_UPDATEPLAYERDAMAGE_OFFSET UNITYSDK_OFFSET(0x1298D00)
#define MX_LOGIC_BATTLES_RAIDDAMAGEMETER_RESETDAMAGE_OFFSET UNITYSDK_OFFSET(0x1298D50)
#define MX_LOGIC_BATTLES_RAIDDAMAGEMETER_GET_PLAYERACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1298D60)
#define MX_LOGIC_BATTLES_RAIDDAMAGEMETER_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x1298D70)
#define MX_LOGIC_BATTLES_RAIDDAMAGEMETER_GET_CURRENTBATTLEPLAYERDAMAGE_OFFSET UNITYSDK_OFFSET(0x1298D80)
#define MX_LOGIC_BATTLES_RAIDDAMAGEMETER_GET_PLAYERCUMULATIVEDAMAGE_OFFSET UNITYSDK_OFFSET(0x1298D90)
#define MX_LOGIC_BATTLES_RAIDDAMAGEMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1298DB0)
#define MX_LOGIC_BATTLES_RAIDDAMAGEMETER_SET_CURRENTBATTLEPLAYERDAMAGE_OFFSET UNITYSDK_OFFSET(0x1298E30)
#define MX_LOGIC_BATTLES_RAIDDAMAGEMETER_SET_CURRENTBOSSPLAYERDAMAGE_OFFSET UNITYSDK_OFFSET(0x1298E40)
#define MX_LOGIC_BATTLES_RAIDDAMAGEMETER_CURRENTBOSSCUMULATIVEDAMAGE_OFFSET UNITYSDK_OFFSET(0x1298E50)
#define MX_LOGIC_BATTLES_RAIDDAMAGEMETER_GET_TOTALCUMULATIVEDAMAGE_OFFSET UNITYSDK_OFFSET(0x1298E70)
#define MX_LOGIC_BATTLES_RAIDDAMAGEMETER_MEMBERCUMULATIVEDAMAGE_OFFSET UNITYSDK_OFFSET(0x1298E90)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int RaidDamageMeter_TypeDefinitionIndex = 14092;

	class RaidDamageMeter : public Il2CppObject
	{
	public:
		::MX::Logic::Data::RaidMemberCollection* _Members_k__BackingField; // 0x10
		::System::Int64 _CurrentBossPlayerDamage_k__BackingField; // 0x18
		::System::Int64 _CurrentBattlePlayerDamage_k__BackingField; // 0x20
		::System::Int64 _playerAccountId_k__BackingField; // 0x28

		::System::Boolean UpdateOtherDamage(::MX::Logic::Data::RaidMemberDescription* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::RaidMemberDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RAIDDAMAGEMETER_UPDATEOTHERDAMAGE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CurrentBossPlayerDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RAIDDAMAGEMETER_GET_CURRENTBOSSPLAYERDAMAGE_OFFSET))(nullptr);
		}

		::System::Void UpdatePlayerDamage(::System::Int32 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RAIDDAMAGEMETER_UPDATEPLAYERDAMAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetDamage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RAIDDAMAGEMETER_RESETDAMAGE_OFFSET))(nullptr);
		}

		::System::Int64 get_playerAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RAIDDAMAGEMETER_GET_PLAYERACCOUNTID_OFFSET))(nullptr);
		}

		::MX::Logic::Data::RaidMemberCollection* get_Members()
		{
			return ((::MX::Logic::Data::RaidMemberCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RAIDDAMAGEMETER_GET_MEMBERS_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentBattlePlayerDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RAIDDAMAGEMETER_GET_CURRENTBATTLEPLAYERDAMAGE_OFFSET))(nullptr);
		}

		::System::Int64 get_PlayerCumulativeDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RAIDDAMAGEMETER_GET_PLAYERCUMULATIVEDAMAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RAIDDAMAGEMETER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_CurrentBattlePlayerDamage(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RAIDDAMAGEMETER_SET_CURRENTBATTLEPLAYERDAMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrentBossPlayerDamage(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RAIDDAMAGEMETER_SET_CURRENTBOSSPLAYERDAMAGE_OFFSET))(arg, nullptr);
		}

		::System::Int64 CurrentBossCumulativeDamage(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RAIDDAMAGEMETER_CURRENTBOSSCUMULATIVEDAMAGE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TotalCumulativeDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RAIDDAMAGEMETER_GET_TOTALCUMULATIVEDAMAGE_OFFSET))(nullptr);
		}

		::System::Int64 MemberCumulativeDamage(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RAIDDAMAGEMETER_MEMBERCUMULATIVEDAMAGE_OFFSET))(arg, nullptr);
		}

	};
}

