#pragma once
#include "unitysdk.h"

#define PERSONALITYIDCONSTRAINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11EE340)
#define PERSONALITYIDCONSTRAINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EE680)
#define PERSONALITYIDCONSTRAINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EE730)

	inline static constexpr unsigned int PersonalityIdConstraintFormatter_TypeDefinitionIndex = 13480;

	class PersonalityIdConstraintFormatter : public ::System::IO::DriveNotFoundException
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERSONALITYIDCONSTRAINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::PersonalityIdConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::PersonalityIdConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + PERSONALITYIDCONSTRAINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::PersonalityIdConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::PersonalityIdConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + PERSONALITYIDCONSTRAINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

