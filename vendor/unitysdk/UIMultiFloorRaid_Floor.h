#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
class MXButton;
class UIMultiFloorRaidPeriodDisplay;
class UILabel;
class UITexture;
class UISprite;
class UIBossSkillViewer;
class UIMultiFloorRaidFloorScrollViewController;
class MultiFloorRaidSectionEntity;
class MultiFloorRaidFloorEntity;
namespace UnityEngine { class Transform; }

#define UIMULTIFLOORRAID_FLOOR_ONOPENED_OFFSET UNITYSDK_OFFSET(0x26A7DA0)
#define UIMULTIFLOORRAID_FLOOR_COOPENEND_OFFSET UNITYSDK_OFFSET(0x26A8C80)
#define UIMULTIFLOORRAID_FLOOR__COOPENEND_B__42_0_OFFSET UNITYSDK_OFFSET(0x26A8D10)
#define UIMULTIFLOORRAID_FLOOR_FROMLOBBYANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x26A8E40)
#define UIMULTIFLOORRAID_FLOOR_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x26A80D0)
#define UIMULTIFLOORRAID_FLOOR_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x26A8F10)
#define UIMULTIFLOORRAID_FLOOR_STARTMOVETONEWSECTION_OFFSET UNITYSDK_OFFSET(0x26A8FA0)
#define UIMULTIFLOORRAID_FLOOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x26A9250)
#define UIMULTIFLOORRAID_FLOOR_ONCLICKCLEARDECK_OFFSET UNITYSDK_OFFSET(0x26A9260)
#define UIMULTIFLOORRAID_FLOOR__ONCLICKENTER_B__46_0_OFFSET UNITYSDK_OFFSET(0x26A93C0)
#define UIMULTIFLOORRAID_FLOOR_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0x26A9450)
#define UIMULTIFLOORRAID_FLOOR_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x26A9630)
#define UIMULTIFLOORRAID_FLOOR_COMOVETONEWSECTIONANIMATION_OFFSET UNITYSDK_OFFSET(0x26A91D0)
#define UIMULTIFLOORRAID_FLOOR_SETFLOORS_OFFSET UNITYSDK_OFFSET(0x26A7E60)
#define UIMULTIFLOORRAID_FLOOR__COCHANGESECTION_B__35_0_OFFSET UNITYSDK_OFFSET(0x26A9810)
#define UIMULTIFLOORRAID_FLOOR_CHANGESECTION_OFFSET UNITYSDK_OFFSET(0x26A9940)
#define UIMULTIFLOORRAID_FLOOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x26A99F0)
#define UIMULTIFLOORRAID_FLOOR_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x26A9BB0)
#define UIMULTIFLOORRAID_FLOOR_COCHANGESECTION_OFFSET UNITYSDK_OFFSET(0x26A9B40)
#define UIMULTIFLOORRAID_FLOOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x26A9D30)
#define UIMULTIFLOORRAID_FLOOR__ONCLICKENTER_G__RAIDENTERINTERNAL|46_1_OFFSET UNITYSDK_OFFSET(0x26AA030)
#define UIMULTIFLOORRAID_FLOOR_ONCLICKSHOWFLOORLIST_OFFSET UNITYSDK_OFFSET(0x26AA5A0)
#define UIMULTIFLOORRAID_FLOOR_ONCLICKFLOORELEMENT_OFFSET UNITYSDK_OFFSET(0x26AA630)
#define UIMULTIFLOORRAID_FLOOR___N__0_OFFSET UNITYSDK_OFFSET(0x26AA8A0)
#define UIMULTIFLOORRAID_FLOOR_SETSEASONINFO_OFFSET UNITYSDK_OFFSET(0x26AA8B0)
#define UIMULTIFLOORRAID_FLOOR_OPENENDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x26A8B30)

	inline static constexpr unsigned int UIMultiFloorRaid_Floor_TypeDefinitionIndex = 6872;

	class UIMultiFloorRaid_Floor : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* TransitionFX; // 0xD8
		::UnityEngine::GameObject* FloorUIRoot; // 0xE0
		::UnityEngine::Animation* FromLobbyAnimation; // 0xE8
		::UnityEngine::Animation* OpenAnimation; // 0xF0
		MXButton* ShowFloorButton; // 0xF8
		UIMultiFloorRaidPeriodDisplay* PeriodDisplay; // 0x100
		UILabel* BossNameLabel; // 0x108
		UITexture* BossPortrait; // 0x110
		UILabel* BossHPLabel; // 0x118
		UILabel* RecommendLevel; // 0x120
		UISprite* TopographyIcon; // 0x128
		UISprite* BulletTypeBG; // 0x130
		UILabel* BulletTypeLabel; // 0x138
		UISprite* ArmorTypeBG; // 0x140
		UILabel* ArmorTypeLabel; // 0x148
		UIBossSkillViewer* SkillViewer; // 0x150
		UIMultiFloorRaidFloorScrollViewController* FloorScrollView; // 0x158
		MXButton* ClearDeckButton; // 0x160
		MXButton* EnterButton; // 0x168
		::System::String* fromLobbyAniName; // 0x0
		::System::String* floorOpenAniName; // 0x0
		::System::String* floorChangeInAniName; // 0x0
		::System::String* floorChangeOutAniName; // 0x0
		MultiFloorRaidSectionEntity* section; // 0x170
		MultiFloorRaidFloorEntity* floor; // 0x178
		::System::Boolean fromLobbyUI; // 0x180

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoOpenEnd()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_COOPENEND_OFFSET))(nullptr);
		}

		::System::Void _CoOpenEnd_b__42_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR__COOPENEND_B__42_0_OFFSET))(nullptr);
		}

		::System::Void FromLobbyAnimationEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_FROMLOBBYANIMATIONEVENT_OFFSET))(nullptr);
		}

		::System::Void RefreshUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_REFRESHUI_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void StartMoveToNewSection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_STARTMOVETONEWSECTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickClearDeck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_ONCLICKCLEARDECK_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnter_b__46_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR__ONCLICKENTER_B__46_0_OFFSET))(nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_ONCLICKENTER_OFFSET))(nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoMoveToNewSectionAnimation(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_COMOVETONEWSECTIONANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void SetFloors()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_SETFLOORS_OFFSET))(nullptr);
		}

		::System::Void _CoChangeSection_b__35_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR__COCHANGESECTION_B__35_0_OFFSET))(nullptr);
		}

		::System::Void ChangeSection(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_CHANGESECTION_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoChangeSection()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_COCHANGESECTION_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnter_g__RaidEnterInternal|46_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR__ONCLICKENTER_G__RAIDENTERINTERNAL|46_1_OFFSET))(nullptr);
		}

		::System::Void OnClickShowFloorList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_ONCLICKSHOWFLOORLIST_OFFSET))(nullptr);
		}

		::System::Void OnClickFloorElement(::System::Int32 arg, ::UnityEngine::Transform* arg2)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_ONCLICKFLOORELEMENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR___N__0_OFFSET))(nullptr);
		}

		::System::Void SetSeasonInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_SETSEASONINFO_OFFSET))(nullptr);
		}

		::System::Void OpenEndSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_FLOOR_OPENENDSEQUENCE_OFFSET))(nullptr);
		}

	};

