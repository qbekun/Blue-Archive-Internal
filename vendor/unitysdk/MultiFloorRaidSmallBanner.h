#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class NotificationEventContentReddotResponse; }
namespace MX::Data::Excel { class MultiFloorRaidSeasonManageExcel; }

#define MULTIFLOORRAIDSMALLBANNER_GETBANNERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x2641780)
#define MULTIFLOORRAIDSMALLBANNER_ISACTIVATEDBANNER_OFFSET UNITYSDK_OFFSET(0x2641810)
#define MULTIFLOORRAIDSMALLBANNER_ONCLICKBANNER_OFFSET UNITYSDK_OFFSET(0x2641820)
#define MULTIFLOORRAIDSMALLBANNER_SETREDDOTENABLED_OFFSET UNITYSDK_OFFSET(0x2641B50)
#define MULTIFLOORRAIDSMALLBANNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2641BB0)

	inline static constexpr unsigned int MultiFloorRaidSmallBanner_TypeDefinitionIndex = 6604;

	class MultiFloorRaidSmallBanner : public Il2CppObject
	{
	public:
		::System::Boolean showLobbyBanner; // 0x30
		::System::Int64 seasonId; // 0x38
		Il2CppObject* nextSeasonId; // 0x40

		::System::String* GetBannerImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSMALLBANNER_GETBANNERIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Boolean IsActivatedBanner(::System::DateTime* arg)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSMALLBANNER_ISACTIVATEDBANNER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickBanner()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSMALLBANNER_ONCLICKBANNER_OFFSET))(nullptr);
		}

		::System::Void SetReddotEnabled(::MX::NetworkProtocol::NotificationEventContentReddotResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::NotificationEventContentReddotResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSMALLBANNER_SETREDDOTENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSMALLBANNER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

