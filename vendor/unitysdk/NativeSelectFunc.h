#pragma once
#include "unitysdk.h"

#define NATIVESELECTFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ABB850)
#define NATIVESELECTFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x9ABD2E0)

	inline static constexpr unsigned int NativeSelectFunc_TypeDefinitionIndex = 29117;

	class NativeSelectFunc : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NATIVESELECTFUNC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NATIVESELECTFUNC_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

