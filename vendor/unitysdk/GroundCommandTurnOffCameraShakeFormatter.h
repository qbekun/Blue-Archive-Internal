#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDTURNOFFCAMERASHAKEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x216B6A0)
#define GROUNDCOMMANDTURNOFFCAMERASHAKEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x216B6F0)
#define GROUNDCOMMANDTURNOFFCAMERASHAKEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x216A6A0)

	inline static constexpr unsigned int GroundCommandTurnOffCameraShakeFormatter_TypeDefinitionIndex = 4018;

	class GroundCommandTurnOffCameraShakeFormatter : public ::System::Collections::Generic::KeyNotFoundException
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandTurnOffCameraShake&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandTurnOffCameraShake&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTURNOFFCAMERASHAKEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandTurnOffCameraShake&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandTurnOffCameraShake&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTURNOFFCAMERASHAKEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTURNOFFCAMERASHAKEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

