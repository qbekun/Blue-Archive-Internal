#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGLogEntity; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class LogData; }
namespace MX::MinigameCCG { class CCGEvent_SkillActionLog; }
namespace MX::MinigameCCG::Visual { class CCGCardManager; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGEvent; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }

#define MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG__CONVERTACTIONLOGTODATA_B__7_0_OFFSET UNITYSDK_OFFSET(0x1E39A10)
#define MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG__CONVERTACTIONLOGTODATA_B__7_2_OFFSET UNITYSDK_OFFSET(0x1E39A80)
#define MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG__PLAYINPUTEVENT_B__6_2_OFFSET UNITYSDK_OFFSET(0x1E39AF0)
#define MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG__PLAYINPUTEVENT_B__6_1_OFFSET UNITYSDK_OFFSET(0x1E39B70)
#define MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG__PLAYINPUTEVENT_B__6_4_OFFSET UNITYSDK_OFFSET(0x1E39BB0)
#define MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG_CONVERTACTIONLOGTODATA_OFFSET UNITYSDK_OFFSET(0x1E39C30)
#define MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG__CONVERTACTIONLOGTODATA_B__7_1_OFFSET UNITYSDK_OFFSET(0x1E3A1E0)
#define MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG_CHECKSKILLCONTEXTANDPUSHLOG_OFFSET UNITYSDK_OFFSET(0x1E3A250)
#define MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG_GET_CARDMGR_OFFSET UNITYSDK_OFFSET(0x1E3A3F0)
#define MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG__PLAYINPUTEVENT_B__6_3_OFFSET UNITYSDK_OFFSET(0x1E3A470)
#define MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG_PLAYINPUTEVENT_OFFSET UNITYSDK_OFFSET(0x1E3A4B0)
#define MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG__PLAYINPUTEVENT_B__6_0_OFFSET UNITYSDK_OFFSET(0x1E3A650)
#define MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A670)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int CCGBehaviour_Log_TypeDefinitionIndex = 21056;

	class CCGBehaviour_Log : public Il2CppObject
	{
	public:
		Il2CppObject* _skillStack; // 0x20

		::MX::MinigameCCG::CCGLogEntity* _ConvertActionLogToData_b__7_0(::System::Int32 arg)
		{
			return (return (::MX::MinigameCCG::CCGLogEntity*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG__CONVERTACTIONLOGTODATA_B__7_0_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGLogEntity* _ConvertActionLogToData_b__7_2(::System::Int32 arg)
		{
			return (return (::MX::MinigameCCG::CCGLogEntity*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG__CONVERTACTIONLOGTODATA_B__7_2_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGLogEntity* _PlayInputEvent_b__6_2(::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::MX::MinigameCCG::CCGLogEntity*(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG__PLAYINPUTEVENT_B__6_2_OFFSET))(arg, nullptr);
		}

		::System::Boolean _PlayInputEvent_b__6_1(::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG__PLAYINPUTEVENT_B__6_1_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGLogEntity* _PlayInputEvent_b__6_4(::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::MX::MinigameCCG::CCGLogEntity*(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG__PLAYINPUTEVENT_B__6_4_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::LogData* ConvertActionLogToData(::MX::MinigameCCG::CCGEvent_SkillActionLog* arg)
		{
			return (return (::MX::MinigameCCG::LogData*(*)(::MX::MinigameCCG::CCGEvent_SkillActionLog*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG_CONVERTACTIONLOGTODATA_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGLogEntity* _ConvertActionLogToData_b__7_1(::System::Int32 arg)
		{
			return (return (::MX::MinigameCCG::CCGLogEntity*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG__CONVERTACTIONLOGTODATA_B__7_1_OFFSET))(arg, nullptr);
		}

		::System::Void CheckSkillContextAndPushLog(::MX::MinigameCCG::LogData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::LogData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG_CHECKSKILLCONTEXTANDPUSHLOG_OFFSET))(arg, arg, nullptr);
		}

		::MX::MinigameCCG::Visual::CCGCardManager* get_cardMgr()
		{
			return (return (::MX::MinigameCCG::Visual::CCGCardManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG_GET_CARDMGR_OFFSET))(nullptr);
		}

		::System::Boolean _PlayInputEvent_b__6_3(::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG__PLAYINPUTEVENT_B__6_3_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayInputEvent(::MX::MinigameCCG::CCGEvent* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::MX::MinigameCCG::CCGEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG_PLAYINPUTEVENT_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGEntity* _PlayInputEvent_b__6_0(::System::Int32 arg)
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG__PLAYINPUTEVENT_B__6_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGBEHAVIOUR_LOG_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

