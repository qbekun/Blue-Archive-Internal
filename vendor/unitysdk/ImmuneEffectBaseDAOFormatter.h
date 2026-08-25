#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ImmuneEffectBaseDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define IMMUNEEFFECTBASEDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1576010)
#define IMMUNEEFFECTBASEDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1576060)
#define IMMUNEEFFECTBASEDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1572890)

	inline static constexpr unsigned int ImmuneEffectBaseDAOFormatter_TypeDefinitionIndex = 15273;

	class ImmuneEffectBaseDAOFormatter : public ::System::Buffers::IBufferWriter`1
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ImmuneEffectBaseDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ImmuneEffectBaseDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUNEEFFECTBASEDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ImmuneEffectBaseDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ImmuneEffectBaseDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUNEEFFECTBASEDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMUNEEFFECTBASEDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

