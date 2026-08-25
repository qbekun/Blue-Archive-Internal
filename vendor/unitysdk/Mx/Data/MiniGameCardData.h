#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MinigameCCGLevelStageExcel&; }
namespace MX::Data::Excel { class MinigameCCGSkillExcel&; }
namespace MX::Data::Excel { class MinigameCCGRewardCardExcel&; }
namespace MX::Data::Excel { class MinigameCCGCharacterExcel&; }
namespace MX::Data::Excel { class MinigameCCGLevelExcel&; }
namespace MX::Data::Excel { class MinigameCCGLevelNodeExcel&; }
namespace MX::Data::Excel { class MinigameCCGEnemyGroupExcel&; }
namespace MX::Data::Excel { class MinigameCCGInfoExcel&; }
namespace MX::Data::Excel { class MinigameCCGLogicEffectExcel&; }
namespace MX::Data::Excel { class MinigameCCGCardExcel&; }
namespace MX::Data::Excel { class MinigameCCGPerkExcel&; }

#define MX_DATA_MINIGAMECARDDATA_GETLEVELNODEEXCELALLSERVER_OFFSET UNITYSDK_OFFSET(0x18EF3A0)
#define MX_DATA_MINIGAMECARDDATA_GETREWARDCARDEXCELALLBYGROUPIDRARITYCLIENT_OFFSET UNITYSDK_OFFSET(0x18EF420)
#define MX_DATA_MINIGAMECARDDATA_TRYGETSTAGEEXCELSERVER_OFFSET UNITYSDK_OFFSET(0x18EF560)
#define MX_DATA_MINIGAMECARDDATA_TRYGETSKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x18EF5C0)
#define MX_DATA_MINIGAMECARDDATA_GETENEMYGROUPEXCELSALL_OFFSET UNITYSDK_OFFSET(0x18EF6B0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETPERKEXCELSBYCCGIDSERVER_OFFSET UNITYSDK_OFFSET(0x18EF740)
#define MX_DATA_MINIGAMECARDDATA_INITIALIZESERVER_OFFSET UNITYSDK_OFFSET(0x18EF7A0)
#define MX_DATA_MINIGAMECARDDATA_GETSTAGEEXCELALLCLIENT_OFFSET UNITYSDK_OFFSET(0x18F4480)
#define MX_DATA_MINIGAMECARDDATA_TRYGETREWARDITEMSFROMPOINTCLIENT_OFFSET UNITYSDK_OFFSET(0x18F4500)
#define MX_DATA_MINIGAMECARDDATA_GETLEVELEXCELALLSERVER_OFFSET UNITYSDK_OFFSET(0x18F4790)
#define MX_DATA_MINIGAMECARDDATA_TRYGETREWARDCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x18F4850)
#define MX_DATA_MINIGAMECARDDATA_TRYGETSTARTDECKCARDIDSSERVER_OFFSET UNITYSDK_OFFSET(0x18F4940)
#define MX_DATA_MINIGAMECARDDATA_GETCHARACTEREXCELALLSERVER_OFFSET UNITYSDK_OFFSET(0x18F49A0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x18F49F0)
#define MX_DATA_MINIGAMECARDDATA_GETLOGICEFFECTEXCELALL_OFFSET UNITYSDK_OFFSET(0x18F4AE0)
#define MX_DATA_MINIGAMECARDDATA_GETOPENDIALOGEXCELS_OFFSET UNITYSDK_OFFSET(0x18F4B70)
#define MX_DATA_MINIGAMECARDDATA_TRYGETSTAGEEXCELCLIENT_OFFSET UNITYSDK_OFFSET(0x18F5320)
#define MX_DATA_MINIGAMECARDDATA_TRYGETLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x18F5400)
#define MX_DATA_MINIGAMECARDDATA_TRYGETREWARDITEMEXCELSCLIENT_OFFSET UNITYSDK_OFFSET(0x18F54F0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETLEVELEXCELSERVER_OFFSET UNITYSDK_OFFSET(0x18F55C0)
#define MX_DATA_MINIGAMECARDDATA_GETLEVELNODEEXCELALLCLIENT_OFFSET UNITYSDK_OFFSET(0x18F5620)
#define MX_DATA_MINIGAMECARDDATA_GETSTAGEEXCELALLSERVER_OFFSET UNITYSDK_OFFSET(0x18F56A0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETREWARDITEMEXCELSSERVER_OFFSET UNITYSDK_OFFSET(0x18F57E0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETREWARDCARDRATEEXCELSERVER_OFFSET UNITYSDK_OFFSET(0x18F5840)
#define MX_DATA_MINIGAMECARDDATA_TRYGETLEVELNODEEXCEL_OFFSET UNITYSDK_OFFSET(0x18F58A0)
#define MX_DATA_MINIGAMECARDDATA_GETSTAGEEXCELALLBYGROUPIDSERVER_OFFSET UNITYSDK_OFFSET(0x18F5990)
#define MX_DATA_MINIGAMECARDDATA_TRYGETENEMYEXCELSSERVER_OFFSET UNITYSDK_OFFSET(0x18F5A50)
#define MX_DATA_MINIGAMECARDDATA_GETSKILLEXCELALLCLIENT_OFFSET UNITYSDK_OFFSET(0x18F5AB0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETLEVELEXCELCLIENT_OFFSET UNITYSDK_OFFSET(0x18F5410)
#define MX_DATA_MINIGAMECARDDATA_GETLEVELEXCELALLCLIENT_OFFSET UNITYSDK_OFFSET(0x18F5B30)
#define MX_DATA_MINIGAMECARDDATA_TRYGETLEVELNODEEXCELSERVER_OFFSET UNITYSDK_OFFSET(0x18F5C60)
#define MX_DATA_MINIGAMECARDDATA_TRYGETENEMYGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x18F5D00)
#define MX_DATA_MINIGAMECARDDATA_GETSKILLEXCELALL_OFFSET UNITYSDK_OFFSET(0x18F5DF0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETINFOEXCELSERVER_OFFSET UNITYSDK_OFFSET(0x18F5E00)
#define MX_DATA_MINIGAMECARDDATA_TRYGETREWARDCARDEXCELSERVER_OFFSET UNITYSDK_OFFSET(0x18F5E60)
#define MX_DATA_MINIGAMECARDDATA_TRYGETENEMYEXCELBYGROUPID_OFFSET UNITYSDK_OFFSET(0x18F5EC0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETSTARTDECKCHARACTERIDSCLIENT_OFFSET UNITYSDK_OFFSET(0x18F60B0)
#define MX_DATA_MINIGAMECARDDATA_GETCARDEXCELALL_OFFSET UNITYSDK_OFFSET(0x18F6270)
#define MX_DATA_MINIGAMECARDDATA_TRYGETREWARDITEMSFROMPOINTSERVER_OFFSET UNITYSDK_OFFSET(0x18F6300)
#define MX_DATA_MINIGAMECARDDATA_TRYGETSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x18F6560)
#define MX_DATA_MINIGAMECARDDATA_GETENEMYGROUPEXCELSALLCLIENT_OFFSET UNITYSDK_OFFSET(0x18EF6C0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETREWARDCARDRATEEXCELCLIENT_OFFSET UNITYSDK_OFFSET(0x18F6570)
#define MX_DATA_MINIGAMECARDDATA_GETCHARACTEREXCELALL_OFFSET UNITYSDK_OFFSET(0x18F6630)
#define MX_DATA_MINIGAMECARDDATA_GETCHARACTEREXCELALLCLIENT_OFFSET UNITYSDK_OFFSET(0x18F6640)
#define MX_DATA_MINIGAMECARDDATA_TRYGETLOGICEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x18F66C0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x18F67B0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETLEVELNODEEXCELCLIENT_OFFSET UNITYSDK_OFFSET(0x18F58B0)
#define MX_DATA_MINIGAMECARDDATA_GETLOGICEFFECTEXCELALLCLIENT_OFFSET UNITYSDK_OFFSET(0x18F4AF0)
#define MX_DATA_MINIGAMECARDDATA_GETLEVELEXCELALL_OFFSET UNITYSDK_OFFSET(0x18F68A0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETREWARDCARDEXCELCLIENT_OFFSET UNITYSDK_OFFSET(0x18F4860)
#define MX_DATA_MINIGAMECARDDATA_TRYGETPERKEXCEL_OFFSET UNITYSDK_OFFSET(0x18F68B0)
#define MX_DATA_MINIGAMECARDDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18F69A0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETENEMYEXCEL_OFFSET UNITYSDK_OFFSET(0x18F6BB0)
#define MX_DATA_MINIGAMECARDDATA_GETCARDEXCELALLCLIENT_OFFSET UNITYSDK_OFFSET(0x18F6280)
#define MX_DATA_MINIGAMECARDDATA_TRYGETCARDEXCELSERVER_OFFSET UNITYSDK_OFFSET(0x18F6C10)
#define MX_DATA_MINIGAMECARDDATA_TRYGETCHARACTEREXCELCLIENT_OFFSET UNITYSDK_OFFSET(0x18F4A00)
#define MX_DATA_MINIGAMECARDDATA_TRYGETPERKEXCELSBYCCGID_OFFSET UNITYSDK_OFFSET(0x18F6C70)
#define MX_DATA_MINIGAMECARDDATA_TRYGETENEMYEXCELSCLIENT_OFFSET UNITYSDK_OFFSET(0x18F6D40)
#define MX_DATA_MINIGAMECARDDATA_TRYGETCARDEXCELCLIENT_OFFSET UNITYSDK_OFFSET(0x18F67C0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETREWARDITEMEXCELS_OFFSET UNITYSDK_OFFSET(0x18F6F20)
#define MX_DATA_MINIGAMECARDDATA_GETENEMYGROUPEXCELSALLSERVER_OFFSET UNITYSDK_OFFSET(0x18F6F30)
#define MX_DATA_MINIGAMECARDDATA_GETREWARDCARDEXCELALLBYGROUPIDRARITYSERVER_OFFSET UNITYSDK_OFFSET(0x18F6F90)
#define MX_DATA_MINIGAMECARDDATA_GETSTAGEEXCELALLBYGROUPIDCLIENT_OFFSET UNITYSDK_OFFSET(0x18F7090)
#define MX_DATA_MINIGAMECARDDATA_TRYGETREWARDITEMSFROMPOINT_OFFSET UNITYSDK_OFFSET(0x18F71C0)
#define MX_DATA_MINIGAMECARDDATA_GETSTAGEEXCELALLBYGROUPID_OFFSET UNITYSDK_OFFSET(0x18F71D0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETSTARTDECKCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x18F7220)
#define MX_DATA_MINIGAMECARDDATA_TRYGETPERKEXCELSERVER_OFFSET UNITYSDK_OFFSET(0x18F7230)
#define MX_DATA_MINIGAMECARDDATA_TRYGETSTARTDECKCHARACTERIDSSERVER_OFFSET UNITYSDK_OFFSET(0x18F7290)
#define MX_DATA_MINIGAMECARDDATA_TRYGETSTARTDECKCARDIDSCLIENT_OFFSET UNITYSDK_OFFSET(0x18F72F0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETSKILLEXCELCLIENT_OFFSET UNITYSDK_OFFSET(0x18EF5D0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETENEMYGROUPEXCELSERVER_OFFSET UNITYSDK_OFFSET(0x18F74D0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETCHARACTERTAGSSERVER_OFFSET UNITYSDK_OFFSET(0x18F7530)
#define MX_DATA_MINIGAMECARDDATA_TRYGETENEMYEXCELSBYGROUPIDSERVER_OFFSET UNITYSDK_OFFSET(0x18F7590)
#define MX_DATA_MINIGAMECARDDATA_TRYGETSTARTDECKCARDIDS_OFFSET UNITYSDK_OFFSET(0x18F77E0)
#define MX_DATA_MINIGAMECARDDATA_GETCARDEXCELALLSERVER_OFFSET UNITYSDK_OFFSET(0x18F77F0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETINFOEXCELBYEVENTCONTENTIDCLIENT_OFFSET UNITYSDK_OFFSET(0x18F7840)
#define MX_DATA_MINIGAMECARDDATA_CANMOVENEXTNODE_OFFSET UNITYSDK_OFFSET(0x18F7920)
#define MX_DATA_MINIGAMECARDDATA_TRYGETREWARDCARDRATEEXCELS_OFFSET UNITYSDK_OFFSET(0x18F7F40)
#define MX_DATA_MINIGAMECARDDATA_TRYGETINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x18F7F50)
#define MX_DATA_MINIGAMECARDDATA_GETREWARDCARDEXCELALLBYGROUPID_OFFSET UNITYSDK_OFFSET(0x18F8040)
#define MX_DATA_MINIGAMECARDDATA_TRYGETENEMYGROUPEXCELCLIENT_OFFSET UNITYSDK_OFFSET(0x18F5D10)
#define MX_DATA_MINIGAMECARDDATA_TRYGETNODEEXCELALLBYLEVELID_OFFSET UNITYSDK_OFFSET(0x18F7D30)
#define MX_DATA_MINIGAMECARDDATA_TRYGETENEMYEXCELSBYGROUPIDCLIENT_OFFSET UNITYSDK_OFFSET(0x18F5ED0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETCHARACTEREXCELSERVER_OFFSET UNITYSDK_OFFSET(0x18F8060)
#define MX_DATA_MINIGAMECARDDATA_TRYGETPERKEXCELCLIENT_OFFSET UNITYSDK_OFFSET(0x18F68C0)
#define MX_DATA_MINIGAMECARDDATA_TRYGETLOGICEFFECTEXCELCLIENT_OFFSET UNITYSDK_OFFSET(0x18F66D0)
#define MX_DATA_MINIGAMECARDDATA_CANMOVENEXTNODESERVER_OFFSET UNITYSDK_OFFSET(0x18F80C0)
#define MX_DATA_MINIGAMECARDDATA_GETSTAGEEXCELALL_OFFSET UNITYSDK_OFFSET(0x18F8220)
#define MX_DATA_MINIGAMECARDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18F8270)
#define MX_DATA_MINIGAMECARDDATA_TRYGETINFOEXCELCLIENT_OFFSET UNITYSDK_OFFSET(0x18F7F60)
#define MX_DATA_MINIGAMECARDDATA_TRYGETPERKEXCELBYCCGIDCLIENT_OFFSET UNITYSDK_OFFSET(0x18F6C80)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameCardData_TypeDefinitionIndex = 16187;

	class MiniGameCardData : public Il2CppObject
	{
	public:
		::System::Int32 StrikerSlotCount; // 0x0
		::System::Int32 SpecialSlotCount; // 0x0
		Il2CppObject* cardExcelDic; // 0x28
		Il2CppObject* characterExcelDic; // 0x30
		Il2CppObject* characterTagsDic; // 0x38
		Il2CppObject* enemyExcelsDic; // 0x40
		Il2CppObject* enemyExcelsByGroupIdDic; // 0x48
		Il2CppObject* enemyGroupExcelDic; // 0x50
		Il2CppObject* infoExcelDic; // 0x58
		Il2CppObject* levelExcelDic; // 0x60
		Il2CppObject* levelExcelsByCCGIdDic; // 0x68
		Il2CppObject* levelNodeExcelDic; // 0x70
		Il2CppObject* levelNodeVerticesDic; // 0x78
		Il2CppObject* rewardCardExcelDic; // 0x80
		Il2CppObject* rewardCardExcelByGroupIdDic; // 0x88
		Il2CppObject* rewardCardRateExcelDic; // 0x90
		Il2CppObject* stageExcelDic; // 0x98
		Il2CppObject* stageExcelsByGroupIdDic; // 0xA0
		Il2CppObject* startDeckCardIdsDic; // 0xA8
		Il2CppObject* startDeckCharacterIdsDic; // 0xB0
		Il2CppObject* rewardItemsDic; // 0xB8
		Il2CppObject* perkExcelDic; // 0xC0
		Il2CppObject* perkExcelsByCCGIdDic; // 0xC8

		Il2CppObject* GetLevelNodeExcelAllServer()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETLEVELNODEEXCELALLSERVER_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardCardExcelAllByGroupIdRarityClient(::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETREWARDCARDEXCELALLBYGROUPIDRARITYCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetStageExcelServer(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGLevelStageExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGLevelStageExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETSTAGEEXCELSERVER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetSkillExcel(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGSkillExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGSkillExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETSKILLEXCEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetEnemyGroupExcelsAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETENEMYGROUPEXCELSALL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetPerkExcelsByCCGIdServer(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETPERKEXCELSBYCCGIDSERVER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeServer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_INITIALIZESERVER_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageExcelAllClient()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETSTAGEEXCELALLCLIENT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetRewardItemsFromPointClient(::System::Int64 arg, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETREWARDITEMSFROMPOINTCLIENT_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetLevelExcelAllServer(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETLEVELEXCELALLSERVER_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetRewardCardExcel(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGRewardCardExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGRewardCardExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETREWARDCARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetStartDeckCardIdsServer(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETSTARTDECKCARDIDSSERVER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetCharacterExcelAllServer()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETCHARACTEREXCELALLSERVER_OFFSET))(nullptr);
		}

		::System::Boolean TryGetCharacterExcel(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGCharacterExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGCharacterExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETCHARACTEREXCEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetLogicEffectExcelAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETLOGICEFFECTEXCELALL_OFFSET))(nullptr);
		}

		Il2CppObject* GetOpenDialogExcels(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETOPENDIALOGEXCELS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetStageExcelClient(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGLevelStageExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGLevelStageExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETSTAGEEXCELCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetLevelExcel(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGLevelExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGLevelExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETLEVELEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRewardItemExcelsClient(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETREWARDITEMEXCELSCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetLevelExcelServer(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGLevelExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGLevelExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETLEVELEXCELSERVER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetLevelNodeExcelAllClient()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETLEVELNODEEXCELALLCLIENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageExcelAllServer()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETSTAGEEXCELALLSERVER_OFFSET))(nullptr);
		}

		::System::Boolean TryGetRewardItemExcelsServer(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETREWARDITEMEXCELSSERVER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRewardCardRateExcelServer(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETREWARDCARDRATEEXCELSERVER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetLevelNodeExcel(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::Excel::MinigameCCGLevelNodeExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::Excel::MinigameCCGLevelNodeExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETLEVELNODEEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetStageExcelAllByGroupIdServer(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETSTAGEEXCELALLBYGROUPIDSERVER_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetEnemyExcelsServer(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETENEMYEXCELSSERVER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetSkillExcelAllClient()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETSKILLEXCELALLCLIENT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetLevelExcelClient(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGLevelExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGLevelExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETLEVELEXCELCLIENT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetLevelExcelAllClient(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETLEVELEXCELALLCLIENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetLevelNodeExcelServer(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::Excel::MinigameCCGLevelNodeExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::Excel::MinigameCCGLevelNodeExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETLEVELNODEEXCELSERVER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetEnemyGroupExcel(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGEnemyGroupExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGEnemyGroupExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETENEMYGROUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetSkillExcelAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETSKILLEXCELALL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetInfoExcelServer(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGInfoExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGInfoExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETINFOEXCELSERVER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRewardCardExcelServer(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGRewardCardExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGRewardCardExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETREWARDCARDEXCELSERVER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetEnemyExcelByGroupId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETENEMYEXCELBYGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetStartDeckCharacterIdsClient(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETSTARTDECKCHARACTERIDSCLIENT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetCardExcelAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETCARDEXCELALL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetRewardItemsFromPointServer(::System::Int64 arg, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETREWARDITEMSFROMPOINTSERVER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetStageExcel(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGLevelStageExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGLevelStageExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETSTAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetEnemyGroupExcelsAllClient()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETENEMYGROUPEXCELSALLCLIENT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetRewardCardRateExcelClient(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETREWARDCARDRATEEXCELCLIENT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetCharacterExcelAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETCHARACTEREXCELALL_OFFSET))(nullptr);
		}

		Il2CppObject* GetCharacterExcelAllClient()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETCHARACTEREXCELALLCLIENT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetLogicEffectExcel(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGLogicEffectExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGLogicEffectExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETLOGICEFFECTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCardExcel(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGCardExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGCardExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETCARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetLevelNodeExcelClient(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::Excel::MinigameCCGLevelNodeExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::Excel::MinigameCCGLevelNodeExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETLEVELNODEEXCELCLIENT_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetLogicEffectExcelAllClient()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETLOGICEFFECTEXCELALLCLIENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetLevelExcelAll(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETLEVELEXCELALL_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetRewardCardExcelClient(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGRewardCardExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGRewardCardExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETREWARDCARDEXCELCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetPerkExcel(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGPerkExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGPerkExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETPERKEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetEnemyExcel(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETENEMYEXCEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetCardExcelAllClient()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETCARDEXCELALLCLIENT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetCardExcelServer(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGCardExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGCardExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETCARDEXCELSERVER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCharacterExcelClient(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGCharacterExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGCharacterExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETCHARACTEREXCELCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetPerkExcelsByCCGId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETPERKEXCELSBYCCGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetEnemyExcelsClient(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETENEMYEXCELSCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCardExcelClient(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGCardExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGCardExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETCARDEXCELCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRewardItemExcels(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETREWARDITEMEXCELS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetEnemyGroupExcelsAllServer()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETENEMYGROUPEXCELSALLSERVER_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardCardExcelAllByGroupIdRarityServer(::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETREWARDCARDEXCELALLBYGROUPIDRARITYSERVER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetStageExcelAllByGroupIdClient(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETSTAGEEXCELALLBYGROUPIDCLIENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetRewardItemsFromPoint(::System::Int64 arg, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETREWARDITEMSFROMPOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetStageExcelAllByGroupId(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETSTAGEEXCELALLBYGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetStartDeckCharacterIds(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETSTARTDECKCHARACTERIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetPerkExcelServer(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGPerkExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGPerkExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETPERKEXCELSERVER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetStartDeckCharacterIdsServer(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETSTARTDECKCHARACTERIDSSERVER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetStartDeckCardIdsClient(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETSTARTDECKCARDIDSCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetSkillExcelClient(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGSkillExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGSkillExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETSKILLEXCELCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetEnemyGroupExcelServer(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGEnemyGroupExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGEnemyGroupExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETENEMYGROUPEXCELSERVER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCharacterTagsServer(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETCHARACTERTAGSSERVER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetEnemyExcelsByGroupIdServer(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETENEMYEXCELSBYGROUPIDSERVER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetStartDeckCardIds(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETSTARTDECKCARDIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetCardExcelAllServer()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETCARDEXCELALLSERVER_OFFSET))(nullptr);
		}

		::System::Boolean TryGetInfoExcelByEventContentIdClient(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGInfoExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGInfoExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETINFOEXCELBYEVENTCONTENTIDCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanMoveNextNode(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_CANMOVENEXTNODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetRewardCardRateExcels(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETREWARDCARDRATEEXCELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetInfoExcel(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGInfoExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGInfoExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetRewardCardExcelAllByGroupId(::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETREWARDCARDEXCELALLBYGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetEnemyGroupExcelClient(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGEnemyGroupExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGEnemyGroupExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETENEMYGROUPEXCELCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetNodeExcelAllByLevelId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETNODEEXCELALLBYLEVELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetEnemyExcelsByGroupIdClient(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETENEMYEXCELSBYGROUPIDCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCharacterExcelServer(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGCharacterExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGCharacterExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETCHARACTEREXCELSERVER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetPerkExcelClient(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGPerkExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGPerkExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETPERKEXCELCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetLogicEffectExcelClient(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGLogicEffectExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGLogicEffectExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETLOGICEFFECTEXCELCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanMoveNextNodeServer(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_CANMOVENEXTNODESERVER_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetStageExcelAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_GETSTAGEEXCELALL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetInfoExcelClient(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGInfoExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGInfoExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETINFOEXCELCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetPerkExcelByCCGIdClient(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMECARDDATA_TRYGETPERKEXCELBYCCGIDCLIENT_OFFSET))(arg, arg, nullptr);
		}

	};
}

