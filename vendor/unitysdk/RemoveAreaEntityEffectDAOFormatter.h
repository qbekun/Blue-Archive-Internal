#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class RemoveAreaEntityEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define REMOVEAREAENTITYEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16C7A10)
#define REMOVEAREAENTITYEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16C7A50)
#define REMOVEAREAENTITYEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16C7AA0)

	inline static constexpr unsigned int RemoveAreaEntityEffectDAOFormatter_TypeDefinitionIndex = 15381;

	class RemoveAreaEntityEffectDAOFormatter : public ::System::IO::SearchTarget
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REMOVEAREAENTITYEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::RemoveAreaEntityEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::RemoveAreaEntityEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + REMOVEAREAENTITYEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::RemoveAreaEntityEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::RemoveAreaEntityEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + REMOVEAREAENTITYEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

