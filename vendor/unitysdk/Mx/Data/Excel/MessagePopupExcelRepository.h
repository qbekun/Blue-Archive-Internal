#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MESSAGEPOPUPEXCELREPOSITORY_SELECT_STRINGID_OFFSET UNITYSDK_OFFSET(0x1B8B7E0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B8BAE0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B8BB20)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCELREPOSITORY_SELECT_STRINGIDS_OFFSET UNITYSDK_OFFSET(0x1B8BC90)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCELREPOSITORY_SELECTFIRST_STRINGID_OFFSET UNITYSDK_OFFSET(0x1B8C090)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MessagePopupExcelRepository_TypeDefinitionIndex = 18436;

	class MessagePopupExcelRepository : public <co_InternalInvoke>d__2
	{
	public:
		Il2CppObject* Select_StringId(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCELREPOSITORY_SELECT_STRINGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_StringIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCELREPOSITORY_SELECT_STRINGIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_StringId(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCELREPOSITORY_SELECTFIRST_STRINGID_OFFSET))(arg, arg, nullptr);
		}

	};
}

