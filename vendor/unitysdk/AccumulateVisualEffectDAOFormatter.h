#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::AppData::DAO::Battle { class AccumulateVisualEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define ACCUMULATEVISUALEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CE01B0)
#define ACCUMULATEVISUALEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CE0200)
#define ACCUMULATEVISUALEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF680)

	inline static constexpr unsigned int AccumulateVisualEffectDAOFormatter_TypeDefinitionIndex = 19862;

	class AccumulateVisualEffectDAOFormatter : public ::System::Reflection::LocalVariableInfo
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::AccumulateVisualEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::AccumulateVisualEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ACCUMULATEVISUALEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::AccumulateVisualEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::AccumulateVisualEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ACCUMULATEVISUALEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCUMULATEVISUALEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

