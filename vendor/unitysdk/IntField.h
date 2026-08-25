#pragma once
#include "unitysdk.h"

#define INTFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB2590)
#define INTFIELD_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x9FB25E0)

	inline static constexpr unsigned int IntField_TypeDefinitionIndex = 33959;

	class IntField : public GetToVectorDelegate
	{
	public:
		Il2CppObject* min; // 0x60
		Il2CppObject* max; // 0x68
		::System::Int32 incStep; // 0x70
		::System::Int32 intStepMult; // 0x74

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 ValidateValue(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTFIELD_VALIDATEVALUE_OFFSET))(arg, nullptr);
		}

	};

