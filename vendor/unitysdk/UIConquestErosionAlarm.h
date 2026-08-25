#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class UILabel;
namespace MX::Data { class ConquestErosionExcelData; }

#define UICONQUESTEROSIONALARM_PLAYEROSIONALARM_OFFSET UNITYSDK_OFFSET(0x235F1D0)
#define UICONQUESTEROSIONALARM_SETLABELTEXT_OFFSET UNITYSDK_OFFSET(0x235F170)
#define UICONQUESTEROSIONALARM_.CTOR_OFFSET UNITYSDK_OFFSET(0x2364790)

	inline static constexpr unsigned int UIConquestErosionAlarm_TypeDefinitionIndex = 5057;

	class UIConquestErosionAlarm : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* alarmAnimation; // 0x18
		UILabel* alarmTextLabel; // 0x20
		UILabel* localizeTextLabel; // 0x28
		UILabel* locationLabel; // 0x30

		::System::Collections::IEnumerator* PlayErosionAlarm(::MX::Data::ConquestErosionExcelData* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::ConquestErosionExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTEROSIONALARM_PLAYEROSIONALARM_OFFSET))(arg, nullptr);
		}

		::System::Void SetLabelText(::System::String* str, ::System::String* str2, ::System::String* str3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTEROSIONALARM_SETLABELTEXT_OFFSET))(str, str2, str3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTEROSIONALARM_.CTOR_OFFSET))(nullptr);
		}

	};

