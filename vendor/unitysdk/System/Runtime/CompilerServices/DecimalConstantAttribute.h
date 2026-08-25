#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_DECIMALCONSTANTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9227C80)
#define SYSTEM_RUNTIME_COMPILERSERVICES_DECIMALCONSTANTATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9227D00)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int DecimalConstantAttribute_TypeDefinitionIndex = 24746;

	class DecimalConstantAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Decimal* _dec; // 0x10

		::System::Void .ctor(::System::Byte arg, ::System::Byte arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Byte, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_DECIMALCONSTANTATTRIBUTE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Decimal* get_Value()
		{
			return (return (::System::Decimal*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_DECIMALCONSTANTATTRIBUTE_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

