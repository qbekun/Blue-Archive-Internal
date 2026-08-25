#pragma once
#include "unitysdk.h"

#define TACTICENTITYCONSTRAINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F0A50)
#define TACTICENTITYCONSTRAINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F0AE0)
#define TACTICENTITYCONSTRAINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F0970)

	inline static constexpr unsigned int TacticEntityConstraintFormatter_TypeDefinitionIndex = 13491;

	class TacticEntityConstraintFormatter : public __StaticArrayInitTypeSize=42
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::TacticEntityConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::TacticEntityConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + TACTICENTITYCONSTRAINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::TacticEntityConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::TacticEntityConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + TACTICENTITYCONSTRAINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TACTICENTITYCONSTRAINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

