#pragma once
#include "unitysdk.h"

namespace MX::Data { class GuideMissionSeasonInfo; }
namespace MX::NetworkProtocol { class NotificationEventContentReddotResponse; }

#define GUIDEMISSIONSMALLBANNER_ISACTIVATEDBANNER_OFFSET UNITYSDK_OFFSET(0x263E800)
#define GUIDEMISSIONSMALLBANNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x263E8B0)
#define GUIDEMISSIONSMALLBANNER_ONCLICKBANNER_OFFSET UNITYSDK_OFFSET(0x263E8F0)
#define GUIDEMISSIONSMALLBANNER_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x263E970)
#define GUIDEMISSIONSMALLBANNER_GETBANNERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x263E980)
#define GUIDEMISSIONSMALLBANNER_SETREDDOTENABLED_OFFSET UNITYSDK_OFFSET(0x263EA20)
#define GUIDEMISSIONSMALLBANNER_SET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x263EB20)

	inline static constexpr unsigned int GuideMissionSmallBanner_TypeDefinitionIndex = 6595;

	class GuideMissionSmallBanner : public Il2CppObject
	{
	public:
		::MX::Data::GuideMissionSeasonInfo* _SeasonInfo_k__BackingField; // 0x30

		::System::Boolean IsActivatedBanner(::System::DateTime* arg)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSMALLBANNER_ISACTIVATEDBANNER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::GuideMissionSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::GuideMissionSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSMALLBANNER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickBanner()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSMALLBANNER_ONCLICKBANNER_OFFSET))(nullptr);
		}

		::MX::Data::GuideMissionSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::GuideMissionSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSMALLBANNER_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::String* GetBannerImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSMALLBANNER_GETBANNERIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void SetReddotEnabled(::MX::NetworkProtocol::NotificationEventContentReddotResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::NotificationEventContentReddotResponse*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSMALLBANNER_SETREDDOTENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonInfo(::MX::Data::GuideMissionSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::GuideMissionSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSMALLBANNER_SET_SEASONINFO_OFFSET))(arg, nullptr);
		}

	};

