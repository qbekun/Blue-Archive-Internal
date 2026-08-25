#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ImmuneEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define IMMUNEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x157D110)
#define IMMUNEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1586130)
#define IMMUNEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1586180)

	inline static constexpr unsigned int ImmuneEffectDAOFormatter_TypeDefinitionIndex = 15275;

	class ImmuneEffectDAOFormatter : public ::System::Buffers::OperationStatus
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMUNEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ImmuneEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ImmuneEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUNEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ImmuneEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ImmuneEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUNEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

