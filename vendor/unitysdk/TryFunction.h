#pragma once
#include "unitysdk.h"

#define TRYFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E37370)
#define TRYFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E37380)

	inline static constexpr unsigned int TryFunction_TypeDefinitionIndex = 36996;

	class TryFunction : public Il2CppObject
	{
	public:
		::System::Int32 Invoke(::System::Int32 arg, Block&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, Block&*, ::PVOID))((::PBYTE)hIl2Cpp + TRYFUNCTION_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TRYFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

