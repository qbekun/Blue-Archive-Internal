#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDDESTROYOBSTACLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D4C80)
#define GROUNDCOMMANDDESTROYOBSTACLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D4CD0)
#define GROUNDCOMMANDDESTROYOBSTACLEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12D4C40)

	inline static constexpr unsigned int GroundCommandDestroyObstacleFormatter_TypeDefinitionIndex = 14159;

	class GroundCommandDestroyObstacleFormatter : public Slot
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandDestroyObstacle&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandDestroyObstacle&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDDESTROYOBSTACLEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandDestroyObstacle&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandDestroyObstacle&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDDESTROYOBSTACLEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDDESTROYOBSTACLEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

