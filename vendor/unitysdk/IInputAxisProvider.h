#pragma once
#include "unitysdk.h"

#define IINPUTAXISPROVIDER_GETAXISVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IInputAxisProvider_TypeDefinitionIndex = 34274;

	class IInputAxisProvider : public Il2CppObject
	{
	public:
		::System::Single GetAxisValue(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + IINPUTAXISPROVIDER_GETAXISVALUE_OFFSET))(arg, nullptr);
		}

	};

