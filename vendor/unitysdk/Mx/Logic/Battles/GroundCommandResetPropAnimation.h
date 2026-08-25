#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_GROUNDCOMMANDRESETPROPANIMATION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F6960)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDRESETPROPANIMATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12F7900)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDRESETPROPANIMATION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12F7910)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDRESETPROPANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x12F7B10)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDRESETPROPANIMATION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F7B60)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandResetPropAnimation_TypeDefinitionIndex = 14203;

	class GroundCommandResetPropAnimation : public Il2CppObject
	{
	public:
		::System::Int32 propKey; // 0x30
		::System::String* animationName; // 0x38

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandResetPropAnimation&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandResetPropAnimation&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDRESETPROPANIMATION_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDRESETPROPANIMATION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDRESETPROPANIMATION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDRESETPROPANIMATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandResetPropAnimation&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandResetPropAnimation&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDRESETPROPANIMATION_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

