#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define UPDATEVECTOR3CONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C0AE0)

	inline static constexpr unsigned int UpdateVector3Container_TypeDefinitionIndex = 3634;

	class UpdateVector3Container : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* TargetValue; // 0x10
		::UnityEngine::Vector3* PreviousTargetValue; // 0x1C
		::UnityEngine::Vector3* StartValue; // 0x28
		::UnityEngine::Vector3* CurrentValue; // 0x34
		::System::Int32 StartTimeMs; // 0x40
		::System::Int32 DurationMs; // 0x44

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UPDATEVECTOR3CONTAINER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

