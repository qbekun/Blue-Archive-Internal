#pragma once
#include "unitysdk.h"

namespace MX::AppData::DAO::Battle { class ParticleEffectDAO; }
class EffectPlayer;
namespace UnityEngine { class Vector3; }

#define <PLAYEFFECT>D__51_.CTOR_OFFSET UNITYSDK_OFFSET(0x13BA9D0)
#define <PLAYEFFECT>D__51_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BA9F0)
#define <PLAYEFFECT>D__51_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13BAA00)
#define <PLAYEFFECT>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13BAC50)
#define <PLAYEFFECT>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x13BAC60)
#define <PLAYEFFECT>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13BACB0)

	inline static constexpr unsigned int <PlayEffect>d__51_TypeDefinitionIndex = 1009;

	class <PlayEffect>d__51 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		Il2CppObject* customParticleEvents; // 0x20
		::MX::AppData::DAO::Battle::ParticleEffectDAO* effectData; // 0x28
		::System::Boolean checkEffectCountLimit; // 0x30
		EffectPlayer* __4__this; // 0x38
		::UnityEngine::Vector3* position; // 0x40
		::UnityEngine::Vector3* direction; // 0x4C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYEFFECT>D__51_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYEFFECT>D__51_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYEFFECT>D__51_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYEFFECT>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYEFFECT>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYEFFECT>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

