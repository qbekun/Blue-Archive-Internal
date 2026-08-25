#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::Interface { class AlertLevel; }
namespace Mono::Security::Interface { class AlertDescription; }

#define MONO_SECURITY_INTERFACE_ALERT_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x910C140)
#define MONO_SECURITY_INTERFACE_ALERT_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x910C150)
#define MONO_SECURITY_INTERFACE_ALERT_.CTOR_OFFSET UNITYSDK_OFFSET(0x910C160)
#define MONO_SECURITY_INTERFACE_ALERT_INFERALERTLEVEL_OFFSET UNITYSDK_OFFSET(0x910C1B0)
#define MONO_SECURITY_INTERFACE_ALERT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x910C1F0)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int Alert_TypeDefinitionIndex = 35790;

	class Alert : public Il2CppObject
	{
	public:
		::Mono::Security::Interface::AlertLevel* level; // 0x10
		::Mono::Security::Interface::AlertDescription* description; // 0x11

		::Mono::Security::Interface::AlertLevel* get_Level()
		{
			return (return (::Mono::Security::Interface::AlertLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT_GET_LEVEL_OFFSET))(nullptr);
		}

		::Mono::Security::Interface::AlertDescription* get_Description()
		{
			return (return (::Mono::Security::Interface::AlertDescription*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Mono::Security::Interface::AlertDescription* arg)
		{
			((::System::Void(*)(::Mono::Security::Interface::AlertDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void inferAlertLevel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT_INFERALERTLEVEL_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_ALERT_TOSTRING_OFFSET))(nullptr);
		}

	};
}

