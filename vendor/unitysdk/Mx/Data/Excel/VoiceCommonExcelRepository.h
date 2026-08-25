#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class VoiceEvent; }

#define MX_DATA_EXCEL_VOICECOMMONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CB1950)
#define MX_DATA_EXCEL_VOICECOMMONEXCELREPOSITORY_SELECTFIRST_VOICEEVENT_OFFSET UNITYSDK_OFFSET(0x1CB1AC0)
#define MX_DATA_EXCEL_VOICECOMMONEXCELREPOSITORY_SELECT_VOICEEVENTS_OFFSET UNITYSDK_OFFSET(0x1CB1E20)
#define MX_DATA_EXCEL_VOICECOMMONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CB2220)
#define MX_DATA_EXCEL_VOICECOMMONEXCELREPOSITORY_SELECT_VOICEEVENT_OFFSET UNITYSDK_OFFSET(0x1CB2260)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VoiceCommonExcelRepository_TypeDefinitionIndex = 19686;

	class VoiceCommonExcelRepository : public DitherMaterialInfo
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_VoiceEvent(::FlatData::VoiceEvent* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::VoiceEvent*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCELREPOSITORY_SELECTFIRST_VOICEEVENT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_VoiceEvents(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCELREPOSITORY_SELECT_VOICEEVENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_VoiceEvent(::FlatData::VoiceEvent* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::VoiceEvent*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCELREPOSITORY_SELECT_VOICEEVENT_OFFSET))(arg, arg, nullptr);
		}

	};
}

