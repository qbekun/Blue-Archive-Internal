#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class BeamEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define BEAMENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17D3470)
#define BEAMENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D4880)
#define BEAMENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D48D0)

	inline static constexpr unsigned int BeamEntityDAOFormatter_TypeDefinitionIndex = 15578;

	class BeamEntityDAOFormatter : public ::System::Reflection::Emit::SignatureHelper
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAMENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BeamEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BeamEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BEAMENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BeamEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BeamEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BEAMENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

