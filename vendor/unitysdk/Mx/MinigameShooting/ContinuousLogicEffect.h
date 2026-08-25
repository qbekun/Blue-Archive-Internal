#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EffectBone; }
namespace MX::MinigameShooting { class Character; }

#define MX_MINIGAMESHOOTING_CONTINUOUSLOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1464370)
#define MX_MINIGAMESHOOTING_CONTINUOUSLOGICEFFECT_APPLY_OFFSET UNITYSDK_OFFSET(0x1464380)
#define MX_MINIGAMESHOOTING_CONTINUOUSLOGICEFFECT_ONENDED_OFFSET UNITYSDK_OFFSET(0x1464400)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int ContinuousLogicEffect_TypeDefinitionIndex = 15077;

	class ContinuousLogicEffect : public Il2CppObject
	{
	public:
		::System::Int64 BuffId; // 0x18
		::System::String* EffectPath; // 0x20
		::FlatData::EffectBone* Socket; // 0x28
		Il2CppObject* AttachEffects; // 0x30
		Il2CppObject* DetachEffects; // 0x38
		::System::Int64 Duration; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CONTINUOUSLOGICEFFECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Apply(::MX::MinigameShooting::Character* arg, ::MX::MinigameShooting::Character* arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CONTINUOUSLOGICEFFECT_APPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnded(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CONTINUOUSLOGICEFFECT_ONENDED_OFFSET))(arg, nullptr);
		}

	};
}

