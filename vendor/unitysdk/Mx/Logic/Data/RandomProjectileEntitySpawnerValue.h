#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class RandomProjectileEntitySpawnerDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_RANDOMPROJECTILEENTITYSPAWNERVALUE_SETDAMAGEDISTRIBUTERATE_OFFSET UNITYSDK_OFFSET(0x124A690)
#define MX_LOGIC_DATA_RANDOMPROJECTILEENTITYSPAWNERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x124A820)
#define MX_LOGIC_DATA_RANDOMPROJECTILEENTITYSPAWNERVALUE_GET_ENTITYLIST_OFFSET UNITYSDK_OFFSET(0x124ADF0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int RandomProjectileEntitySpawnerValue_TypeDefinitionIndex = 13975;

	class RandomProjectileEntitySpawnerValue : public Il2CppObject
	{
	public:
		Il2CppObject* _EntityList_k__BackingField; // 0x160

		::System::Void SetDamageDistributeRate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RANDOMPROJECTILEENTITYSPAWNERVALUE_SETDAMAGEDISTRIBUTERATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::RandomProjectileEntitySpawnerDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::RandomProjectileEntitySpawnerDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RANDOMPROJECTILEENTITYSPAWNERVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* get_EntityList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RANDOMPROJECTILEENTITYSPAWNERVALUE_GET_ENTITYLIST_OFFSET))(nullptr);
		}

	};
}

