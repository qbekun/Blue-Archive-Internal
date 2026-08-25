#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Errors { class ErrArgKind; }

namespace Microsoft::CSharp::RuntimeBinder::Errors
{
	inline static constexpr unsigned int ErrArgKind_TypeDefinitionIndex = 34623;

	class ErrArgKind : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArgKind* Int; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArgKind* SymKind; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArgKind* Sym; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArgKind* Type; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArgKind* Name; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArgKind* Str; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArgKind* SymWithType; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArgKind* MethWithInst; // 0x0

	};
}

