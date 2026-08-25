#pragma once
#include "unitysdk.h"

class EchelonSlots;
class UIFormationSubInfoPopup;
namespace UnityEngine { class Transform; }
class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
namespace MX::Data { class MiniGameDefenseStageInfo; }
namespace MX::Data { class MinigameDefenseFixedStatExcelInfo; }
class EchelonObject;
class UIPopup_FixedStatInfo;
namespace FlatData { class EchelonExtensionType; }

#define UIECHELONINFO_DEFENSE_OPENMULLIGANPOPUP_OFFSET UNITYSDK_OFFSET(0xA5B220)
#define UIECHELONINFO_DEFENSE_SETMULLIGANIDANDSAVE_OFFSET UNITYSDK_OFFSET(0xA5B5F0)
#define UIECHELONINFO_DEFENSE_AWAKE_OFFSET UNITYSDK_OFFSET(0xA5B6A0)
#define UIECHELONINFO_DEFENSE_GET_BGGRADIANTANGLE_OFFSET UNITYSDK_OFFSET(0xA5B7D0)
#define UIECHELONINFO_DEFENSE_SETBOTTOMCARDUI_OFFSET UNITYSDK_OFFSET(0xA5B870)
#define UIECHELONINFO_DEFENSE__ONCLICKFIXEDSTATINFO_B__20_0_OFFSET UNITYSDK_OFFSET(0xA5C240)
#define UIECHELONINFO_DEFENSE_SETUICHARACTERCARDONPOSITIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA5C270)
#define UIECHELONINFO_DEFENSE_SETMULLIGAN_OFFSET UNITYSDK_OFFSET(0xA5C7F0)
#define UIECHELONINFO_DEFENSE_SAVE_OFFSET UNITYSDK_OFFSET(0xA5C8F0)
#define UIECHELONINFO_DEFENSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA5C980)
#define UIECHELONINFO_DEFENSE__ONCLICKSUBINFO_G__GETLEADERID|32_0_OFFSET UNITYSDK_OFFSET(0xA5CA00)
#define UIECHELONINFO_DEFENSE___N__2_OFFSET UNITYSDK_OFFSET(0xA5CAF0)
#define UIECHELONINFO_DEFENSE_GET_SUPPORTCHARACTERSLOTS_OFFSET UNITYSDK_OFFSET(0xA5C220)
#define UIECHELONINFO_DEFENSE_GET_MAINCHARACTERSLOTS_OFFSET UNITYSDK_OFFSET(0xA5C200)
#define UIECHELONINFO_DEFENSE___N__1_OFFSET UNITYSDK_OFFSET(0xA5CB00)
#define UIECHELONINFO_DEFENSE_GET_SUPPORTCHARACTEROBJECTLIST_OFFSET UNITYSDK_OFFSET(0xA5CB10)
#define UIECHELONINFO_DEFENSE_ONCLICKSUBINFO_OFFSET UNITYSDK_OFFSET(0xA5CB70)
#define UIECHELONINFO_DEFENSE_COSAVEIFCHANGED_OFFSET UNITYSDK_OFFSET(0xA5CC30)
#define UIECHELONINFO_DEFENSE_INITECHELON_OFFSET UNITYSDK_OFFSET(0xA5CCE0)
#define UIECHELONINFO_DEFENSE_SETBOTTOMCARDUIFORFIXEDECHELON_OFFSET UNITYSDK_OFFSET(0xA5CD90)
#define UIECHELONINFO_DEFENSE_INITFIXEDECHELON_OFFSET UNITYSDK_OFFSET(0xA5D180)
#define UIECHELONINFO_DEFENSE_SAVEFIXEDECHELONCHARIDSFROMPOSITION_OFFSET UNITYSDK_OFFSET(0xA5D220)
#define UIECHELONINFO_DEFENSE___N__0_OFFSET UNITYSDK_OFFSET(0xA5D6F0)
#define UIECHELONINFO_DEFENSE_SETCURRENTECHELONSLOTSBYEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0xA5D700)
#define UIECHELONINFO_DEFENSE_INITIALIZEFORDEFENSE_OFFSET UNITYSDK_OFFSET(0xA5D830)
#define UIECHELONINFO_DEFENSE_ONCLICKFIXEDSTATINFO_OFFSET UNITYSDK_OFFSET(0xA5DBC0)
#define UIECHELONINFO_DEFENSE_SETLINKICONSTATE_OFFSET UNITYSDK_OFFSET(0xA5DCA0)

	inline static constexpr unsigned int UIEchelonInfo_Defense_TypeDefinitionIndex = 511;

	class UIEchelonInfo_Defense : public Il2CppObject
	{
	public:
		EchelonSlots* baseEchelon; // 0x168
		EchelonSlots* extendedEchelon; // 0x170
		EchelonSlots* currentEchelonSlots; // 0x178
		UIFormationSubInfoPopup* subInfoPopup_Base; // 0x180
		UIFormationSubInfoPopup* subInfoPopup_Extension; // 0x188
		::UnityEngine::Transform* fixedStatButtonRoot; // 0x190
		MXButton* fixedStatInfoButton; // 0x198
		UILabel* fixedStatLevelLabel; // 0x1A0
		::UnityEngine::GameObject* uiFormationBGRoot; // 0x1A8
		::MX::Data::MiniGameDefenseStageInfo* defenseStageInfo; // 0x1B0
		::MX::Data::MinigameDefenseFixedStatExcelInfo* fixedStatExcelInfo; // 0x1B8
		Il2CppObject* mulliganUniqueIds; // 0x1C0

		::System::Void OpenMulliganPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_OPENMULLIGANPOPUP_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* SetMulliganIdAndSave(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_SETMULLIGANIDANDSAVE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_AWAKE_OFFSET))(nullptr);
		}

		::System::Single get_BGGradiantAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_GET_BGGRADIANTANGLE_OFFSET))(nullptr);
		}

		::System::Void SetBottomCardUI(EchelonObject* arg)
		{
			((::System::Void(*)(EchelonObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_SETBOTTOMCARDUI_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickFixedStatInfo_b__20_0(UIPopup_FixedStatInfo* arg)
		{
			((::System::Void(*)(UIPopup_FixedStatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE__ONCLICKFIXEDSTATINFO_B__20_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetUICharacterCardOnPositionChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_SETUICHARACTERCARDONPOSITIONCHANGED_OFFSET))(nullptr);
		}

		::System::Void SetMulligan(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_SETMULLIGAN_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Save()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_SAVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 _OnClickSubInfo_g__GetLeaderId|32_0()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE__ONCLICKSUBINFO_G__GETLEADERID|32_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__2(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE___N__2_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_supportCharacterSlots()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_GET_SUPPORTCHARACTERSLOTS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_mainCharacterSlots()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_GET_MAINCHARACTERSLOTS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__1(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE___N__1_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SupportCharacterObjectList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_GET_SUPPORTCHARACTEROBJECTLIST_OFFSET))(nullptr);
		}

		::System::Void OnClickSubInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_ONCLICKSUBINFO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoSaveIfChanged(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_COSAVEIFCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* InitEchelon(EchelonObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(EchelonObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_INITECHELON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetBottomCardUIForFixedEchelon(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_SETBOTTOMCARDUIFORFIXEDECHELON_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* InitFixedEchelon(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_INITFIXEDECHELON_OFFSET))(arg, nullptr);
		}

		::System::Void SaveFixedEchelonCharIdsFromPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_SAVEFIXEDECHELONCHARIDSFROMPOSITION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0(EchelonObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(EchelonObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE___N__0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCurrentEchelonSlotsByExtensionType(::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_SETCURRENTECHELONSLOTSBYEXTENSIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeForDefense(::MX::Data::MiniGameDefenseStageInfo* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(::MX::Data::MiniGameDefenseStageInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_INITIALIZEFORDEFENSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickFixedStatInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_ONCLICKFIXEDSTATINFO_OFFSET))(nullptr);
		}

		::System::Void SetLinkIconState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_DEFENSE_SETLINKICONSTATE_OFFSET))(nullptr);
		}

	};

