#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_LIMITBREAKSKILLDATAINFO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13021A0)
#define MX_LOGIC_BATTLES_LIMITBREAKSKILLDATAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x13036D0)
#define MX_LOGIC_BATTLES_LIMITBREAKSKILLDATAINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1303720)
#define MX_LOGIC_BATTLES_LIMITBREAKSKILLDATAINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13046E0)
#define MX_LOGIC_BATTLES_LIMITBREAKSKILLDATAINFO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x13046F0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int LimitBreakSkillDataInfo_TypeDefinitionIndex = 14217;

	class LimitBreakSkillDataInfo : public Il2CppObject
	{
	public:
		::System::Int64 LimitGaugeCost; // 0x30

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::LimitBreakSkillDataInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::LimitBreakSkillDataInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITBREAKSKILLDATAINFO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITBREAKSKILLDATAINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::LimitBreakSkillDataInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::LimitBreakSkillDataInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITBREAKSKILLDATAINFO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITBREAKSKILLDATAINFO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITBREAKSKILLDATAINFO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

