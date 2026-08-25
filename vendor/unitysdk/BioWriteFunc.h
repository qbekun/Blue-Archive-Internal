#pragma once
#include "unitysdk.h"

#define BIOWRITEFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x96DCA70)
#define BIOWRITEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x96DD170)

	inline static constexpr unsigned int BioWriteFunc_TypeDefinitionIndex = 29096;

	class BioWriteFunc : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BIOWRITEFUNC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BIOWRITEFUNC_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

