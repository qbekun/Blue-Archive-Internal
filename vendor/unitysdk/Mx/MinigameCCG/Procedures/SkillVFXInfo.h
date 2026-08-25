#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::AddressableAssets { class AssetReference; }
namespace MX::MinigameCCG::Procedures { class CCGVFXSpawnPosition; }

#define MX_MINIGAMECCG_PROCEDURES_SKILLVFXINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3B0)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int SkillVFXInfo_TypeDefinitionIndex = 20954;

	class SkillVFXInfo : public Il2CppObject
	{
	public:
		::UnityEngine::AddressableAssets::AssetReference* Asset; // 0x10
		::MX::MinigameCCG::Procedures::CCGVFXSpawnPosition* SpawnPosition; // 0x18
		::System::Single IntervalTime; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SKILLVFXINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

