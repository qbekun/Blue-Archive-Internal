#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class RemoveVisualEffectsEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define REMOVEVISUALEFFECTSEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1684C70)
#define REMOVEVISUALEFFECTSEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1684CC0)
#define REMOVEVISUALEFFECTSEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1684C30)

	inline static constexpr unsigned int RemoveVisualEffectsEffectDAOFormatter_TypeDefinitionIndex = 15359;

	class RemoveVisualEffectsEffectDAOFormatter : public <>c
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::RemoveVisualEffectsEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::RemoveVisualEffectsEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + REMOVEVISUALEFFECTSEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::RemoveVisualEffectsEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::RemoveVisualEffectsEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + REMOVEVISUALEFFECTSEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REMOVEVISUALEFFECTSEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

