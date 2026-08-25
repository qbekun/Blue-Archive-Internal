#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::AppData::DAO::Battle { class ParticleEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define PARTICLEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CE6D30)
#define PARTICLEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6CF0)
#define PARTICLEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CE6D80)

	inline static constexpr unsigned int ParticleEffectDAOFormatter_TypeDefinitionIndex = 19868;

	class ParticleEffectDAOFormatter : public <>c
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::ParticleEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::ParticleEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::ParticleEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::ParticleEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

