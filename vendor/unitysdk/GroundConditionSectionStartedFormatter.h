#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONSECTIONSTARTEDFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1367850)
#define GROUNDCONDITIONSECTIONSTARTEDFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1366D30)
#define GROUNDCONDITIONSECTIONSTARTEDFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13678A0)

	inline static constexpr unsigned int GroundConditionSectionStartedFormatter_TypeDefinitionIndex = 14346;

	class GroundConditionSectionStartedFormatter : public ::System::Collections::Generic::ArraySortHelper`2
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionSectionStarted&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionSectionStarted&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONSECTIONSTARTEDFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONSECTIONSTARTEDFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionSectionStarted&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionSectionStarted&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONSECTIONSTARTEDFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

