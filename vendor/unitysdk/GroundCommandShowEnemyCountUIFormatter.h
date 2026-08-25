#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSHOWENEMYCOUNTUIFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x217EA30)
#define GROUNDCOMMANDSHOWENEMYCOUNTUIFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x217DDE0)
#define GROUNDCOMMANDSHOWENEMYCOUNTUIFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x217EA80)

	inline static constexpr unsigned int GroundCommandShowEnemyCountUIFormatter_TypeDefinitionIndex = 4042;

	class GroundCommandShowEnemyCountUIFormatter : public ::System::Collections::Generic::DictionaryValueCollectionDebugView`2
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandShowEnemyCountUI&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandShowEnemyCountUI&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWENEMYCOUNTUIFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWENEMYCOUNTUIFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandShowEnemyCountUI&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandShowEnemyCountUI&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWENEMYCOUNTUIFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

