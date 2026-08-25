#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_EXTENSIONS_IHEARTBEAT_ONHEARTBEATUPDATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::Extensions
{
	inline static constexpr unsigned int IHeartbeat_TypeDefinitionIndex = 23350;

	class IHeartbeat : public Il2CppObject
	{
	public:
		::System::Void OnHeartbeatUpdate(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_IHEARTBEAT_ONHEARTBEATUPDATE_OFFSET))(arg, nullptr);
		}

	};
}

