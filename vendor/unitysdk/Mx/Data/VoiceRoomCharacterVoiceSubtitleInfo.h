#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class CharacterVoiceSubtitleExcel; }

#define MX_DATA_VOICEROOMCHARACTERVOICESUBTITLEINFO_GET_ISSEPARATE_OFFSET UNITYSDK_OFFSET(0x1862BA0)
#define MX_DATA_VOICEROOMCHARACTERVOICESUBTITLEINFO_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1862BB0)
#define MX_DATA_VOICEROOMCHARACTERVOICESUBTITLEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1862C90)
#define MX_DATA_VOICEROOMCHARACTERVOICESUBTITLEINFO_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1862CC0)

namespace MX::Data
{
	inline static constexpr unsigned int VoiceRoomCharacterVoiceSubtitleInfo_TypeDefinitionIndex = 15912;

	class VoiceRoomCharacterVoiceSubtitleInfo : public Il2CppObject
	{
	public:
		::MX::Data::Excel::CharacterVoiceSubtitleExcel* excel; // 0x10

		::System::Boolean get_IsSeparate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEROOMCHARACTERVOICESUBTITLEINFO_GET_ISSEPARATE_OFFSET))(nullptr);
		}

		::System::Int64 get_Duration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEROOMCHARACTERVOICESUBTITLEINFO_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CharacterVoiceSubtitleExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterVoiceSubtitleExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEROOMCHARACTERVOICESUBTITLEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEROOMCHARACTERVOICESUBTITLEINFO_GET_TEXT_OFFSET))(nullptr);
		}

	};
}

