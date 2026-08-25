#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Vector3; }
class ParticleInterrupt;
namespace UnityEngine { class Transform; }

#define PARTICLEMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x20CB1F0)
#define PARTICLEMANAGER_FORCEDESTROYALL_OFFSET UNITYSDK_OFFSET(0x20CB300)
#define PARTICLEMANAGER_STOPCURRENTPLAYINGPARTICLES_OFFSET UNITYSDK_OFFSET(0x20CB350)
#define PARTICLEMANAGER_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x20CB420)
#define PARTICLEMANAGER_GETEFFECT_OFFSET UNITYSDK_OFFSET(0x20CB630)
#define PARTICLEMANAGER_REMOVECURRENTPLAYINGPARTICLE_OFFSET UNITYSDK_OFFSET(0x20CB7B0)
#define PARTICLEMANAGER_HIDEANDREMOVECURRENTPLAYINGPARTICLE_OFFSET UNITYSDK_OFFSET(0x20CB910)
#define PARTICLEMANAGER_ISCURRENTPLAYINGPARTICLE_OFFSET UNITYSDK_OFFSET(0x20CBCC0)
#define PARTICLEMANAGER_DETACHPARENTBEFORETIMELINE_OFFSET UNITYSDK_OFFSET(0x20CBDB0)
#define PARTICLEMANAGER_REATTACHPARENTAFTERTIMELINE_OFFSET UNITYSDK_OFFSET(0x20CC020)
#define PARTICLEMANAGER_PLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x20CC3E0)
#define PARTICLEMANAGER_PLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x20CC6F0)
#define PARTICLEMANAGER_PLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x20CC850)
#define PARTICLEMANAGER_PLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x20CCB30)
#define PARTICLEMANAGER_PLAYANDPOOL_OFFSET UNITYSDK_OFFSET(0x20CCE30)
#define PARTICLEMANAGER_GETPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x20CC590)
#define PARTICLEMANAGER_GETPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x20CCCE0)
#define PARTICLEMANAGER_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x20CB700)
#define PARTICLEMANAGER_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x20CCF50)
#define PARTICLEMANAGER_GETOBJECTRESOURCE_OFFSET UNITYSDK_OFFSET(0x20CD000)
#define PARTICLEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20CD090)
#define PARTICLEMANAGER__STOPCURRENTPLAYINGPARTICLES_B__6_0_OFFSET UNITYSDK_OFFSET(0x20CD0F0)

	inline static constexpr unsigned int ParticleManager_TypeDefinitionIndex = 3695;

	class ParticleManager : public ::ToyWebViewShared::Messages::ReplyJsDialog
	{
	public:
		Il2CppObject* particleDictionary; // 0x20
		Il2CppObject* pauseList; // 0x28
		Il2CppObject* currentPlayingParticles; // 0x30
		::System::Boolean NoExistParticleAfterDestroyAll; // 0x38

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void ForceDestroyAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_FORCEDESTROYALL_OFFSET))(nullptr);
		}

		::System::Void StopCurrentPlayingParticles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_STOPCURRENTPLAYINGPARTICLES_OFFSET))(nullptr);
		}

		::System::Void OnPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_ONPAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void GetEffect(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_GETEFFECT_OFFSET))(str, arg, nullptr);
		}

		::System::Void RemoveCurrentPlayingParticle(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_REMOVECURRENTPLAYINGPARTICLE_OFFSET))(arg, nullptr);
		}

		::System::Void HideAndRemoveCurrentPlayingParticle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_HIDEANDREMOVECURRENTPLAYINGPARTICLE_OFFSET))(str, nullptr);
		}

		::System::Boolean IsCurrentPlayingParticle(::UnityEngine::ParticleSystem* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_ISCURRENTPLAYINGPARTICLE_OFFSET))(arg, nullptr);
		}

		::System::Void DetachParentBeforeTimeline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_DETACHPARENTBEFORETIMELINE_OFFSET))(nullptr);
		}

		::System::Void ReattachParentAfterTimeline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_REATTACHPARENTAFTERTIMELINE_OFFSET))(nullptr);
		}

		::System::Void PlayEffect(::System::String* str, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ParticleInterrupt* arg3, ::System::Single arg4, ::System::Single arg5, Il2CppObject* arg6, Il2CppObject* arg7)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ParticleInterrupt*, ::System::Single, ::System::Single, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_PLAYEFFECT_OFFSET))(str, arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void PlayEffect(::System::String* str, ::UnityEngine::Transform* arg, ::System::Boolean arg2, ParticleInterrupt* arg3, ::System::Boolean arg4, ::System::Single arg5, ::System::Single arg6, Il2CppObject* arg7, Il2CppObject* arg8)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Transform*, ::System::Boolean, ParticleInterrupt*, ::System::Boolean, ::System::Single, ::System::Single, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_PLAYEFFECT_OFFSET))(str, arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void PlayEffect(::System::String* str, ::UnityEngine::Transform* arg, ::System::Boolean arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector3* arg4, ParticleInterrupt* arg5, ::System::Boolean arg6, ::System::Single arg7, ::System::Single arg8, Il2CppObject* arg9, Il2CppObject* arg10)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Transform*, ::System::Boolean, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ParticleInterrupt*, ::System::Boolean, ::System::Single, ::System::Single, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_PLAYEFFECT_OFFSET))(str, arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::System::Void PlayEffect(::System::String* str, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3, ParticleInterrupt* arg4, ::System::Single arg5, ::System::Single arg6, Il2CppObject* arg7, Il2CppObject* arg8)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ParticleInterrupt*, ::System::Single, ::System::Single, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_PLAYEFFECT_OFFSET))(str, arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Collections::IEnumerator* PlayAndPool(::UnityEngine::ParticleSystem* arg, ::System::String* str, ParticleInterrupt* arg2, ::System::Single arg3, ::System::Single arg4, ::System::Boolean arg5, ::System::Action* arg6, Il2CppObject* arg7)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::ParticleSystem*, ::System::String*, ParticleInterrupt*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_PLAYANDPOOL_OFFSET))(arg, str, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void GetParticleSystem(::System::String* str, ::UnityEngine::Vector3* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Vector3*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_GETPARTICLESYSTEM_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void GetParticleSystem(::System::String* str, ::UnityEngine::Transform* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Transform*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_GETPARTICLESYSTEM_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* GetObject(::System::String* str, ::UnityEngine::Vector3* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::UnityEngine::Vector3*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_GETOBJECT_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* GetObject(::System::String* str, ::UnityEngine::Transform* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::UnityEngine::Transform*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_GETOBJECT_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void GetObjectResource(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_GETOBJECTRESOURCE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _StopCurrentPlayingParticles_b__6_0(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEMANAGER__STOPCURRENTPLAYINGPARTICLES_B__6_0_OFFSET))(arg, nullptr);
		}

	};

