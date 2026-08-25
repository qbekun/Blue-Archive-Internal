#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSKIPBATTLERESULTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x21835E0)
#define GROUNDCOMMANDSKIPBATTLERESULTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x21841B0)
#define GROUNDCOMMANDSKIPBATTLERESULTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2184200)

	inline static constexpr unsigned int GroundCommandSkipBattleResultFormatter_TypeDefinitionIndex = 4054;

	class GroundCommandSkipBattleResultFormatter : public ::System::Collections::Generic::IEnumerator`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPBATTLERESULTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandSkipBattleResult&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandSkipBattleResult&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPBATTLERESULTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandSkipBattleResult&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandSkipBattleResult&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPBATTLERESULTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

