#pragma once
#include "unitysdk.h"

namespace MX::Data::DataModel { class EventContentClueSearchRoundInfo; }

#define IEVENTCONTENTCLUESERVICE_GETROUNDCONFIG_OFFSET UNITYSDK_OFFSET(0x000000)
#define IEVENTCONTENTCLUESERVICE_CLAIMROUNDREWARDASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define IEVENTCONTENTCLUESERVICE_REGISTERCLUEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define IEVENTCONTENTCLUESERVICE_GETROUNDSTATEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IEventContentClueService_TypeDefinitionIndex = 5726;

	class IEventContentClueService : public Il2CppObject
	{
	public:
		::MX::Data::DataModel::EventContentClueSearchRoundInfo* GetRoundConfig(::System::Int64 arg, ::System::Int32 arg2)
		{
			return ((::MX::Data::DataModel::EventContentClueSearchRoundInfo*(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + IEVENTCONTENTCLUESERVICE_GETROUNDCONFIG_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* ClaimRoundRewardAsync(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + IEVENTCONTENTCLUESERVICE_CLAIMROUNDREWARDASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* RegisterClueAsync(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + IEVENTCONTENTCLUESERVICE_REGISTERCLUEASYNC_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetRoundStateAsync(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + IEVENTCONTENTCLUESERVICE_GETROUNDSTATEASYNC_OFFSET))(arg, nullptr);
		}

	};

