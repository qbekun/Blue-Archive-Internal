#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDRESETPROPANIMATIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F8FD0)
#define GROUNDCOMMANDRESETPROPANIMATIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12F7AD0)
#define GROUNDCOMMANDRESETPROPANIMATIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F9020)

	inline static constexpr unsigned int GroundCommandResetPropAnimationFormatter_TypeDefinitionIndex = 14202;

	class GroundCommandResetPropAnimationFormatter : public ::System::Collections::Generic::InsertionBehavior
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandResetPropAnimation&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandResetPropAnimation&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRESETPROPANIMATIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRESETPROPANIMATIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandResetPropAnimation&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandResetPropAnimation&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRESETPROPANIMATIONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

