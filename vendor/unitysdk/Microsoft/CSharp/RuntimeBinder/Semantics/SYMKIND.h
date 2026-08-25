#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SYMKIND; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int SYMKIND_TypeDefinitionIndex = 34546;

	class SYMKIND : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* SK_NamespaceSymbol; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* SK_AggregateSymbol; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* SK_TypeParameterSymbol; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* SK_FieldSymbol; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* SK_LocalVariableSymbol; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* SK_MethodSymbol; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* SK_PropertySymbol; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* SK_EventSymbol; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* SK_Scope; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* SK_IndexerSymbol; // 0x0

	};
}

