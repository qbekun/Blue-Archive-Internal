#pragma once
#include "../../unitysdk.h"

#define UNITY_COLLECTIONS_TRY_00000756$BURSTDIRECTCALL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9E39530)
#define UNITY_COLLECTIONS_TRY_00000756$BURSTDIRECTCALL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E39540)
#define UNITY_COLLECTIONS_TRY_00000756$BURSTDIRECTCALL_GETFUNCTIONPOINTERDISCARD_OFFSET UNITYSDK_OFFSET(0x9E395E0)
#define UNITY_COLLECTIONS_TRY_00000756$BURSTDIRECTCALL_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x9E39550)
#define UNITY_COLLECTIONS_TRY_00000756$BURSTDIRECTCALL_GETFUNCTIONPOINTER_OFFSET UNITYSDK_OFFSET(0x9E39730)
#define UNITY_COLLECTIONS_TRY_00000756$BURSTDIRECTCALL_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E392F0)

namespace Unity::Collections
{
	inline static constexpr unsigned int Try_00000756$BurstDirectCall_TypeDefinitionIndex = 37046;

	class Try_00000756$BurstDirectCall : public Il2CppObject
	{
	public:
		::System::Int32 Pointer; // 0x0
		::System::Int32 DeferredCompilation; // 0x8

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_TRY_00000756$BURSTDIRECTCALL_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_TRY_00000756$BURSTDIRECTCALL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void GetFunctionPointerDiscard(int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_TRY_00000756$BURSTDIRECTCALL_GETFUNCTIONPOINTERDISCARD_OFFSET))(arg, nullptr);
		}

		::System::Void Constructor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_TRY_00000756$BURSTDIRECTCALL_CONSTRUCTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetFunctionPointer()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_TRY_00000756$BURSTDIRECTCALL_GETFUNCTIONPOINTER_OFFSET))(nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, Block&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, Block&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_TRY_00000756$BURSTDIRECTCALL_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

