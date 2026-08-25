#pragma once
#include "unitysdk.h"

#define UNMANAGEDMEMORYSTREAMFORMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9249D70)
#define UNMANAGEDMEMORYSTREAMFORMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9249FA0)

	inline static constexpr unsigned int UnmanagedMemoryStreamForModule_TypeDefinitionIndex = 24909;

	class UnmanagedMemoryStreamForModule : public Il2CppObject
	{
	public:
		::System::Reflection::Module* module; // 0x68

		::System::Void .ctor(::System::Object** arg, ::System::Int64 arg, ::System::Reflection::Module* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int64, ::System::Reflection::Module*, ::PVOID))((::PBYTE)hIl2Cpp + UNMANAGEDMEMORYSTREAMFORMODULE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNMANAGEDMEMORYSTREAMFORMODULE_DISPOSE_OFFSET))(arg, nullptr);
		}

	};

