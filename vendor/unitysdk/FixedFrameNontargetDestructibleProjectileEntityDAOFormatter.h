#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class FixedFrameNontargetDestructibleProjectileEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define FIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x175F760)
#define FIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x175F7B0)
#define FIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x175AB30)

	inline static constexpr unsigned int FixedFrameNontargetDestructibleProjectileEntityDAOFormatter_TypeDefinitionIndex = 15518;

	class FixedFrameNontargetDestructibleProjectileEntityDAOFormatter : public ::System::Collections::IStructuralEquatable
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::FixedFrameNontargetDestructibleProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::FixedFrameNontargetDestructibleProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::FixedFrameNontargetDestructibleProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::FixedFrameNontargetDestructibleProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

