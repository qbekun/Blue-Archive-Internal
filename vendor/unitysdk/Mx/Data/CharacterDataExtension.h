#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class CharacterVictoryInteractionExcel; }
namespace FlatData { class VoiceEvent; }

#define MX_DATA_CHARACTERDATAEXTENSION_GETENDANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x197A770)
#define MX_DATA_CHARACTERDATAEXTENSION_GETCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x197A860)
#define MX_DATA_CHARACTERDATAEXTENSION_GETVOICEEVENT_OFFSET UNITYSDK_OFFSET(0x197A950)
#define MX_DATA_CHARACTERDATAEXTENSION_GETPOSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x197AA40)
#define MX_DATA_CHARACTERDATAEXTENSION_GETSTARTANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x197AB30)

namespace MX::Data
{
	inline static constexpr unsigned int CharacterDataExtension_TypeDefinitionIndex = 16492;

	class CharacterDataExtension : public Il2CppObject
	{
	public:
		::System::String* GetEndAnimationName(::MX::Data::Excel::CharacterVictoryInteractionExcel* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::MX::Data::Excel::CharacterVictoryInteractionExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATAEXTENSION_GETENDANIMATIONNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetCostumeId(::MX::Data::Excel::CharacterVictoryInteractionExcel* arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::MX::Data::Excel::CharacterVictoryInteractionExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATAEXTENSION_GETCOSTUMEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::VoiceEvent* GetVoiceEvent(::MX::Data::Excel::CharacterVictoryInteractionExcel* arg, ::System::Int32 arg)
		{
			return (return (::FlatData::VoiceEvent*(*)(::MX::Data::Excel::CharacterVictoryInteractionExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATAEXTENSION_GETVOICEEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetPositionIndex(::MX::Data::Excel::CharacterVictoryInteractionExcel* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::MX::Data::Excel::CharacterVictoryInteractionExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATAEXTENSION_GETPOSITIONINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetStartAnimationName(::MX::Data::Excel::CharacterVictoryInteractionExcel* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::MX::Data::Excel::CharacterVictoryInteractionExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATAEXTENSION_GETSTARTANIMATIONNAME_OFFSET))(arg, arg, nullptr);
		}

	};
}

