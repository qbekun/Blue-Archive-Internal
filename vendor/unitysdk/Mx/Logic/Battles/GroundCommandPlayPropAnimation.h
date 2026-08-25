#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_GROUNDCOMMANDPLAYPROPANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x12EE3B0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDPLAYPROPANIMATION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12EE400)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDPLAYPROPANIMATION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12EF3D0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDPLAYPROPANIMATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12EF5D0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDPLAYPROPANIMATION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12EF5E0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandPlayPropAnimation_TypeDefinitionIndex = 14195;

	class GroundCommandPlayPropAnimation : public Il2CppObject
	{
	public:
		::System::Int32 repeatCount; // 0x30
		::System::Int32 propKey; // 0x34
		::System::String* animationName; // 0x38
		::System::Boolean stopWhenBattleEnd; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDPLAYPROPANIMATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandPlayPropAnimation&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandPlayPropAnimation&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDPLAYPROPANIMATION_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDPLAYPROPANIMATION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDPLAYPROPANIMATION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandPlayPropAnimation&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandPlayPropAnimation&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDPLAYPROPANIMATION_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

