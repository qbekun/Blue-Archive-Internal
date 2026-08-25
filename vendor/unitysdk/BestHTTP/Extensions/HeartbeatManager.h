#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Extensions { class IHeartbeat; }

#define BESTHTTP_EXTENSIONS_HEARTBEATMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x8D5940)
#define BESTHTTP_EXTENSIONS_HEARTBEATMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8D5A50)
#define BESTHTTP_EXTENSIONS_HEARTBEATMANAGER_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x8D5B50)
#define BESTHTTP_EXTENSIONS_HEARTBEATMANAGER_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x8D5C70)
#define BESTHTTP_EXTENSIONS_HEARTBEATMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x8D5E30)

namespace BestHTTP::Extensions
{
	inline static constexpr unsigned int HeartbeatManager_TypeDefinitionIndex = 23351;

	class HeartbeatManager : public Il2CppObject
	{
	public:
		::System::Threading::ReaderWriterLockSlim* rwLock; // 0x10
		Il2CppObject* Heartbeats; // 0x18
		::Il2CppArray<::System::Object*>* UpdateArray; // 0x20
		::System::DateTime* LastUpdate; // 0x28

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEARTBEATMANAGER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEARTBEATMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Unsubscribe(::BestHTTP::Extensions::IHeartbeat* arg)
		{
			((::System::Void(*)(::BestHTTP::Extensions::IHeartbeat*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEARTBEATMANAGER_UNSUBSCRIBE_OFFSET))(arg, nullptr);
		}

		::System::Void Subscribe(::BestHTTP::Extensions::IHeartbeat* arg)
		{
			((::System::Void(*)(::BestHTTP::Extensions::IHeartbeat*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEARTBEATMANAGER_SUBSCRIBE_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEARTBEATMANAGER_UPDATE_OFFSET))(nullptr);
		}

	};
}

