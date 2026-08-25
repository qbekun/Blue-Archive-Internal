#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class BindingFlag; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int BindingFlag_TypeDefinitionIndex = 34480;

	class BindingFlag : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* BIND_RVALUEREQUIRED; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* BIND_MEMBERSET; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* BIND_FIXEDVALUE; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* BIND_ARGUMENTS; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* BIND_BASECALL; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* BIND_USINGVALUE; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* BIND_STMTEXPRONLY; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* BIND_TYPEOK; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* BIND_MAYBECONFUSEDNEGATIVECAST; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* BIND_METHODNOTOK; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* BIND_DECLNOTOK; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* BIND_NOPARAMS; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* BIND_SPECULATIVELY; // 0x0

	};
}

