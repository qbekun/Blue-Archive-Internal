#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_SETSKILLDECKDECAGRAMINITABILITYINFO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1314500)
#define MX_LOGIC_BATTLES_SETSKILLDECKDECAGRAMINITABILITYINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1314700)
#define MX_LOGIC_BATTLES_SETSKILLDECKDECAGRAMINITABILITYINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1314FE0)
#define MX_LOGIC_BATTLES_SETSKILLDECKDECAGRAMINITABILITYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1314FF0)
#define MX_LOGIC_BATTLES_SETSKILLDECKDECAGRAMINITABILITYINFO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1315000)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int SetSkillDeckDecagramInitAbilityInfo_TypeDefinitionIndex = 14230;

	class SetSkillDeckDecagramInitAbilityInfo : public Il2CppObject
	{
	public:
		::System::String* skillGroupId; // 0x10
		::System::Int32 skillLevel; // 0x18

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SETSKILLDECKDECAGRAMINITABILITYINFO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::SetSkillDeckDecagramInitAbilityInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::SetSkillDeckDecagramInitAbilityInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SETSKILLDECKDECAGRAMINITABILITYINFO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SETSKILLDECKDECAGRAMINITABILITYINFO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SETSKILLDECKDECAGRAMINITABILITYINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::SetSkillDeckDecagramInitAbilityInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::SetSkillDeckDecagramInitAbilityInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SETSKILLDECKDECAGRAMINITABILITYINFO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

