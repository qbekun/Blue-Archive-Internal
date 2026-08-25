#pragma once
#include "unitysdk.h"

#define BULLETCONSTRAINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11EA900)
#define BULLETCONSTRAINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EA9E0)
#define BULLETCONSTRAINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EAA70)

	inline static constexpr unsigned int BulletConstraintFormatter_TypeDefinitionIndex = 13464;

	class BulletConstraintFormatter : public ::System::Globalization::HebrewNumberParsingContext
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BULLETCONSTRAINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::BulletConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::BulletConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + BULLETCONSTRAINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::BulletConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::BulletConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + BULLETCONSTRAINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

