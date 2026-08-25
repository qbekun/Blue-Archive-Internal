#pragma once
#include "unitysdk.h"

#define ECHELONSLOTCONSTRAINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11EC9E0)
#define ECHELONSLOTCONSTRAINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11ECD30)
#define ECHELONSLOTCONSTRAINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11ECE00)

	inline static constexpr unsigned int EchelonSlotConstraintFormatter_TypeDefinitionIndex = 13471;

	class EchelonSlotConstraintFormatter : public ::System::Diagnostics::Tracing::EventLevel
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTCONSTRAINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::EchelonSlotConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::EchelonSlotConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTCONSTRAINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::EchelonSlotConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::EchelonSlotConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTCONSTRAINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

