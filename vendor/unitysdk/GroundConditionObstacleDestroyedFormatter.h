#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONOBSTACLEDESTROYEDFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13647D0)
#define GROUNDCONDITIONOBSTACLEDESTROYEDFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1364820)
#define GROUNDCONDITIONOBSTACLEDESTROYEDFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1363340)

	inline static constexpr unsigned int GroundConditionObstacleDestroyedFormatter_TypeDefinitionIndex = 14342;

	class GroundConditionObstacleDestroyedFormatter : public ::System::Collections::Generic::IntrospectiveSortUtilities
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionObstacleDestroyed&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionObstacleDestroyed&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONOBSTACLEDESTROYEDFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionObstacleDestroyed&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionObstacleDestroyed&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONOBSTACLEDESTROYEDFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONOBSTACLEDESTROYEDFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

