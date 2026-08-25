#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class FormConversionEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define FORMCONVERSIONEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x154BCF0)
#define FORMCONVERSIONEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x154A470)
#define FORMCONVERSIONEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x154BD40)

	inline static constexpr unsigned int FormConversionEffectDAOFormatter_TypeDefinitionIndex = 15255;

	class FormConversionEffectDAOFormatter : public QueueEnumerator
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::FormConversionEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::FormConversionEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FORMCONVERSIONEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMCONVERSIONEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::FormConversionEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::FormConversionEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FORMCONVERSIONEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

