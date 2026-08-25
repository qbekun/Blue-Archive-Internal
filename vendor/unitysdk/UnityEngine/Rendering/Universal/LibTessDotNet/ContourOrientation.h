#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal::LibTessDotNet { class ContourOrientation; }

namespace UnityEngine::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int ContourOrientation_TypeDefinitionIndex = 32841;

	class ContourOrientation : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::LibTessDotNet::ContourOrientation* Original; // 0x0
		::UnityEngine::Rendering::Universal::LibTessDotNet::ContourOrientation* Clockwise; // 0x0
		::UnityEngine::Rendering::Universal::LibTessDotNet::ContourOrientation* CounterClockwise; // 0x0

	};
}

