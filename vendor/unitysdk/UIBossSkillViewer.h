#pragma once
#include "unitysdk.h"

class UIScrollView;
namespace UnityEngine { class Vector2; }
class UISkillInfo;
class SkillViewerSetOption;
namespace MX::Data { class RaidStageInfo; }
namespace MX::Data { class WorldRaidStageInfo; }
class MultiFloorRaidFloorEntity;
namespace MX::Data::Excel { class RaidSkillDescriptionListExcel; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Transform; }
namespace MX::Logic::BattleEntities { class SkillSlot; }

#define UIBOSSSKILLVIEWER_GET_PHASECOVERDESIGNEXIST_OFFSET UNITYSDK_OFFSET(0xBDEB70)
#define UIBOSSSKILLVIEWER_GET_PHASEDIVIDERDESIGNEXIST_OFFSET UNITYSDK_OFFSET(0xBDEBB0)
#define UIBOSSSKILLVIEWER_AWAKE_OFFSET UNITYSDK_OFFSET(0xBDEBF0)
#define UIBOSSSKILLVIEWER_SETDATA_OFFSET UNITYSDK_OFFSET(0xBDED90)
#define UIBOSSSKILLVIEWER_SETDATA_OFFSET UNITYSDK_OFFSET(0xBDFBC0)
#define UIBOSSSKILLVIEWER_SETDATA_OFFSET UNITYSDK_OFFSET(0xBDF990)
#define UIBOSSSKILLVIEWER_SETDATA_OFFSET UNITYSDK_OFFSET(0xBE0DA0)
#define UIBOSSSKILLVIEWER_GETSKILLLISTFROM_OFFSET UNITYSDK_OFFSET(0xBDF3E0)
#define UIBOSSSKILLVIEWER_GETPHASENAMEOVERRIDE_OFFSET UNITYSDK_OFFSET(0xBDF170)
#define UIBOSSSKILLVIEWER_GETSKILLLISTFROM_OFFSET UNITYSDK_OFFSET(0xBDEFA0)
#define UIBOSSSKILLVIEWER_RELOCATEUILISTS_OFFSET UNITYSDK_OFFSET(0xBDFC80)
#define UIBOSSSKILLVIEWER_GETPHASENAME_OFFSET UNITYSDK_OFFSET(0xBE12E0)
#define UIBOSSSKILLVIEWER_SETSKILLCARDS_OFFSET UNITYSDK_OFFSET(0xBE0860)
#define UIBOSSSKILLVIEWER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBE14E0)
#define UIBOSSSKILLVIEWER_SETSKILLINFOEMPTY_OFFSET UNITYSDK_OFFSET(0xBE1480)
#define UIBOSSSKILLVIEWER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBE1560)
#define UIBOSSSKILLVIEWER_ONDRAGFINISHED_OFFSET UNITYSDK_OFFSET(0xBE0BE0)
#define UIBOSSSKILLVIEWER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBE19E0)
#define UIBOSSSKILLVIEWER_STARTMOVEBYGRIDINDEX_OFFSET UNITYSDK_OFFSET(0xBE1970)
#define UIBOSSSKILLVIEWER_SETPOSITIONBYGRIDINDEX_OFFSET UNITYSDK_OFFSET(0xBE1E50)
#define UIBOSSSKILLVIEWER_STARTMOVETOTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xBE1C00)
#define UIBOSSSKILLVIEWER_SETPOSITIONTOTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xBE1AF0)
#define UIBOSSSKILLVIEWER_STOPMOVE_OFFSET UNITYSDK_OFFSET(0xBE1650)
#define UIBOSSSKILLVIEWER_ONSKILLDETAILBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xBE1F30)
#define UIBOSSSKILLVIEWER_RESERVEDETAILPOPUP_OFFSET UNITYSDK_OFFSET(0xBE2210)
#define UIBOSSSKILLVIEWER_GETSPRINGSTRENGTH_OFFSET UNITYSDK_OFFSET(0xBE1EC0)
#define UIBOSSSKILLVIEWER_CALCSLOTSHOWOFFSETRANGE_OFFSET UNITYSDK_OFFSET(0xBE2110)
#define UIBOSSSKILLVIEWER_CALCPOSBY_OFFSET UNITYSDK_OFFSET(0xBE1CE0)
#define UIBOSSSKILLVIEWER_CALCULATEOFFSETRANGE_OFFSET UNITYSDK_OFFSET(0xBE2220)
#define UIBOSSSKILLVIEWER_CALCULATECONTENTBOUNDS_OFFSET UNITYSDK_OFFSET(0xBE2440)
#define UIBOSSSKILLVIEWER_.CTOR_OFFSET UNITYSDK_OFFSET(0xBE2580)
#define UIBOSSSKILLVIEWER__GETSKILLLISTFROM_G__TRYADDSHOWLIST|30_0_OFFSET UNITYSDK_OFFSET(0xBE1050)
#define UIBOSSSKILLVIEWER__ONENABLE_B__36_0_OFFSET UNITYSDK_OFFSET(0xBE2760)
#define UIBOSSSKILLVIEWER__ONDRAGFINISHED_G__FINDNEARBYINDEX|39_0_OFFSET UNITYSDK_OFFSET(0xBE1770)

	inline static constexpr unsigned int UIBossSkillViewer_TypeDefinitionIndex = 8710;

	class UIBossSkillViewer : public Il2CppObject
	{
	public:
		::System::String* LocalizeKeyDefaultNamePhase0; // 0x0
		::System::String* LocalizeKeyDefaultNamePhaseN; // 0x0
		UIScrollView* scrollView; // 0x18
		Il2CppObject* SkillInfos; // 0x20
		Il2CppObject* phaseCovers; // 0x28
		Il2CppObject* phaseDividers; // 0x30
		::System::Int32 widthSkillSlot; // 0x38
		::System::Int32 widthPhaseDivider; // 0x3C
		::System::Single springStrength; // 0x40
		::System::Single springStrengthFast; // 0x44
		::System::Boolean debugShowOldData; // 0x48
		::System::Boolean moveScroll; // 0x49
		Il2CppObject* offsetRange; // 0x4C
		Il2CppObject* offsetPerSlots; // 0x58
		::UnityEngine::Vector2* targetPosition; // 0x60
		UISkillInfo* detailPopupReserved; // 0x68
		Il2CppObject* phaseEndIndexes; // 0x70
		Il2CppObject* phaseNameOverride; // 0x78
		Il2CppObject* skillInfoPool; // 0x80
		SkillViewerSetOption* setOption; // 0x88
		::System::Int32 minDisplaySkillSlot; // 0x90

		::System::Boolean get_PhaseCoverDesignExist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_GET_PHASECOVERDESIGNEXIST_OFFSET))(nullptr);
		}

		::System::Boolean get_PhaseDividerDesignExist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_GET_PHASEDIVIDERDESIGNEXIST_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::RaidStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::RaidStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::WorldRaidStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::WorldRaidStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, Il2CppObject* arg2, SkillViewerSetOption* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, SkillViewerSetOption*, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetData(MultiFloorRaidFloorEntity* arg)
		{
			((::System::Void(*)(MultiFloorRaidFloorEntity*, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_SETDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetSkillListFrom(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_GETSKILLLISTFROM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPhaseNameOverride(::MX::Data::Excel::RaidSkillDescriptionListExcel* arg)
		{
			return ((Il2CppObject*(*)(::MX::Data::Excel::RaidSkillDescriptionListExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_GETPHASENAMEOVERRIDE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetSkillListFrom(::MX::Data::Excel::RaidSkillDescriptionListExcel* arg)
		{
			return ((Il2CppObject*(*)(::MX::Data::Excel::RaidSkillDescriptionListExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_GETSKILLLISTFROM_OFFSET))(arg, nullptr);
		}

		::System::Void ReLocateUILists()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_RELOCATEUILISTS_OFFSET))(nullptr);
		}

		::System::String* GetPhaseName(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_GETPHASENAME_OFFSET))(arg, nullptr);
		}

		::System::Void SetSkillCards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_SETSKILLCARDS_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetSkillInfoEmpty(UISkillInfo* arg)
		{
			((::System::Void(*)(UISkillInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_SETSKILLINFOEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDragFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_ONDRAGFINISHED_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void StartMoveByGridIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_STARTMOVEBYGRIDINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void SetPositionByGridIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_SETPOSITIONBYGRIDINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void StartMoveToTargetPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_STARTMOVETOTARGETPOSITION_OFFSET))(nullptr);
		}

		::System::Void SetPositionToTargetPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_SETPOSITIONTOTARGETPOSITION_OFFSET))(nullptr);
		}

		::System::Void StopMove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_STOPMOVE_OFFSET))(nullptr);
		}

		::System::Void OnSkillDetailButtonClick(UISkillInfo* arg)
		{
			((::System::Void(*)(UISkillInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_ONSKILLDETAILBUTTONCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void ReserveDetailPopup(UISkillInfo* arg)
		{
			((::System::Void(*)(UISkillInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_RESERVEDETAILPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Single GetSpringStrength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_GETSPRINGSTRENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CalcSlotShowOffsetRange(::System::Int32 arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_CALCSLOTSHOWOFFSETRANGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CalcPosBy(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_CALCPOSBY_OFFSET))(arg, nullptr);
		}

		::System::Void CalculateOffsetRange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_CALCULATEOFFSETRANGE_OFFSET))(nullptr);
		}

		::UnityEngine::Bounds* CalculateContentBounds(::UnityEngine::Transform* arg)
		{
			return ((::UnityEngine::Bounds*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_CALCULATECONTENTBOUNDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetSkillListFrom_g__TryAddShowList|30_0(Il2CppObject* arg, ::System::String* str, ::MX::Logic::BattleEntities::SkillSlot* arg2, ::System::Int32 arg3, <>c__DisplayClass30_0&* arg4)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::System::String*, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Int32, <>c__DisplayClass30_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER__GETSKILLLISTFROM_G__TRYADDSHOWLIST|30_0_OFFSET))(arg, str, arg2, arg3, arg4, nullptr);
		}

		::System::Void _OnEnable_b__36_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER__ONENABLE_B__36_0_OFFSET))(nullptr);
		}

		::System::Single _OnDragFinished_g__FindNearbyIndex|39_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWER__ONDRAGFINISHED_G__FINDNEARBYINDEX|39_0_OFFSET))(nullptr);
		}

	};

