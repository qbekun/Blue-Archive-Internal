#pragma once
#include "unitysdk.h"

#define SPAWNSOURCECONSTRAINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EFBA0)
#define SPAWNSOURCECONSTRAINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11EF770)
#define SPAWNSOURCECONSTRAINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EFBF0)

	inline static constexpr unsigned int SpawnSourceConstraintFormatter_TypeDefinitionIndex = 13487;

	class SpawnSourceConstraintFormatter : public FindPredicate
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::SpawnSourceConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::SpawnSourceConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + SPAWNSOURCECONSTRAINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPAWNSOURCECONSTRAINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::SpawnSourceConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::SpawnSourceConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + SPAWNSOURCECONSTRAINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

