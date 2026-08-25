#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class BinOpMask; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int BinOpMask_TypeDefinitionIndex = 34478;

	class BinOpMask : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* None; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* Add; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* Sub; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* Mul; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* Shift; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* Equal; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* Compare; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* Bitwise; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* BitXor; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* Logical; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* Integer; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* Real; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* BoolNorm; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* Delegate; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* Enum; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* EnumUnder; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* UnderEnum; // 0x0

	};
}

