#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class UISprite;
class ButtonActivator;
class UITimeAttack_GeasGrid;
class InformationGroupOpen;
namespace MX::Data { class TimeAttackDungeonSeasonInfo; }
namespace MX::Data { class TimeAttackDungeonGeasInfo; }
namespace MX::Data::Excel { class TimeAttackDungeonExcel; }
class UIEnemyInfoPopup;

#define UIPOPUP_TIMEATTACKENTER_SETDATA_OFFSET UNITYSDK_OFFSET(0xB5D4B0)
#define UIPOPUP_TIMEATTACKENTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xB5D8F0)
#define UIPOPUP_TIMEATTACKENTER_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xB5D900)
#define UIPOPUP_TIMEATTACKENTER_ONCLICKCLEARDECK_OFFSET UNITYSDK_OFFSET(0xB5D910)
#define UIPOPUP_TIMEATTACKENTER_SETINFOGROUP_OFFSET UNITYSDK_OFFSET(0xB5D9B0)
#define UIPOPUP_TIMEATTACKENTER_SETPLAYCOUNTS_OFFSET UNITYSDK_OFFSET(0xB5DA80)
#define UIPOPUP_TIMEATTACKENTER__ONCLICKENEMYINFO_B__42_0_OFFSET UNITYSDK_OFFSET(0xB5DC60)
#define UIPOPUP_TIMEATTACKENTER_SET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0xB5DC90)
#define UIPOPUP_TIMEATTACKENTER_SET_GEASID_OFFSET UNITYSDK_OFFSET(0xB5DCB0)
#define UIPOPUP_TIMEATTACKENTER_ONBACK_OFFSET UNITYSDK_OFFSET(0xB5DCC0)
#define UIPOPUP_TIMEATTACKENTER_SET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0xB5DE70)
#define UIPOPUP_TIMEATTACKENTER_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0xB5DE80)
#define UIPOPUP_TIMEATTACKENTER_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xB5DE90)
#define UIPOPUP_TIMEATTACKENTER_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0xB5DEC0)
#define UIPOPUP_TIMEATTACKENTER_SETUI_OFFSET UNITYSDK_OFFSET(0xB5D5C0)
#define UIPOPUP_TIMEATTACKENTER_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB5E370)
#define UIPOPUP_TIMEATTACKENTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xB5E440)
#define UIPOPUP_TIMEATTACKENTER_SETGROUND_OFFSET UNITYSDK_OFFSET(0xB5E000)
#define UIPOPUP_TIMEATTACKENTER_SET_GROUNDID_OFFSET UNITYSDK_OFFSET(0xB5E740)
#define UIPOPUP_TIMEATTACKENTER_GET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0xB5E750)
#define UIPOPUP_TIMEATTACKENTER_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0xB5E760)
#define UIPOPUP_TIMEATTACKENTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB5FE50)
#define UIPOPUP_TIMEATTACKENTER_SETDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xB5DED0)
#define UIPOPUP_TIMEATTACKENTER_GET_GEASID_OFFSET UNITYSDK_OFFSET(0xB5FE80)
#define UIPOPUP_TIMEATTACKENTER_ONCLICKENEMYINFO_OFFSET UNITYSDK_OFFSET(0xB5FE90)
#define UIPOPUP_TIMEATTACKENTER_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xB5FF70)

	inline static constexpr unsigned int UIPopup_TimeAttackEnter_TypeDefinitionIndex = 8416;

	class UIPopup_TimeAttackEnter : public Il2CppObject
	{
	public:
		UILabel* difficultyNumberLabel; // 0xD8
		UILabel* difficultyNameLabel; // 0xE0
		UILabel* recommandLevelLabel; // 0xE8
		MXButton* enemyInfoButton; // 0xF0
		UISprite* groundThemeIcon; // 0xF8
		UILabel* playCountLabel; // 0x100
		ButtonActivator* enterButton; // 0x108
		UITimeAttack_GeasGrid* geasGrid; // 0x110
		InformationGroupOpen* infoGroupOpen; // 0x118
		MXButton* clearDeckButton; // 0x120
		::MX::Data::TimeAttackDungeonSeasonInfo* _SeasonInfo_k__BackingField; // 0x128
		::System::Int64 _GeasId_k__BackingField; // 0x130
		::System::Int64 _DungeonId_k__BackingField; // 0x138
		::System::Boolean _IsPractice_k__BackingField; // 0x140
		::System::Int64 _GroundId_k__BackingField; // 0x148
		::MX::Data::TimeAttackDungeonGeasInfo* _GeasInfo; // 0x150

		::System::Void SetData(::System::Int64 arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClearDeck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_ONCLICKCLEARDECK_OFFSET))(nullptr);
		}

		::System::Void SetInfoGroup(::MX::Data::Excel::TimeAttackDungeonExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::TimeAttackDungeonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_SETINFOGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void SetPlayCounts()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_SETPLAYCOUNTS_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnemyInfo_b__42_0(UIEnemyInfoPopup* arg)
		{
			((::System::Void(*)(UIEnemyInfoPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER__ONCLICKENEMYINFO_B__42_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonInfo(::MX::Data::TimeAttackDungeonSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::TimeAttackDungeonSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_SET_SEASONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_GeasId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_SET_GEASID_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_ONBACK_OFFSET))(nullptr);
		}

		::System::Void set_DungeonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_SET_DUNGEONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_CO_LOADING_OFFSET))(nullptr);
		}

		::MX::Data::TimeAttackDungeonSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::TimeAttackDungeonSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_SETUI_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetGround(::MX::Data::TimeAttackDungeonGeasInfo* arg)
		{
			((::System::Void(*)(::MX::Data::TimeAttackDungeonGeasInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_SETGROUND_OFFSET))(arg, nullptr);
		}

		::System::Void set_GroundId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_SET_GROUNDID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DungeonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_GET_DUNGEONID_OFFSET))(nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_ONCLICKENTER_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void SetDifficulty(::MX::Data::TimeAttackDungeonGeasInfo* arg)
		{
			((::System::Void(*)(::MX::Data::TimeAttackDungeonGeasInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_SETDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GeasId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_GET_GEASID_OFFSET))(nullptr);
		}

		::System::Void OnClickEnemyInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_ONCLICKENEMYINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKENTER_GET_ISPRACTICE_OFFSET))(nullptr);
		}

	};

