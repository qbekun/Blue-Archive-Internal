#pragma once
#include "../../unitysdk.h"

namespace Nexon::Pub { class NXLog; }

#define NEXON_PUB_NXPATCHERLOG_SET_LOGLEVEL_OFFSET UNITYSDK_OFFSET(0x9553D90)
#define NEXON_PUB_NXPATCHERLOG_DEBUG_OFFSET UNITYSDK_OFFSET(0x9553DE0)
#define NEXON_PUB_NXPATCHERLOG_INFO_OFFSET UNITYSDK_OFFSET(0x954CF00)
#define NEXON_PUB_NXPATCHERLOG_WARN_OFFSET UNITYSDK_OFFSET(0x954F8A0)
#define NEXON_PUB_NXPATCHERLOG_ERROR_OFFSET UNITYSDK_OFFSET(0x954DEB0)
#define NEXON_PUB_NXPATCHERLOG_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9553EA0)

namespace Nexon::Pub
{
	inline static constexpr unsigned int NXPatcherLog_TypeDefinitionIndex = 37450;

	class NXPatcherLog : public Il2CppObject
	{
	public:
		::Nexon::Pub::NXLog* _logLevel; // 0x0

		::System::Void set_LogLevel(::Nexon::Pub::NXLog* arg)
		{
			((::System::Void(*)(::Nexon::Pub::NXLog*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERLOG_SET_LOGLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void Debug(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERLOG_DEBUG_OFFSET))(str, nullptr);
		}

		::System::Void Info(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERLOG_INFO_OFFSET))(str, nullptr);
		}

		::System::Void Warn(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERLOG_WARN_OFFSET))(str, nullptr);
		}

		::System::Void Error(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERLOG_ERROR_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERLOG_.CCTOR_OFFSET))(nullptr);
		}

	};
}

