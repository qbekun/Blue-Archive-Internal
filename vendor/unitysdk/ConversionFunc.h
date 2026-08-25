#pragma once
#include "unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr&; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CONVERTTYPE; }

#define CONVERSIONFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x90AEC00)
#define CONVERSIONFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x90AED10)

	inline static constexpr unsigned int ConversionFunc_TypeDefinitionIndex = 34465;

	class ConversionFunc : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONVERSIONFUNC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + CONVERSIONFUNC_INVOKE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};

