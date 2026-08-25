#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class VoiceRoomSubtitleKey; }

#define MX_DATA_VOICESUBTITLEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19655D0)
#define MX_DATA_VOICESUBTITLEDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x19655E0)
#define MX_DATA_VOICESUBTITLEDATA_GETVOICEROOMSUBTITLELIST_OFFSET UNITYSDK_OFFSET(0x1965640)

namespace MX::Data
{
	inline static constexpr unsigned int VoiceSubtitleData_TypeDefinitionIndex = 16444;

	class VoiceSubtitleData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICESUBTITLEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICESUBTITLEDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetVoiceRoomSubtitleList(::MX::Data::VoiceRoomSubtitleKey* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::MX::Data::VoiceRoomSubtitleKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICESUBTITLEDATA_GETVOICEROOMSUBTITLELIST_OFFSET))(arg, nullptr);
		}

	};
}

