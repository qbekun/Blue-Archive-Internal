#pragma once
#include "unitysdk.h"

#define SCHOOLCONSTRAINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EEDE0)
#define SCHOOLCONSTRAINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EEE70)
#define SCHOOLCONSTRAINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11EED00)

	inline static constexpr unsigned int SchoolConstraintFormatter_TypeDefinitionIndex = 13484;

	class SchoolConstraintFormatter : public ReadWriteTask
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::SchoolConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::SchoolConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLCONSTRAINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::SchoolConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::SchoolConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLCONSTRAINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLCONSTRAINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

