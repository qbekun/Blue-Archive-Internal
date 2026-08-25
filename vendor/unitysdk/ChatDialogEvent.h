#pragma once
#include "unitysdk.h"

namespace FlatData { class DialogConditionDetail; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace FlatData { class DialogCategory; }
namespace FlatData { class DialogCondition; }
class SpineCharacter;

#define CHATDIALOGEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x263AD00)
#define CHATDIALOGEVENT_CODIALOG_OFFSET UNITYSDK_OFFSET(0x263ADE0)
#define CHATDIALOGEVENT_STARTDIALOG_OFFSET UNITYSDK_OFFSET(0x263AE60)
#define CHATDIALOGEVENT_SETCURRENTDAY_OFFSET UNITYSDK_OFFSET(0x263B090)
#define CHATDIALOGEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x263B220)
#define CHATDIALOGEVENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x263B480)

	inline static constexpr unsigned int ChatDialogEvent_TypeDefinitionIndex = 6586;

	class ChatDialogEvent : public Il2CppObject
	{
	public:
		Il2CppObject* AllIdleDialogsEvent; // 0x70
		::FlatData::DialogConditionDetail* conditionDetail; // 0x78
		::System::Int64 conditionDetailValue; // 0x80
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x88
		::System::Int64 eventId; // 0x90
		::Il2CppArray<::System::Object*>* prevGroupIds; // 0x98

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOGEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoDialog(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOGEVENT_CODIALOG_OFFSET))(arg, nullptr);
		}

		::System::Boolean StartDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOGEVENT_STARTDIALOG_OFFSET))(nullptr);
		}

		::System::Void SetCurrentDay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOGEVENT_SETCURRENTDAY_OFFSET))(nullptr);
		}

		::System::Void Init(::FlatData::DialogCategory* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::FlatData::DialogCondition* arg4, ::MX::Data::EventContentSeasonInfo* arg5, SpineCharacter* arg6)
		{
			((::System::Void(*)(::FlatData::DialogCategory*, ::System::Int64, ::System::Int64, ::FlatData::DialogCondition*, ::MX::Data::EventContentSeasonInfo*, SpineCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOGEVENT_INIT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHATDIALOGEVENT_AWAKE_OFFSET))(nullptr);
		}

	};

