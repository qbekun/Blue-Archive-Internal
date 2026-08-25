#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDACTIVATEAREAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12A8410)
#define GROUNDCOMMANDACTIVATEAREAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12A8460)
#define GROUNDCOMMANDACTIVATEAREAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12A83D0)

	inline static constexpr unsigned int GroundCommandActivateAreaFormatter_TypeDefinitionIndex = 14110;

	class GroundCommandActivateAreaFormatter : public SortedListDebugView
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandActivateArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandActivateArea&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATEAREAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandActivateArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandActivateArea&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATEAREAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATEAREAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

