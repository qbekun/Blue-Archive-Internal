#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONATGCHECKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x134A7E0)
#define GROUNDCONDITIONATGCHECKFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1348C30)
#define GROUNDCONDITIONATGCHECKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x134A830)

	inline static constexpr unsigned int GroundConditionATGCheckFormatter_TypeDefinitionIndex = 14314;

	class GroundConditionATGCheckFormatter : public ::System::Collections::Generic::EnumerableHelpers
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionATGCheck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionATGCheck&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONATGCHECKFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONATGCHECKFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionATGCheck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionATGCheck&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONATGCHECKFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

