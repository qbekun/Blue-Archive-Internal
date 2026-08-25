#pragma once
#include "unitysdk.h"

#define OBSTACLEINFOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1470BB0)
#define OBSTACLEINFOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1470C00)
#define OBSTACLEINFOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1470B30)

	inline static constexpr unsigned int ObstacleInfoFormatter_TypeDefinitionIndex = 15125;

	class ObstacleInfoFormatter : public SyncTextReader
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::MinigameShooting::ObstacleInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::MinigameShooting::ObstacleInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + OBSTACLEINFOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::MinigameShooting::ObstacleInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::MinigameShooting::ObstacleInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + OBSTACLEINFOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBSTACLEINFOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

