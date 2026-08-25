#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class FixedFrameExtraHitTargetProjectileEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define FIXEDFRAMEEXTRAHITTARGETPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x174F850)
#define FIXEDFRAMEEXTRAHITTARGETPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x174E300)
#define FIXEDFRAMEEXTRAHITTARGETPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x174F8A0)

	inline static constexpr unsigned int FixedFrameExtraHitTargetProjectileEntityDAOFormatter_TypeDefinitionIndex = 15512;

	class FixedFrameExtraHitTargetProjectileEntityDAOFormatter : public ::System::Collections::IStructuralComparable
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::FixedFrameExtraHitTargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::FixedFrameExtraHitTargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDFRAMEEXTRAHITTARGETPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXEDFRAMEEXTRAHITTARGETPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::FixedFrameExtraHitTargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::FixedFrameExtraHitTargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDFRAMEEXTRAHITTARGETPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

