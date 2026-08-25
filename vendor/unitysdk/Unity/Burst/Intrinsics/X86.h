#pragma once
#include "../../../unitysdk.h"

#define UNITY_BURST_INTRINSICS_X86_BURSTINTRINSICSETCSRFROMMANAGED_OFFSET UNITYSDK_OFFSET(0x9E356F0)
#define UNITY_BURST_INTRINSICS_X86_BURSTINTRINSICGETCSRFROMMANAGED_OFFSET UNITYSDK_OFFSET(0x9E35700)
#define UNITY_BURST_INTRINSICS_X86_DOSETCSRTRAMPOLINE_OFFSET UNITYSDK_OFFSET(0x9E35710)
#define UNITY_BURST_INTRINSICS_X86_DOGETCSRTRAMPOLINE_OFFSET UNITYSDK_OFFSET(0x9E35910)
#define UNITY_BURST_INTRINSICS_X86_DOSETCSRTRAMPOLINE$BURSTMANAGED_OFFSET UNITYSDK_OFFSET(0x9E35B20)
#define UNITY_BURST_INTRINSICS_X86_DOGETCSRTRAMPOLINE$BURSTMANAGED_OFFSET UNITYSDK_OFFSET(0x9E35B40)

namespace Unity::Burst::Intrinsics
{
	inline static constexpr unsigned int X86_TypeDefinitionIndex = 37275;

	class X86 : public Il2CppObject
	{
	public:
		::System::Void BurstIntrinsicSetCSRFromManaged(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_INTRINSICS_X86_BURSTINTRINSICSETCSRFROMMANAGED_OFFSET))(arg, nullptr);
		}

		::System::Int32 BurstIntrinsicGetCSRFromManaged()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_INTRINSICS_X86_BURSTINTRINSICGETCSRFROMMANAGED_OFFSET))(nullptr);
		}

		::System::Void DoSetCSRTrampoline(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_INTRINSICS_X86_DOSETCSRTRAMPOLINE_OFFSET))(arg, nullptr);
		}

		::System::Int32 DoGetCSRTrampoline()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_INTRINSICS_X86_DOGETCSRTRAMPOLINE_OFFSET))(nullptr);
		}

		::System::Void DoSetCSRTrampoline$BurstManaged(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_INTRINSICS_X86_DOSETCSRTRAMPOLINE$BURSTMANAGED_OFFSET))(arg, nullptr);
		}

		::System::Int32 DoGetCSRTrampoline$BurstManaged()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_INTRINSICS_X86_DOGETCSRTRAMPOLINE$BURSTMANAGED_OFFSET))(nullptr);
		}

	};
}

