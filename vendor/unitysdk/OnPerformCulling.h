#pragma once
#include "unitysdk.h"

namespace Unity::Jobs { class JobHandle; }
namespace UnityEngine::Rendering { class BatchRendererGroup; }
namespace UnityEngine::Rendering { class BatchCullingContext; }

#define ONPERFORMCULLING_.CTOR_OFFSET UNITYSDK_OFFSET(0xA256B40)
#define ONPERFORMCULLING_INVOKE_OFFSET UNITYSDK_OFFSET(0xA256C50)

	inline static constexpr unsigned int OnPerformCulling_TypeDefinitionIndex = 31535;

	class OnPerformCulling : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONPERFORMCULLING_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Jobs::JobHandle* Invoke(::UnityEngine::Rendering::BatchRendererGroup* arg, ::UnityEngine::Rendering::BatchCullingContext* arg)
		{
			return (return (::Unity::Jobs::JobHandle*(*)(::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::Rendering::BatchCullingContext*, ::PVOID))((::PBYTE)hIl2Cpp + ONPERFORMCULLING_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

