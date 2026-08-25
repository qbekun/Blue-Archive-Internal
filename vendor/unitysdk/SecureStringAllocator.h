#pragma once
#include "unitysdk.h"

#define SECURESTRINGALLOCATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9225DB0)
#define SECURESTRINGALLOCATOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x9227010)

	inline static constexpr unsigned int SecureStringAllocator_TypeDefinitionIndex = 24714;

	class SecureStringAllocator : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SECURESTRINGALLOCATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SECURESTRINGALLOCATOR_INVOKE_OFFSET))(arg, nullptr);
		}

	};

