#pragma once
#include "unitysdk.h"

#define TACTICRANGECONSTRAINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F1810)
#define TACTICRANGECONSTRAINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F13E0)
#define TACTICRANGECONSTRAINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F1860)

	inline static constexpr unsigned int TacticRangeConstraintFormatter_TypeDefinitionIndex = 13493;

	class TacticRangeConstraintFormatter : public __StaticArrayInitTypeSize=48
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::TacticRangeConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::TacticRangeConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + TACTICRANGECONSTRAINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TACTICRANGECONSTRAINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::TacticRangeConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::TacticRangeConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + TACTICRANGECONSTRAINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

