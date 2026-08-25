#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDPLAYTRANSITION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2178F30)
#define GROUNDCOMMANDPLAYTRANSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2178F50)
#define GROUNDCOMMANDPLAYTRANSITION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x2178FA0)
#define GROUNDCOMMANDPLAYTRANSITION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x21791A0)
#define GROUNDCOMMANDPLAYTRANSITION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x21791B0)
#define GROUNDCOMMANDPLAYTRANSITION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x217A610)

	inline static constexpr unsigned int GroundCommandPlayTransition_TypeDefinitionIndex = 4039;

	class GroundCommandPlayTransition : public Il2CppObject
	{
	public:
		::System::String* resourceName; // 0x30
		::System::Boolean IsUI; // 0x38

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTRANSITION_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTRANSITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTRANSITION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTRANSITION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandPlayTransition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandPlayTransition&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTRANSITION_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandPlayTransition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandPlayTransition&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTRANSITION_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

