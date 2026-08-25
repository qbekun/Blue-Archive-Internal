#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define LINESEGMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA186EC0)

	inline static constexpr unsigned int LineSegment_TypeDefinitionIndex = 33758;

	class LineSegment : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* Point1; // 0x10
		::UnityEngine::Vector3* Point2; // 0x1C

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + LINESEGMENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

