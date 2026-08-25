#pragma once
#include "../../../../unitysdk.h"

namespace MX::AppData::DAO::Battle { class VisualEffectDAO; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::AppData::DAO::Battle { class AccumulateVisualEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_APPDATA_DAO_BATTLE_ACCUMULATEVISUALEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1CDF4C0)
#define MX_APPDATA_DAO_BATTLE_ACCUMULATEVISUALEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDF6C0)
#define MX_APPDATA_DAO_BATTLE_ACCUMULATEVISUALEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CDF6D0)
#define MX_APPDATA_DAO_BATTLE_ACCUMULATEVISUALEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CDF860)
#define MX_APPDATA_DAO_BATTLE_ACCUMULATEVISUALEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CE01A0)

namespace MX::AppData::DAO::Battle
{
	inline static constexpr unsigned int AccumulateVisualEffectDAO_TypeDefinitionIndex = 19863;

	class AccumulateVisualEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 AccumulateRateStart; // 0x10
		::System::Int64 AccumulateRateEnd; // 0x18
		::MX::AppData::DAO::Battle::VisualEffectDAO* AccumulateEffect; // 0x20
		::MX::AppData::DAO::Battle::VisualEffectDAO* AccumulateLoopEffect; // 0x98

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ACCUMULATEVISUALEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ACCUMULATEVISUALEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::AccumulateVisualEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::AccumulateVisualEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ACCUMULATEVISUALEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::AccumulateVisualEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::AccumulateVisualEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ACCUMULATEVISUALEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ACCUMULATEVISUALEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

