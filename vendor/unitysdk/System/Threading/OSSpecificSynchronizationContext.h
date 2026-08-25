#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x93E39B0)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_GET_OFFSET UNITYSDK_OFFSET(0x93E3620)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x93E39F0)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_SEND_OFFSET UNITYSDK_OFFSET(0x93E3A60)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_POST_OFFSET UNITYSDK_OFFSET(0x93E3AB0)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_INVOCATIONENTRY_OFFSET UNITYSDK_OFFSET(0x93E3840)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_GETOSCONTEXT_OFFSET UNITYSDK_OFFSET(0x93E39E0)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_POSTINTERNAL_OFFSET UNITYSDK_OFFSET(0x93E3D20)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93E3D60)

namespace System::Threading
{
	inline static constexpr unsigned int OSSpecificSynchronizationContext_TypeDefinitionIndex = 24097;

	class OSSpecificSynchronizationContext : public Il2CppObject
	{
	public:
		::System::Object* m_OSSynchronizationContext; // 0x18
		Il2CppObject* s_ContextCache; // 0x0

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Threading::OSSpecificSynchronizationContext* Get()
		{
			return (return (::System::Threading::OSSpecificSynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_GET_OFFSET))(nullptr);
		}

		::System::Threading::SynchronizationContext* CreateCopy()
		{
			return (return (::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_CREATECOPY_OFFSET))(nullptr);
		}

		::System::Void Send(::System::Threading::SendOrPostCallback* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Threading::SendOrPostCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_SEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Post(::System::Threading::SendOrPostCallback* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Threading::SendOrPostCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_POST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvocationEntry(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_INVOCATIONENTRY_OFFSET))(arg, nullptr);
		}

		::System::Object* GetOSContext()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_GETOSCONTEXT_OFFSET))(nullptr);
		}

		::System::Void PostInternal(::System::Object* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_POSTINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

