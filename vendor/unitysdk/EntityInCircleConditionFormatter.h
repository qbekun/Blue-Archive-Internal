#pragma once
#include "unitysdk.h"

#define ENTITYINCIRCLECONDITIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1225100)
#define ENTITYINCIRCLECONDITIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1225530)
#define ENTITYINCIRCLECONDITIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1225580)

	inline static constexpr unsigned int EntityInCircleConditionFormatter_TypeDefinitionIndex = 13760;

	class EntityInCircleConditionFormatter : public ::System::Diagnostics::Tracing::EventSource
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITYINCIRCLECONDITIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::EntityInCircleCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::EntityInCircleCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYINCIRCLECONDITIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::EntityInCircleCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::EntityInCircleCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYINCIRCLECONDITIONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

