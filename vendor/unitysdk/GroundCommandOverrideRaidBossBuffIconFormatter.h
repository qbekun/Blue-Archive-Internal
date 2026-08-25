#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12ECE00)
#define GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12EE310)
#define GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12EE360)

	inline static constexpr unsigned int GroundCommandOverrideRaidBossBuffIconFormatter_TypeDefinitionIndex = 14192;

	class GroundCommandOverrideRaidBossBuffIconFormatter : public ::System::Collections::ObjectModel::Collection`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandOverrideRaidBossBuffIcon&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandOverrideRaidBossBuffIcon&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandOverrideRaidBossBuffIcon&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandOverrideRaidBossBuffIcon&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

