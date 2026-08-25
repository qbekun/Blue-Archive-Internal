#pragma once
#include "unitysdk.h"

#define BIOCONTROLFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x96DCB40)
#define BIOCONTROLFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x96DD190)

	inline static constexpr unsigned int BioControlFunc_TypeDefinitionIndex = 29097;

	class BioControlFunc : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BIOCONTROLFUNC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 Invoke(::System::Int32 arg, ControlCommand* arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ControlCommand*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BIOCONTROLFUNC_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

