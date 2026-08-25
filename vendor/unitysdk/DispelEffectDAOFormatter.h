#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class DispelEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define DISPELEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1514160)
#define DISPELEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1510A10)
#define DISPELEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15141B0)

	inline static constexpr unsigned int DispelEffectDAOFormatter_TypeDefinitionIndex = 15233;

	class DispelEffectDAOFormatter : public ::System::Diagnostics::DebuggerBrowsableAttribute
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DispelEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DispelEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DISPELEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DISPELEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DispelEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DispelEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DISPELEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

