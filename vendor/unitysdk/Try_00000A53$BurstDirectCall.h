#pragma once
#include "unitysdk.h"

#define TRY_00000A53$BURSTDIRECTCALL_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x9E384A0)
#define TRY_00000A53$BURSTDIRECTCALL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9E37360)
#define TRY_00000A53$BURSTDIRECTCALL_GETFUNCTIONPOINTERDISCARD_OFFSET UNITYSDK_OFFSET(0x9E38530)
#define TRY_00000A53$BURSTDIRECTCALL_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E38260)
#define TRY_00000A53$BURSTDIRECTCALL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E386E0)
#define TRY_00000A53$BURSTDIRECTCALL_GETFUNCTIONPOINTER_OFFSET UNITYSDK_OFFSET(0x9E38680)

	inline static constexpr unsigned int Try_00000A53$BurstDirectCall_TypeDefinitionIndex = 37005;

	class Try_00000A53$BurstDirectCall : public Il2CppObject
	{
	public:
		::System::Int32 Pointer; // 0x0
		::System::Int32 DeferredCompilation; // 0x8

		::System::Void Constructor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRY_00000A53$BURSTDIRECTCALL_CONSTRUCTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRY_00000A53$BURSTDIRECTCALL_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void GetFunctionPointerDiscard(int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + TRY_00000A53$BURSTDIRECTCALL_GETFUNCTIONPOINTERDISCARD_OFFSET))(arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, Block&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, Block&*, ::PVOID))((::PBYTE)hIl2Cpp + TRY_00000A53$BURSTDIRECTCALL_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRY_00000A53$BURSTDIRECTCALL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetFunctionPointer()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRY_00000A53$BURSTDIRECTCALL_GETFUNCTIONPOINTER_OFFSET))(nullptr);
		}

	};

