#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSPAWNENTITYFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x131F8D0)
#define GROUNDCOMMANDSPAWNENTITYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1320240)
#define GROUNDCOMMANDSPAWNENTITYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1320290)

	inline static constexpr unsigned int GroundCommandSpawnEntityFormatter_TypeDefinitionIndex = 14243;

	class GroundCommandSpawnEntityFormatter : public ::System::Collections::Generic::IList`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSPAWNENTITYFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSpawnEntity&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSpawnEntity&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSPAWNENTITYFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSpawnEntity&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSpawnEntity&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSPAWNENTITYFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

