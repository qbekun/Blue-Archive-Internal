#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class JsonSerializerSettings; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace MX::TableBoard { class TBGEncounterDB; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }

#define MX_TABLEBOARD_TBGENCOUNTERDBCONVERTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xF01840)
#define MX_TABLEBOARD_TBGENCOUNTERDBCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0xF01990)
#define MX_TABLEBOARD_TBGENCOUNTERDBCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0xF01E20)
#define MX_TABLEBOARD_TBGENCOUNTERDBCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xF02240)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGEncounterDBConverter_TypeDefinitionIndex = 11187;

	class TBGEncounterDBConverter : public ::MX::MinigameCCG::Procedures::FilterTargetEntitiesByPlayer
	{
	public:
		::Newtonsoft::Json::JsonSerializerSettings* SpecifiedSubclassConversion; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDBCONVERTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::MX::TableBoard::TBGEncounterDB* arg2, ::Newtonsoft::Json::JsonSerializer* arg3)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::MX::TableBoard::TBGEncounterDB*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDBCONVERTER_WRITEJSON_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::TableBoard::TBGEncounterDB* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg2, ::MX::TableBoard::TBGEncounterDB* arg3, ::System::Boolean arg4, ::Newtonsoft::Json::JsonSerializer* arg5)
		{
			return ((::MX::TableBoard::TBGEncounterDB*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::MX::TableBoard::TBGEncounterDB*, ::System::Boolean, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDBCONVERTER_READJSON_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDBCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

