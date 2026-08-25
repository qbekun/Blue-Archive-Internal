#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprMulti; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class EXPRFLAG; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMULTIGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CE620)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMULTIGET_GET_OPTIONALMULTI_OFFSET UNITYSDK_OFFSET(0x90CE680)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMULTIGET_SET_OPTIONALMULTI_OFFSET UNITYSDK_OFFSET(0x90CE690)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprMultiGet_TypeDefinitionIndex = 34561;

	class ExprMultiGet : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti* _OptionalMulti_k__BackingField; // 0x40

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMULTIGET_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti* get_OptionalMulti()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMULTIGET_GET_OPTIONALMULTI_OFFSET))(nullptr);
		}

		::System::Void set_OptionalMulti(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMULTIGET_SET_OPTIONALMULTI_OFFSET))(arg, nullptr);
		}

	};
}

