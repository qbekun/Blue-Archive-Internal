#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class FixedFrameNontargetProjectileEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define FIXEDFRAMENONTARGETPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x175A0D0)
#define FIXEDFRAMENONTARGETPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x175A130)
#define FIXEDFRAMENONTARGETPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x175A190)

	inline static constexpr unsigned int FixedFrameNontargetProjectileEntityDAOFormatter_TypeDefinitionIndex = 15516;

	class FixedFrameNontargetProjectileEntityDAOFormatter : public NodeEnumerator
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::FixedFrameNontargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::FixedFrameNontargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDFRAMENONTARGETPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::FixedFrameNontargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::FixedFrameNontargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDFRAMENONTARGETPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXEDFRAMENONTARGETPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

