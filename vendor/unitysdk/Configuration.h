#pragma once
#include "unitysdk.h"

#define CONFIGURATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x7743B0)
#define CONFIGURATION_GET_BYTES_OFFSET UNITYSDK_OFFSET(0x774A50)

	inline static constexpr unsigned int Configuration_TypeDefinitionIndex = 22612;

	class Configuration : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* bytes; // 0x10

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONFIGURATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Bytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGURATION_GET_BYTES_OFFSET))(nullptr);
		}

	};

