#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Core { class PluginEvents; }

#define BESTHTTP_CORE_PLUGINEVENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x8F13C0)
#define BESTHTTP_CORE_PLUGINEVENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x8F13E0)
#define BESTHTTP_CORE_PLUGINEVENTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8F1400)

namespace BestHTTP::Core
{
	inline static constexpr unsigned int PluginEventInfo_TypeDefinitionIndex = 23403;

	class PluginEventInfo : public Il2CppObject
	{
	public:
		::BestHTTP::Core::PluginEvents* Event; // 0x10
		::System::Object* Payload; // 0x18

		::System::Void .ctor(::BestHTTP::Core::PluginEvents* arg)
		{
			((::System::Void(*)(::BestHTTP::Core::PluginEvents*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_PLUGINEVENTINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::Core::PluginEvents* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::BestHTTP::Core::PluginEvents*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_PLUGINEVENTINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_PLUGINEVENTINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

