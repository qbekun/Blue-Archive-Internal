#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCELREPOSITORY_SELECT_STRINGIDS_OFFSET UNITYSDK_OFFSET(0x1B86CC0)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B870C0)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCELREPOSITORY_SELECTFIRST_STRINGID_OFFSET UNITYSDK_OFFSET(0x1B87100)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B87420)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCELREPOSITORY_SELECT_STRINGID_OFFSET UNITYSDK_OFFSET(0x1B87590)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LogicEffectCommonVisualExcelRepository_TypeDefinitionIndex = 18415;

	class LogicEffectCommonVisualExcelRepository : public <>c__DisplayClass3_0
	{
	public:
		Il2CppObject* Select_StringIDs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCELREPOSITORY_SELECT_STRINGIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_StringID(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCELREPOSITORY_SELECTFIRST_STRINGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_StringID(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCELREPOSITORY_SELECT_STRINGID_OFFSET))(arg, arg, nullptr);
		}

	};
}

