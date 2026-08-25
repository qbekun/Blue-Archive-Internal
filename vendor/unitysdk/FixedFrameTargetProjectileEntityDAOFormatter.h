#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class FixedFrameTargetProjectileEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define FIXEDFRAMETARGETPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x174A630)
#define FIXEDFRAMETARGETPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x174A680)
#define FIXEDFRAMETARGETPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x174A5F0)

	inline static constexpr unsigned int FixedFrameTargetProjectileEntityDAOFormatter_TypeDefinitionIndex = 15510;

	class FixedFrameTargetProjectileEntityDAOFormatter : public DictionaryNode
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::FixedFrameTargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::FixedFrameTargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDFRAMETARGETPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::FixedFrameTargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::FixedFrameTargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDFRAMETARGETPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXEDFRAMETARGETPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

