#pragma once
#include "unitysdk.h"

#define AURAPROCEDUREDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13DBFE0)
#define AURAPROCEDUREDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13DBB40)
#define AURAPROCEDUREDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13DC030)

	inline static constexpr unsigned int AuraProcedureDAOFormatter_TypeDefinitionIndex = 14521;

	class AuraProcedureDAOFormatter : public ::System::Reflection::Emit::ILGenerator
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Skills::AuraProcedureDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Skills::AuraProcedureDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AURAPROCEDUREDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AURAPROCEDUREDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Skills::AuraProcedureDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Skills::AuraProcedureDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AURAPROCEDUREDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

