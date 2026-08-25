#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_REMOTETRACER_PLEX_GETCURRENT_OFFSET UNITYSDK_OFFSET(0x9BB1CB0)
#define TOYWEBVIEWSHARED_REMOTETRACER_PLEX_FORMATSIGNATURE_OFFSET UNITYSDK_OFFSET(0x9BB2050)
#define TOYWEBVIEWSHARED_REMOTETRACER_PLEX_GETCURRENTTHREADTRACE_OFFSET UNITYSDK_OFFSET(0x9BB22A0)
#define TOYWEBVIEWSHARED_REMOTETRACER_PLEX_ASSIGNPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9BB26B0)
#define TOYWEBVIEWSHARED_REMOTETRACER_PLEX_ASSIGNGAMETHREADPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9BB2950)
#define TOYWEBVIEWSHARED_REMOTETRACER_PLEX_DEBUGASYNC_OFFSET UNITYSDK_OFFSET(0x9BB29D0)
#define TOYWEBVIEWSHARED_REMOTETRACER_PLEX_DEBUG_OFFSET UNITYSDK_OFFSET(0x9BB2B40)
#define TOYWEBVIEWSHARED_REMOTETRACER_PLEX_VERBOSEASYNC_OFFSET UNITYSDK_OFFSET(0x9BB2D00)
#define TOYWEBVIEWSHARED_REMOTETRACER_PLEX_VERBOSE_OFFSET UNITYSDK_OFFSET(0x9BB2E70)
#define TOYWEBVIEWSHARED_REMOTETRACER_PLEX_ERRORASYNC_OFFSET UNITYSDK_OFFSET(0x9BB3030)
#define TOYWEBVIEWSHARED_REMOTETRACER_PLEX_ERROR_OFFSET UNITYSDK_OFFSET(0x9BB31A0)
#define TOYWEBVIEWSHARED_REMOTETRACER_PLEX_EXCEPTIONASYNC_OFFSET UNITYSDK_OFFSET(0x9BB3360)
#define TOYWEBVIEWSHARED_REMOTETRACER_PLEX_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x9BB34F0)

namespace ToyWebViewShared::RemoteTracer
{
	inline static constexpr unsigned int Plex_TypeDefinitionIndex = 25433;

	class Plex : public Il2CppObject
	{
	public:
		::System::String* endpoint; // 0x0

		Tracer* GetCurrent(::System::String* str, ::System::Int32 arg)
		{
			return (return (Tracer*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_REMOTETRACER_PLEX_GETCURRENT_OFFSET))(str, arg, nullptr);
		}

		::System::String* FormatSignature(::System::Reflection::MethodBase* arg)
		{
			return (return (::System::String*(*)(::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_REMOTETRACER_PLEX_FORMATSIGNATURE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCurrentThreadTrace()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_REMOTETRACER_PLEX_GETCURRENTTHREADTRACE_OFFSET))(nullptr);
		}

		::System::Void AssignPayload(::System::Text::StringBuilder&* arg, Payload* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder&*, Payload*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_REMOTETRACER_PLEX_ASSIGNPAYLOAD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AssignGameThreadPayload(::System::Text::StringBuilder&* arg, GameThreadPayload* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder&*, GameThreadPayload*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_REMOTETRACER_PLEX_ASSIGNGAMETHREADPAYLOAD_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DebugAsync(Payload* arg, GameThreadPayload* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Payload*, GameThreadPayload*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_REMOTETRACER_PLEX_DEBUGASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::String* Debug(Payload* arg, GameThreadPayload* arg)
		{
			return (return (::System::String*(*)(Payload*, GameThreadPayload*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_REMOTETRACER_PLEX_DEBUG_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* VerboseAsync(Payload* arg, GameThreadPayload* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Payload*, GameThreadPayload*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_REMOTETRACER_PLEX_VERBOSEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::String* Verbose(Payload* arg, GameThreadPayload* arg)
		{
			return (return (::System::String*(*)(Payload*, GameThreadPayload*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_REMOTETRACER_PLEX_VERBOSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* ErrorAsync(Payload* arg, GameThreadPayload* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Payload*, GameThreadPayload*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_REMOTETRACER_PLEX_ERRORASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::String* Error(Payload* arg, GameThreadPayload* arg)
		{
			return (return (::System::String*(*)(Payload*, GameThreadPayload*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_REMOTETRACER_PLEX_ERROR_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* ExceptionAsync(Payload* arg, GameThreadPayload* arg, ::System::Exception* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Payload*, GameThreadPayload*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_REMOTETRACER_PLEX_EXCEPTIONASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* Exception(Payload* arg, GameThreadPayload* arg, ::System::Exception* arg)
		{
			return (return (::System::String*(*)(Payload*, GameThreadPayload*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_REMOTETRACER_PLEX_EXCEPTION_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

