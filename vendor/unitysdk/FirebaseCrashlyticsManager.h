#pragma once
#include "unitysdk.h"

#define FIREBASECRASHLYTICSMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC5BDB0)
#define FIREBASECRASHLYTICSMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xC5BE10)

	inline static constexpr unsigned int FirebaseCrashlyticsManager_TypeDefinitionIndex = 8957;

	class FirebaseCrashlyticsManager : public ::ToyWebViewShared::Messages::NotifyLoadingStateChange
	{
	public:
		::System::Int32 updatesBeforeException; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIREBASECRASHLYTICSMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIREBASECRASHLYTICSMANAGER_INIT_OFFSET))(nullptr);
		}

	};

