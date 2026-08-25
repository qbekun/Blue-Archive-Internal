#pragma once
#include "../../../../unitysdk.h"

namespace MX::Visual::Data { class PositionSetting; }
namespace MX::Visual::Data { class FacingTargetType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::AppData::DAO::Battle { class VisualSkillEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_APPDATA_DAO_BATTLE_VISUALSKILLENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CECA20)
#define MX_APPDATA_DAO_BATTLE_VISUALSKILLENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CEDE00)
#define MX_APPDATA_DAO_BATTLE_VISUALSKILLENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEDE10)
#define MX_APPDATA_DAO_BATTLE_VISUALSKILLENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CEE0A0)
#define MX_APPDATA_DAO_BATTLE_VISUALSKILLENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1CEDE20)

namespace MX::AppData::DAO::Battle
{
	inline static constexpr unsigned int VisualSkillEntityDAO_TypeDefinitionIndex = 19878;

	class VisualSkillEntityDAO : public Il2CppObject
	{
	public:
		::MX::Visual::Data::PositionSetting* StartPositionSetting; // 0x10
		::MX::Visual::Data::PositionSetting* EndPositionSetting; // 0x68
		::MX::Visual::Data::FacingTargetType* FacingType; // 0xC0
		::System::Single StartDelaySecond; // 0xC4
		::System::Single MaxDurationSecond; // 0xC8
		::System::Single DestroyDelaySecond; // 0xCC
		::System::String* PrefabPath; // 0xD0

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::VisualSkillEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::VisualSkillEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_VISUALSKILLENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_VISUALSKILLENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_VISUALSKILLENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::VisualSkillEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::VisualSkillEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_VISUALSKILLENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_VISUALSKILLENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

