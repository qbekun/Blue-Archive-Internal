#pragma once
#include "unitysdk.h"

#define BLACKBOARDCONSTRAINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E94A0)
#define BLACKBOARDCONSTRAINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EA2D0)
#define BLACKBOARDCONSTRAINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EA320)

	inline static constexpr unsigned int BlackboardConstraintFormatter_TypeDefinitionIndex = 13462;

	class BlackboardConstraintFormatter : public ::System::Globalization::CultureNotFoundException
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDCONSTRAINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::BlackboardConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::BlackboardConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDCONSTRAINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::BlackboardConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::BlackboardConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDCONSTRAINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

