#pragma once
#include "unitysdk.h"

#define BCRYPT_BCRYPTGENRANDOM_OFFSET UNITYSDK_OFFSET(0x911CD30)

	inline static constexpr unsigned int BCrypt_TypeDefinitionIndex = 23545;

	class BCrypt : public Il2CppObject
	{
	public:
		NTSTATUS* BCryptGenRandom(::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (NTSTATUS*(*)(::System::Int32, ::System::Object**, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BCRYPT_BCRYPTGENRANDOM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

