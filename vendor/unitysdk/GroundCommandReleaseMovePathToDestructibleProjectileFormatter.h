#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F34F0)
#define GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F3540)
#define GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12F1D10)

	inline static constexpr unsigned int GroundCommandReleaseMovePathToDestructibleProjectileFormatter_TypeDefinitionIndex = 14196;

	class GroundCommandReleaseMovePathToDestructibleProjectileFormatter : public ValueCollection
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandReleaseMovePathToDestructibleProjectile&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandReleaseMovePathToDestructibleProjectile&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandReleaseMovePathToDestructibleProjectile&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandReleaseMovePathToDestructibleProjectile&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

