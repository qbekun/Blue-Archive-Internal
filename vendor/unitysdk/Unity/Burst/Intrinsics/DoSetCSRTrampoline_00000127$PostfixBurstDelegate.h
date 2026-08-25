#pragma once
#include "../../../unitysdk.h"

#define UNITY_BURST_INTRINSICS_DOSETCSRTRAMPOLINE_00000127$POSTFIXBURSTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E36240)
#define UNITY_BURST_INTRINSICS_DOSETCSRTRAMPOLINE_00000127$POSTFIXBURSTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E36310)

namespace Unity::Burst::Intrinsics
{
	inline static constexpr unsigned int DoSetCSRTrampoline_00000127$PostfixBurstDelegate_TypeDefinitionIndex = 37271;

	class DoSetCSRTrampoline_00000127$PostfixBurstDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_INTRINSICS_DOSETCSRTRAMPOLINE_00000127$POSTFIXBURSTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_INTRINSICS_DOSETCSRTRAMPOLINE_00000127$POSTFIXBURSTDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

