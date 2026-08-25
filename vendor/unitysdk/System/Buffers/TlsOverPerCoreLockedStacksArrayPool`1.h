#pragma once
#include "../../unitysdk.h"

#define SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_CREATEPERCORELOCKEDSTACKS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_GET_ID_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_RENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_RETURN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_TRIM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_GEN2GCCALLBACKFUNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_GETMEMORYPRESSURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_GETTRIMBUFFERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Buffers
{
	inline static constexpr unsigned int TlsOverPerCoreLockedStacksArrayPool`1_TypeDefinitionIndex = 25198;

	class TlsOverPerCoreLockedStacksArrayPool`1 : public ::FlatData::EventContentBoxGachaElementExcelTable
	{
	public:
		::Il2CppArray<::System::Object*>* _bucketArraySizes; // 0x0
		::Il2CppArray<::System::Object*>* _buckets; // 0x0
		::Il2CppArray<::System::Object*>* t_tlsBuckets;
		::System::Int32 _callbackCreated; // 0x0
		::System::Boolean s_trimBuffers; // 0x0
		Il2CppObject* s_allTlsBuckets; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* CreatePerCoreLockedStacks(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_CREATEPERCORELOCKEDSTACKS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_GET_ID_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* Rent(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_RENT_OFFSET))(arg, nullptr);
		}

		::System::Void Return(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_RETURN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Trim()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_TRIM_OFFSET))(nullptr);
		}

		::System::Boolean Gen2GcCallbackFunc(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_GEN2GCCALLBACKFUNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetMemoryPressure()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_GETMEMORYPRESSURE_OFFSET))(nullptr);
		}

		::System::Boolean GetTrimBuffers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_GETTRIMBUFFERS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TLSOVERPERCORELOCKEDSTACKSARRAYPOOL`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

