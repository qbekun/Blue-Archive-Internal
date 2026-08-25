#pragma once
#include "unitysdk.h"

#define ACCOUNTLOGINSYNCNOPARTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F032F0)
#define ACCOUNTLOGINSYNCNOPARTNETWORKTASK_GET_SYNCPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x1F03310)

	inline static constexpr unsigned int AccountLoginSyncNoPartNetworkTask_TypeDefinitionIndex = 1966;

	class AccountLoginSyncNoPartNetworkTask : public ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLOGINSYNCNOPARTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_SyncProtocols()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLOGINSYNCNOPARTNETWORKTASK_GET_SYNCPROTOCOLS_OFFSET))(nullptr);
		}

	};

