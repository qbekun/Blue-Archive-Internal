#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7CCE0)
#define SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7CCF0)
#define SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7CD00)
#define SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B7CD20)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int CheckoutException_TypeDefinitionIndex = 29537;

	class CheckoutException : public Il2CppObject
	{
	public:
		::System::ComponentModel::Design::CheckoutException* Canceled; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

