#pragma once
#include "unitysdk.h"

#define FLOATFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB26D0)
#define FLOATFIELD_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x9FB2720)

	inline static constexpr unsigned int FloatField_TypeDefinitionIndex = 33961;

	class FloatField : public SetNearestNodeDelegate
	{
	public:
		Il2CppObject* min; // 0x60
		Il2CppObject* max; // 0x68
		::System::Single incStep; // 0x70
		::System::Single incStepMult; // 0x74
		::System::Int32 decimals; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Single ValidateValue(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLOATFIELD_VALIDATEVALUE_OFFSET))(arg, nullptr);
		}

	};

