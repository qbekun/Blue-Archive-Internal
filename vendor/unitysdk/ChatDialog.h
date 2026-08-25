#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Animator; }
class SpineCharacter;
class PortraitSpineCharacter;
namespace FlatData { class DialogCategory; }
namespace FlatData { class DialogCondition; }
namespace MX::Data { class CharacterDialogInfo; }
namespace FlatData { class Nation; }

#define CHATDIALOG_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x2636490)
#define CHATDIALOG_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x26364A0)
#define CHATDIALOG_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x26364B0)
#define CHATDIALOG_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x26364C0)
#define CHATDIALOG_SET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x26364D0)
#define CHATDIALOG_GET_PREVGROUPID_OFFSET UNITYSDK_OFFSET(0x26364E0)
#define CHATDIALOG_SET_PREVGROUPID_OFFSET UNITYSDK_OFFSET(0x26364F0)
#define CHATDIALOG_GET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x2636500)
#define CHATDIALOG_SET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x2636510)
#define CHATDIALOG_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0x2636520)
#define CHATDIALOG_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0x2636530)
#define CHATDIALOG_GET_ALLIDLEDIALOGS_OFFSET UNITYSDK_OFFSET(0x2636540)
#define CHATDIALOG_SET_ALLIDLEDIALOGS_OFFSET UNITYSDK_OFFSET(0x2636550)
#define CHATDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x2636560)
#define CHATDIALOG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2636690)
#define CHATDIALOG_CLEAR_OFFSET UNITYSDK_OFFSET(0x2636710)
#define CHATDIALOG_RETURNTOIDLESPINES_OFFSET UNITYSDK_OFFSET(0x26368B0)
#define CHATDIALOG_INIT_OFFSET UNITYSDK_OFFSET(0x26369D0)
#define CHATDIALOG_CHANGEDIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x2636CB0)
#define CHATDIALOG_DEACTIVEDIALOGBOXES_OFFSET UNITYSDK_OFFSET(0x2636570)
#define CHATDIALOG_STARTDIALOG_OFFSET UNITYSDK_OFFSET(0x2636DE0)
#define CHATDIALOG_STARTDIALOG_OFFSET UNITYSDK_OFFSET(0x2637130)
#define CHATDIALOG_STARTDIALOG_OFFSET UNITYSDK_OFFSET(0x2637170)
#define CHATDIALOG_CODIALOG_OFFSET UNITYSDK_OFFSET(0x26370A0)
#define CHATDIALOG_TRYPLAYLIPSYNC_OFFSET UNITYSDK_OFFSET(0x26371D0)
#define CHATDIALOG_PLAYVOICEEVENT_OFFSET UNITYSDK_OFFSET(0x26372E0)
#define CHATDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x2637340)

	inline static constexpr unsigned int ChatDialog_TypeDefinitionIndex = 6580;

	class ChatDialog : public Il2CppObject
	{
	public:
		Il2CppObject* DialogBoxes; // 0x18
		::UnityEngine::Coroutine* coroutine; // 0x20
		::UnityEngine::Animator* spineAnimator; // 0x28
		SpineCharacter* spineCharacter; // 0x30
		PortraitSpineCharacter* portraitSpineCharacter; // 0x38
		::System::Int64 _CharacterId_k__BackingField; // 0x40
		::System::Int64 _CostumeId_k__BackingField; // 0x48
		::System::Int64 _prevGroupId_k__BackingField; // 0x50
		::FlatData::DialogCategory* _DialogCategory_k__BackingField; // 0x58
		::FlatData::DialogCondition* _Condition_k__BackingField; // 0x5C
		Il2CppObject* _AllIdleDialogs_k__BackingField; // 0x60
		::System::Boolean DialogEnable; // 0x68

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Void set_CostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_SET_COSTUMEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_prevGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_GET_PREVGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_prevGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_SET_PREVGROUPID_OFFSET))(arg, nullptr);
		}

		::FlatData::DialogCategory* get_DialogCategory()
		{
			return ((::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_GET_DIALOGCATEGORY_OFFSET))(nullptr);
		}

		::System::Void set_DialogCategory(::FlatData::DialogCategory* arg)
		{
			((::System::Void(*)(::FlatData::DialogCategory*, ::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_SET_DIALOGCATEGORY_OFFSET))(arg, nullptr);
		}

		::FlatData::DialogCondition* get_Condition()
		{
			return ((::FlatData::DialogCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_GET_CONDITION_OFFSET))(nullptr);
		}

		::System::Void set_Condition(::FlatData::DialogCondition* arg)
		{
			((::System::Void(*)(::FlatData::DialogCondition*, ::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_SET_CONDITION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AllIdleDialogs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_GET_ALLIDLEDIALOGS_OFFSET))(nullptr);
		}

		::System::Void set_AllIdleDialogs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_SET_ALLIDLEDIALOGS_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Clear(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void ReturnToIdleSpines()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_RETURNTOIDLESPINES_OFFSET))(nullptr);
		}

		::System::Void Init(::FlatData::DialogCategory* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::FlatData::DialogCondition* arg4, SpineCharacter* arg5)
		{
			((::System::Void(*)(::FlatData::DialogCategory*, ::System::Int64, ::System::Int64, ::FlatData::DialogCondition*, SpineCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_INIT_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void ChangeDialogCategory(::FlatData::DialogCategory* arg, ::FlatData::DialogCondition* arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::FlatData::DialogCategory*, ::FlatData::DialogCondition*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_CHANGEDIALOGCATEGORY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void DeactiveDialogBoxes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_DEACTIVEDIALOGBOXES_OFFSET))(nullptr);
		}

		::System::Boolean StartDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_STARTDIALOG_OFFSET))(nullptr);
		}

		::System::Boolean StartDialog(::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_STARTDIALOG_OFFSET))(arg, nullptr);
		}

		::System::Void StartDialog(::FlatData::DialogCondition* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatData::DialogCondition*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_STARTDIALOG_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoDialog(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_CODIALOG_OFFSET))(arg, nullptr);
		}

		::System::Void TryPlayLipsync(::MX::Data::CharacterDialogInfo* arg, ::System::Int32 arg2, ::FlatData::Nation* arg3)
		{
			((::System::Void(*)(::MX::Data::CharacterDialogInfo*, ::System::Int32, ::FlatData::Nation*, ::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_TRYPLAYLIPSYNC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void PlayVoiceEvent(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_PLAYVOICEEVENT_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOG_.CTOR_OFFSET))(nullptr);
		}

	};

