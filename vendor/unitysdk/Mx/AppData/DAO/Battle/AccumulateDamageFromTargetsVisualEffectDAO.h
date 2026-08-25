#pragma once
#include "../../../../unitysdk.h"

namespace MX::AppData::DAO::Battle { class VisualEffectDAO; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::AppData::DAO::Battle { class AccumulateDamageFromTargetsVisualEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_APPDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSVISUALEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1CE0250)
#define MX_APPDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSVISUALEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CE0450)
#define MX_APPDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSVISUALEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CE0640)
#define MX_APPDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSVISUALEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE16A0)
#define MX_APPDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSVISUALEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CE1690)

namespace MX::AppData::DAO::Battle
{
	inline static constexpr unsigned int AccumulateDamageFromTargetsVisualEffectDAO_TypeDefinitionIndex = 19865;

	class AccumulateDamageFromTargetsVisualEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 AccumulateRateStart; // 0x10
		::System::Int64 AccumulateRateEnd; // 0x18
		::MX::AppData::DAO::Battle::VisualEffectDAO* StartEffect; // 0x20
		::MX::AppData::DAO::Battle::VisualEffectDAO* LoopEffect; // 0x98
		::MX::AppData::DAO::Battle::VisualEffectDAO* EndEffect; // 0x110
		::MX::AppData::DAO::Battle::VisualEffectDAO* RemovedEffect; // 0x188

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSVISUALEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::AccumulateDamageFromTargetsVisualEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::AccumulateDamageFromTargetsVisualEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSVISUALEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::AccumulateDamageFromTargetsVisualEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::AccumulateDamageFromTargetsVisualEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSVISUALEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSVISUALEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSVISUALEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

