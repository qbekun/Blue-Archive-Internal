#pragma once
#include "../../../../../unitysdk.h"

namespace UnityEngine { class LogType; }

#define ASSETS__MX_PROGRAM_SCRIPTS_LOG_KIBANALOGGINGCONFIGURATION_GET_LOGPATH_OFFSET UNITYSDK_OFFSET(0xE25350)
#define ASSETS__MX_PROGRAM_SCRIPTS_LOG_KIBANALOGGINGCONFIGURATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xE25360)
#define ASSETS__MX_PROGRAM_SCRIPTS_LOG_KIBANALOGGINGCONFIGURATION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE25410)
#define ASSETS__MX_PROGRAM_SCRIPTS_LOG_KIBANALOGGINGCONFIGURATION_SET_LOGBODY_OFFSET UNITYSDK_OFFSET(0xE25480)
#define ASSETS__MX_PROGRAM_SCRIPTS_LOG_KIBANALOGGINGCONFIGURATION_GET_ISLOGBODYEMPTY_OFFSET UNITYSDK_OFFSET(0xE25490)
#define ASSETS__MX_PROGRAM_SCRIPTS_LOG_KIBANALOGGINGCONFIGURATION_GET_LOGBODY_OFFSET UNITYSDK_OFFSET(0xE254A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_LOG_KIBANALOGGINGCONFIGURATION_SET_LOGPATH_OFFSET UNITYSDK_OFFSET(0xE254B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_LOG_KIBANALOGGINGCONFIGURATION_HANDLEEXCEPTION_OFFSET UNITYSDK_OFFSET(0xE254C0)

namespace Assets::_MX::Program::Scripts::Log
{
	inline static constexpr unsigned int KibanaLoggingConfiguration_TypeDefinitionIndex = 10381;

	class KibanaLoggingConfiguration : public ::ToyWebViewShared::Messages::NotifyPopupHide
	{
	public:
		::System::String* _LogPath_k__BackingField; // 0x20
		::System::String* _LogBody_k__BackingField; // 0x28
		Il2CppObject* exceptions; // 0x30

		::System::String* get_LogPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_LOG_KIBANALOGGINGCONFIGURATION_GET_LOGPATH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_LOG_KIBANALOGGINGCONFIGURATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_LOG_KIBANALOGGINGCONFIGURATION_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_LogBody(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_LOG_KIBANALOGGINGCONFIGURATION_SET_LOGBODY_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsLogBodyEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_LOG_KIBANALOGGINGCONFIGURATION_GET_ISLOGBODYEMPTY_OFFSET))(nullptr);
		}

		::System::String* get_LogBody()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_LOG_KIBANALOGGINGCONFIGURATION_GET_LOGBODY_OFFSET))(nullptr);
		}

		::System::Void set_LogPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_LOG_KIBANALOGGINGCONFIGURATION_SET_LOGPATH_OFFSET))(str, nullptr);
		}

		::System::Void HandleException(::System::String* str, ::System::String* str2, ::UnityEngine::LogType* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_LOG_KIBANALOGGINGCONFIGURATION_HANDLEEXCEPTION_OFFSET))(str, str2, arg, nullptr);
		}

	};
}

