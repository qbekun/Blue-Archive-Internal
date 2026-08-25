#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class NormalAttackPhaseDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKPHASEDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17EFA50)
#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKPHASEDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F0480)
#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKPHASEDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17F0490)
#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKPHASEDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17F16D0)
#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKPHASEDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17F1990)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int NormalAttackPhaseDAO_TypeDefinitionIndex = 15613;

	class NormalAttackPhaseDAO : public Il2CppObject
	{
	public:
		::System::String* Description; // 0x10
		::System::Int32 PhaseDataId; // 0x18
		Il2CppObject* OnEnterNormalAttack; // 0x20
		Il2CppObject* AfterAttackEnter; // 0x28
		Il2CppObject* AfterReload; // 0x30
		Il2CppObject* AfterAttackStart; // 0x38
		Il2CppObject* AfterAttackIng; // 0x40
		Il2CppObject* AfterAttackBurstDelay; // 0x48
		Il2CppObject* AfterAttackFinish; // 0x50
		Il2CppObject* AfterMountWeapon; // 0x58
		Il2CppObject* AfterUnmountWeapon; // 0x60
		Il2CppObject* AfterSearchNewTarget; // 0x68

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::NormalAttackPhaseDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::NormalAttackPhaseDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKPHASEDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKPHASEDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::NormalAttackPhaseDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::NormalAttackPhaseDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKPHASEDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKPHASEDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKPHASEDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

