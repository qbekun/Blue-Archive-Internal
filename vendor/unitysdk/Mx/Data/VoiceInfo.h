#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class CharacterVoiceExcel; }
namespace MX::Data::Excel { class VoiceExcel; }
namespace MX::Data::Excel { class VoiceSpineExcel; }
namespace MX::Data::Excel { class VoiceTimelineExcel; }

#define MX_DATA_VOICEINFO_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1861830)
#define MX_DATA_VOICEINFO_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1861840)
#define MX_DATA_VOICEINFO_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1861850)
#define MX_DATA_VOICEINFO_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1861860)
#define MX_DATA_VOICEINFO_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x1861870)
#define MX_DATA_VOICEINFO_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x1861880)
#define MX_DATA_VOICEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1861890)
#define MX_DATA_VOICEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1861CD0)
#define MX_DATA_VOICEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1862070)
#define MX_DATA_VOICEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1862410)

namespace MX::Data
{
	inline static constexpr unsigned int VoiceInfo_TypeDefinitionIndex = 15910;

	class VoiceInfo : public Il2CppObject
	{
	public:
		::System::String* _Path_k__BackingField; // 0x10
		::System::Single _Volume_k__BackingField; // 0x18
		::System::Single _Delay_k__BackingField; // 0x1C

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEINFO_GET_PATH_OFFSET))(nullptr);
		}

		::System::Void set_Path(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEINFO_SET_PATH_OFFSET))(str, nullptr);
		}

		::System::Single get_Volume()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEINFO_GET_VOLUME_OFFSET))(nullptr);
		}

		::System::Void set_Volume(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEINFO_SET_VOLUME_OFFSET))(arg, nullptr);
		}

		::System::Single get_Delay()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEINFO_GET_DELAY_OFFSET))(nullptr);
		}

		::System::Void set_Delay(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEINFO_SET_DELAY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CharacterVoiceExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterVoiceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::VoiceExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::VoiceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::VoiceSpineExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::VoiceSpineExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::VoiceTimelineExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::VoiceTimelineExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

