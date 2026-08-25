#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Core { class PluginEvents; }

namespace BestHTTP::Core
{
	inline static constexpr unsigned int PluginEvents_TypeDefinitionIndex = 23402;

	class PluginEvents : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::Core::PluginEvents* SaveCookieLibrary; // 0x0
		::BestHTTP::Core::PluginEvents* SaveCacheLibrary; // 0x0
		::BestHTTP::Core::PluginEvents* AltSvcHeader; // 0x0
		::BestHTTP::Core::PluginEvents* HTTP2ConnectProtocol; // 0x0

	};
}

