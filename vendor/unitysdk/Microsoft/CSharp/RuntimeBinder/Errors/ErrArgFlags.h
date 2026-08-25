#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Errors { class ErrArgFlags; }

namespace Microsoft::CSharp::RuntimeBinder::Errors
{
	inline static constexpr unsigned int ErrArgFlags_TypeDefinitionIndex = 34624;

	class ErrArgFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArgFlags* None; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArgFlags* NoStr; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArgFlags* Unique; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArgFlags* UseGetErrorInfo; // 0x0

	};
}

