#pragma once
#include "unitysdk.h"

#define PLAYERSPAWNPOINTINFOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x146F8D0)
#define PLAYERSPAWNPOINTINFOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x146F4E0)
#define PLAYERSPAWNPOINTINFOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x146F920)

	inline static constexpr unsigned int PlayerSpawnPointInfoFormatter_TypeDefinitionIndex = 15121;

	class PlayerSpawnPointInfoFormatter : public ::System::IO::DirectoryInfo
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::MinigameShooting::PlayerSpawnPointInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::MinigameShooting::PlayerSpawnPointInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + PLAYERSPAWNPOINTINFOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYERSPAWNPOINTINFOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::MinigameShooting::PlayerSpawnPointInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::MinigameShooting::PlayerSpawnPointInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + PLAYERSPAWNPOINTINFOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

