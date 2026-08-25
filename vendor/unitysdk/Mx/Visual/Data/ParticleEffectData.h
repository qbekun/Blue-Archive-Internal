#pragma once
#include "../../../unitysdk.h"

#define MX_VISUAL_DATA_PARTICLEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BAA0)

namespace MX::Visual::Data
{
	inline static constexpr unsigned int ParticleEffectData_TypeDefinitionIndex = 20228;

	class ParticleEffectData : public Il2CppObject
	{
	public:
		::System::String* ParticleEffectName; // 0x10
		::System::String* PrefabPath; // 0x18
		::System::Single Duration; // 0x20
		::System::Single StartDelay; // 0x24
		Il2CppObject* LinkedEffectPrefabPaths; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_PARTICLEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

