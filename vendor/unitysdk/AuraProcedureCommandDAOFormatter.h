#pragma once
#include "unitysdk.h"

#define AURAPROCEDURECOMMANDDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13DD7F0)
#define AURAPROCEDURECOMMANDDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13DD830)
#define AURAPROCEDURECOMMANDDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13DD8E0)

	inline static constexpr unsigned int AuraProcedureCommandDAOFormatter_TypeDefinitionIndex = 14525;

	class AuraProcedureCommandDAOFormatter : public ::System::Reflection::Emit::FieldBuilder
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AURAPROCEDURECOMMANDDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Skills::AuraProcedureCommandDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Skills::AuraProcedureCommandDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AURAPROCEDURECOMMANDDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Skills::AuraProcedureCommandDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Skills::AuraProcedureCommandDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AURAPROCEDURECOMMANDDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

