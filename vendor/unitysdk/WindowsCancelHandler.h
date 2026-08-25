#pragma once
#include "unitysdk.h"

#define WINDOWSCANCELHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93B5170)
#define WINDOWSCANCELHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x93B5240)

	inline static constexpr unsigned int WindowsCancelHandler_TypeDefinitionIndex = 23957;

	class WindowsCancelHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WINDOWSCANCELHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WINDOWSCANCELHANDLER_INVOKE_OFFSET))(arg, nullptr);
		}

	};

