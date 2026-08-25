#pragma once
#include "../unitysdk.h"

class CoroutineAsyncOperation;
namespace MXUnderCover { class UCEntity; }
namespace MXUnderCover { class UCParticleSpawnInfo; }
namespace UnityEngine { class Transform; }

#define MXUNDERCOVER_UCPARTICLEHELPER_PLAY_OFFSET UNITYSDK_OFFSET(0xDB1D40)
#define MXUNDERCOVER_UCPARTICLEHELPER_PLAY_OFFSET UNITYSDK_OFFSET(0xDB1F70)
#define MXUNDERCOVER_UCPARTICLEHELPER__PLAY_G__CO_PLAY|0_0_OFFSET UNITYSDK_OFFSET(0xDB1ED0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCParticleHelper_TypeDefinitionIndex = 9964;

	class UCParticleHelper : public Il2CppObject
	{
	public:
		CoroutineAsyncOperation* Play(::MXUnderCover::UCEntity* arg, ::MXUnderCover::UCParticleSpawnInfo* arg2, ::UnityEngine::Transform* arg3)
		{
			return ((CoroutineAsyncOperation*(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::UCParticleSpawnInfo*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPARTICLEHELPER_PLAY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		CoroutineAsyncOperation* Play(::MXUnderCover::UCEntity* arg, ::MXUnderCover::UCParticleSpawnInfo* arg2)
		{
			return ((CoroutineAsyncOperation*(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::UCParticleSpawnInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPARTICLEHELPER_PLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* _Play_g__co_Play|0_0(::MXUnderCover::UCParticleSpawnInfo* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCParticleSpawnInfo*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPARTICLEHELPER__PLAY_G__CO_PLAY|0_0_OFFSET))(arg, arg2, nullptr);
		}

	};
}

