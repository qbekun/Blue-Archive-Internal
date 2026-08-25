#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_INTERNALTHREAD_THREAD_FREE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x93EC490)
#define SYSTEM_THREADING_INTERNALTHREAD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x93EC4A0)
#define SYSTEM_THREADING_INTERNALTHREAD_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EC560)

namespace System::Threading
{
	inline static constexpr unsigned int InternalThread_TypeDefinitionIndex = 24123;

	class InternalThread : public Il2CppObject
	{
	public:
		::System::Int32 lock_thread_id; // 0x10
		::System::Int32 handle; // 0x18
		::System::Int32 native_handle; // 0x20
		::System::Int32 name_chars; // 0x28
		::System::Int32 name_free; // 0x30
		::System::Int32 name_length; // 0x34
		::System::Threading::ThreadState* state; // 0x38
		::System::Object* abort_exc; // 0x40
		::System::Int32 abort_state_handle; // 0x48
		::System::Int64 thread_id; // 0x50
		::System::Int32 debugger_thread; // 0x58
		::System::UInt32 static_data; // 0x60
		::System::Int32 runtime_thread_info; // 0x68
		::System::Object* current_appcontext; // 0x70
		::System::Object* root_domain_thread; // 0x78
		::Il2CppArray<::System::Object*>* _serialized_principal; // 0x80
		::System::Int32 _serialized_principal_version; // 0x88
		::System::Int32 appdomain_refs; // 0x90
		::System::Int32 interruption_requested; // 0x98
		::System::Int32 longlived; // 0xA0
		::System::Boolean threadpool_thread; // 0xA8
		::System::Boolean thread_interrupt_requested; // 0xA9
		::System::Int32 stack_size; // 0xAC
		::System::Byte apartment_state; // 0xB0
		::System::Int32 critical_region_level; // 0xB4
		::System::Int32 managed_id; // 0xB8
		::System::Int32 small_id; // 0xBC
		::System::Int32 manage_callback; // 0xC0
		::System::Int32 flags; // 0xC8
		::System::Int32 thread_pinning_ref; // 0xD0
		::System::Int32 abort_protected_block_count; // 0xD8
		::System::Int32 priority; // 0xE0
		::System::Int32 owned_mutex; // 0xE8
		::System::Int32 suspended_event; // 0xF0
		::System::Int32 self_suspended; // 0xF8
		::System::Int32 thread_state; // 0x100
		::System::Int32 netcore0; // 0x108
		::System::Int32 netcore1; // 0x110
		::System::Int32 netcore2; // 0x118
		::System::Int32 last; // 0x120

		::System::Void Thread_free_internal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERNALTHREAD_THREAD_FREE_INTERNAL_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERNALTHREAD_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERNALTHREAD_.CTOR_OFFSET))(nullptr);
		}

	};
}

