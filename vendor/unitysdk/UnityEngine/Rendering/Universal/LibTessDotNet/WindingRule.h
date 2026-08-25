#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal::LibTessDotNet { class WindingRule; }

namespace UnityEngine::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int WindingRule_TypeDefinitionIndex = 32839;

	class WindingRule : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule* EvenOdd; // 0x0
		::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule* NonZero; // 0x0
		::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule* Positive; // 0x0
		::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule* Negative; // 0x0
		::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule* AbsGeqTwo; // 0x0

	};
}

