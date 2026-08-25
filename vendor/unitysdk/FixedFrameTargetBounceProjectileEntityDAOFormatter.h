#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class FixedFrameTargetBounceProjectileEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define FIXEDFRAMETARGETBOUNCEPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1754C10)
#define FIXEDFRAMETARGETBOUNCEPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1754C50)
#define FIXEDFRAMETARGETBOUNCEPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1754CA0)

	inline static constexpr unsigned int FixedFrameTargetBounceProjectileEntityDAOFormatter_TypeDefinitionIndex = 15514;

	class FixedFrameTargetBounceProjectileEntityDAOFormatter : public NodeKeyValueCollection
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXEDFRAMETARGETBOUNCEPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::FixedFrameTargetBounceProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::FixedFrameTargetBounceProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDFRAMETARGETBOUNCEPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::FixedFrameTargetBounceProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::FixedFrameTargetBounceProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDFRAMETARGETBOUNCEPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

