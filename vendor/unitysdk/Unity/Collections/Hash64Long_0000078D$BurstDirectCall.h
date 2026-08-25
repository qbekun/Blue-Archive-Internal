#pragma once
#include "../../unitysdk.h"

#define UNITY_COLLECTIONS_HASH64LONG_0000078D$BURSTDIRECTCALL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9E3C2E0)
#define UNITY_COLLECTIONS_HASH64LONG_0000078D$BURSTDIRECTCALL_GETFUNCTIONPOINTERDISCARD_OFFSET UNITYSDK_OFFSET(0x9E3C2F0)
#define UNITY_COLLECTIONS_HASH64LONG_0000078D$BURSTDIRECTCALL_GETFUNCTIONPOINTER_OFFSET UNITYSDK_OFFSET(0x9E3C440)
#define UNITY_COLLECTIONS_HASH64LONG_0000078D$BURSTDIRECTCALL_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x9E3C4A0)
#define UNITY_COLLECTIONS_HASH64LONG_0000078D$BURSTDIRECTCALL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E3C530)
#define UNITY_COLLECTIONS_HASH64LONG_0000078D$BURSTDIRECTCALL_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E3ADF0)

namespace Unity::Collections
{
	inline static constexpr unsigned int Hash64Long_0000078D$BurstDirectCall_TypeDefinitionIndex = 37049;

	class Hash64Long_0000078D$BurstDirectCall : public Il2CppObject
	{
	public:
		::System::Int32 Pointer; // 0x0
		::System::Int32 DeferredCompilation; // 0x8

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_HASH64LONG_0000078D$BURSTDIRECTCALL_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void GetFunctionPointerDiscard(int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_HASH64LONG_0000078D$BURSTDIRECTCALL_GETFUNCTIONPOINTERDISCARD_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetFunctionPointer()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_HASH64LONG_0000078D$BURSTDIRECTCALL_GETFUNCTIONPOINTER_OFFSET))(nullptr);
		}

		::System::Void Constructor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_HASH64LONG_0000078D$BURSTDIRECTCALL_CONSTRUCTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_HASH64LONG_0000078D$BURSTDIRECTCALL_.CCTOR_OFFSET))(nullptr);
		}

		::System::UInt64 Invoke(::System::Object** arg, ::System::Object** arg, ::System::Int64 arg, ::System::Object** arg)
		{
			return (return (::System::UInt64(*)(::System::Object**, ::System::Object**, ::System::Int64, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_HASH64LONG_0000078D$BURSTDIRECTCALL_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

