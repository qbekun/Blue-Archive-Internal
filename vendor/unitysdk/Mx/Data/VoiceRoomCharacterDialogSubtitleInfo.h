#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class CharacterDialogSubtitleExcel; }

#define MX_DATA_VOICEROOMCHARACTERDIALOGSUBTITLEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1862980)
#define MX_DATA_VOICEROOMCHARACTERDIALOGSUBTITLEINFO_GET_ISSEPARATE_OFFSET UNITYSDK_OFFSET(0x18629B0)
#define MX_DATA_VOICEROOMCHARACTERDIALOGSUBTITLEINFO_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x18629C0)
#define MX_DATA_VOICEROOMCHARACTERDIALOGSUBTITLEINFO_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1862AC0)

namespace MX::Data
{
	inline static constexpr unsigned int VoiceRoomCharacterDialogSubtitleInfo_TypeDefinitionIndex = 15911;

	class VoiceRoomCharacterDialogSubtitleInfo : public Il2CppObject
	{
	public:
		::MX::Data::Excel::CharacterDialogSubtitleExcel* excel; // 0x10

		::System::Void .ctor(::MX::Data::Excel::CharacterDialogSubtitleExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterDialogSubtitleExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEROOMCHARACTERDIALOGSUBTITLEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSeparate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEROOMCHARACTERDIALOGSUBTITLEINFO_GET_ISSEPARATE_OFFSET))(nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEROOMCHARACTERDIALOGSUBTITLEINFO_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Int64 get_Duration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEROOMCHARACTERDIALOGSUBTITLEINFO_GET_DURATION_OFFSET))(nullptr);
		}

	};
}

