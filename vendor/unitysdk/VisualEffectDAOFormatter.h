#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::AppData::DAO::Battle { class VisualEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define VISUALEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CEB4D0)
#define VISUALEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CEC980)
#define VISUALEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CEC9D0)

	inline static constexpr unsigned int VisualEffectDAOFormatter_TypeDefinitionIndex = 19875;

	class VisualEffectDAOFormatter : public __StaticArrayInitTypeSize=2350
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VISUALEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::VisualEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::VisualEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + VISUALEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::VisualEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::VisualEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + VISUALEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

