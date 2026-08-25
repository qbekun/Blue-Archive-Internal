#pragma once
#include "unitysdk.h"

#define ISBURSTENABLED_00000143$POSTFIXBURSTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E2EC90)
#define ISBURSTENABLED_00000143$POSTFIXBURSTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E2ECA0)

	inline static constexpr unsigned int IsBurstEnabled_00000143$PostfixBurstDelegate_TypeDefinitionIndex = 37233;

	class IsBurstEnabled_00000143$PostfixBurstDelegate : public Il2CppObject
	{
	public:
		::System::Boolean Invoke()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ISBURSTENABLED_00000143$POSTFIXBURSTDELEGATE_INVOKE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ISBURSTENABLED_00000143$POSTFIXBURSTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

