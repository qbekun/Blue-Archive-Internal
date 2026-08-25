#pragma once
#include "unitysdk.h"

#define SQUADTYPECONSTRAINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F02B0)
#define SQUADTYPECONSTRAINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F01D0)
#define SQUADTYPECONSTRAINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F0340)

	inline static constexpr unsigned int SquadTypeConstraintFormatter_TypeDefinitionIndex = 13489;

	class SquadTypeConstraintFormatter : public DelegateEnumerator
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::SquadTypeConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::SquadTypeConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + SQUADTYPECONSTRAINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQUADTYPECONSTRAINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::SquadTypeConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::SquadTypeConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + SQUADTYPECONSTRAINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

