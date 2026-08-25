#pragma once
#include "../../unitysdk.h"

#define UNITY_BURST_SHAREDSTATIC_GETORCREATESHAREDSTATICINTERNAL_OFFSET UNITYSDK_OFFSET(0x9E35600)

namespace Unity::Burst
{
	inline static constexpr unsigned int SharedStatic_TypeDefinitionIndex = 37258;

	class SharedStatic : public Il2CppObject
	{
	public:
		::System::Object** GetOrCreateSharedStaticInternal(::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Object**(*)(::System::Int64, ::System::Int64, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_SHAREDSTATIC_GETORCREATESHAREDSTATICINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

