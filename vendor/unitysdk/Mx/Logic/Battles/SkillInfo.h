#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_SKILLINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12A98E0)
#define MX_LOGIC_BATTLES_SKILLINFO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12AA100)
#define MX_LOGIC_BATTLES_SKILLINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12AA940)
#define MX_LOGIC_BATTLES_SKILLINFO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12AA950)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int SkillInfo_TypeDefinitionIndex = 14119;

	class SkillInfo : public Il2CppObject
	{
	public:
		::System::String* SkillGroupId; // 0x10
		::System::Int32 SkillLevel; // 0x18
		::System::Boolean UseToDefaultNotUsingSkillTargetRule; // 0x1C

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::SkillInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::SkillInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLINFO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::SkillInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::SkillInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLINFO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLINFO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLINFO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

