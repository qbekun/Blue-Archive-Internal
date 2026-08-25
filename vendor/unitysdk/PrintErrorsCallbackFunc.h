#pragma once
#include "unitysdk.h"

#define PRINTERRORSCALLBACKFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB8470)
#define PRINTERRORSCALLBACKFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x9ABA6F0)

	inline static constexpr unsigned int PrintErrorsCallbackFunc_TypeDefinitionIndex = 29113;

	class PrintErrorsCallbackFunc : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PRINTERRORSCALLBACKFUNC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PRINTERRORSCALLBACKFUNC_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

