#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class StartStatusLevelIndicatorEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define STARTSTATUSLEVELINDICATOREFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x168A6F0)
#define STARTSTATUSLEVELINDICATOREFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1687420)
#define STARTSTATUSLEVELINDICATOREFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x168A740)

	inline static constexpr unsigned int StartStatusLevelIndicatorEffectDAOFormatter_TypeDefinitionIndex = 15361;

	class StartStatusLevelIndicatorEffectDAOFormatter : public <>c__DisplayClass4_0
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::StartStatusLevelIndicatorEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::StartStatusLevelIndicatorEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STARTSTATUSLEVELINDICATOREFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STARTSTATUSLEVELINDICATOREFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::StartStatusLevelIndicatorEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::StartStatusLevelIndicatorEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STARTSTATUSLEVELINDICATOREFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

