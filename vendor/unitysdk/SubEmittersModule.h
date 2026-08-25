#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define SUBEMITTERSMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2973B0)
#define SUBEMITTERSMODULE_GET_SUBEMITTERSCOUNT_OFFSET UNITYSDK_OFFSET(0xA298190)
#define SUBEMITTERSMODULE_GETSUBEMITTERSYSTEM_OFFSET UNITYSDK_OFFSET(0xA298210)
#define SUBEMITTERSMODULE_GET_SUBEMITTERSCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2981D0)
#define SUBEMITTERSMODULE_GETSUBEMITTERSYSTEM_INJECTED_OFFSET UNITYSDK_OFFSET(0xA298250)

	inline static constexpr unsigned int SubEmittersModule_TypeDefinitionIndex = 36917;

	class SubEmittersModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + SUBEMITTERSMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_subEmittersCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBEMITTERSMODULE_GET_SUBEMITTERSCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::ParticleSystem* GetSubEmitterSystem(::System::Int32 arg)
		{
			return (return (::UnityEngine::ParticleSystem*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SUBEMITTERSMODULE_GETSUBEMITTERSYSTEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_subEmittersCount_Injected(SubEmittersModule&* arg)
		{
			return (return (::System::Int32(*)(SubEmittersModule&*, ::PVOID))((::PBYTE)hIl2Cpp + SUBEMITTERSMODULE_GET_SUBEMITTERSCOUNT_INJECTED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ParticleSystem* GetSubEmitterSystem_Injected(SubEmittersModule&* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::ParticleSystem*(*)(SubEmittersModule&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SUBEMITTERSMODULE_GETSUBEMITTERSYSTEM_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};

