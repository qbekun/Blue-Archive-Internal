#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ProjectileEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define PROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1724310)
#define PROJECTILEENTITYDAOFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1724850)
#define PROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1724210)
#define PROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1724A50)

	inline static constexpr unsigned int ProjectileEntityDAOFormatter_TypeDefinitionIndex = 15494;

	class ProjectileEntityDAOFormatter : public <InternalReadAllBytesAsync>d__71
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEENTITYDAOFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

