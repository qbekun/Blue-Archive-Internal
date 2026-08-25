#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_VOICESPINEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CB6A80)
#define MX_DATA_EXCEL_VOICESPINEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CB6BF0)
#define MX_DATA_EXCEL_VOICESPINEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1CB6C30)
#define MX_DATA_EXCEL_VOICESPINEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1CB6F50)
#define MX_DATA_EXCEL_VOICESPINEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1CB7350)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VoiceSpineExcelRepository_TypeDefinitionIndex = 19714;

	class VoiceSpineExcelRepository : public ::MXUnderCover::UCMessage
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

