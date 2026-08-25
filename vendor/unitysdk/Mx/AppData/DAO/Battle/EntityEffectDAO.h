#pragma once
#include "../../../../unitysdk.h"

namespace MX::AppData::DAO::Battle { class VisualSkillEntityDAO; }
namespace MX::AppData::DAO::Battle { class VisualEffectDAO; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::AppData::DAO::Battle { class EntityEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_APPDATA_DAO_BATTLE_ENTITYEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CD93D0)
#define MX_APPDATA_DAO_BATTLE_ENTITYEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1CD93E0)
#define MX_APPDATA_DAO_BATTLE_ENTITYEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD95E0)
#define MX_APPDATA_DAO_BATTLE_ENTITYEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CDD960)
#define MX_APPDATA_DAO_BATTLE_ENTITYEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDEAC0)

namespace MX::AppData::DAO::Battle
{
	inline static constexpr unsigned int EntityEffectDAO_TypeDefinitionIndex = 19859;

	class EntityEffectDAO : public Il2CppObject
	{
	public:
		::System::String* EntityName; // 0x10
		::MX::AppData::DAO::Battle::VisualSkillEntityDAO* SkillEntity; // 0x18
		::MX::AppData::DAO::Battle::VisualEffectDAO* FireEffect; // 0x20
		::MX::AppData::DAO::Battle::VisualEffectDAO* CreationEffect; // 0x98
		::MX::AppData::DAO::Battle::VisualEffectDAO* LoopEffectAfterCreation; // 0x110
		::MX::AppData::DAO::Battle::VisualEffectDAO* EndEffectAfterLoop; // 0x188
		::MX::AppData::DAO::Battle::VisualEffectDAO* SplashEffect; // 0x200
		::MX::AppData::DAO::Battle::VisualEffectDAO* HitWoodEffect; // 0x278
		::MX::AppData::DAO::Battle::VisualEffectDAO* HitStoneEffect; // 0x2F0
		::MX::AppData::DAO::Battle::VisualEffectDAO* HitFleshEffect; // 0x368
		::MX::AppData::DAO::Battle::VisualEffectDAO* HitMetalEffect; // 0x3E0
		::MX::AppData::DAO::Battle::VisualEffectDAO* MissEffect; // 0x458
		::MX::AppData::DAO::Battle::VisualEffectDAO* RemoveEffectAtCancel; // 0x4D0
		::System::String* AdditionalGuidePrefabPath; // 0x548

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ENTITYEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ENTITYEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::EntityEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::EntityEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ENTITYEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::EntityEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::EntityEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ENTITYEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ENTITYEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

