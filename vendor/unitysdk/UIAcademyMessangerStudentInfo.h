#pragma once
#include "unitysdk.h"

class UICharacterThumbnail;
class UILabel;
namespace UnityEngine { class GameObject; }
class UIScrollView;
class UIGrid;
class MXButton;
class CharacterObject;

#define UIACADEMYMESSANGERSTUDENTINFO_GET_THUMBNAILS_OFFSET UNITYSDK_OFFSET(0x21A9E80)
#define UIACADEMYMESSANGERSTUDENTINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x21A9F30)
#define UIACADEMYMESSANGERSTUDENTINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x21AA050)
#define UIACADEMYMESSANGERSTUDENTINFO_SETPERSONALITYTHUMBNAILS_OFFSET UNITYSDK_OFFSET(0x21AA5B0)
#define UIACADEMYMESSANGERSTUDENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x21AA920)
#define UIACADEMYMESSANGERSTUDENTINFO_SETSTATLIST_OFFSET UNITYSDK_OFFSET(0x21AA250)
#define UIACADEMYMESSANGERSTUDENTINFO_ONCLICKFAVORRANKINFO_OFFSET UNITYSDK_OFFSET(0x21AA930)

	inline static constexpr unsigned int UIAcademyMessangerStudentInfo_TypeDefinitionIndex = 4169;

	class UIAcademyMessangerStudentInfo : public Il2CppObject
	{
	public:
		UICharacterThumbnail* thumbnail; // 0x18
		UILabel* nameLabel; // 0x20
		UILabel* statusLabel; // 0x28
		UILabel* birthDayLabel; // 0x30
		::UnityEngine::GameObject* todayIsBirthDay; // 0x38
		UILabel* favorRankLabel; // 0x40
		::UnityEngine::GameObject* statListRoot; // 0x48
		Il2CppObject* statDisplays; // 0x50
		UIScrollView* scrollView; // 0x58
		UIGrid* grid; // 0x60
		::UnityEngine::GameObject* noFavorRankBonus; // 0x68
		::UnityEngine::GameObject* noBonusStudents; // 0x70
		MXButton* favorRankInfoButton; // 0x78
		::UnityEngine::GameObject* favorRankStatList; // 0x80
		Il2CppObject* thumbnails; // 0x88

		Il2CppObject* get_Thumbnails()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTINFO_GET_THUMBNAILS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetPersonalityThumbnails(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTINFO_SETPERSONALITYTHUMBNAILS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetStatList(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTINFO_SETSTATLIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickFavorRankInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTINFO_ONCLICKFAVORRANKINFO_OFFSET))(nullptr);
		}

	};

