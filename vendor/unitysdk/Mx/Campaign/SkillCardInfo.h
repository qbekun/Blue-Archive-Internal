#pragma once
#include "../../unitysdk.h"

#define MX_CAMPAIGN_SKILLCARDINFO_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x143B580)
#define MX_CAMPAIGN_SKILLCARDINFO_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x143B590)
#define MX_CAMPAIGN_SKILLCARDINFO_SET_REMAINCOOLTIME_OFFSET UNITYSDK_OFFSET(0x143B5A0)
#define MX_CAMPAIGN_SKILLCARDINFO_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x143B5B0)
#define MX_CAMPAIGN_SKILLCARDINFO_SET_HANDINDEX_OFFSET UNITYSDK_OFFSET(0x143B5C0)
#define MX_CAMPAIGN_SKILLCARDINFO_GET_REMAINCOOLTIME_OFFSET UNITYSDK_OFFSET(0x143B5D0)
#define MX_CAMPAIGN_SKILLCARDINFO_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x143B5E0)
#define MX_CAMPAIGN_SKILLCARDINFO_GET_HANDINDEX_OFFSET UNITYSDK_OFFSET(0x143B5F0)

namespace MX::Campaign
{
	inline static constexpr unsigned int SkillCardInfo_TypeDefinitionIndex = 14902;

	class SkillCardInfo : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterId_k__BackingField; // 0x10
		::System::Int32 _HandIndex_k__BackingField; // 0x18
		::System::String* _SkillId_k__BackingField; // 0x20
		::System::Int32 _RemainCoolTime_k__BackingField; // 0x28

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_SKILLCARDINFO_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_SkillId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_SKILLCARDINFO_SET_SKILLID_OFFSET))(str, nullptr);
		}

		::System::Void set_RemainCoolTime(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_SKILLCARDINFO_SET_REMAINCOOLTIME_OFFSET))(arg, nullptr);
		}

		::System::String* get_SkillId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_SKILLCARDINFO_GET_SKILLID_OFFSET))(nullptr);
		}

		::System::Void set_HandIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_SKILLCARDINFO_SET_HANDINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RemainCoolTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_SKILLCARDINFO_GET_REMAINCOOLTIME_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_SKILLCARDINFO_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_HandIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_SKILLCARDINFO_GET_HANDINDEX_OFFSET))(nullptr);
		}

	};
}

