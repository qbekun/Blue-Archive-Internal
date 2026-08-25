#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Vector3; }
namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class ProjectilePool; }
namespace MX::MinigameShooting { class CharacterState; }

#define <PLAYANDPOOL>D__6_.CTOR_OFFSET UNITYSDK_OFFSET(0x147D4C0)
#define <PLAYANDPOOL>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x147DAB0)
#define <PLAYANDPOOL>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x147DAC0)
#define <PLAYANDPOOL>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x147DC70)
#define <PLAYANDPOOL>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x147DC80)
#define <PLAYANDPOOL>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x147DCD0)

	inline static constexpr unsigned int <PlayAndPool>d__6_TypeDefinitionIndex = 15171;

	class <PlayAndPool>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::ParticleSystem* particle; // 0x20
		::UnityEngine::Vector3* pos; // 0x28
		::UnityEngine::Vector3* forward; // 0x34
		::MX::MinigameShooting::Character* actor; // 0x40
		::System::Boolean canCancel; // 0x48
		::MX::MinigameShooting::ProjectilePool* __4__this; // 0x50
		::System::String* path; // 0x58
		::MX::MinigameShooting::CharacterState* _state_5__2; // 0x60

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYANDPOOL>D__6_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYANDPOOL>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYANDPOOL>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYANDPOOL>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYANDPOOL>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYANDPOOL>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

