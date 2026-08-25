#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINDEX_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CDE80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINDEX_GET_ARRAY_OFFSET UNITYSDK_OFFSET(0x90CDF30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINDEX_SET_ARRAY_OFFSET UNITYSDK_OFFSET(0x90CDF40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINDEX_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x90CDF50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINDEX_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x90CDF60)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprArrayIndex_TypeDefinitionIndex = 34553;

	class ExprArrayIndex : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _Array_k__BackingField; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _Index_k__BackingField; // 0x48

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINDEX_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_Array()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINDEX_GET_ARRAY_OFFSET))(nullptr);
		}

		::System::Void set_Array(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINDEX_SET_ARRAY_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_Index()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINDEX_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void set_Index(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRARRAYINDEX_SET_INDEX_OFFSET))(arg, nullptr);
		}

	};
}

