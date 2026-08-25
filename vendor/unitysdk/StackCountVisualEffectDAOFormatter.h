#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::AppData::DAO::Battle { class StackCountVisualEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define STACKCOUNTVISUALEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CDEEA0)
#define STACKCOUNTVISUALEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CDF420)
#define STACKCOUNTVISUALEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CDF470)

	inline static constexpr unsigned int StackCountVisualEffectDAOFormatter_TypeDefinitionIndex = 19860;

	class StackCountVisualEffectDAOFormatter : public ::System::IO::Enumeration::FileSystemEnumerable`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STACKCOUNTVISUALEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::StackCountVisualEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::StackCountVisualEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STACKCOUNTVISUALEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::StackCountVisualEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::StackCountVisualEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STACKCOUNTVISUALEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

