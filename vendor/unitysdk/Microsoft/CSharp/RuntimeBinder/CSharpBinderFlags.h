#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder { class CSharpBinderFlags; }

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int CSharpBinderFlags_TypeDefinitionIndex = 34427;

	class CSharpBinderFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::CSharpBinderFlags* None; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpBinderFlags* CheckedContext; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpBinderFlags* InvokeSimpleName; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpBinderFlags* InvokeSpecialName; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpBinderFlags* BinaryOperationLogical; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpBinderFlags* ConvertExplicit; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpBinderFlags* ConvertArrayIndex; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpBinderFlags* ResultIndexed; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpBinderFlags* ValueFromCompoundAssignment; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpBinderFlags* ResultDiscarded; // 0x0

	};
}

