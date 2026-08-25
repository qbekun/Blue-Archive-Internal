#pragma once
#include "unitysdk.h"

class CharacterVisual;
namespace FlatData { class EffectBone; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }
namespace MX::Data::Excel { class LogicEffectCommonVisualExcel; }

#define BUFFPARTICLE_GET_CHARACTERVISUAL_OFFSET UNITYSDK_OFFSET(0x10AD320)
#define BUFFPARTICLE_CO_ENDPROCESS_OFFSET UNITYSDK_OFFSET(0x10AD330)
#define BUFFPARTICLE_STARTPARTICLE_OFFSET UNITYSDK_OFFSET(0x10AB620)
#define BUFFPARTICLE_GETEFFECTPARENT_OFFSET UNITYSDK_OFFSET(0x10AD430)
#define BUFFPARTICLE_CO_EFFECTPROCESS_OFFSET UNITYSDK_OFFSET(0x10AD3C0)
#define BUFFPARTICLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x10AD590)
#define BUFFPARTICLE_ENDPARTICLE_OFFSET UNITYSDK_OFFSET(0x10AB560)
#define BUFFPARTICLE_SET_CHARACTERVISUAL_OFFSET UNITYSDK_OFFSET(0x10AD640)

	inline static constexpr unsigned int BuffParticle_TypeDefinitionIndex = 900;

	class BuffParticle : public Il2CppObject
	{
	public:
		CharacterVisual* _CharacterVisual_k__BackingField; // 0x10
		::System::String* EnterPath; // 0x18
		::System::String* LoopPath; // 0x20
		::System::String* EndPath; // 0x28
		::FlatData::EffectBone* BoneEnter; // 0x30
		::FlatData::EffectBone* BoneLoop; // 0x34
		::FlatData::EffectBone* BoneEnd; // 0x38
		::UnityEngine::ParticleSystem* particle; // 0x40
		::UnityEngine::Coroutine* coroutine; // 0x48

		CharacterVisual* get_CharacterVisual()
		{
			return ((CharacterVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFPARTICLE_GET_CHARACTERVISUAL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_EndProcess()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFPARTICLE_CO_ENDPROCESS_OFFSET))(nullptr);
		}

		::System::Void StartParticle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFPARTICLE_STARTPARTICLE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* GetEffectParent(::FlatData::EffectBone* arg)
		{
			return ((::UnityEngine::Transform*(*)(::FlatData::EffectBone*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFPARTICLE_GETEFFECTPARENT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_EffectProcess()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFPARTICLE_CO_EFFECTPROCESS_OFFSET))(nullptr);
		}

		::System::Void .ctor(CharacterVisual* arg, ::MX::Data::Excel::LogicEffectCommonVisualExcel* arg2)
		{
			((::System::Void(*)(CharacterVisual*, ::MX::Data::Excel::LogicEffectCommonVisualExcel*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFPARTICLE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndParticle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFPARTICLE_ENDPARTICLE_OFFSET))(nullptr);
		}

		::System::Void set_CharacterVisual(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFPARTICLE_SET_CHARACTERVISUAL_OFFSET))(arg, nullptr);
		}

	};

