#pragma once
#include "unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class FUNDTYPE; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedType; }

#define PREDEFINEDTYPEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x90DCEE0)
#define PREDEFINEDTYPEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x90DCF30)

	inline static constexpr unsigned int PredefinedTypeInfo_TypeDefinitionIndex = 34599;

	class PredefinedTypeInfo : public Il2CppObject
	{
	public:
		::System::String* Name; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::FUNDTYPE* FundType; // 0x18
		::System::Type* AssociatedSystemType; // 0x20

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg, ::System::Type* arg, ::System::String* str, ::Microsoft::CSharp::RuntimeBinder::Semantics::FUNDTYPE* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::System::Type*, ::System::String*, ::Microsoft::CSharp::RuntimeBinder::Semantics::FUNDTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + PREDEFINEDTYPEINFO_.CTOR_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg, ::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PREDEFINEDTYPEINFO_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

	};

