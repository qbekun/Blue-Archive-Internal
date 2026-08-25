#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_CONTEXTAWARERESULT_SAFECAPTUREIDENTITY_OFFSET UNITYSDK_OFFSET(0x9B8B770)
#define SYSTEM_NET_CONTEXTAWARERESULT_CLEANUPINTERNAL_OFFSET UNITYSDK_OFFSET(0x9B8B780)
#define SYSTEM_NET_CONTEXTAWARERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B8B790)
#define SYSTEM_NET_CONTEXTAWARERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B8B7B0)
#define SYSTEM_NET_CONTEXTAWARERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B8B800)
#define SYSTEM_NET_CONTEXTAWARERESULT_STARTPOSTINGASYNCOP_OFFSET UNITYSDK_OFFSET(0x9B8B870)
#define SYSTEM_NET_CONTEXTAWARERESULT_STARTPOSTINGASYNCOP_OFFSET UNITYSDK_OFFSET(0x9B8B880)
#define SYSTEM_NET_CONTEXTAWARERESULT_FINISHPOSTINGASYNCOP_OFFSET UNITYSDK_OFFSET(0x9B8BB20)
#define SYSTEM_NET_CONTEXTAWARERESULT_CLEANUP_OFFSET UNITYSDK_OFFSET(0x9B8C240)
#define SYSTEM_NET_CONTEXTAWARERESULT_CAPTUREORCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9B8BB60)
#define SYSTEM_NET_CONTEXTAWARERESULT_COMPLETE_OFFSET UNITYSDK_OFFSET(0x9B8C780)
#define SYSTEM_NET_CONTEXTAWARERESULT_COMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x9B8CB60)

namespace System::Net
{
	inline static constexpr unsigned int ContextAwareResult_TypeDefinitionIndex = 29636;

	class ContextAwareResult : public Il2CppObject
	{
	public:
		::System::Threading::ExecutionContext* _context; // 0x40
		::System::Object* _lock; // 0x48
		StateFlags* _flags; // 0x50

		::System::Void SafeCaptureIdentity()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONTEXTAWARERESULT_SAFECAPTUREIDENTITY_OFFSET))(nullptr);
		}

		::System::Void CleanupInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONTEXTAWARERESULT_CLEANUPINTERNAL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Object* arg, ::System::AsyncCallback* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::AsyncCallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONTEXTAWARERESULT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg, ::System::Object* arg, ::System::Object* arg, ::System::AsyncCallback* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Object*, ::System::Object*, ::System::AsyncCallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONTEXTAWARERESULT_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Object* arg, ::System::Object* arg, ::System::AsyncCallback* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Object*, ::System::Object*, ::System::AsyncCallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONTEXTAWARERESULT_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Object* StartPostingAsyncOp()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONTEXTAWARERESULT_STARTPOSTINGASYNCOP_OFFSET))(nullptr);
		}

		::System::Object* StartPostingAsyncOp(::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONTEXTAWARERESULT_STARTPOSTINGASYNCOP_OFFSET))(arg, nullptr);
		}

		::System::Boolean FinishPostingAsyncOp()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONTEXTAWARERESULT_FINISHPOSTINGASYNCOP_OFFSET))(nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONTEXTAWARERESULT_CLEANUP_OFFSET))(nullptr);
		}

		::System::Boolean CaptureOrComplete(::System::Threading::ExecutionContext&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::ExecutionContext&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONTEXTAWARERESULT_CAPTUREORCOMPLETE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Complete(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONTEXTAWARERESULT_COMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void CompleteCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONTEXTAWARERESULT_COMPLETECALLBACK_OFFSET))(nullptr);
		}

	};
}

