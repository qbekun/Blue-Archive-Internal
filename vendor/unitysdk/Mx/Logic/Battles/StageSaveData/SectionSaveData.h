#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MX_LOGIC_BATTLES_STAGESAVEDATA_SECTIONSAVEDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x139FB90)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_SECTIONSAVEDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x139FD70)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_SECTIONSAVEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13A0310)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_SECTIONSAVEDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x13A0320)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_SECTIONSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x13A0300)

namespace MX::Logic::Battles::StageSaveData
{
	inline static constexpr unsigned int SectionSaveData_TypeDefinitionIndex = 14452;

	class SectionSaveData : public Il2CppObject
	{
	public:
		::System::Int32 SectionID; // 0x10
		::UnityEngine::Vector3* Position; // 0x14
		Il2CppObject* Events; // 0x20
		Il2CppObject* Obstacles; // 0x28
		Il2CppObject* EnemySpawnPointGroupList; // 0x30

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::StageSaveData::SectionSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::StageSaveData::SectionSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_SECTIONSAVEDATA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::StageSaveData::SectionSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::StageSaveData::SectionSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_SECTIONSAVEDATA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_SECTIONSAVEDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_SECTIONSAVEDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_SECTIONSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

