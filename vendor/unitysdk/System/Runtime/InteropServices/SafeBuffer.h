#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_ACQUIREPOINTER_OFFSET UNITYSDK_OFFSET(0x9222570)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_RELEASEPOINTER_OFFSET UNITYSDK_OFFSET(0x92227A0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_NOTINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9222660)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9222880)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int SafeBuffer_TypeDefinitionIndex = 24686;

	class SafeBuffer : public Il2CppObject
	{
	public:
		::System::UInt32 Uninitialized; // 0x0
		::System::UInt32 _numBytes; // 0x20

		::System::Void AcquirePointer(::System::Object*&* arg)
		{
			((::System::Void(*)(::System::Object*&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_ACQUIREPOINTER_OFFSET))(arg, nullptr);
		}

		::System::Void ReleasePointer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_RELEASEPOINTER_OFFSET))(nullptr);
		}

		::System::InvalidOperationException* NotInitialized()
		{
			return (return (::System::InvalidOperationException*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_NOTINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

