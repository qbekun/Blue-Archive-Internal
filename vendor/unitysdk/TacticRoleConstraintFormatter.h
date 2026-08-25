#pragma once
#include "unitysdk.h"

#define TACTICROLECONSTRAINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F2550)
#define TACTICROLECONSTRAINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F2120)
#define TACTICROLECONSTRAINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F25A0)

	inline static constexpr unsigned int TacticRoleConstraintFormatter_TypeDefinitionIndex = 13495;

	class TacticRoleConstraintFormatter : public __StaticArrayInitTypeSize=56
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::TacticRoleConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::TacticRoleConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + TACTICROLECONSTRAINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TACTICROLECONSTRAINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::TacticRoleConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::TacticRoleConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + TACTICROLECONSTRAINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

