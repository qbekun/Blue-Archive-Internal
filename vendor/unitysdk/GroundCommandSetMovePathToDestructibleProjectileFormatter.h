#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x130B820)
#define GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x130B7D0)
#define GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x130B870)

	inline static constexpr unsigned int GroundCommandSetMovePathToDestructibleProjectileFormatter_TypeDefinitionIndex = 14220;

	class GroundCommandSetMovePathToDestructibleProjectileFormatter : public Enumerator
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetMovePathToDestructibleProjectile&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetMovePathToDestructibleProjectile&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetMovePathToDestructibleProjectile&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetMovePathToDestructibleProjectile&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

