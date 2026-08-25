#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETACTIVESKILLCARDCOLIDER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F9070)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETACTIVESKILLCARDCOLIDER_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12F9960)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETACTIVESKILLCARDCOLIDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12F9B60)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETACTIVESKILLCARDCOLIDER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F9B70)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETACTIVESKILLCARDCOLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12FA780)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandSetActiveSkillCardColider_TypeDefinitionIndex = 14205;

	class GroundCommandSetActiveSkillCardColider : public Il2CppObject
	{
	public:
		::System::Boolean Active; // 0x30

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetActiveSkillCardColider&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetActiveSkillCardColider&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETACTIVESKILLCARDCOLIDER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETACTIVESKILLCARDCOLIDER_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETACTIVESKILLCARDCOLIDER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetActiveSkillCardColider&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetActiveSkillCardColider&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETACTIVESKILLCARDCOLIDER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETACTIVESKILLCARDCOLIDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

