#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UIProgressBar;
class UITable;
namespace MX::Logic::Battles { class O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39; }
class UIBattle;

#define UISKILLCOSTGAUGE_SETACTIVEFULLFX_OFFSET UNITYSDK_OFFSET(0x2237710)
#define UISKILLCOSTGAUGE_SET_SKILLCARDMANAGER_OFFSET UNITYSDK_OFFSET(0x2237720)
#define UISKILLCOSTGAUGE__RESIZECOSTMAX_G__SEGMENTROOTREPOSITIONRESERVE|26_0_OFFSET UNITYSDK_OFFSET(0x2237730)
#define UISKILLCOSTGAUGE_UPDATE_OFFSET UNITYSDK_OFFSET(0x22377C0)
#define UISKILLCOSTGAUGE_UPDATEPROGRESSVAR_OFFSET UNITYSDK_OFFSET(0x2237850)
#define UISKILLCOSTGAUGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2237D00)
#define UISKILLCOSTGAUGE_SETTHUMBACTIVE_OFFSET UNITYSDK_OFFSET(0x2237D20)
#define UISKILLCOSTGAUGE_RESIZECOSTMAX_OFFSET UNITYSDK_OFFSET(0x2237D50)
#define UISKILLCOSTGAUGE_SHOWFEVERTIME_OFFSET UNITYSDK_OFFSET(0x22383F0)
#define UISKILLCOSTGAUGE_GET_SKILLCARDMANAGER_OFFSET UNITYSDK_OFFSET(0x22385B0)
#define UISKILLCOSTGAUGE_UPDATEFEVERTIME_OFFSET UNITYSDK_OFFSET(0x2237C20)
#define UISKILLCOSTGAUGE_SHOWFEVERTIMEBYGROUNDCOMMAND_OFFSET UNITYSDK_OFFSET(0x22385C0)
#define UISKILLCOSTGAUGE_INIT_OFFSET UNITYSDK_OFFSET(0x22385D0)

	inline static constexpr unsigned int UISkillCostGauge_TypeDefinitionIndex = 4466;

	class UISkillCostGauge : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* CostLabels; // 0x10
		::Il2CppArray<::System::Object*>* uITweeners; // 0x18
		::Il2CppArray<::System::Object*>* enableOnPlus; // 0x20
		::Il2CppArray<::System::Object*>* enableOnMinus; // 0x28
		::UnityEngine::GameObject* FeverUIObject; // 0x30
		::UnityEngine::GameObject* FeverFXObject; // 0x38
		UIProgressBar* ProgressBar; // 0x40
		::UnityEngine::GameObject* Thumb; // 0x48
		UITable* segmentsRoot; // 0x50
		Il2CppObject* costGaugeSegments; // 0x58
		::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39* _skillCardManager_k__BackingField; // 0x60
		::System::Int32 intCostCache; // 0x68
		::System::Single costCache; // 0x6C
		::System::Boolean prevFever; // 0x70
		::System::Boolean feverTimeByGroundCommand; // 0x71
		::System::Boolean feverTimeBySkillManager; // 0x72
		::System::Single initialSegmentAreaSize; // 0x74
		::System::Boolean isActiveFullFx; // 0x78
		::System::Boolean isThumbActive; // 0x79

		::System::Void SetActiveFullFx(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCOSTGAUGE_SETACTIVEFULLFX_OFFSET))(arg, nullptr);
		}

		::System::Void set_skillCardManager(::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCOSTGAUGE_SET_SKILLCARDMANAGER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _ResizeCostMax_g__SegmentRootRepositionReserve|26_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCOSTGAUGE__RESIZECOSTMAX_G__SEGMENTROOTREPOSITIONRESERVE|26_0_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCOSTGAUGE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateProgressVar(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCOSTGAUGE_UPDATEPROGRESSVAR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCOSTGAUGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetThumbActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCOSTGAUGE_SETTHUMBACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void ResizeCostMax(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCOSTGAUGE_RESIZECOSTMAX_OFFSET))(arg, nullptr);
		}

		::System::Void ShowFeverTime(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCOSTGAUGE_SHOWFEVERTIME_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39* get_skillCardManager()
		{
			return ((::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCOSTGAUGE_GET_SKILLCARDMANAGER_OFFSET))(nullptr);
		}

		::System::Void UpdateFeverTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCOSTGAUGE_UPDATEFEVERTIME_OFFSET))(nullptr);
		}

		::System::Void ShowFeverTimeByGroundCommand(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCOSTGAUGE_SHOWFEVERTIMEBYGROUNDCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void Init(UIBattle* arg)
		{
			((::System::Void(*)(UIBattle*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCOSTGAUGE_INIT_OFFSET))(arg, nullptr);
		}

	};

