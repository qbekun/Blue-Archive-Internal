#pragma once
#include "../../../unitysdk.h"

#define UNITY_BURST_INTRINSICS_DOGETCSRTRAMPOLINE_00000128$POSTFIXBURSTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E36580)
#define UNITY_BURST_INTRINSICS_DOGETCSRTRAMPOLINE_00000128$POSTFIXBURSTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E36590)

namespace Unity::Burst::Intrinsics
{
	inline static constexpr unsigned int DoGetCSRTrampoline_00000128$PostfixBurstDelegate_TypeDefinitionIndex = 37273;

	class DoGetCSRTrampoline_00000128$PostfixBurstDelegate : public Il2CppObject
	{
	public:
		::System::Int32 Invoke()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_INTRINSICS_DOGETCSRTRAMPOLINE_00000128$POSTFIXBURSTDELEGATE_INVOKE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_INTRINSICS_DOGETCSRTRAMPOLINE_00000128$POSTFIXBURSTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

