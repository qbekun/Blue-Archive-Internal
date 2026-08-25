#pragma once
#include "unitysdk.h"

namespace Microsoft::Win32::SafeHandles { class SafeRegistryHandle; }
namespace Microsoft::Win32::SafeHandles { class SafeRegistryHandle&; }

#define ADVAPI32_REGCLOSEKEY_OFFSET UNITYSDK_OFFSET(0x911F800)
#define ADVAPI32_REGENUMKEYEX_OFFSET UNITYSDK_OFFSET(0x911F880)
#define ADVAPI32_REGOPENKEYEX_OFFSET UNITYSDK_OFFSET(0x911FA00)
#define ADVAPI32_REGQUERYINFOKEY_OFFSET UNITYSDK_OFFSET(0x911FB80)
#define ADVAPI32_REGQUERYVALUEEX_OFFSET UNITYSDK_OFFSET(0x911FD70)
#define ADVAPI32_REGQUERYVALUEEX_OFFSET UNITYSDK_OFFSET(0x911FFD0)
#define ADVAPI32_REGQUERYVALUEEX_OFFSET UNITYSDK_OFFSET(0x91200E0)
#define ADVAPI32_REGQUERYVALUEEX_OFFSET UNITYSDK_OFFSET(0x91201F0)

	inline static constexpr unsigned int Advapi32_TypeDefinitionIndex = 23561;

	class Advapi32 : public Il2CppObject
	{
	public:
		::System::Int32 RegCloseKey(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ADVAPI32_REGCLOSEKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 RegEnumKeyEx(::Microsoft::Win32::SafeHandles::SafeRegistryHandle* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Text::StringBuilder* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*, ::System::Int32, ::Il2CppArray<::System::Object*>*, int32_t&*, ::Il2CppArray<::System::Object*>*, ::System::Text::StringBuilder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ADVAPI32_REGENUMKEYEX_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 RegOpenKeyEx(::Microsoft::Win32::SafeHandles::SafeRegistryHandle* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::Microsoft::Win32::SafeHandles::SafeRegistryHandle&* arg)
		{
			return (return (::System::Int32(*)(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*, ::System::String*, ::System::Int32, ::System::Int32, ::Microsoft::Win32::SafeHandles::SafeRegistryHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + ADVAPI32_REGOPENKEYEX_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Int32 RegQueryInfoKey(::Microsoft::Win32::SafeHandles::SafeRegistryHandle* arg, ::System::Text::StringBuilder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, int32_t&* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*, ::System::Text::StringBuilder*, ::Il2CppArray<::System::Object*>*, ::System::Int32, int32_t&*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, int32_t&*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ADVAPI32_REGQUERYINFOKEY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 RegQueryValueEx(::Microsoft::Win32::SafeHandles::SafeRegistryHandle* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*, ::System::String*, ::Il2CppArray<::System::Object*>*, int32_t&*, ::Il2CppArray<::System::Object*>*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + ADVAPI32_REGQUERYVALUEEX_OFFSET))(arg, str, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 RegQueryValueEx(::Microsoft::Win32::SafeHandles::SafeRegistryHandle* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*, ::System::String*, ::Il2CppArray<::System::Object*>*, int32_t&*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + ADVAPI32_REGQUERYVALUEEX_OFFSET))(arg, str, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 RegQueryValueEx(::Microsoft::Win32::SafeHandles::SafeRegistryHandle* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg, int64_t&* arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*, ::System::String*, ::Il2CppArray<::System::Object*>*, int32_t&*, int64_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + ADVAPI32_REGQUERYVALUEEX_OFFSET))(arg, str, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 RegQueryValueEx(::Microsoft::Win32::SafeHandles::SafeRegistryHandle* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*, ::System::String*, ::Il2CppArray<::System::Object*>*, int32_t&*, ::Il2CppArray<::System::Object*>*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + ADVAPI32_REGQUERYVALUEEX_OFFSET))(arg, str, arg, arg, arg, arg, nullptr);
		}

	};

