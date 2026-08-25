#pragma once
#include "unitysdk.h"

namespace MX::Data { class WorldRaidSeasonInfo; }

#define UIWORLDRAIDREWARDLISTSCROLLVIEWCONTROLLER_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0xC081F0)
#define UIWORLDRAIDREWARDLISTSCROLLVIEWCONTROLLER_ISEXISTCANRECEIVECLEARREWARD_OFFSET UNITYSDK_OFFSET(0xC08200)
#define UIWORLDRAIDREWARDLISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC08490)
#define UIWORLDRAIDREWARDLISTSCROLLVIEWCONTROLLER_SET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0xC084D0)

	inline static constexpr unsigned int UIWorldRaidRewardListScrollViewController_TypeDefinitionIndex = 8796;

	class UIWorldRaidRewardListScrollViewController : public ::System::Xml::LineInfo
	{
	public:
		::MX::Data::WorldRaidSeasonInfo* _SeasonInfo_k__BackingField; // 0x90

		::MX::Data::WorldRaidSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::WorldRaidSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDREWARDLISTSCROLLVIEWCONTROLLER_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Boolean IsExistCanReceiveClearReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDREWARDLISTSCROLLVIEWCONTROLLER_ISEXISTCANRECEIVECLEARREWARD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDREWARDLISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SeasonInfo(::MX::Data::WorldRaidSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::WorldRaidSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDREWARDLISTSCROLLVIEWCONTROLLER_SET_SEASONINFO_OFFSET))(arg, nullptr);
		}

	};

