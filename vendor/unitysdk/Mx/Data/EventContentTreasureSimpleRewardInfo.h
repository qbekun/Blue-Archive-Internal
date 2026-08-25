#pragma once
#include "../../unitysdk.h"

#define MX_DATA_EVENTCONTENTTREASURESIMPLEREWARDINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1846870)
#define MX_DATA_EVENTCONTENTTREASURESIMPLEREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1846880)
#define MX_DATA_EVENTCONTENTTREASURESIMPLEREWARDINFO_GET_ROUND_OFFSET UNITYSDK_OFFSET(0x18468D0)
#define MX_DATA_EVENTCONTENTTREASURESIMPLEREWARDINFO_GET_LOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x18468E0)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentTreasureSimpleRewardInfo_TypeDefinitionIndex = 15813;

	class EventContentTreasureSimpleRewardInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _Rewards_k__BackingField; // 0x10
		::System::Int32 _Round_k__BackingField; // 0x18
		::System::String* _LocalizeCodeID_k__BackingField; // 0x20

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASURESIMPLEREWARDINFO_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASURESIMPLEREWARDINFO_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Int32 get_Round()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASURESIMPLEREWARDINFO_GET_ROUND_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeCodeID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASURESIMPLEREWARDINFO_GET_LOCALIZECODEID_OFFSET))(nullptr);
		}

	};
}

