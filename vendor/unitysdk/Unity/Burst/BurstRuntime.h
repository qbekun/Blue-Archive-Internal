#pragma once
#include "../../unitysdk.h"

#define UNITY_BURST_BURSTRUNTIME_GETHASHCODE64_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_BURST_BURSTRUNTIME_HASHSTRINGWITHFNV1A64_OFFSET UNITYSDK_OFFSET(0x9E2F8B0)
#define UNITY_BURST_BURSTRUNTIME_PREVENTREQUIREDATTRIBUTESTRIP_OFFSET UNITYSDK_OFFSET(0x9E2F930)
#define UNITY_BURST_BURSTRUNTIME_LOG_OFFSET UNITYSDK_OFFSET(0x9E2FA20)

namespace Unity::Burst
{
	inline static constexpr unsigned int BurstRuntime_TypeDefinitionIndex = 37243;

	class BurstRuntime : public Il2CppObject
	{
	public:
		::System::Int64 GetHashCode64()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTRUNTIME_GETHASHCODE64_OFFSET))(nullptr);
		}

		::System::Int64 HashStringWithFNV1A64(::System::String* str)
		{
			return (return (::System::Int64(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTRUNTIME_HASHSTRINGWITHFNV1A64_OFFSET))(str, nullptr);
		}

		::System::Void PreventRequiredAttributeStrip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTRUNTIME_PREVENTREQUIREDATTRIBUTESTRIP_OFFSET))(nullptr);
		}

		::System::Void Log(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTRUNTIME_LOG_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

