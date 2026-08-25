#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class TargetAttachedEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define TARGETATTACHEDENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17633B0)
#define TARGETATTACHEDENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1763400)
#define TARGETATTACHEDENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1760000)

	inline static constexpr unsigned int TargetAttachedEntityDAOFormatter_TypeDefinitionIndex = 15520;

	class TargetAttachedEntityDAOFormatter : public __StaticArrayInitTypeSize=76
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TargetAttachedEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TargetAttachedEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TARGETATTACHEDENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TargetAttachedEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TargetAttachedEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TARGETATTACHEDENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TARGETATTACHEDENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

