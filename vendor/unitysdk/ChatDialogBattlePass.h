#pragma once
#include "unitysdk.h"

namespace FlatData { class DialogConditionDetail; }
namespace MX::Data { class BattlePassSeasonInfo; }
namespace FlatData { class DialogCategory; }
namespace FlatData { class DialogCondition; }
class SpineCharacter;

#define CHATDIALOGBATTLEPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x2638E00)
#define CHATDIALOGBATTLEPASS_INIT_OFFSET UNITYSDK_OFFSET(0x2638EE0)
#define CHATDIALOGBATTLEPASS_AWAKE_OFFSET UNITYSDK_OFFSET(0x2639250)
#define CHATDIALOGBATTLEPASS_SETCURRENTDAY_OFFSET UNITYSDK_OFFSET(0x26390C0)
#define CHATDIALOGBATTLEPASS_CODIALOG_OFFSET UNITYSDK_OFFSET(0x26392A0)
#define CHATDIALOGBATTLEPASS_STARTDIALOG_OFFSET UNITYSDK_OFFSET(0x2639350)

	inline static constexpr unsigned int ChatDialogBattlePass_TypeDefinitionIndex = 6583;

	class ChatDialogBattlePass : public Il2CppObject
	{
	public:
		Il2CppObject* AllIdleDialogsEvent; // 0x70
		::FlatData::DialogConditionDetail* conditionDetail; // 0x78
		::System::Int64 conditionDetailValue; // 0x80
		::MX::Data::BattlePassSeasonInfo* seasonInfo; // 0x88
		::System::Int64 battlepassId; // 0x90
		::Il2CppArray<::System::Object*>* prevGroupIds; // 0x98

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOGBATTLEPASS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::FlatData::DialogCategory* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::FlatData::DialogCondition* arg4, ::MX::Data::BattlePassSeasonInfo* arg5, SpineCharacter* arg6)
		{
			((::System::Void(*)(::FlatData::DialogCategory*, ::System::Int64, ::System::Int64, ::FlatData::DialogCondition*, ::MX::Data::BattlePassSeasonInfo*, SpineCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOGBATTLEPASS_INIT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOGBATTLEPASS_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetCurrentDay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOGBATTLEPASS_SETCURRENTDAY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoDialog(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOGBATTLEPASS_CODIALOG_OFFSET))(arg, nullptr);
		}

		::System::Boolean StartDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOGBATTLEPASS_STARTDIALOG_OFFSET))(nullptr);
		}

	};

