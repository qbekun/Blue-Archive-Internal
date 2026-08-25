#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::Jobs { class TransformAccess; }

#define UPDATETRANSFORMINFOJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x20A2ED0)

	inline static constexpr unsigned int UpdateTransformInfoJob_TypeDefinitionIndex = 3532;

	class UpdateTransformInfoJob : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* LossyScale; // 0x10
		Il2CppObject* LocalToWorldArray; // 0x20
		Il2CppObject* TransformLocalPosArray; // 0x30

		::System::Void Execute(::System::Int32 arg, ::UnityEngine::Jobs::TransformAccess* arg2)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Jobs::TransformAccess*, ::PVOID))((::PBYTE)hIl2Cpp + UPDATETRANSFORMINFOJOB_EXECUTE_OFFSET))(arg, arg2, nullptr);
		}

	};

