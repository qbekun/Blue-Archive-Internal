#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONOBSTACLESTATECHANGEDFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1364AF0)
#define GROUNDCONDITIONOBSTACLESTATECHANGEDFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13661B0)
#define GROUNDCONDITIONOBSTACLESTATECHANGEDFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1366200)

	inline static constexpr unsigned int GroundConditionObstacleStateChangedFormatter_TypeDefinitionIndex = 14344;

	class GroundConditionObstacleStateChangedFormatter : public ::System::Collections::Generic::ArraySortHelper`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONOBSTACLESTATECHANGEDFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionObstacleStateChanged&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionObstacleStateChanged&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONOBSTACLESTATECHANGEDFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionObstacleStateChanged&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionObstacleStateChanged&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONOBSTACLESTATECHANGEDFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

