#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDTUTORIALFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1327470)
#define GROUNDCOMMANDTUTORIALFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1325EC0)
#define GROUNDCOMMANDTUTORIALFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13274C0)

	inline static constexpr unsigned int GroundCommandTutorialFormatter_TypeDefinitionIndex = 14251;

	class GroundCommandTutorialFormatter : public ::System::Collections::Generic::KeyValuePair
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandTutorial&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandTutorial&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTUTORIALFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTUTORIALFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandTutorial&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandTutorial&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTUTORIALFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

