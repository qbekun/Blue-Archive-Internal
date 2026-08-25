#pragma once
#include "unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionBinder; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CONVERTTYPE; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ArrayType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggCastResult; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }

#define EXPLICITCONVERSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x90AED60)
#define EXPLICITCONVERSION_GET_EXPRDEST_OFFSET UNITYSDK_OFFSET(0x90AEE10)
#define EXPLICITCONVERSION_BIND_OFFSET UNITYSDK_OFFSET(0x90AEE20)
#define EXPLICITCONVERSION_BINDEXPLICITCONVERSIONFROMNUB_OFFSET UNITYSDK_OFFSET(0x90AF0B0)
#define EXPLICITCONVERSION_BINDEXPLICITCONVERSIONFROMARRAYTOILIST_OFFSET UNITYSDK_OFFSET(0x90AF310)
#define EXPLICITCONVERSION_BINDEXPLICITCONVERSIONFROMILISTTOARRAY_OFFSET UNITYSDK_OFFSET(0x90AFCC0)
#define EXPLICITCONVERSION_BINDEXPLICITCONVERSIONFROMARRAYTOARRAY_OFFSET UNITYSDK_OFFSET(0x90AFE60)
#define EXPLICITCONVERSION_BINDEXPLICITCONVERSIONTOARRAY_OFFSET UNITYSDK_OFFSET(0x90AF4C0)
#define EXPLICITCONVERSION_BINDEXPLICITCONVERSIONTOPOINTER_OFFSET UNITYSDK_OFFSET(0x90AF5E0)
#define EXPLICITCONVERSION_BINDEXPLICITCONVERSIONFROMENUMTOAGGREGATE_OFFSET UNITYSDK_OFFSET(0x90AFF30)
#define EXPLICITCONVERSION_BINDEXPLICITCONVERSIONFROMDECIMALTOENUM_OFFSET UNITYSDK_OFFSET(0x90B03B0)
#define EXPLICITCONVERSION_BINDEXPLICITCONVERSIONFROMENUMTODECIMAL_OFFSET UNITYSDK_OFFSET(0x90B0110)
#define EXPLICITCONVERSION_BINDEXPLICITCONVERSIONTOENUM_OFFSET UNITYSDK_OFFSET(0x90B0540)
#define EXPLICITCONVERSION_BINDEXPLICITCONVERSIONBETWEENSIMPLETYPES_OFFSET UNITYSDK_OFFSET(0x90B0830)
#define EXPLICITCONVERSION_BINDEXPLICITCONVERSIONBETWEENAGGREGATES_OFFSET UNITYSDK_OFFSET(0x90B0AD0)
#define EXPLICITCONVERSION_BINDEXPLICITCONVERSIONFROMPOINTERTOINT_OFFSET UNITYSDK_OFFSET(0x90B1090)
#define EXPLICITCONVERSION_BINDEXPLICITCONVERSIONTOAGGREGATE_OFFSET UNITYSDK_OFFSET(0x90AF6C0)

	inline static constexpr unsigned int ExplicitConversion_TypeDefinitionIndex = 34466;

	class ExplicitConversion : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* _binder; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _exprSrc; // 0x20
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* _typeSrc; // 0x28
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* _typeDest; // 0x30
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _exprDest; // 0x38
		::System::Boolean _needsExprDest; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* _flags; // 0x44

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + EXPLICITCONVERSION_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_ExprDest()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPLICITCONVERSION_GET_EXPRDEST_OFFSET))(nullptr);
		}

		::System::Boolean Bind()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPLICITCONVERSION_BIND_OFFSET))(nullptr);
		}

		::System::Boolean bindExplicitConversionFromNub()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPLICITCONVERSION_BINDEXPLICITCONVERSIONFROMNUB_OFFSET))(nullptr);
		}

		::System::Boolean bindExplicitConversionFromArrayToIList()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPLICITCONVERSION_BINDEXPLICITCONVERSIONFROMARRAYTOILIST_OFFSET))(nullptr);
		}

		::System::Boolean bindExplicitConversionFromIListToArray(::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType*, ::PVOID))((::PBYTE)hIl2Cpp + EXPLICITCONVERSION_BINDEXPLICITCONVERSIONFROMILISTTOARRAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean bindExplicitConversionFromArrayToArray(::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType*, ::PVOID))((::PBYTE)hIl2Cpp + EXPLICITCONVERSION_BINDEXPLICITCONVERSIONFROMARRAYTOARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean bindExplicitConversionToArray(::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType*, ::PVOID))((::PBYTE)hIl2Cpp + EXPLICITCONVERSION_BINDEXPLICITCONVERSIONTOARRAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean bindExplicitConversionToPointer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPLICITCONVERSION_BINDEXPLICITCONVERSIONTOPOINTER_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult* bindExplicitConversionFromEnumToAggregate(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + EXPLICITCONVERSION_BINDEXPLICITCONVERSIONFROMENUMTOAGGREGATE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult* bindExplicitConversionFromDecimalToEnum(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + EXPLICITCONVERSION_BINDEXPLICITCONVERSIONFROMDECIMALTOENUM_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult* bindExplicitConversionFromEnumToDecimal(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + EXPLICITCONVERSION_BINDEXPLICITCONVERSIONFROMENUMTODECIMAL_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult* bindExplicitConversionToEnum(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + EXPLICITCONVERSION_BINDEXPLICITCONVERSIONTOENUM_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult* bindExplicitConversionBetweenSimpleTypes(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + EXPLICITCONVERSION_BINDEXPLICITCONVERSIONBETWEENSIMPLETYPES_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult* bindExplicitConversionBetweenAggregates(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + EXPLICITCONVERSION_BINDEXPLICITCONVERSIONBETWEENAGGREGATES_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult* bindExplicitConversionFromPointerToInt(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + EXPLICITCONVERSION_BINDEXPLICITCONVERSIONFROMPOINTERTOINT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult* bindExplicitConversionToAggregate(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + EXPLICITCONVERSION_BINDEXPLICITCONVERSIONTOAGGREGATE_OFFSET))(arg, nullptr);
		}

	};

