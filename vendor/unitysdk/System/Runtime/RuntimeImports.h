#pragma once
#include "../../unitysdk.h"

#define SYSTEM_RUNTIME_RUNTIMEIMPORTS_RHZEROMEMORY_OFFSET UNITYSDK_OFFSET(0x91C29D0)
#define SYSTEM_RUNTIME_RUNTIMEIMPORTS_ZEROMEMORY_OFFSET UNITYSDK_OFFSET(0x91C29E0)
#define SYSTEM_RUNTIME_RUNTIMEIMPORTS_MEMMOVE_OFFSET UNITYSDK_OFFSET(0x91C29F0)
#define SYSTEM_RUNTIME_RUNTIMEIMPORTS_MEMMOVE_WBARRIER_OFFSET UNITYSDK_OFFSET(0x91C2A00)
#define SYSTEM_RUNTIME_RUNTIMEIMPORTS__ECVT_S_OFFSET UNITYSDK_OFFSET(0x91C2A10)

namespace System::Runtime
{
	inline static constexpr unsigned int RuntimeImports_TypeDefinitionIndex = 24426;

	class RuntimeImports : public Il2CppObject
	{
	public:
		::System::Void RhZeroMemory(uint8_t&* arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(uint8_t&*, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_RUNTIMEIMPORTS_RHZEROMEMORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ZeroMemory(::System::Object** arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_RUNTIMEIMPORTS_ZEROMEMORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Memmove(::System::Object** arg, ::System::Object** arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_RUNTIMEIMPORTS_MEMMOVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Memmove_wbarrier(::System::Object** arg, ::System::Object** arg, ::System::UInt32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_RUNTIMEIMPORTS_MEMMOVE_WBARRIER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void _ecvt_s(::System::Object** arg, ::System::Int32 arg, ::System::Double arg, ::System::Int32 arg, ::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Double, ::System::Int32, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_RUNTIMEIMPORTS__ECVT_S_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

