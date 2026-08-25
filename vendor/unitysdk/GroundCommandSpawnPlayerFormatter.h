#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSPAWNPLAYERFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1321AD0)
#define GROUNDCOMMANDSPAWNPLAYERFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13204A0)
#define GROUNDCOMMANDSPAWNPLAYERFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1321B20)

	inline static constexpr unsigned int GroundCommandSpawnPlayerFormatter_TypeDefinitionIndex = 14245;

	class GroundCommandSpawnPlayerFormatter : public ::System::Collections::Generic::IReadOnlyCollection`1
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSpawnPlayer&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSpawnPlayer&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSPAWNPLAYERFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSPAWNPLAYERFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSpawnPlayer&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSpawnPlayer&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSPAWNPLAYERFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

