#pragma once
#include "unitysdk.h"

#define HPRATECONSTRAINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11ED970)
#define HPRATECONSTRAINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EDA00)
#define HPRATECONSTRAINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11ED890)

	inline static constexpr unsigned int HPRateConstraintFormatter_TypeDefinitionIndex = 13478;

	class HPRateConstraintFormatter : public ::System::Collections::Generic::NullableEqualityComparer`1
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::HPRateConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::HPRateConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + HPRATECONSTRAINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::HPRateConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::HPRateConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + HPRATECONSTRAINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPRATECONSTRAINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

