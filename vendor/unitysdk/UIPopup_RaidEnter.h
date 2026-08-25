#pragma once
#include "unitysdk.h"

class UIRaidBossInfo;
class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
class UIAdmissionDisplay;
class StageSweep;
namespace MX::GameLogic::DBModel { class RaidDB; }
namespace FlatData { class ContentType; }
class From;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPOPUP_RAIDENTER_GETFROM_OFFSET UNITYSDK_OFFSET(0x27918A0)
#define UIPOPUP_RAIDENTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x27918E0)
#define UIPOPUP_RAIDENTER_ONCLICKPRACTICE_OFFSET UNITYSDK_OFFSET(0x2791A40)
#define UIPOPUP_RAIDENTER_GIVEUP_OFFSET UNITYSDK_OFFSET(0x2791C80)
#define UIPOPUP_RAIDENTER_ONCLICKGIVEUP_OFFSET UNITYSDK_OFFSET(0x2791D10)
#define UIPOPUP_RAIDENTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2791F20)
#define UIPOPUP_RAIDENTER__ONCLICKREENTER_G__REENTERINTERNAL|25_2_OFFSET UNITYSDK_OFFSET(0x2791F30)
#define UIPOPUP_RAIDENTER_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2792290)
#define UIPOPUP_RAIDENTER_ONCLICKGUIDE_OFFSET UNITYSDK_OFFSET(0x2792370)
#define UIPOPUP_RAIDENTER_ONCLICKREENTER_OFFSET UNITYSDK_OFFSET(0x2792550)
#define UIPOPUP_RAIDENTER_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x2792690)
#define UIPOPUP_RAIDENTER_TRYOPENGUIDE_OFFSET UNITYSDK_OFFSET(0x2792750)
#define UIPOPUP_RAIDENTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27927E0)
#define UIPOPUP_RAIDENTER_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0x27928F0)
#define UIPOPUP_RAIDENTER_RAIDENTER_OFFSET UNITYSDK_OFFSET(0x2791A50)
#define UIPOPUP_RAIDENTER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2792C10)
#define UIPOPUP_RAIDENTER__ONCLICKENTER_B__20_1_OFFSET UNITYSDK_OFFSET(0x2794AE0)
#define UIPOPUP_RAIDENTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x2794AF0)
#define UIPOPUP_RAIDENTER__ONCLICKREENTER_B__25_1_OFFSET UNITYSDK_OFFSET(0x2795070)
#define UIPOPUP_RAIDENTER__ONCLICKREENTER_B__25_0_OFFSET UNITYSDK_OFFSET(0x2795100)

	inline static constexpr unsigned int UIPopup_RaidEnter_TypeDefinitionIndex = 7450;

	class UIPopup_RaidEnter : public Il2CppObject
	{
	public:
		UIRaidBossInfo* UIRaidBossInfo; // 0xD8
		UILabel* Ticket; // 0xE0
		::UnityEngine::GameObject* PracticeObject; // 0xE8
		::UnityEngine::GameObject* EnterObject; // 0xF0
		::UnityEngine::GameObject* ReEnterObject; // 0xF8
		MXButton* EnterButton; // 0x100
		MXButton* PracticeButton; // 0x108
		MXButton* ReEnterButton; // 0x110
		MXButton* GiveUpButton; // 0x118
		MXButton* guideButton; // 0x120
		UIAdmissionDisplay* admissionDisplay; // 0x128
		StageSweep* StageSweep; // 0x130
		::MX::GameLogic::DBModel::RaidDB* raidDB; // 0x138
		::System::Int64 stageId; // 0x140
		::FlatData::ContentType* currentRaidType; // 0x148

		From* GetFrom()
		{
			return ((From*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER_GETFROM_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickPractice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER_ONCLICKPRACTICE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GiveUp()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER_GIVEUP_OFFSET))(nullptr);
		}

		::System::Void OnClickGiveUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER_ONCLICKGIVEUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickReEnter_g__ReEnterInternal|25_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER__ONCLICKREENTER_G__REENTERINTERNAL|25_2_OFFSET))(nullptr);
		}

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickGuide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER_ONCLICKGUIDE_OFFSET))(nullptr);
		}

		::System::Void OnClickReEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER_ONCLICKREENTER_OFFSET))(nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* TryOpenGuide()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER_TRYOPENGUIDE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER_ONCLICKENTER_OFFSET))(nullptr);
		}

		::System::Void RaidEnter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER_RAIDENTER_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int64 arg, ::FlatData::ContentType* arg2)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnClickEnter_b__20_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER__ONCLICKENTER_B__20_1_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickReEnter_b__25_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER__ONCLICKREENTER_B__25_1_OFFSET))(nullptr);
		}

		::System::Void _OnClickReEnter_b__25_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTER__ONCLICKREENTER_B__25_0_OFFSET))(nullptr);
		}

	};

