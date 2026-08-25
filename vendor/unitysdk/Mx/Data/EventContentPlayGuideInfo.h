#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentPlayGuideExcel; }
namespace MX::Data::Excel { class MiniGamePlayGuideExcel; }
namespace MX::Data::Excel { class ConquestPlayGuideExcel; }

#define MX_DATA_EVENTCONTENTPLAYGUIDEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1840AE0)
#define MX_DATA_EVENTCONTENTPLAYGUIDEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1840B80)
#define MX_DATA_EVENTCONTENTPLAYGUIDEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1840C20)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentPlayGuideInfo_TypeDefinitionIndex = 15781;

	class EventContentPlayGuideInfo : public Il2CppObject
	{
	public:
		::System::Int64 Id; // 0x10
		::System::Int64 EventContentId; // 0x18
		::System::String* GuideTitle; // 0x20
		::System::String* GuideText; // 0x28
		::System::String* GuideImagePath; // 0x30
		::System::Int32 DisplayOrder; // 0x38
		::System::Boolean IsPcBuild; // 0x3C

		::System::Void .ctor(::MX::Data::Excel::EventContentPlayGuideExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentPlayGuideExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTPLAYGUIDEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MiniGamePlayGuideExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGamePlayGuideExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTPLAYGUIDEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ConquestPlayGuideExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestPlayGuideExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTPLAYGUIDEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

