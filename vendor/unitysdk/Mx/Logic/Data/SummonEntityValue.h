#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class AreaSpawnerValue; }
namespace MX::Logic::Data { class SkillEntitySpawnerValue; }
namespace MX::Logic::Skills { class MovingAreaOptions; }
namespace MX::GameData::DAO::Battle { class SummonEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_SUMMONENTITYVALUE_GET_MOVINGAREAOPTION_OFFSET UNITYSDK_OFFSET(0x124BAA0)
#define MX_LOGIC_DATA_SUMMONENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12435A0)
#define MX_LOGIC_DATA_SUMMONENTITYVALUE_SETDAMAGEDISTRIBUTERATE_OFFSET UNITYSDK_OFFSET(0x1242D20)
#define MX_LOGIC_DATA_SUMMONENTITYVALUE_GET_SPAWNSAMEGRIDLAYERASINVOKER_OFFSET UNITYSDK_OFFSET(0x124BAB0)
#define MX_LOGIC_DATA_SUMMONENTITYVALUE_GET_DESTROYALREADYEXIST_OFFSET UNITYSDK_OFFSET(0x124BAC0)
#define MX_LOGIC_DATA_SUMMONENTITYVALUE_GET_SPAWNTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x124BAD0)
#define MX_LOGIC_DATA_SUMMONENTITYVALUE_GET_ANGLEOFFSET_OFFSET UNITYSDK_OFFSET(0x124BAE0)
#define MX_LOGIC_DATA_SUMMONENTITYVALUE_SET_SPAWNSAMEGRIDLAYERASINVOKER_OFFSET UNITYSDK_OFFSET(0x124BAF0)
#define MX_LOGIC_DATA_SUMMONENTITYVALUE_GET_SUMMONASENEMY_OFFSET UNITYSDK_OFFSET(0x124BB00)
#define MX_LOGIC_DATA_SUMMONENTITYVALUE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x124BB10)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SummonEntityValue_TypeDefinitionIndex = 13979;

	class SummonEntityValue : public Il2CppObject
	{
	public:
		::System::String* _SpawnTemplateId_k__BackingField; // 0x160
		::System::Single _AngleOffset_k__BackingField; // 0x168
		::System::Int32 _Duration_k__BackingField; // 0x16C
		::System::Boolean _DestroyAlreadyExist_k__BackingField; // 0x170
		::System::Boolean _SummonAsEnemy_k__BackingField; // 0x171
		::System::Boolean _SpawnSameGridLayerAsInvoker_k__BackingField; // 0x172
		::MX::Logic::Data::AreaSpawnerValue* InitialAreaSpawnerEntity; // 0x178
		::MX::Logic::Data::SkillEntitySpawnerValue* InitialEntitySpawner; // 0x180
		::MX::Logic::Skills::MovingAreaOptions* _MovingAreaOption_k__BackingField; // 0x188

		::MX::Logic::Skills::MovingAreaOptions* get_MovingAreaOption()
		{
			return ((::MX::Logic::Skills::MovingAreaOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONENTITYVALUE_GET_MOVINGAREAOPTION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::SummonEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SummonEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetDamageDistributeRate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONENTITYVALUE_SETDAMAGEDISTRIBUTERATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SpawnSameGridLayerAsInvoker()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONENTITYVALUE_GET_SPAWNSAMEGRIDLAYERASINVOKER_OFFSET))(nullptr);
		}

		::System::Boolean get_DestroyAlreadyExist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONENTITYVALUE_GET_DESTROYALREADYEXIST_OFFSET))(nullptr);
		}

		::System::String* get_SpawnTemplateId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONENTITYVALUE_GET_SPAWNTEMPLATEID_OFFSET))(nullptr);
		}

		::System::Single get_AngleOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONENTITYVALUE_GET_ANGLEOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_SpawnSameGridLayerAsInvoker(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONENTITYVALUE_SET_SPAWNSAMEGRIDLAYERASINVOKER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SummonAsEnemy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONENTITYVALUE_GET_SUMMONASENEMY_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONENTITYVALUE_GET_DURATION_OFFSET))(nullptr);
		}

	};
}

