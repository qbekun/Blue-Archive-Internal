#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class VoiceInfo; }
namespace MX::Data::Excel { class CharacterVoiceExcel; }
namespace MX::Data::Excel { class VoiceExcel; }
namespace MX::Data::Excel { class VoiceSpineExcel; }
namespace MX::Data::Excel { class VoiceTimelineExcel; }

#define MX_DATA_VOICEPLAYINFOSIMPLEEXTENSION_TOVOICEINFO_OFFSET UNITYSDK_OFFSET(0x197F390)
#define MX_DATA_VOICEPLAYINFOSIMPLEEXTENSION_TOVOICEINFO_OFFSET UNITYSDK_OFFSET(0x197F400)
#define MX_DATA_VOICEPLAYINFOSIMPLEEXTENSION_TOVOICEINFO_OFFSET UNITYSDK_OFFSET(0x197F470)
#define MX_DATA_VOICEPLAYINFOSIMPLEEXTENSION_TOVOICEINFO_OFFSET UNITYSDK_OFFSET(0x197F4E0)

namespace MX::Data
{
	inline static constexpr unsigned int VoicePlayInfoSimpleExtension_TypeDefinitionIndex = 16514;

	class VoicePlayInfoSimpleExtension : public Il2CppObject
	{
	public:
		::MX::Data::VoiceInfo* ToVoiceInfo(::MX::Data::Excel::CharacterVoiceExcel* arg)
		{
			return (return (::MX::Data::VoiceInfo*(*)(::MX::Data::Excel::CharacterVoiceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEPLAYINFOSIMPLEEXTENSION_TOVOICEINFO_OFFSET))(arg, nullptr);
		}

		::MX::Data::VoiceInfo* ToVoiceInfo(::MX::Data::Excel::VoiceExcel* arg)
		{
			return (return (::MX::Data::VoiceInfo*(*)(::MX::Data::Excel::VoiceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEPLAYINFOSIMPLEEXTENSION_TOVOICEINFO_OFFSET))(arg, nullptr);
		}

		::MX::Data::VoiceInfo* ToVoiceInfo(::MX::Data::Excel::VoiceSpineExcel* arg)
		{
			return (return (::MX::Data::VoiceInfo*(*)(::MX::Data::Excel::VoiceSpineExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEPLAYINFOSIMPLEEXTENSION_TOVOICEINFO_OFFSET))(arg, nullptr);
		}

		::MX::Data::VoiceInfo* ToVoiceInfo(::MX::Data::Excel::VoiceTimelineExcel* arg)
		{
			return (return (::MX::Data::VoiceInfo*(*)(::MX::Data::Excel::VoiceTimelineExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEPLAYINFOSIMPLEEXTENSION_TOVOICEINFO_OFFSET))(arg, nullptr);
		}

	};
}

