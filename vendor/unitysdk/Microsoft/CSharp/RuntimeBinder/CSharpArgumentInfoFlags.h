#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder { class CSharpArgumentInfoFlags; }

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int CSharpArgumentInfoFlags_TypeDefinitionIndex = 34426;

	class CSharpArgumentInfoFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfoFlags* None; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfoFlags* UseCompileTimeType; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfoFlags* Constant; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfoFlags* NamedArgument; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfoFlags* IsRef; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfoFlags* IsOut; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfoFlags* IsStaticType; // 0x0

	};
}

