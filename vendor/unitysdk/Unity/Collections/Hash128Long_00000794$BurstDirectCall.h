#pragma once
#include "../../unitysdk.h"

namespace Unity::Mathematics { class uint4&; }

#define UNITY_COLLECTIONS_HASH128LONG_00000794$BURSTDIRECTCALL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E3C640)
#define UNITY_COLLECTIONS_HASH128LONG_00000794$BURSTDIRECTCALL_GETFUNCTIONPOINTER_OFFSET UNITYSDK_OFFSET(0x9E3C6E0)
#define UNITY_COLLECTIONS_HASH128LONG_00000794$BURSTDIRECTCALL_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x9E3C650)
#define UNITY_COLLECTIONS_HASH128LONG_00000794$BURSTDIRECTCALL_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E3B0B0)
#define UNITY_COLLECTIONS_HASH128LONG_00000794$BURSTDIRECTCALL_GETFUNCTIONPOINTERDISCARD_OFFSET UNITYSDK_OFFSET(0x9E3C740)
#define UNITY_COLLECTIONS_HASH128LONG_00000794$BURSTDIRECTCALL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9E3C890)

namespace Unity::Collections
{
	inline static constexpr unsigned int Hash128Long_00000794$BurstDirectCall_TypeDefinitionIndex = 37051;

	class Hash128Long_00000794$BurstDirectCall : public Il2CppObject
	{
	public:
		::System::Int32 Pointer; // 0x0
		::System::Int32 DeferredCompilation; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_HASH128LONG_00000794$BURSTDIRECTCALL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetFunctionPointer()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_HASH128LONG_00000794$BURSTDIRECTCALL_GETFUNCTIONPOINTER_OFFSET))(nullptr);
		}

		::System::Void Constructor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_HASH128LONG_00000794$BURSTDIRECTCALL_CONSTRUCTOR_OFFSET))(nullptr);
		}

		::System::Void Invoke(::System::Object** arg, ::System::Object** arg, ::System::Int64 arg, ::System::Object** arg, ::Unity::Mathematics::uint4&* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int64, ::System::Object**, ::Unity::Mathematics::uint4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_HASH128LONG_00000794$BURSTDIRECTCALL_INVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetFunctionPointerDiscard(int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_HASH128LONG_00000794$BURSTDIRECTCALL_GETFUNCTIONPOINTERDISCARD_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_HASH128LONG_00000794$BURSTDIRECTCALL_INITIALIZE_OFFSET))(nullptr);
		}

	};
}

