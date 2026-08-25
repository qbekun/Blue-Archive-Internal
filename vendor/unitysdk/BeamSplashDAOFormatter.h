#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class BeamSplashDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define BEAMSPLASHDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17D5E70)
#define BEAMSPLASHDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D6550)
#define BEAMSPLASHDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D65A0)

	inline static constexpr unsigned int BeamSplashDAOFormatter_TypeDefinitionIndex = 15583;

	class BeamSplashDAOFormatter : public ::System::Reflection::Emit::TypeBuilder
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAMSPLASHDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BeamSplashDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BeamSplashDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BEAMSPLASHDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BeamSplashDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BeamSplashDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BEAMSPLASHDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

