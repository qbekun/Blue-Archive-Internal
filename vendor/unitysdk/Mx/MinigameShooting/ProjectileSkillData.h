#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMESHOOTING_PROJECTILESKILLDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1453FD0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int ProjectileSkillData_TypeDefinitionIndex = 15011;

	class ProjectileSkillData : public Il2CppObject
	{
	public:
		Il2CppObject* ProjectileData; // 0x68
		::System::String* ReflectProjectilePrefab; // 0x70
		::System::String* PierceProjectilePrefab; // 0x78
		::System::String* MixProjectilePrefab; // 0x80
		::System::String* ReflectEffectPrefab; // 0x88
		::System::Int64 Speed; // 0x90
		::System::Boolean Pierce; // 0x98
		::System::Int64 ReducePierceDamage; // 0xA0
		::System::Boolean Reflect; // 0xA8
		::System::Int32 ReflectCount; // 0xAC
		::System::Int64 ReduceReflectDamage; // 0xB0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILESKILLDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

