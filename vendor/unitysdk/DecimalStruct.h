#pragma once
#include "unitysdk.h"

#define DECIMALSTRUCT_GET_ISDECIMAL_OFFSET UNITYSDK_OFFSET(0x9A0C170)
#define DECIMALSTRUCT_SET_ISDECIMAL_OFFSET UNITYSDK_OFFSET(0x9A0C180)
#define DECIMALSTRUCT_GET_DVALUE_OFFSET UNITYSDK_OFFSET(0x9A0C190)
#define DECIMALSTRUCT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0BD40)
#define DECIMALSTRUCT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0BCE0)

	inline static constexpr unsigned int DecimalStruct_TypeDefinitionIndex = 27965;

	class DecimalStruct : public Il2CppObject
	{
	public:
		::System::Boolean isDecimal; // 0x10
		::Il2CppArray<::System::Object*>* dvalue; // 0x18

		::System::Boolean get_IsDecimal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DECIMALSTRUCT_GET_ISDECIMAL_OFFSET))(nullptr);
		}

		::System::Void set_IsDecimal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DECIMALSTRUCT_SET_ISDECIMAL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Dvalue()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DECIMALSTRUCT_GET_DVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECIMALSTRUCT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DECIMALSTRUCT_.CTOR_OFFSET))(arg, nullptr);
		}

	};

