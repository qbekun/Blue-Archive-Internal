#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define EDGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xD8F500)

	inline static constexpr unsigned int EdgeInfo_TypeDefinitionIndex = 9706;

	class EdgeInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* pointA; // 0x10
		::UnityEngine::Vector3* pointB; // 0x1C

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + EDGEINFO_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

