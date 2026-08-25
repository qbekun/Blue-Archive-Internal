#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class AreaEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define AREAENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1706320)
#define AREAENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17065D0)
#define AREAENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1706A90)
#define AREAENTITYDAOFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1706ED0)

	inline static constexpr unsigned int AreaEntityDAOFormatter_TypeDefinitionIndex = 15481;

	class AreaEntityDAOFormatter : public ::System::Reflection::RuntimePropertyInfo
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREAENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AreaEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AreaEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AREAENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AreaEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AreaEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AREAENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREAENTITYDAOFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

	};

