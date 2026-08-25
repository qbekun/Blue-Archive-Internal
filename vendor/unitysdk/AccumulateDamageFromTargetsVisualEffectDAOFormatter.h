#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::AppData::DAO::Battle { class AccumulateDamageFromTargetsVisualEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define ACCUMULATEDAMAGEFROMTARGETSVISUALEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CE16B0)
#define ACCUMULATEDAMAGEFROMTARGETSVISUALEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CE1700)
#define ACCUMULATEDAMAGEFROMTARGETSVISUALEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0410)

	inline static constexpr unsigned int AccumulateDamageFromTargetsVisualEffectDAOFormatter_TypeDefinitionIndex = 19864;

	class AccumulateDamageFromTargetsVisualEffectDAOFormatter : public LazyCAttrData
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::AccumulateDamageFromTargetsVisualEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::AccumulateDamageFromTargetsVisualEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ACCUMULATEDAMAGEFROMTARGETSVISUALEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::AccumulateDamageFromTargetsVisualEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::AccumulateDamageFromTargetsVisualEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ACCUMULATEDAMAGEFROMTARGETSVISUALEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCUMULATEDAMAGEFROMTARGETSVISUALEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

