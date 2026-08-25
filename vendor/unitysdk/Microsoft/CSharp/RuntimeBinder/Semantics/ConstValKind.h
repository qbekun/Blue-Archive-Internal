#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ConstValKind; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ConstValKind_TypeDefinitionIndex = 34484;

	class ConstValKind : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind* Int; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind* Double; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind* Long; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind* String; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind* Decimal; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind* IntPtr; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind* Float; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind* Boolean; // 0x0

	};
}

