#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class StatusAddWithParameterEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define STATUSADDWITHPARAMETEREFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1633DB0)
#define STATUSADDWITHPARAMETEREFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1633E00)
#define STATUSADDWITHPARAMETEREFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1633D70)

	inline static constexpr unsigned int StatusAddWithParameterEffectDAOFormatter_TypeDefinitionIndex = 15325;

	class StatusAddWithParameterEffectDAOFormatter : public ::System::IO::Enumeration::FileSystemEnumerableFactory
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::StatusAddWithParameterEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::StatusAddWithParameterEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSADDWITHPARAMETEREFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::StatusAddWithParameterEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::StatusAddWithParameterEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSADDWITHPARAMETEREFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATUSADDWITHPARAMETEREFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

