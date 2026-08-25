#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONCHARACTERPHASECHANGEDFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x134F800)
#define GROUNDCONDITIONCHARACTERPHASECHANGEDFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x134DF70)
#define GROUNDCONDITIONCHARACTERPHASECHANGEDFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x134F850)

	inline static constexpr unsigned int GroundConditionCharacterPhaseChangedFormatter_TypeDefinitionIndex = 14322;

	class GroundConditionCharacterPhaseChangedFormatter : public ::System::Collections::Generic::QueueDebugView`1
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionCharacterPhaseChanged&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionCharacterPhaseChanged&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHARACTERPHASECHANGEDFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHARACTERPHASECHANGEDFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionCharacterPhaseChanged&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionCharacterPhaseChanged&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHARACTERPHASECHANGEDFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

