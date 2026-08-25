#pragma once
#include "../unitysdk.h"

#define NPA_NXPPAYMENTPRODUCT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCCC40)
#define NPA_NXPPAYMENTPRODUCT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCCC50)
#define NPA_NXPPAYMENTPRODUCT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BCCC90)

namespace NPA
{
	inline static constexpr unsigned int NXPPaymentProduct_TypeDefinitionIndex = 25668;

	class NXPPaymentProduct : public Il2CppObject
	{
	public:
		::System::String* productId; // 0x10
		::System::Int32 quantity; // 0x18
		::System::String* name; // 0x20
		::System::String* price; // 0x28
		::System::String* meta; // 0x30
		::System::String* discountFlag; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTPRODUCT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTPRODUCT_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTPRODUCT_TOSTRING_OFFSET))(nullptr);
		}

	};
}

