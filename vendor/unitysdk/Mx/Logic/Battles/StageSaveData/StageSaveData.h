#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles::StageSaveData { class GlobalSaveData; }

#define MX_LOGIC_BATTLES_STAGESAVEDATA_STAGESAVEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13A1080)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_STAGESAVEDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13A1480)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_STAGESAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x13A1E30)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_STAGESAVEDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13A1E40)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_STAGESAVEDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x13A1090)

namespace MX::Logic::Battles::StageSaveData
{
	inline static constexpr unsigned int StageSaveData_TypeDefinitionIndex = 14456;

	class StageSaveData : public Il2CppObject
	{
	public:
		::System::String* Version; // 0x10
		::MX::Logic::Battles::StageSaveData::GlobalSaveData* Global; // 0x18
		Il2CppObject* Sections; // 0x20
		Il2CppObject* Formations; // 0x28
		Il2CppObject* EnemyFormations; // 0x30
		Il2CppObject* TemporaryCanUseSkillAreas; // 0x38

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_STAGESAVEDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::StageSaveData::StageSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::StageSaveData::StageSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_STAGESAVEDATA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_STAGESAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::StageSaveData::StageSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::StageSaveData::StageSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_STAGESAVEDATA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_STAGESAVEDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

