#pragma once
#include "unitysdk.h"

#define ECHELONCONSTRAINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EBF40)
#define ECHELONCONSTRAINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11EBE60)
#define ECHELONCONSTRAINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EBFD0)

	inline static constexpr unsigned int EchelonConstraintFormatter_TypeDefinitionIndex = 13469;

	class EchelonConstraintFormatter : public ::System::Diagnostics::StackTrace
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::EchelonConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::EchelonConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONCONSTRAINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONCONSTRAINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::EchelonConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::EchelonConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONCONSTRAINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

