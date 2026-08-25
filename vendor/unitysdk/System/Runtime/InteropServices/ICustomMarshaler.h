#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_ICUSTOMMARSHALER_MARSHALNATIVETOMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_ICUSTOMMARSHALER_MARSHALMANAGEDTONATIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_ICUSTOMMARSHALER_CLEANUPNATIVEDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_ICUSTOMMARSHALER_CLEANUPMANAGEDDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_ICUSTOMMARSHALER_GETNATIVEDATASIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int ICustomMarshaler_TypeDefinitionIndex = 24689;

	class ICustomMarshaler : public Il2CppObject
	{
	public:
		::System::Object* MarshalNativeToManaged(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_ICUSTOMMARSHALER_MARSHALNATIVETOMANAGED_OFFSET))(arg, nullptr);
		}

		::System::Int32 MarshalManagedToNative(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_ICUSTOMMARSHALER_MARSHALMANAGEDTONATIVE_OFFSET))(arg, nullptr);
		}

		::System::Void CleanUpNativeData(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_ICUSTOMMARSHALER_CLEANUPNATIVEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void CleanUpManagedData(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_ICUSTOMMARSHALER_CLEANUPMANAGEDDATA_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetNativeDataSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_ICUSTOMMARSHALER_GETNATIVEDATASIZE_OFFSET))(nullptr);
		}

	};
}

