#pragma once
#include "../../unitysdk.h"

namespace MXField::Directing::Transition { class IDirectingTransition; }
namespace MXField::Shared::Data { class FieldDialogInfo; }
namespace MXField::UI { class FieldDialogPlayer; }
namespace MXField::Directing { class FieldPlayerLocation; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MXField::Dispatch { class DispatchType; }
namespace MXField::UI { class UIFieldDialog; }

#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_CANPLAY_OFFSET UNITYSDK_OFFSET(0xECE030)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0xECE130)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR__ONFINISHED_G__ONFINISHEDCOMPLETE|66_1_OFFSET UNITYSDK_OFFSET(0xECE200)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_PLAYERLOCATION_OFFSET UNITYSDK_OFFSET(0xECE4B0)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_FINISHEDACTION_OFFSET UNITYSDK_OFFSET(0xECE4C0)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_PREPARE_OFFSET UNITYSDK_OFFSET(0xECE4E0)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_DIALOGINFO_OFFSET UNITYSDK_OFFSET(0xECE5D0)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xECE5E0)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_DIALOGPLAYER_OFFSET UNITYSDK_OFFSET(0xECE830)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_INPUTBLOCKPREDICATE_OFFSET UNITYSDK_OFFSET(0xECE840)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_ELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0xECE870)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_BLOCK_OFFSET UNITYSDK_OFFSET(0xECE880)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_HANDLEDIALOGBLOCKANOTHER_OFFSET UNITYSDK_OFFSET(0xECE890)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_BLOCKEDBYINTERACTION_OFFSET UNITYSDK_OFFSET(0xECEA10)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_START_OFFSET UNITYSDK_OFFSET(0xECEA20)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_REMAINCOUNT_OFFSET UNITYSDK_OFFSET(0xECED90)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_DIALOGINFO_OFFSET UNITYSDK_OFFSET(0xECEDA0)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_AWAKE_OFFSET UNITYSDK_OFFSET(0xECEDB0)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xECEF80)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_VIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xECF1A0)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_VIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xECF1C0)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_PLAYDIALOGINTERNAL_OFFSET UNITYSDK_OFFSET(0xECF1D0)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_PLAYDIALOGBYTRIGGER_OFFSET UNITYSDK_OFFSET(0xECF4A0)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xECF710)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xECF470)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_PLAYERLOCATION_OFFSET UNITYSDK_OFFSET(0xECF720)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_PLAYDIALOG_OFFSET UNITYSDK_OFFSET(0xECF4F0)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_BLOCKEDBYINTERACTION_OFFSET UNITYSDK_OFFSET(0xECF730)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_TRYRETRIGGER_OFFSET UNITYSDK_OFFSET(0xECF740)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_FINISHEDACTION_OFFSET UNITYSDK_OFFSET(0xECF820)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xECF830)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xECF840)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_ELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0xECF910)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xECF920)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xECF980)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_BLOCK_OFFSET UNITYSDK_OFFSET(0xECF990)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_DIALOGPLAYER_OFFSET UNITYSDK_OFFSET(0xECF9A0)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR__ONFINISHED_G__ONFINISHEDENTER|66_0_OFFSET UNITYSDK_OFFSET(0xECF120)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR__PLAYDIALOG_B__62_0_OFFSET UNITYSDK_OFFSET(0xECF9B0)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_REMAINCOUNT_OFFSET UNITYSDK_OFFSET(0xECF9C0)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR__ONFINISHED_G__FINISH|66_2_OFFSET UNITYSDK_OFFSET(0xECE3B0)
#define MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_HANDLEDIALOGSTART_OFFSET UNITYSDK_OFFSET(0xECF9D0)

namespace MXField::Dialog
{
	inline static constexpr unsigned int FieldDialogBehavior_TypeDefinitionIndex = 10924;

	class FieldDialogBehavior : public Il2CppObject
	{
	public:
		::System::Boolean _Block_k__BackingField; // 0x20
		::System::Int64 dialogGroupId; // 0x28
		::System::Int64 replayCount; // 0x30
		::System::Int64 replayDelay; // 0x38
		::System::Boolean autoRetrigger; // 0x40
		::System::Boolean StopDuplicatedTargetElementDialog; // 0x41
		Il2CppObject* targets; // 0x48
		::MXField::Directing::Transition::IDirectingTransition* inTransition; // 0x50
		::MXField::Directing::Transition::IDirectingTransition* outTransition; // 0x58
		::System::Int64 _RemainCount_k__BackingField; // 0x60
		::System::Single _ElapsedTime_k__BackingField; // 0x68
		::System::Boolean _IsPlaying_k__BackingField; // 0x6C
		::System::Boolean _BlockedByInteraction_k__BackingField; // 0x6D
		::MXField::Shared::Data::FieldDialogInfo* _DialogInfo_k__BackingField; // 0x70
		::MXField::UI::FieldDialogPlayer* _DialogPlayer_k__BackingField; // 0x78
		::MXField::Directing::FieldPlayerLocation* _PlayerLocation_k__BackingField; // 0x80
		::Cinemachine::CinemachineVirtualCamera* _VirtualCamera_k__BackingField; // 0x88
		::System::Action* _FinishedAction_k__BackingField; // 0x90

