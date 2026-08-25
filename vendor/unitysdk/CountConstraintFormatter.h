#pragma once
#include "unitysdk.h"

#define COUNTCONSTRAINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EB380)
#define COUNTCONSTRAINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EB410)
#define COUNTCONSTRAINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11EB2A0)

	inline static constexpr unsigned int CountConstraintFormatter_TypeDefinitionIndex = 13467;

	class CountConstraintFormatter : public ::System::Globalization::TaiwanCalendar
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::CountConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::CountConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTCONSTRAINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::CountConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::CountConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTCONSTRAINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTCONSTRAINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

