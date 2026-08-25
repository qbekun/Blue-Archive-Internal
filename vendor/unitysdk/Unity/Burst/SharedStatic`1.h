#pragma once
#include "../../unitysdk.h"

#define UNITY_BURST_SHAREDSTATIC`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_BURST_SHAREDSTATIC`1_GET_DATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_BURST_SHAREDSTATIC`1_GETORCREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_BURST_SHAREDSTATIC`1_GETORCREATEUNSAFE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Burst
{
	inline static constexpr unsigned int SharedStatic`1_TypeDefinitionIndex = 37256;

	class SharedStatic`1 : public Il2CppObject
	{
	public:
		::System::Object** _buffer; // 0x0

		::System::Void .ctor(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_SHAREDSTATIC`1_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject&* get_Data()
		{
			return (return (Il2CppObject&*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_SHAREDSTATIC`1_GET_DATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrCreate(::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_SHAREDSTATIC`1_GETORCREATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetOrCreateUnsafe(::System::UInt32 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_SHAREDSTATIC`1_GETORCREATEUNSAFE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

