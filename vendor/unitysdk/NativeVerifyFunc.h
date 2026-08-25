#pragma once
#include "unitysdk.h"

#define NATIVEVERIFYFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ABB780)
#define NATIVEVERIFYFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x9ABD2C0)

	inline static constexpr unsigned int NativeVerifyFunc_TypeDefinitionIndex = 29116;

	class NativeVerifyFunc : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NATIVEVERIFYFUNC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NATIVEVERIFYFUNC_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

