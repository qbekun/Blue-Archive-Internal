#pragma once
#include "../../../../unitysdk.h"

namespace MX::AppData::DAO::Battle { class EntityEffectCollection; }
namespace MX::AppData::DAO::Battle { class LogicEffectVisualCollection; }
namespace MX::AppData::DAO::Battle { class BattleItemEffectCollection; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::AppData::DAO::Battle { class SkillVisualDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_APPDATA_DAO_BATTLE_SKILLVISUALDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7160)
#define MX_APPDATA_DAO_BATTLE_SKILLVISUALDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1CE7170)
#define MX_APPDATA_DAO_BATTLE_SKILLVISUALDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CE74E0)
#define MX_APPDATA_DAO_BATTLE_SKILLVISUALDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE9440)
#define MX_APPDATA_DAO_BATTLE_SKILLVISUALDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CE9450)

namespace MX::AppData::DAO::Battle
{
	inline static constexpr unsigned int SkillVisualDAO_TypeDefinitionIndex = 19874;

	class SkillVisualDAO : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::String* VisualDataKey; // 0x18
		::System::String* GuidePrefabPath; // 0x20
		Il2CppObject* ActionEffects; // 0x28
		::MX::AppData::DAO::Battle::EntityEffectCollection* EntityEffects; // 0x30
		::MX::AppData::DAO::Battle::LogicEffectVisualCollection* LogicEffectVisuals; // 0x38
		::MX::AppData::DAO::Battle::BattleItemEffectCollection* BattleItems; // 0x40
		Il2CppObject* ParticleEffectDatas; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_SKILLVISUALDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_SKILLVISUALDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::SkillVisualDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::SkillVisualDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_SKILLVISUALDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_SKILLVISUALDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::SkillVisualDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::SkillVisualDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_SKILLVISUALDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

