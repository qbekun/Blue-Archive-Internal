#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONCHARACTERSDEADFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1351600)
#define GROUNDCONDITIONCHARACTERSDEADFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x134FB20)
#define GROUNDCONDITIONCHARACTERSDEADFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1351650)

	inline static constexpr unsigned int GroundConditionCharactersDeadFormatter_TypeDefinitionIndex = 14324;

	class GroundConditionCharactersDeadFormatter : public Enumerator
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionCharactersDead&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionCharactersDead&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHARACTERSDEADFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHARACTERSDEADFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionCharactersDead&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionCharactersDead&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHARACTERSDEADFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

