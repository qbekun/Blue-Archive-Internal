#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class TouchPhase; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGSkillData&; }
namespace MX::MinigameCCG { class CCGCard; }
namespace MX::MinigameCCG { class ICCGCardData; }
namespace FlatData { class CCGCardType; }
namespace UnityEngine { class Vector3; }
namespace MX::Data::Excel { class MinigameCCGPerkExcel; }
namespace MX::Audio { class AudioPlayer; }
namespace MX::Audio { class AudioSourceData; }
namespace FlatData { class CCGEntityType; }
namespace MX::MinigameCCG::UI { class UICardGame_CardGroup; }
namespace MX::MinigameCCG { class CCGLogEntity; }

#define MX_MINIGAMECCG_VISUAL_CCGUTILS_GET_HIGHLIGHTPOWERLABELCOLOR_OFFSET UNITYSDK_OFFSET(0x1E9D300)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_GET_ORIGINPOWERLABELCOLOR_OFFSET UNITYSDK_OFFSET(0x1E9D310)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_ISTOUCHEVENT_OFFSET UNITYSDK_OFFSET(0x1E883C0)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_REPLACEDESCRIPTIONVALUES_OFFSET UNITYSDK_OFFSET(0x1E9D320)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_TRYGETSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1E9F230)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_GETCARDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E9F650)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_GETCARDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E9FD20)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_GETHANDLOCALPOSITIONBYRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1E9AC70)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_SETCARDTYPEICONTEXTURE_OFFSET UNITYSDK_OFFSET(0x1EA0920)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_GETCLOSESTMATCHINGASPECT_OFFSET UNITYSDK_OFFSET(0x1EA05D0)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_SNAPSHOTCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0x1EA0AA0)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_ISCLICKUI_OFFSET UNITYSDK_OFFSET(0x1E87C80)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_GETCARDTYPEICONPATH_OFFSET UNITYSDK_OFFSET(0x1EA0D10)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_CALCULATEMINPOINT_OFFSET UNITYSDK_OFFSET(0x1EA0DC0)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_TRYFINDTARGETFROMSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1EA1570)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_FIXYANDZ_OFFSET UNITYSDK_OFFSET(0x1E9B7A0)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_ISPERKLOCKED_OFFSET UNITYSDK_OFFSET(0x1EA1860)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_ISPERKSUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1EA1980)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_CANPURCHASEPERK_OFFSET UNITYSDK_OFFSET(0x1EA1AE0)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_TOPOLOGICALSORTGRAPH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_PLAYONESHOTAUDIO_OFFSET UNITYSDK_OFFSET(0x1E8AE10)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1EA1CD0)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_GETENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1EA1DC0)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_HASMINIGAMEMISSIONREWARD_OFFSET UNITYSDK_OFFSET(0x1EA1E70)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_ISPERKSHOPDOTACTIVE_OFFSET UNITYSDK_OFFSET(0x1EA1F20)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS_SETCARDGROUPBYLOGENTITY_OFFSET UNITYSDK_OFFSET(0x1EA20E0)
#define MX_MINIGAMECCG_VISUAL_CCGUTILS__REPLACEDESCRIPTIONVALUES_G__TRYGETID|5_1_OFFSET UNITYSDK_OFFSET(0x1E9F150)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int CCGUtils_TypeDefinitionIndex = 21228;

	class CCGUtils : public Il2CppObject
	{
	public:
		::UnityEngine::Color* get_HighlightPowerLabelColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_GET_HIGHLIGHTPOWERLABELCOLOR_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_OriginPowerLabelColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_GET_ORIGINPOWERLABELCOLOR_OFFSET))(nullptr);
		}

		::System::Boolean IsTouchEvent(::UnityEngine::TouchPhase* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TouchPhase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_ISTOUCHEVENT_OFFSET))(arg, nullptr);
		}

		::System::String* ReplaceDescriptionValues(::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::CCGSkillData* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::CCGSkillData*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_REPLACEDESCRIPTIONVALUES_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Boolean TryGetSkillData(::MX::MinigameCCG::CCGEntity* arg, ::System::Int64 arg, ::MX::MinigameCCG::CCGSkillData&* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGEntity*, ::System::Int64, ::MX::MinigameCCG::CCGSkillData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_TRYGETSKILLDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetCardDescription(::MX::MinigameCCG::CCGCard* arg)
		{
			return (return (::System::String*(*)(::MX::MinigameCCG::CCGCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_GETCARDDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::System::String* GetCardDescription(::MX::MinigameCCG::ICCGCardData* arg)
		{
			return (return (::System::String*(*)(::MX::MinigameCCG::ICCGCardData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_GETCARDDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::System::Single GetHandLocalPositionByResolution(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_GETHANDLOCALPOSITIONBYRESOLUTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCardTypeIconTexture(::FlatData::CCGCardType* arg, UITexture* arg)
		{
			((::System::Void(*)(::FlatData::CCGCardType*, UITexture*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_SETCARDTYPEICONTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetClosestMatchingAspect(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::String*(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_GETCLOSESTMATCHINGASPECT_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* SnapShotCharacterDBs(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_SNAPSHOTCHARACTERDBS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsClickUI(::UnityEngine::Vector3* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_ISCLICKUI_OFFSET))(arg, nullptr);
		}

		::System::String* GetCardTypeIconPath(::FlatData::CCGCardType* arg)
		{
			return (return (::System::String*(*)(::FlatData::CCGCardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_GETCARDTYPEICONPATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 CalculateMinPoint(::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_CALCULATEMINPOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryFindTargetFromSkillData(::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::CCGSkillData* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::CCGSkillData*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_TRYFINDTARGETFROMSKILLDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* FixYAndZ(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_FIXYANDZ_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsPerkLocked(::MX::Data::Excel::MinigameCCGPerkExcel* arg, MinigameCCGObject* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::MinigameCCGPerkExcel*, MinigameCCGObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_ISPERKLOCKED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsPerksUnlocked(::MX::Data::Excel::MinigameCCGPerkExcel* arg, MinigameCCGObject* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::MinigameCCGPerkExcel*, MinigameCCGObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_ISPERKSUNLOCKED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanPurchasePerk(::MX::Data::Excel::MinigameCCGPerkExcel* arg, MinigameCCGObject* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::MinigameCCGPerkExcel*, MinigameCCGObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_CANPURCHASEPERK_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* TopologicalSortGraph(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_TOPOLOGICALSORTGRAPH_OFFSET))(arg, nullptr);
		}

		::System::Void PlayOneShotAudio(::MX::Audio::AudioPlayer* arg, ::MX::Audio::AudioSourceData* arg)
		{
			((::System::Void(*)(::MX::Audio::AudioPlayer*, ::MX::Audio::AudioSourceData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_PLAYONESHOTAUDIO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetTexture(UITexture* arg, ::System::String* str)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_SETTEXTURE_OFFSET))(arg, str, nullptr);
		}

		::FlatData::CCGEntityType* GetEntityType(::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::FlatData::CCGEntityType*(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_GETENTITYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasMiniGameMissionReward(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_HASMINIGAMEMISSIONREWARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPerkShopDotActive(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_ISPERKSHOPDOTACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCardGroupByLogEntity(::MX::MinigameCCG::UI::UICardGame_CardGroup* arg, ::MX::MinigameCCG::CCGLogEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_CardGroup*, ::MX::MinigameCCG::CCGLogEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS_SETCARDGROUPBYLOGENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean _ReplaceDescriptionValues_g__TryGetId|5_1(::System::String* str, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUTILS__REPLACEDESCRIPTIONVALUES_G__TRYGETID|5_1_OFFSET))(str, arg, nullptr);
		}

	};
}

