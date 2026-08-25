#pragma once
#include "unitysdk.h"

namespace MX::Data { class WebEventSeasonInfo; }
namespace MX::NetworkProtocol { class NotificationEventContentReddotResponse; }

#define WEBEVENTMISSIONSMALLBANNER_SETREDDOTENABLED_OFFSET UNITYSDK_OFFSET(0x263DDB0)
#define WEBEVENTMISSIONSMALLBANNER_ISACTIVATEDBANNER_OFFSET UNITYSDK_OFFSET(0x263DE60)
#define WEBEVENTMISSIONSMALLBANNER_SET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x263DE80)
#define WEBEVENTMISSIONSMALLBANNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x263DE90)
#define WEBEVENTMISSIONSMALLBANNER_GETBANNERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x263E010)
#define WEBEVENTMISSIONSMALLBANNER_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x263E0B0)
#define WEBEVENTMISSIONSMALLBANNER_ONCLICKBANNER_OFFSET UNITYSDK_OFFSET(0x263E0C0)

	inline static constexpr unsigned int WebEventMissionSmallBanner_TypeDefinitionIndex = 6594;

	class WebEventMissionSmallBanner : public Il2CppObject
	{
	public:
		::MX::Data::WebEventSeasonInfo* _SeasonInfo_k__BackingField; // 0x30

		::System::Void SetReddotEnabled(::MX::NetworkProtocol::NotificationEventContentReddotResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::NotificationEventContentReddotResponse*, ::PVOID))((::PBYTE)hIl2Cpp + WEBEVENTMISSIONSMALLBANNER_SETREDDOTENABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsActivatedBanner(::System::DateTime* arg)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + WEBEVENTMISSIONSMALLBANNER_ISACTIVATEDBANNER_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonInfo(::MX::Data::WebEventSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::WebEventSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + WEBEVENTMISSIONSMALLBANNER_SET_SEASONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::WebEventSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::WebEventSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + WEBEVENTMISSIONSMALLBANNER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetBannerImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBEVENTMISSIONSMALLBANNER_GETBANNERIMAGEPATH_OFFSET))(nullptr);
		}

		::MX::Data::WebEventSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::WebEventSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBEVENTMISSIONSMALLBANNER_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickBanner()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBEVENTMISSIONSMALLBANNER_ONCLICKBANNER_OFFSET))(nullptr);
		}

	};

