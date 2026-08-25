#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSHOWBATTLEUIFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x217D230)
#define GROUNDCOMMANDSHOWBATTLEUIFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x217D280)
#define GROUNDCOMMANDSHOWBATTLEUIFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x217C860)

	inline static constexpr unsigned int GroundCommandShowBattleUIFormatter_TypeDefinitionIndex = 4040;

	class GroundCommandShowBattleUIFormatter : public ::System::Collections::Generic::DictionaryKeyCollectionDebugView`2
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandShowBattleUI&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandShowBattleUI&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWBATTLEUIFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandShowBattleUI&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandShowBattleUI&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWBATTLEUIFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWBATTLEUIFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

