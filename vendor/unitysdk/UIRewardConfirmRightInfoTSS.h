#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
class UIGrid;
namespace MX::Data::Excel { class CharacterExcel; }

#define UIREWARDCONFIRMRIGHTINFOTSS_SETSCHOOLNAMEGRID_OFFSET UNITYSDK_OFFSET(0x27B4CC0)
#define UIREWARDCONFIRMRIGHTINFOTSS_.CTOR_OFFSET UNITYSDK_OFFSET(0x27B4DA0)
#define UIREWARDCONFIRMRIGHTINFOTSS_SETINFOTSS_OFFSET UNITYSDK_OFFSET(0x27B46D0)

	inline static constexpr unsigned int UIRewardConfirmRightInfoTSS_TypeDefinitionIndex = 7531;

	class UIRewardConfirmRightInfoTSS : public Il2CppObject
	{
	public:
		UITexture* schoolLogo; // 0x18
		UILabel* schoolName; // 0x20
		UILabel* schoolEnName; // 0x28
		UIGrid* schoolNameGrid; // 0x30

		::System::Void SetSchoolNameGrid()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRIGHTINFOTSS_SETSCHOOLNAMEGRID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRIGHTINFOTSS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetInfoTSS(::MX::Data::Excel::CharacterExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRIGHTINFOTSS_SETINFOTSS_OFFSET))(arg, nullptr);
		}

	};

