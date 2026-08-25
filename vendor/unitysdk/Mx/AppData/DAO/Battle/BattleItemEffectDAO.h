#pragma once
#include "../../../../unitysdk.h"

namespace MX::AppData::DAO::Battle { class VisualEffectDAO; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::AppData::DAO::Battle { class BattleItemEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_APPDATA_DAO_BATTLE_BATTLEITEMEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD7A60)
#define MX_APPDATA_DAO_BATTLE_BATTLEITEMEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1CD8340)
#define MX_APPDATA_DAO_BATTLE_BATTLEITEMEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD8540)
#define MX_APPDATA_DAO_BATTLE_BATTLEITEMEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD9320)
#define MX_APPDATA_DAO_BATTLE_BATTLEITEMEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CD9310)

namespace MX::AppData::DAO::Battle
{
	inline static constexpr unsigned int BattleItemEffectDAO_TypeDefinitionIndex = 19857;

	class BattleItemEffectDAO : public Il2CppObject
	{
	public:
		::System::String* BattleItemName; // 0x10
		::MX::AppData::DAO::Battle::VisualEffectDAO* Effect; // 0x18

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::BattleItemEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::BattleItemEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_BATTLEITEMEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_BATTLEITEMEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::BattleItemEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::BattleItemEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_BATTLEITEMEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_BATTLEITEMEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_BATTLEITEMEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

