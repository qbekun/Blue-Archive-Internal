#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_VOICEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1CB2FD0)
#define MX_DATA_EXCEL_VOICEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1CB32F0)
#define MX_DATA_EXCEL_VOICEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CB35F0)
#define MX_DATA_EXCEL_VOICEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1CB3760)
#define MX_DATA_EXCEL_VOICEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CB3B60)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VoiceExcelRepository_TypeDefinitionIndex = 19693;

	class VoiceExcelRepository : public ::MXUnderCover::UCGameResource
	{
	public:
		Il2CppObject* SelectFirst_Id(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

