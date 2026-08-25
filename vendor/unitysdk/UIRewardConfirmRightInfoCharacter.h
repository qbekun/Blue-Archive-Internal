#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
class UIGrid;
namespace MX::Data::Excel { class CharacterExcel; }

#define UIREWARDCONFIRMRIGHTINFOCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27B4BC0)
#define UIREWARDCONFIRMRIGHTINFOCHARACTER_SETCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0x27B4850)
#define UIREWARDCONFIRMRIGHTINFOCHARACTER_SETSCHOOLNAMEGRID_OFFSET UNITYSDK_OFFSET(0x27B4BD0)

	inline static constexpr unsigned int UIRewardConfirmRightInfoCharacter_TypeDefinitionIndex = 7529;

	class UIRewardConfirmRightInfoCharacter : public Il2CppObject
	{
	public:
		UITexture* schoolLogo; // 0x18
		UILabel* schoolName; // 0x20
		UILabel* schoolEnName; // 0x28
		::UnityEngine::GameObject* squadTypeMain; // 0x30
		::UnityEngine::GameObject* squadTypeSupport; // 0x38
		UILabel* clubName; // 0x40
		UILabel* weaponName; // 0x48
		UILabel* brithday; // 0x50
		UIGrid* schoolNameGrid; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRIGHTINFOCHARACTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCharacterInfo(::MX::Data::Excel::CharacterExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRIGHTINFOCHARACTER_SETCHARACTERINFO_OFFSET))(arg, nullptr);
		}

		::System::Void SetSchoolNameGrid()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRIGHTINFOCHARACTER_SETSCHOOLNAMEGRID_OFFSET))(nullptr);
		}

	};

