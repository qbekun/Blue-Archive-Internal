#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
namespace MX::Data { class MiniGameRhythmBgmInfo; }
namespace MX::Data { class MiniGameRhythmData; }

#define UIMINIGAMELOBBYBGMINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0xD18350)
#define UIMINIGAMELOBBYBGMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xD18530)

	inline static constexpr unsigned int UIMinigameLobbyBgmInfo_TypeDefinitionIndex = 679;

	class UIMinigameLobbyBgmInfo : public Il2CppObject
	{
	public:
		UILabel* Score; // 0x118
		UITexture* FullComboLabel; // 0x120

		::System::Void SetData(::MX::Data::MiniGameRhythmBgmInfo* arg, ::MX::Data::MiniGameRhythmData* arg2)
		{
			((::System::Void(*)(::MX::Data::MiniGameRhythmBgmInfo*, ::MX::Data::MiniGameRhythmData*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMELOBBYBGMINFO_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMELOBBYBGMINFO_.CTOR_OFFSET))(nullptr);
		}

	};

