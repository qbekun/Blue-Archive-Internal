#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UISprite;
class UIEnemyInfoPopup;
namespace MX::Conquest { class ConquestTile; }
namespace MX::GameLogic::DBModel { class ConquestTileDB; }

#define UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_ONCLICKENEMYINFOBUTTON_OFFSET UNITYSDK_OFFSET(0x2384E00)
#define UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2384EE0)
#define UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_FORCESELECTECHELONOPTION_OFFSET UNITYSDK_OFFSET(0x2385060)
#define UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_INITIALIZETOGGLE_OFFSET UNITYSDK_OFFSET(0x23850F0)
#define UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_GETFILTEREDSTAGEREWARDS_OFFSET UNITYSDK_OFFSET(0x2385350)
#define UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_ONTOGGLEECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x2385480)
#define UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_SETSTARTBUTTON_OFFSET UNITYSDK_OFFSET(0x2385570)
#define UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_SETECHELONDATA_OFFSET UNITYSDK_OFFSET(0x2385810)
#define UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_ONCLICKSTARTBUTTON_OFFSET UNITYSDK_OFFSET(0x2385850)
#define UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_SETLOCALIZETEXT_OFFSET UNITYSDK_OFFSET(0x2385910)
#define UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2385DB0)
#define UIPOPUP_CONQUEST_REMOVEEROSIONUNIT__ONCLICKENEMYINFOBUTTON_B__21_0_OFFSET UNITYSDK_OFFSET(0x2385E30)
#define UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_SETSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x2385E80)
#define UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2386120)
#define UIPOPUP_CONQUEST_REMOVEEROSIONUNIT__SETDATA_B__14_0_OFFSET UNITYSDK_OFFSET(0x2386430)

	inline static constexpr unsigned int UIPopup_Conquest_RemoveErosionUnit_TypeDefinitionIndex = 5124;

	class UIPopup_Conquest_RemoveErosionUnit : public Il2CppObject
	{
	public:
		MXButton* enemyInfoButton; // 0x208
		::Il2CppArray<::System::Object*>* enemyTeamLabels; // 0x210
		UILabel* RecommandLevel; // 0x218
		UISprite* stageThemeSprite; // 0x220
		UILabel* erosionAlarmLabel; // 0x228
		UILabel* erosionRemoveSelectLabel; // 0x230
		UILabel* manageEchelonLabelOn; // 0x238
		UILabel* manageEchelonLabelOff; // 0x240
		::Il2CppArray<::System::Object*>* echelonToggle; // 0x248
		::System::Int32 echelonOption; // 0x250
		::System::Boolean useConquestManageEchelon; // 0x254
		Il2CppObject* toggleTable; // 0x258

		::System::Void OnClickEnemyInfoButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_ONCLICKENEMYINFOBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void ForceSelectEchelonOption(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_FORCESELECTECHELONOPTION_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeToggle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_INITIALIZETOGGLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetFilteredStageRewards(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_GETFILTEREDSTAGEREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void OnToggleEchelonType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_ONTOGGLEECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Void SetStartButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_SETSTARTBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetEchelonData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_SETECHELONDATA_OFFSET))(nullptr);
		}

		::System::Void OnClickStartButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_ONCLICKSTARTBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetLocalizeText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_SETLOCALIZETEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnemyInfoButton_b__21_0(UIEnemyInfoPopup* arg)
		{
			((::System::Void(*)(UIEnemyInfoPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_REMOVEEROSIONUNIT__ONCLICKENEMYINFOBUTTON_B__21_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetStageInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_SETSTAGEINFO_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Conquest::ConquestTile* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_REMOVEEROSIONUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetData_b__14_0(::MX::GameLogic::DBModel::ConquestTileDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ConquestTileDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_REMOVEEROSIONUNIT__SETDATA_B__14_0_OFFSET))(arg, nullptr);
		}

	};

