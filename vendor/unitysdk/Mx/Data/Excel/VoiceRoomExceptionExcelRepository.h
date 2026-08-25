#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5490)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCELREPOSITORY_SELECT_COSTUMEUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1CB54D0)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CB58D0)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCELREPOSITORY_SELECTFIRST_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CB5A40)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCELREPOSITORY_SELECT_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CB5D60)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VoiceRoomExceptionExcelRepository_TypeDefinitionIndex = 19707;

	class VoiceRoomExceptionExcelRepository : public ::MXUnderCover::UCLayer
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_CostumeUniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCELREPOSITORY_SELECT_COSTUMEUNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_CostumeUniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCELREPOSITORY_SELECTFIRST_COSTUMEUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CostumeUniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCELREPOSITORY_SELECT_COSTUMEUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

	};
}

