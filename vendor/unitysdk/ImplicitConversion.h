#pragma once
#include "unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionBinder; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CONVERTTYPE; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class NullableType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }

#define IMPLICITCONVERSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x90B66E0)
#define IMPLICITCONVERSION_GET_EXPRDEST_OFFSET UNITYSDK_OFFSET(0x90B6790)
#define IMPLICITCONVERSION_BIND_OFFSET UNITYSDK_OFFSET(0x90B67A0)
#define IMPLICITCONVERSION_BINDNUBCONVERSION_OFFSET UNITYSDK_OFFSET(0x90B6B60)
#define IMPLICITCONVERSION_BINDIMPLICITCONVERSIONFROMNULL_OFFSET UNITYSDK_OFFSET(0x90B74C0)
#define IMPLICITCONVERSION_BINDIMPLICITCONVERSIONFROMNULLABLE_OFFSET UNITYSDK_OFFSET(0x90B72C0)
#define IMPLICITCONVERSION_BINDIMPLICITCONVERSIONFROMARRAY_OFFSET UNITYSDK_OFFSET(0x90B75E0)
#define IMPLICITCONVERSION_BINDIMPLICITCONVERSIONFROMPOINTER_OFFSET UNITYSDK_OFFSET(0x90B77D0)
#define IMPLICITCONVERSION_BINDIMPLICITCONVERSIONFROMAGG_OFFSET UNITYSDK_OFFSET(0x90B78C0)
#define IMPLICITCONVERSION_BINDIMPLICITCONVERSIONTOBASE_OFFSET UNITYSDK_OFFSET(0x90B81A0)
#define IMPLICITCONVERSION_BINDIMPLICITCONVERSIONFROMENUM_OFFSET UNITYSDK_OFFSET(0x90B7CE0)
#define IMPLICITCONVERSION_BINDIMPLICITCONVERSIONTOENUM_OFFSET UNITYSDK_OFFSET(0x90B7DB0)
#define IMPLICITCONVERSION_BINDIMPLICITCONVERSIONBETWEENSIMPLETYPES_OFFSET UNITYSDK_OFFSET(0x90B7EF0)

	inline static constexpr unsigned int ImplicitConversion_TypeDefinitionIndex = 34473;

	class ImplicitConversion : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _exprDest; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* _binder; // 0x18
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _exprSrc; // 0x28
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* _typeSrc; // 0x30
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* _typeDest; // 0x38
		::System::Boolean _needsExprDest; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* _flags; // 0x44

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + IMPLICITCONVERSION_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_ExprDest()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPLICITCONVERSION_GET_EXPRDEST_OFFSET))(nullptr);
		}

		::System::Boolean Bind()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPLICITCONVERSION_BIND_OFFSET))(nullptr);
		}

		::System::Boolean BindNubConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::NullableType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::NullableType*, ::PVOID))((::PBYTE)hIl2Cpp + IMPLICITCONVERSION_BINDNUBCONVERSION_OFFSET))(arg, nullptr);
		}

		::System::Boolean bindImplicitConversionFromNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPLICITCONVERSION_BINDIMPLICITCONVERSIONFROMNULL_OFFSET))(nullptr);
		}

		::System::Boolean bindImplicitConversionFromNullable(::Microsoft::CSharp::RuntimeBinder::Semantics::NullableType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::NullableType*, ::PVOID))((::PBYTE)hIl2Cpp + IMPLICITCONVERSION_BINDIMPLICITCONVERSIONFROMNULLABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean bindImplicitConversionFromArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPLICITCONVERSION_BINDIMPLICITCONVERSIONFROMARRAY_OFFSET))(nullptr);
		}

		::System::Boolean bindImplicitConversionFromPointer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPLICITCONVERSION_BINDIMPLICITCONVERSIONFROMPOINTER_OFFSET))(nullptr);
		}

		::System::Boolean bindImplicitConversionFromAgg(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + IMPLICITCONVERSION_BINDIMPLICITCONVERSIONFROMAGG_OFFSET))(arg, nullptr);
		}

		::System::Boolean bindImplicitConversionToBase(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + IMPLICITCONVERSION_BINDIMPLICITCONVERSIONTOBASE_OFFSET))(arg, nullptr);
		}

		::System::Boolean bindImplicitConversionFromEnum(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + IMPLICITCONVERSION_BINDIMPLICITCONVERSIONFROMENUM_OFFSET))(arg, nullptr);
		}

		::System::Boolean bindImplicitConversionToEnum(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + IMPLICITCONVERSION_BINDIMPLICITCONVERSIONTOENUM_OFFSET))(arg, nullptr);
		}

		::System::Boolean bindImplicitConversionBetweenSimpleTypes(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + IMPLICITCONVERSION_BINDIMPLICITCONVERSIONBETWEENSIMPLETYPES_OFFSET))(arg, nullptr);
		}

	};

