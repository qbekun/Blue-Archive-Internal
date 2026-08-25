#pragma once
#include "../../unitysdk.h"

#define MX_DATA_TIMEATTACKDUNGEONGEASSKILLEFFECTINFO_SET_PASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1860650)
#define MX_DATA_TIMEATTACKDUNGEONGEASSKILLEFFECTINFO_GET_PASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1860660)
#define MX_DATA_TIMEATTACKDUNGEONGEASSKILLEFFECTINFO_SET_PASSIVESKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1860670)
#define MX_DATA_TIMEATTACKDUNGEONGEASSKILLEFFECTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1860500)
#define MX_DATA_TIMEATTACKDUNGEONGEASSKILLEFFECTINFO_GET_PASSIVESKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1860680)

namespace MX::Data
{
	inline static constexpr unsigned int TimeAttackDungeonGeasSkillEffectInfo_TypeDefinitionIndex = 15901;

	class TimeAttackDungeonGeasSkillEffectInfo : public Il2CppObject
	{
	public:
		::System::String* _PassiveSkillGroupId_k__BackingField; // 0x10
		::System::Int32 _PassiveSkillLevel_k__BackingField; // 0x18

		::System::Void set_PassiveSkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASSKILLEFFECTINFO_SET_PASSIVESKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PassiveSkillLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASSKILLEFFECTINFO_GET_PASSIVESKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_PassiveSkillGroupId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASSKILLEFFECTINFO_SET_PASSIVESKILLGROUPID_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASSKILLEFFECTINFO_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_PassiveSkillGroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASSKILLEFFECTINFO_GET_PASSIVESKILLGROUPID_OFFSET))(nullptr);
		}

	};
}

