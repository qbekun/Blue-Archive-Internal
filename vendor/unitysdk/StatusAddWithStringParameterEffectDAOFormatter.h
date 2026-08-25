#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class StatusAddWithStringParameterEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define STATUSADDWITHSTRINGPARAMETEREFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16398A0)
#define STATUSADDWITHSTRINGPARAMETEREFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16341F0)
#define STATUSADDWITHSTRINGPARAMETEREFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16398F0)

	inline static constexpr unsigned int StatusAddWithStringParameterEffectDAOFormatter_TypeDefinitionIndex = 15327;

	class StatusAddWithStringParameterEffectDAOFormatter : public ::System::IO::Enumeration::FileSystemName
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::StatusAddWithStringParameterEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::StatusAddWithStringParameterEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSADDWITHSTRINGPARAMETEREFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATUSADDWITHSTRINGPARAMETEREFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::StatusAddWithStringParameterEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::StatusAddWithStringParameterEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSADDWITHSTRINGPARAMETEREFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

