#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class UnaOpMask; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int UnaOpMask_TypeDefinitionIndex = 34501;

	class UnaOpMask : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpMask* None; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpMask* Plus; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpMask* Minus; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpMask* Tilde; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpMask* Bang; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpMask* IncDec; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpMask* Signed; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpMask* Unsigned; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpMask* Real; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpMask* Bool; // 0x0

	};
}

