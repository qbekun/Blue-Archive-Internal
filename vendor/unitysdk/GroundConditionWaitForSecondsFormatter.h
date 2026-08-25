#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONWAITFORSECONDSFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2185B50)
#define GROUNDCONDITIONWAITFORSECONDSFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2184DD0)
#define GROUNDCONDITIONWAITFORSECONDSFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2185BA0)

	inline static constexpr unsigned int GroundConditionWaitForSecondsFormatter_TypeDefinitionIndex = 4056;

	class GroundConditionWaitForSecondsFormatter : public ::System::Collections::Generic::NullableComparer`1
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundConditionWaitForSeconds&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundConditionWaitForSeconds&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONWAITFORSECONDSFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONWAITFORSECONDSFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundConditionWaitForSeconds&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundConditionWaitForSeconds&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONWAITFORSECONDSFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

