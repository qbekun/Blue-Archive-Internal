#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MX_LOGIC_BATTLES_STAGESAVEDATA_OBSTACLESAVEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x139D300)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_OBSTACLESAVEDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x139D700)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_OBSTACLESAVEDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x139D310)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_OBSTACLESAVEDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x139E770)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_OBSTACLESAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x139E720)

namespace MX::Logic::Battles::StageSaveData
{
	inline static constexpr unsigned int ObstacleSaveData_TypeDefinitionIndex = 14448;

	class ObstacleSaveData : public Il2CppObject
	{
	public:
		::System::String* UniqueName; // 0x10
		::UnityEngine::Vector3* Position; // 0x18
		::UnityEngine::Vector3* Forward; // 0x24
		Il2CppObject* ActiveEnemyPointIndices; // 0x30
		Il2CppObject* ActivePlayerPointIndices; // 0x38
		Il2CppObject* ConditionIdList; // 0x40
		Il2CppObject* CommandIdList; // 0x48
		Il2CppObject* SubObstacles; // 0x50
		::System::Boolean IsDummy; // 0x58

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_OBSTACLESAVEDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::StageSaveData::ObstacleSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::StageSaveData::ObstacleSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_OBSTACLESAVEDATA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_OBSTACLESAVEDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::StageSaveData::ObstacleSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::StageSaveData::ObstacleSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_OBSTACLESAVEDATA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_OBSTACLESAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

