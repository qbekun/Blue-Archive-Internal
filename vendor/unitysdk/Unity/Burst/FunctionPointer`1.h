#pragma once
#include "../../unitysdk.h"

#define UNITY_BURST_FUNCTIONPOINTER`1_GET_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_BURST_FUNCTIONPOINTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Burst
{
	inline static constexpr unsigned int FunctionPointer`1_TypeDefinitionIndex = 37255;

	class FunctionPointer`1 : public Il2CppObject
	{
	public:
		::System::Int32 _ptr; // 0x0

		Il2CppObject* get_Invoke()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_FUNCTIONPOINTER`1_GET_INVOKE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_FUNCTIONPOINTER`1_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

