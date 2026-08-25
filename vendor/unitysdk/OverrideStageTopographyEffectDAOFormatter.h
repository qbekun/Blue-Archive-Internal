#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class OverrideStageTopographyEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define OVERRIDESTAGETOPOGRAPHYEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x15E1D90)
#define OVERRIDESTAGETOPOGRAPHYEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15E1DD0)
#define OVERRIDESTAGETOPOGRAPHYEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15E1E20)

	inline static constexpr unsigned int OverrideStageTopographyEffectDAOFormatter_TypeDefinitionIndex = 15295;

	class OverrideStageTopographyEffectDAOFormatter : public SyncTextWriter
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OVERRIDESTAGETOPOGRAPHYEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::OverrideStageTopographyEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::OverrideStageTopographyEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + OVERRIDESTAGETOPOGRAPHYEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::OverrideStageTopographyEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::OverrideStageTopographyEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + OVERRIDESTAGETOPOGRAPHYEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

