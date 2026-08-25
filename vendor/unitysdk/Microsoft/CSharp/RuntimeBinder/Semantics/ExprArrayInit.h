#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CDF70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINIT_GET_OPTIONALARGUMENTS_OFFSET UNITYSDK_OFFSET(0x90CE000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINIT_SET_OPTIONALARGUMENTS_OFFSET UNITYSDK_OFFSET(0x90CE010)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINIT_GET_OPTIONALARGUMENTDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x90CE020)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINIT_SET_OPTIONALARGUMENTDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x90CE030)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINIT_GET_DIMENSIONSIZES_OFFSET UNITYSDK_OFFSET(0x90CE040)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINIT_SET_DIMENSIONSIZE_OFFSET UNITYSDK_OFFSET(0x90CE050)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINIT_GET_GENERATEDFORPARAMARRAY_OFFSET UNITYSDK_OFFSET(0x90CE060)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINIT_SET_GENERATEDFORPARAMARRAY_OFFSET UNITYSDK_OFFSET(0x90CE070)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprArrayInit_TypeDefinitionIndex = 34554;

	class ExprArrayInit : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _OptionalArguments_k__BackingField; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _OptionalArgumentDimensions_k__BackingField; // 0x48
		::Il2CppArray<::System::Object*>* _DimensionSizes_k__BackingField; // 0x50
		::System::Int32 _DimensionSize_k__BackingField; // 0x58
		::System::Boolean _GeneratedForParamArray_k__BackingField; // 0x5C

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINIT_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_OptionalArguments()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINIT_GET_OPTIONALARGUMENTS_OFFSET))(nullptr);
		}

		::System::Void set_OptionalArguments(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINIT_SET_OPTIONALARGUMENTS_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_OptionalArgumentDimensions()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINIT_GET_OPTIONALARGUMENTDIMENSIONS_OFFSET))(nullptr);
		}

		::System::Void set_OptionalArgumentDimensions(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINIT_SET_OPTIONALARGUMENTDIMENSIONS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DimensionSizes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINIT_GET_DIMENSIONSIZES_OFFSET))(nullptr);
		}

		::System::Void set_DimensionSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINIT_SET_DIMENSIONSIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_GeneratedForParamArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINIT_GET_GENERATEDFORPARAMARRAY_OFFSET))(nullptr);
		}

		::System::Void set_GeneratedForParamArray(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINIT_SET_GENERATEDFORPARAMARRAY_OFFSET))(arg, nullptr);
		}

	};
}

