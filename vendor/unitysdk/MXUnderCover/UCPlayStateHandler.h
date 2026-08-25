#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCStage; }
namespace MXUnderCover { class UIUndercoverDefeat; }
namespace MXUnderCover { class UIUndercoverResult; }

#define MXUNDERCOVER_UCPLAYSTATEHANDLER_PROCESSCLEAR_OFFSET UNITYSDK_OFFSET(0xDB2730)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_SENDLOG_OFFSET UNITYSDK_OFFSET(0xDB2770)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_SHOWCLEARSCENE_OFFSET UNITYSDK_OFFSET(0xDB2780)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_GET_ISSKIPPED_OFFSET UNITYSDK_OFFSET(0xDB2BB0)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_PROCESSWIN_OFFSET UNITYSDK_OFFSET(0xDB2BA0)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_ENDGAME_OFFSET UNITYSDK_OFFSET(0xDB2BC0)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER__PROCESSGAMEOVER_B__22_0_OFFSET UNITYSDK_OFFSET(0xDB2E20)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_SET_CURHP_OFFSET UNITYSDK_OFFSET(0xDB2E50)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_RELEASEPAUSE_OFFSET UNITYSDK_OFFSET(0xDB2DE0)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_PROCESSCATCHED_OFFSET UNITYSDK_OFFSET(0xDB2E60)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xDB2F30)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB2F40)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_GET_PLAYTIME_OFFSET UNITYSDK_OFFSET(0xDB2FA0)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_PROCESSSKIP_OFFSET UNITYSDK_OFFSET(0xDB2FB0)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xDB2FF0)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_GET_CURHP_OFFSET UNITYSDK_OFFSET(0xDB3030)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER__SHOWCLEARSCENE_B__25_0_OFFSET UNITYSDK_OFFSET(0xDB3040)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_PROCESSGAMEOVER_OFFSET UNITYSDK_OFFSET(0xDB3420)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_SET_ISSKIPPED_OFFSET UNITYSDK_OFFSET(0xDB36B0)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_SET_PLAYTIME_OFFSET UNITYSDK_OFFSET(0xDB36C0)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_PROCESSHEAL_OFFSET UNITYSDK_OFFSET(0xDB36D0)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_PROCESSRETRY_OFFSET UNITYSDK_OFFSET(0xDB3780)
#define MXUNDERCOVER_UCPLAYSTATEHANDLER_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xDB38A0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCPlayStateHandler_TypeDefinitionIndex = 9966;

	class UCPlayStateHandler : public Il2CppObject
	{
	public:
		::MXUnderCover::UCStage* _Stage_k__BackingField; // 0x10
		::System::Int32 maxHp; // 0x18
		::System::Int32 _CurHp_k__BackingField; // 0x1C
		::System::Boolean _isSkipped_k__BackingField; // 0x20
		::System::Boolean IsPlaying; // 0x21
		::System::Single _PlayTime_k__BackingField; // 0x24

		::System::Void ProcessClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_PROCESSCLEAR_OFFSET))(nullptr);
		}

		::System::Void SendLog(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_SENDLOG_OFFSET))(str, nullptr);
		}

		::System::Void ShowClearScene()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_SHOWCLEARSCENE_OFFSET))(nullptr);
		}

		::System::Boolean get_isSkipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_GET_ISSKIPPED_OFFSET))(nullptr);
		}

		::System::Void ProcessWin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_PROCESSWIN_OFFSET))(nullptr);
		}

		::System::Void EndGame(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_ENDGAME_OFFSET))(arg, nullptr);
		}

		::System::Void _ProcessGameOver_b__22_0(::MXUnderCover::UIUndercoverDefeat* arg)
		{
			((::System::Void(*)(::MXUnderCover::UIUndercoverDefeat*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER__PROCESSGAMEOVER_B__22_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurHp(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_SET_CURHP_OFFSET))(arg, nullptr);
		}

		::System::Void ReleasePause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_RELEASEPAUSE_OFFSET))(nullptr);
		}

		::System::Void ProcessCatched(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_PROCESSCATCHED_OFFSET))(arg, nullptr);
		}

		::System::Void set_Stage(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_SET_STAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_PlayTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_GET_PLAYTIME_OFFSET))(nullptr);
		}

		::System::Void ProcessSkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_PROCESSSKIP_OFFSET))(nullptr);
		}

		::System::Void ProcessExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_PROCESSEXIT_OFFSET))(nullptr);
		}

		::System::Int32 get_CurHp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_GET_CURHP_OFFSET))(nullptr);
		}

		::System::Void _ShowClearScene_b__25_0(::MXUnderCover::UIUndercoverResult* arg)
		{
			((::System::Void(*)(::MXUnderCover::UIUndercoverResult*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER__SHOWCLEARSCENE_B__25_0_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessGameOver()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_PROCESSGAMEOVER_OFFSET))(nullptr);
		}

		::System::Void set_isSkipped(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_SET_ISSKIPPED_OFFSET))(arg, nullptr);
		}

		::System::Void set_PlayTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_SET_PLAYTIME_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessHeal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_PROCESSHEAL_OFFSET))(nullptr);
		}

		::System::Void ProcessRetry(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_PROCESSRETRY_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCStage* get_Stage()
		{
			return ((::MXUnderCover::UCStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYSTATEHANDLER_GET_STAGE_OFFSET))(nullptr);
		}

	};
}

