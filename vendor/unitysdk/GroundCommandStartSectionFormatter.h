#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSTARTSECTIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1323340)
#define GROUNDCOMMANDSTARTSECTIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1321D30)
#define GROUNDCOMMANDSTARTSECTIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1323390)

	inline static constexpr unsigned int GroundCommandStartSectionFormatter_TypeDefinitionIndex = 14247;

	class GroundCommandStartSectionFormatter : public ::System::Collections::Generic::IReadOnlyDictionary`2
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandStartSection&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandStartSection&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSTARTSECTIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSTARTSECTIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandStartSection&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandStartSection&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSTARTSECTIONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

