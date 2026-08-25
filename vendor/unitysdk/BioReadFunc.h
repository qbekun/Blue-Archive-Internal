#pragma once
#include "unitysdk.h"

#define BIOREADFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x96DC9A0)
#define BIOREADFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x96DD140)

	inline static constexpr unsigned int BioReadFunc_TypeDefinitionIndex = 29095;

	class BioReadFunc : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BIOREADFUNC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BIOREADFUNC_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

