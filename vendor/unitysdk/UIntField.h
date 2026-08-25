#pragma once
#include "unitysdk.h"

#define UINTFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB2630)
#define UINTFIELD_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x9FB2680)

	inline static constexpr unsigned int UIntField_TypeDefinitionIndex = 33960;

	class UIntField : public <>c__DisplayClass67_0
	{
	public:
		Il2CppObject* min; // 0x60
		Il2CppObject* max; // 0x68
		::System::UInt32 incStep; // 0x70
		::System::UInt32 intStepMult; // 0x74

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINTFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::UInt32 ValidateValue(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UINTFIELD_VALIDATEVALUE_OFFSET))(arg, nullptr);
		}

	};

