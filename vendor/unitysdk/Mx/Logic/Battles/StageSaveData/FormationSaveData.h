#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define MX_LOGIC_BATTLES_STAGESAVEDATA_FORMATIONSAVEDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x139F1F0)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_FORMATIONSAVEDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x139F3F0)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_FORMATIONSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x139F970)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_FORMATIONSAVEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x139F980)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_FORMATIONSAVEDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x139F990)

namespace MX::Logic::Battles::StageSaveData
{
	inline static constexpr unsigned int FormationSaveData_TypeDefinitionIndex = 14450;

	class FormationSaveData : public Il2CppObject
	{
	public:
		::System::Int32 SectionIndex; // 0x10
		::System::Boolean IgnorePathFind; // 0x14
		::System::Int32 Index; // 0x18
		::UnityEngine::Vector2* Position; // 0x1C
		::UnityEngine::Vector2* Forward; // 0x24
		::System::Single Height; // 0x2C
		::System::Boolean IsEnemy; // 0x30

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_FORMATIONSAVEDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::StageSaveData::FormationSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::StageSaveData::FormationSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_FORMATIONSAVEDATA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_FORMATIONSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_FORMATIONSAVEDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::StageSaveData::FormationSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::StageSaveData::FormationSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_FORMATIONSAVEDATA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

