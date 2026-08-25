#pragma once
#include "unitysdk.h"

class UILabel;
namespace MX::Audio { class VoicePlayInfoSimple; }
namespace MX::Data::Excel { class ConquestProgressResourceExcel; }

#define UICONQUESTPROGRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x2366BB0)
#define UICONQUESTPROGRESS__ONOPENED_B__3_0_OFFSET UNITYSDK_OFFSET(0x2366BC0)
#define UICONQUESTPROGRESS_ONPROGRESSSTART_OFFSET UNITYSDK_OFFSET(0x2366C20)
#define UICONQUESTPROGRESS_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2366CA0)
#define UICONQUESTPROGRESS_SETDATA_OFFSET UNITYSDK_OFFSET(0x2366E40)

	inline static constexpr unsigned int UIConquestProgress_TypeDefinitionIndex = 5066;

	class UIConquestProgress : public Il2CppObject
	{
	public:
		UILabel* actionLabel; // 0x138
		UILabel* tileNameLabel; // 0x140
		::MX::Audio::VoicePlayInfoSimple* voicePlayInfo; // 0x148

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTPROGRESS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnOpened_b__3_0(::MX::Audio::VoicePlayInfoSimple* arg)
		{
			((::System::Void(*)(::MX::Audio::VoicePlayInfoSimple*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTPROGRESS__ONOPENED_B__3_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnProgressStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTPROGRESS_ONPROGRESSSTART_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTPROGRESS_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::ConquestProgressResourceExcel* arg, ::System::String* str, ::System::String* str2, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestProgressResourceExcel*, ::System::String*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTPROGRESS_SETDATA_OFFSET))(arg, str, str2, arg2, nullptr);
		}

	};

