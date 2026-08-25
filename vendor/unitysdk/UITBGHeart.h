#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define UITBGHEART_COPLAYRECOVERHEART_OFFSET UNITYSDK_OFFSET(0xB54380)
#define UITBGHEART_SETMAXHEALTH_OFFSET UNITYSDK_OFFSET(0xB54430)
#define UITBGHEART_PLAYDAMAGED_OFFSET UNITYSDK_OFFSET(0xB544F0)
#define UITBGHEART_PLAYRECOVERHEART_OFFSET UNITYSDK_OFFSET(0xB54770)
#define UITBGHEART_COPLAYGETHEART_OFFSET UNITYSDK_OFFSET(0xB548C0)
#define UITBGHEART_SETCURRENTHEALTH_OFFSET UNITYSDK_OFFSET(0xB54970)
#define UITBGHEART_SETINDEX_OFFSET UNITYSDK_OFFSET(0xB549A0)
#define UITBGHEART_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB549B0)
#define UITBGHEART_PLAYGETHEART_OFFSET UNITYSDK_OFFSET(0xB54AE0)
#define UITBGHEART_.CTOR_OFFSET UNITYSDK_OFFSET(0xB54C40)
#define UITBGHEART_COPLAYDAMAGED_OFFSET UNITYSDK_OFFSET(0xB546E0)

	inline static constexpr unsigned int UITBGHeart_TypeDefinitionIndex = 8386;

	class UITBGHeart : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* BGObject; // 0x18
		::UnityEngine::GameObject* HeartObject; // 0x20
		::UnityEngine::ParticleSystem* GetFx; // 0x28
		::UnityEngine::ParticleSystem* RecoverFx; // 0x30
		::UnityEngine::ParticleSystem* DamagedFx; // 0x38
		::System::Int32 index; // 0x40

		::System::Collections::IEnumerator* CoPlayRecoverHeart(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGHEART_COPLAYRECOVERHEART_OFFSET))(arg, nullptr);
		}

		::System::Void SetMaxHealth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITBGHEART_SETMAXHEALTH_OFFSET))(arg, nullptr);
		}

		::System::Action* PlayDamaged(::System::Int32 arg, ::System::Action* arg2)
		{
			return ((::System::Action*(*)(::System::Int32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGHEART_PLAYDAMAGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayRecoverHeart(::System::Int32 arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGHEART_PLAYRECOVERHEART_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayGetHeart(::System::Int32 arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGHEART_COPLAYGETHEART_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCurrentHealth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITBGHEART_SETCURRENTHEALTH_OFFSET))(arg, nullptr);
		}

		::System::Void SetIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITBGHEART_SETINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGHEART_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void PlayGetHeart(::System::Int32 arg, ::System::Int32 arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGHEART_PLAYGETHEART_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGHEART_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayDamaged(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGHEART_COPLAYDAMAGED_OFFSET))(arg, nullptr);
		}

	};

