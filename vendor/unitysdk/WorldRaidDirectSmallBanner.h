#pragma once
#include "unitysdk.h"

namespace MX::Data { class WorldRaidSeasonInfo; }
namespace MX::NetworkProtocol { class NotificationEventContentReddotResponse; }

#define WORLDRAIDDIRECTSMALLBANNER_ISACTIVATEDBANNER_OFFSET UNITYSDK_OFFSET(0x26411B0)
#define WORLDRAIDDIRECTSMALLBANNER_GETBANNERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x2641200)
#define WORLDRAIDDIRECTSMALLBANNER_SET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x26412A0)
#define WORLDRAIDDIRECTSMALLBANNER_ONCLICKBANNER_OFFSET UNITYSDK_OFFSET(0x26412B0)
#define WORLDRAIDDIRECTSMALLBANNER_SETREDDOTENABLED_OFFSET UNITYSDK_OFFSET(0x26415D0)
#define WORLDRAIDDIRECTSMALLBANNER_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x2641710)
#define WORLDRAIDDIRECTSMALLBANNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2641720)

	inline static constexpr unsigned int WorldRaidDirectSmallBanner_TypeDefinitionIndex = 6602;

	class WorldRaidDirectSmallBanner : public Il2CppObject
	{
	public:
		::MX::Data::WorldRaidSeasonInfo* _SeasonInfo_k__BackingField; // 0x30

		::System::Boolean IsActivatedBanner(::System::DateTime* arg)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDDIRECTSMALLBANNER_ISACTIVATEDBANNER_OFFSET))(arg, nullptr);
		}

		::System::String* GetBannerImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDDIRECTSMALLBANNER_GETBANNERIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void set_SeasonInfo(::MX::Data::WorldRaidSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::WorldRaidSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDDIRECTSMALLBANNER_SET_SEASONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickBanner()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDDIRECTSMALLBANNER_ONCLICKBANNER_OFFSET))(nullptr);
		}

		::System::Void SetReddotEnabled(::MX::NetworkProtocol::NotificationEventContentReddotResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::NotificationEventContentReddotResponse*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDDIRECTSMALLBANNER_SETREDDOTENABLED_OFFSET))(arg, nullptr);
		}

		::MX::Data::WorldRaidSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::WorldRaidSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDDIRECTSMALLBANNER_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::WorldRaidSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::WorldRaidSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDDIRECTSMALLBANNER_.CTOR_OFFSET))(arg, nullptr);
		}

	};

