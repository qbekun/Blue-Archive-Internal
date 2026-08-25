#pragma once
#include "unitysdk.h"

#define ADAPTATIONCONSTRAINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11E89D0)
#define ADAPTATIONCONSTRAINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11E8A20)
#define ADAPTATIONCONSTRAINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E8600)

	inline static constexpr unsigned int AdaptationConstraintFormatter_TypeDefinitionIndex = 13459;

	class AdaptationConstraintFormatter : public ::System::Reflection::RuntimeAssembly
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::AdaptationConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::AdaptationConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + ADAPTATIONCONSTRAINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::AdaptationConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::AdaptationConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + ADAPTATIONCONSTRAINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAPTATIONCONSTRAINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

