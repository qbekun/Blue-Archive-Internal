#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class SummonEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define SUMMONENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1789C00)
#define SUMMONENTITYDAOFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x178A230)
#define SUMMONENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x178A490)
#define SUMMONENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1789BC0)

	inline static constexpr unsigned int SummonEntityDAOFormatter_TypeDefinitionIndex = 15544;

	class SummonEntityDAOFormatter : public __StaticArrayInitTypeSize=16
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SummonEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SummonEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SUMMONENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUMMONENTITYDAOFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SummonEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SummonEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SUMMONENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUMMONENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

