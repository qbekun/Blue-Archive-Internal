#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class PlayerInputAsset; }
namespace MXUnderCover { class UCPlayerController; }
namespace MXUnderCover { class UCSkillGuide; }
namespace MXUnderCover { class UCSkillGuideArrow; }
class HighlightMaterialInfo;
class DitherMaterialInfo;

#define MXUNDERCOVER_UCGAMERESOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB1760)
#define MXUNDERCOVER_UCGAMERESOURCE_CLEAR_OFFSET UNITYSDK_OFFSET(0xDB0780)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCGameResource_TypeDefinitionIndex = 9942;

	class UCGameResource : public Il2CppObject
	{
	public:
		::MXUnderCover::PlayerInputAsset* PlayerInputAsset; // 0x10
		::MXUnderCover::UCPlayerController* PlayerActorController; // 0x18
		::MXUnderCover::UCSkillGuide* SkillRangeGuide; // 0x20
		::MXUnderCover::UCSkillGuide* SkillAreaGuideCircle; // 0x28
		::MXUnderCover::UCSkillGuideArrow* SkillAreaGuideArrow; // 0x30
		HighlightMaterialInfo* Highlight; // 0x38
		DitherMaterialInfo* Dither; // 0x68
		::System::Boolean UseCinemachineLateUpdate; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMERESOURCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMERESOURCE_CLEAR_OFFSET))(nullptr);
		}

	};
}

