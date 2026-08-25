#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class MultiPartCharacterSpawnPoint; }
namespace MX::Logic::Battles { class SpawnCharacterSetting; }
namespace MX::Logic::BattleEntities { class SubPartDummySpawnData; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class SpawnData; }
namespace MX::Logic::BattleEntities { class RandomSpawnPoint; }
namespace MX::Logic::BattleEntities { class SpawnPointBase; }

#define MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER_COSPAWNMULTIPARTCHARACTERDELAY_OFFSET UNITYSDK_OFFSET(0x12A0610)
#define MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER__COSPAWNMULTIPARTCHARACTERDELAY_G__MAKESUBPARTDUMMYSPAWNSETTING|6_0_OFFSET UNITYSDK_OFFSET(0x12A06D0)
#define MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER_SPAWNENTITYBYCOMMANDID_OFFSET UNITYSDK_OFFSET(0x12A0840)
#define MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER_FINDSPAWNPOINTBYCOMMANDID_OFFSET UNITYSDK_OFFSET(0x12A08F0)
#define MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER_CALCSPAWNDATA_OFFSET UNITYSDK_OFFSET(0x12A0C00)
#define MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER_MAKESPAWNCHARACTERSETTING_OFFSET UNITYSDK_OFFSET(0x12A0DA0)
#define MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER_COSPAWNENTITYDELAY_OFFSET UNITYSDK_OFFSET(0x12A1040)
#define MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER_SPAWNENTITY_OFFSET UNITYSDK_OFFSET(0x12A09F0)
#define MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER_GETSPAWNDATA_OFFSET UNITYSDK_OFFSET(0x12A0F20)
#define MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12A1130)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundEntitySpawner_TypeDefinitionIndex = 14104;

	class GroundEntitySpawner : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::Battle* battle; // 0x10

		::System::Collections::IEnumerator* CoSpawnMultiPartCharacterDelay(::MX::Logic::BattleEntities::MultiPartCharacterSpawnPoint* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::BattleEntities::MultiPartCharacterSpawnPoint*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER_COSPAWNMULTIPARTCHARACTERDELAY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Battles::SpawnCharacterSetting* _CoSpawnMultiPartCharacterDelay_g__MakeSubPartDummySpawnSetting|6_0(::MX::Logic::BattleEntities::MultiPartCharacterSpawnPoint* arg, ::MX::Logic::BattleEntities::SubPartDummySpawnData* arg2, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg3)
		{
			return ((::MX::Logic::Battles::SpawnCharacterSetting*(*)(::MX::Logic::BattleEntities::MultiPartCharacterSpawnPoint*, ::MX::Logic::BattleEntities::SubPartDummySpawnData*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER__COSPAWNMULTIPARTCHARACTERDELAY_G__MAKESUBPARTDUMMYSPAWNSETTING|6_0_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SpawnEntityByCommandID(::System::String* str, ::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER_SPAWNENTITYBYCOMMANDID_OFFSET))(str, arg, arg2, nullptr);
		}

		Il2CppObject* FindSpawnPointByCommandId(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER_FINDSPAWNPOINTBYCOMMANDID_OFFSET))(str, nullptr);
		}

		::MX::Logic::BattleEntities::SpawnData* CalcSpawnData(::MX::Logic::BattleEntities::RandomSpawnPoint* arg)
		{
			return ((::MX::Logic::BattleEntities::SpawnData*(*)(::MX::Logic::BattleEntities::RandomSpawnPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER_CALCSPAWNDATA_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::SpawnCharacterSetting* MakeSpawnCharacterSetting(::MX::Logic::BattleEntities::SpawnPointBase* arg)
		{
			return ((::MX::Logic::Battles::SpawnCharacterSetting*(*)(::MX::Logic::BattleEntities::SpawnPointBase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER_MAKESPAWNCHARACTERSETTING_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoSpawnEntityDelay(::MX::Logic::Battles::SpawnCharacterSetting* arg, ::System::Single arg2, ::MX::Logic::BattleEntities::SpawnPointBase* arg3, Il2CppObject* arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Battles::SpawnCharacterSetting*, ::System::Single, ::MX::Logic::BattleEntities::SpawnPointBase*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER_COSPAWNENTITYDELAY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SpawnEntity(::MX::Logic::BattleEntities::SpawnPointBase* arg, ::System::Int64 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SpawnPointBase*, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER_SPAWNENTITY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::BattleEntities::SpawnData* GetSpawnData(::MX::Logic::BattleEntities::SpawnPointBase* arg)
		{
			return ((::MX::Logic::BattleEntities::SpawnData*(*)(::MX::Logic::BattleEntities::SpawnPointBase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER_GETSPAWNDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDENTITYSPAWNER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

