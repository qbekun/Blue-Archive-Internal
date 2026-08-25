#pragma once
#include "unitysdk.h"

namespace MX::Data::DataModel { class EventContentClueSearchRoundInfo; }

#define EVENTCONTENTCLUESERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2490470)
#define EVENTCONTENTCLUESERVICE_CLAIMROUNDREWARDASYNC_OFFSET UNITYSDK_OFFSET(0x2490480)
#define EVENTCONTENTCLUESERVICE_GETROUNDSTATEASYNC_OFFSET UNITYSDK_OFFSET(0x2490540)
#define EVENTCONTENTCLUESERVICE_REGISTERCLUEASYNC_OFFSET UNITYSDK_OFFSET(0x2490600)
#define EVENTCONTENTCLUESERVICE_GETROUNDCONFIG_OFFSET UNITYSDK_OFFSET(0x24906D0)

	inline static constexpr unsigned int EventContentClueService_TypeDefinitionIndex = 5733;

	class EventContentClueService : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESERVICE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* ClaimRoundRewardAsync(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESERVICE_CLAIMROUNDREWARDASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRoundStateAsync(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESERVICE_GETROUNDSTATEASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* RegisterClueAsync(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESERVICE_REGISTERCLUEASYNC_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Data::DataModel::EventContentClueSearchRoundInfo* GetRoundConfig(::System::Int64 arg, ::System::Int32 arg2)
		{
			return ((::MX::Data::DataModel::EventContentClueSearchRoundInfo*(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESERVICE_GETROUNDCONFIG_OFFSET))(arg, arg2, nullptr);
		}

	};

