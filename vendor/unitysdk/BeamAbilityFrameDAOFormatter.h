#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class BeamAbilityFrameDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define BEAMABILITYFRAMEDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17D5600)
#define BEAMABILITYFRAMEDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D5B40)
#define BEAMABILITYFRAMEDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D5B90)

	inline static constexpr unsigned int BeamAbilityFrameDAOFormatter_TypeDefinitionIndex = 15581;

	class BeamAbilityFrameDAOFormatter : public ::System::Reflection::Emit::PropertyBuilder
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAMABILITYFRAMEDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BeamAbilityFrameDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BeamAbilityFrameDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BEAMABILITYFRAMEDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BeamAbilityFrameDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BeamAbilityFrameDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BEAMABILITYFRAMEDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

