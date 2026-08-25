#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define TRANSFORMNOISEPARAMS_GETVALUEAT_OFFSET UNITYSDK_OFFSET(0x2862040)

	inline static constexpr unsigned int TransformNoiseParams_TypeDefinitionIndex = 34329;

	class TransformNoiseParams : public Il2CppObject
	{
	public:
		NoiseParams* X; // 0x10
		NoiseParams* Y; // 0x1C
		NoiseParams* Z; // 0x28

		::UnityEngine::Vector3* GetValueAt(::System::Single arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMNOISEPARAMS_GETVALUEAT_OFFSET))(arg, arg, nullptr);
		}

	};

