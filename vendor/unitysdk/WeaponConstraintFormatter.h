#pragma once
#include "unitysdk.h"

#define WEAPONCONSTRAINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3B00)
#define WEAPONCONSTRAINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F3BE0)
#define WEAPONCONSTRAINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F3C70)

	inline static constexpr unsigned int WeaponConstraintFormatter_TypeDefinitionIndex = 13502;

	class WeaponConstraintFormatter : public <PrivateImplementationDetails>
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONCONSTRAINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::WeaponConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::WeaponConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONCONSTRAINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::WeaponConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::WeaponConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONCONSTRAINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

