#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ILogger; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Color&; }

#define UNITYENGINE_DEBUG_GET_UNITYLOGGER_OFFSET UNITYSDK_OFFSET(0xA1EAD70)
#define UNITYENGINE_DEBUG_DRAWLINE_OFFSET UNITYSDK_OFFSET(0xA1EADC0)
#define UNITYENGINE_DEBUG_DRAWLINE_OFFSET UNITYSDK_OFFSET(0xA1EAF00)
#define UNITYENGINE_DEBUG_DRAWRAY_OFFSET UNITYSDK_OFFSET(0xA1EB010)
#define UNITYENGINE_DEBUG_DRAWRAY_OFFSET UNITYSDK_OFFSET(0xA1EB0A0)
#define UNITYENGINE_DEBUG_EXTRACTSTACKTRACENOALLOC_OFFSET UNITYSDK_OFFSET(0xA1EB220)
#define UNITYENGINE_DEBUG_LOG_OFFSET UNITYSDK_OFFSET(0xA1EB270)
#define UNITYENGINE_DEBUG_LOG_OFFSET UNITYSDK_OFFSET(0xA1EB3E0)
#define UNITYENGINE_DEBUG_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0xA1EB560)
#define UNITYENGINE_DEBUG_LOGERROR_OFFSET UNITYSDK_OFFSET(0xA1EB6E0)
#define UNITYENGINE_DEBUG_LOGERROR_OFFSET UNITYSDK_OFFSET(0xA1EB840)
#define UNITYENGINE_DEBUG_LOGERRORFORMAT_OFFSET UNITYSDK_OFFSET(0xA1EB9C0)
#define UNITYENGINE_DEBUG_LOGERRORFORMAT_OFFSET UNITYSDK_OFFSET(0xA1EBB40)
#define UNITYENGINE_DEBUG_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA1E3CD0)
#define UNITYENGINE_DEBUG_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA1EBCC0)
#define UNITYENGINE_DEBUG_LOGWARNING_OFFSET UNITYSDK_OFFSET(0xA1E9860)
#define UNITYENGINE_DEBUG_LOGWARNING_OFFSET UNITYSDK_OFFSET(0xA1EBE30)
#define UNITYENGINE_DEBUG_LOGWARNINGFORMAT_OFFSET UNITYSDK_OFFSET(0xA1EBFB0)
#define UNITYENGINE_DEBUG_LOGWARNINGFORMAT_OFFSET UNITYSDK_OFFSET(0xA1EC130)
#define UNITYENGINE_DEBUG_ASSERT_OFFSET UNITYSDK_OFFSET(0xA1EC2B0)
#define UNITYENGINE_DEBUG_ASSERT_OFFSET UNITYSDK_OFFSET(0xA1EC420)
#define UNITYENGINE_DEBUG_LOGASSERTION_OFFSET UNITYSDK_OFFSET(0xA1EC580)
#define UNITYENGINE_DEBUG_LOGASSERTIONFORMAT_OFFSET UNITYSDK_OFFSET(0xA1EC6F0)
#define UNITYENGINE_DEBUG_GET_ISDEBUGBUILD_OFFSET UNITYSDK_OFFSET(0xA1EC870)
#define UNITYENGINE_DEBUG_CALLOVERRIDENDEBUGHANDLER_OFFSET UNITYSDK_OFFSET(0xA1EC8B0)
#define UNITYENGINE_DEBUG_ISLOGGINGENABLED_OFFSET UNITYSDK_OFFSET(0xA1ECCD0)
#define UNITYENGINE_DEBUG_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1ECFB0)
#define UNITYENGINE_DEBUG_DRAWLINE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1EAFB0)

namespace UnityEngine
{
	inline static constexpr unsigned int Debug_TypeDefinitionIndex = 30973;

	class Debug : public Il2CppObject
	{
	public:
		::UnityEngine::ILogger* s_DefaultLogger; // 0x0
		::UnityEngine::ILogger* s_Logger; // 0x8

		::UnityEngine::ILogger* get_unityLogger()
		{
			return (return (::UnityEngine::ILogger*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_GET_UNITYLOGGER_OFFSET))(nullptr);
		}

		::System::Void DrawLine(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWLINE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawLine(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Color* arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Color*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWLINE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawRay(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawRay(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Color* arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Color*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWRAY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ExtractStackTraceNoAlloc(::System::Object** arg, ::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_EXTRACTSTACKTRACENOALLOC_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void Log(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOG_OFFSET))(arg, nullptr);
		}

		::System::Void Log(::System::Object* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LogFormat(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGFORMAT_OFFSET))(str, arg, nullptr);
		}

		::System::Void LogError(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGERROR_OFFSET))(arg, nullptr);
		}

		::System::Void LogError(::System::Object* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGERROR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LogErrorFormat(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGERRORFORMAT_OFFSET))(str, arg, nullptr);
		}

		::System::Void LogErrorFormat(::UnityEngine::Object* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGERRORFORMAT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void LogException(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void LogException(::System::Exception* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::System::Exception*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LogWarning(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGWARNING_OFFSET))(arg, nullptr);
		}

		::System::Void LogWarning(::System::Object* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGWARNING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LogWarningFormat(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGWARNINGFORMAT_OFFSET))(str, arg, nullptr);
		}

		::System::Void LogWarningFormat(::UnityEngine::Object* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGWARNINGFORMAT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void Assert(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERT_OFFSET))(arg, nullptr);
		}

		::System::Void Assert(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERT_OFFSET))(arg, str, nullptr);
		}

		::System::Void LogAssertion(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGASSERTION_OFFSET))(arg, nullptr);
		}

		::System::Void LogAssertionFormat(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGASSERTIONFORMAT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean get_isDebugBuild()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_GET_ISDEBUGBUILD_OFFSET))(nullptr);
		}

		::System::Boolean CallOverridenDebugHandler(::System::Exception* arg, ::UnityEngine::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Exception*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_CALLOVERRIDENDEBUGHANDLER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsLoggingEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ISLOGGINGENABLED_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void DrawLine_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Color&* arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::UnityEngine::Color&*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWLINE_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

