#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder { class CSharpCallFlags; }

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int CSharpCallFlags_TypeDefinitionIndex = 34428;

	class CSharpCallFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::CSharpCallFlags* None; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpCallFlags* SimpleNameCall; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpCallFlags* EventHookup; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpCallFlags* ResultDiscarded; // 0x0

	};
}

