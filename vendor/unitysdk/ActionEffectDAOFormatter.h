#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::AppData::DAO::Battle { class ActionEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define ACTIONEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD79C0)
#define ACTIONEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7170)
#define ACTIONEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD7A10)

	inline static constexpr unsigned int ActionEffectDAOFormatter_TypeDefinitionIndex = 19854;

	class ActionEffectDAOFormatter : public UnmanagedMemoryStreamForModule
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::ActionEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::ActionEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ACTIONEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::ActionEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::ActionEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ACTIONEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

