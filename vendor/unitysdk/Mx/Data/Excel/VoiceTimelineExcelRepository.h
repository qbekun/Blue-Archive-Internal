#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_VOICETIMELINEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1CB8070)
#define MX_DATA_EXCEL_VOICETIMELINEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8370)
#define MX_DATA_EXCEL_VOICETIMELINEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CB83B0)
#define MX_DATA_EXCEL_VOICETIMELINEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1CB8520)
#define MX_DATA_EXCEL_VOICETIMELINEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1CB8920)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VoiceTimelineExcelRepository_TypeDefinitionIndex = 19721;

	class VoiceTimelineExcelRepository : public ::MXUnderCover::LoadedSectionMessage
	{
	public:
		Il2CppObject* Select_Id(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICETIMELINEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICETIMELINEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICETIMELINEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICETIMELINEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICETIMELINEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