		::System::Boolean get_CanPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_CANPLAY_OFFSET))(nullptr);
		}

		::System::Boolean ExecuteImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_EXECUTEIMPL_OFFSET))(nullptr);
		}

		::System::Void _OnFinished_g__OnFinishedComplete|66_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR__ONFINISHED_G__ONFINISHEDCOMPLETE|66_1_OFFSET))(nullptr);
		}

		::System::Void set_PlayerLocation(::MXField::Directing::FieldPlayerLocation* arg)
		{
			((::System::Void(*)(::MXField::Directing::FieldPlayerLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_PLAYERLOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_FinishedAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_FINISHEDACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Prepare()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_PREPARE_OFFSET))(nullptr);
		}

		::System::Void set_DialogInfo(::MXField::Shared::Data::FieldDialogInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldDialogInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_DIALOGINFO_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_ONDESTROY_OFFSET))(nullptr);
		}

		::MXField::UI::FieldDialogPlayer* get_DialogPlayer()
		{
			return ((::MXField::UI::FieldDialogPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_DIALOGPLAYER_OFFSET))(nullptr);
		}

		::System::String* get_InputBlockPredicate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_INPUTBLOCKPREDICATE_OFFSET))(nullptr);
		}

		::System::Single get_ElapsedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_ELAPSEDTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_Block()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_BLOCK_OFFSET))(nullptr);
		}

		::System::Boolean HandleDialogBlockAnother(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_HANDLEDIALOGBLOCKANOTHER_OFFSET))(arg, nullptr);
		}

		::System::Void set_BlockedByInteraction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_BLOCKEDBYINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_START_OFFSET))(nullptr);
		}

		::System::Int64 get_RemainCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_REMAINCOUNT_OFFSET))(nullptr);
		}

		::MXField::Shared::Data::FieldDialogInfo* get_DialogInfo()
		{
			return ((::MXField::Shared::Data::FieldDialogInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_DIALOGINFO_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_ONFINISHED_OFFSET))(nullptr);
		}

		::System::Void set_VirtualCamera(::Cinemachine::CinemachineVirtualCamera* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCamera*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_VIRTUALCAMERA_OFFSET))(arg, nullptr);
		}

		::Cinemachine::CinemachineVirtualCamera* get_VirtualCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_VIRTUALCAMERA_OFFSET))(nullptr);
		}

		::System::Void PlayDialogInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_PLAYDIALOGINTERNAL_OFFSET))(nullptr);
		}

		::System::Boolean PlayDialogByTrigger(::System::Action* arg)
		{
			return ((::System::Boolean(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_PLAYDIALOGBYTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_EXECUTE_OFFSET))(nullptr);
		}

		::MXField::Directing::FieldPlayerLocation* get_PlayerLocation()
		{
			return ((::MXField::Directing::FieldPlayerLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_PLAYERLOCATION_OFFSET))(nullptr);
		}

		::System::Void PlayDialog(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_PLAYDIALOG_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_BlockedByInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_BLOCKEDBYINTERACTION_OFFSET))(nullptr);
		}

		::System::Void TryRetrigger(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_TRYRETRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Action* get_FinishedAction()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_FINISHEDACTION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_UPDATE_OFFSET))(nullptr);
		}

		::System::Void set_ElapsedTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_ELAPSEDTIME_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Block(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_BLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void set_DialogPlayer(::MXField::UI::FieldDialogPlayer* arg)
		{
			((::System::Void(*)(::MXField::UI::FieldDialogPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_DIALOGPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void _OnFinished_g__OnFinishedEnter|66_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR__ONFINISHED_G__ONFINISHEDENTER|66_0_OFFSET))(nullptr);
		}

		::System::Void _PlayDialog_b__62_0(::MXField::UI::UIFieldDialog* arg)
		{
			((::System::Void(*)(::MXField::UI::UIFieldDialog*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR__PLAYDIALOG_B__62_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_RemainCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_SET_REMAINCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void _OnFinished_g__Finish|66_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR__ONFINISHED_G__FINISH|66_2_OFFSET))(nullptr);
		}

		::System::Boolean HandleDialogStart(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBEHAVIOR_HANDLEDIALOGSTART_OFFSET))(arg, nullptr);
		}

	};
}

