#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class symbmask_t; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int symbmask_t_TypeDefinitionIndex = 34548;

	class symbmask_t : public Il2CppObject
	{
	public:
		::System::Int64 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t* MASK_NamespaceSymbol; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t* MASK_AggregateSymbol; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t* MASK_TypeParameterSymbol; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t* MASK_FieldSymbol; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t* MASK_MethodSymbol; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t* MASK_PropertySymbol; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t* MASK_EventSymbol; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t* MASK_ALL; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t* MASK_Member; // 0x0

	};
}

