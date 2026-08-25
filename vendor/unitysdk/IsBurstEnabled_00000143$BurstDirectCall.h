#pragma once
#include "unitysdk.h"

#define ISBURSTENABLED_00000143$BURSTDIRECTCALL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E2ED60)
#define ISBURSTENABLED_00000143$BURSTDIRECTCALL_GETFUNCTIONPOINTERDISCARD_OFFSET UNITYSDK_OFFSET(0x9E2EE00)
#define ISBURSTENABLED_00000143$BURSTDIRECTCALL_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x9E2ED70)
#define ISBURSTENABLED_00000143$BURSTDIRECTCALL_GETFUNCTIONPOINTER_OFFSET UNITYSDK_OFFSET(0x9E2EF50)
#define ISBURSTENABLED_00000143$BURSTDIRECTCALL_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E2E9D0)
#define ISBURSTENABLED_00000143$BURSTDIRECTCALL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9E2E710)

	inline static constexpr unsigned int IsBurstEnabled_00000143$BurstDirectCall_TypeDefinitionIndex = 37234;

	class IsBurstEnabled_00000143$BurstDirectCall : public Il2CppObject
	{
	public:
		::System::Int32 Pointer; // 0x0
		::System::Int32 DeferredCompilation; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ISBURSTENABLED_00000143$BURSTDIRECTCALL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void GetFunctionPointerDiscard(int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + ISBURSTENABLED_00000143$BURSTDIRECTCALL_GETFUNCTIONPOINTERDISCARD_OFFSET))(arg, nullptr);
		}

		::System::Void Constructor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ISBURSTENABLED_00000143$BURSTDIRECTCALL_CONSTRUCTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetFunctionPointer()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ISBURSTENABLED_00000143$BURSTDIRECTCALL_GETFUNCTIONPOINTER_OFFSET))(nullptr);
		}

		::System::Boolean Invoke()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ISBURSTENABLED_00000143$BURSTDIRECTCALL_INVOKE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ISBURSTENABLED_00000143$BURSTDIRECTCALL_INITIALIZE_OFFSET))(nullptr);
		}

	};

