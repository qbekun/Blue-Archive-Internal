#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeKind; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int TypeKind_TypeDefinitionIndex = 34604;

	class TypeKind : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeKind* TK_AggregateType; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeKind* TK_VoidType; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeKind* TK_NullType; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeKind* TK_MethodGroupType; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeKind* TK_ArgumentListType; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeKind* TK_ArrayType; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeKind* TK_PointerType; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeKind* TK_ParameterModifierType; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeKind* TK_NullableType; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeKind* TK_TypeParameterType; // 0x0

	};
}

