#pragma once
#include "unitysdk.h"

namespace UnityEngine::Jobs { class TransformAccess; }

#define APPLYTRANSFORMJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x20A2FD0)

	inline static constexpr unsigned int ApplyTransformJob_TypeDefinitionIndex = 3533;

	class ApplyTransformJob : public Il2CppObject
	{
	public:
		Il2CppObject* PositionArray; // 0x10
		Il2CppObject* ParticleInfoArray; // 0x20
		Il2CppObject* TransformLocalPosArray; // 0x30

		::System::Void Execute(::System::Int32 arg, ::UnityEngine::Jobs::TransformAccess* arg2)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Jobs::TransformAccess*, ::PVOID))((::PBYTE)hIl2Cpp + APPLYTRANSFORMJOB_EXECUTE_OFFSET))(arg, arg2, nullptr);
		}

	};

