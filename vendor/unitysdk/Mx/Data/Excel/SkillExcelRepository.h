#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SKILLEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C892E0)
#define MX_DATA_EXCEL_SKILLEXCELREPOSITORY_SELECTFIRST_GROUPID_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C89540)
#define MX_DATA_EXCEL_SKILLEXCELREPOSITORY_SELECT_GROUPID_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C89940)
#define MX_DATA_EXCEL_SKILLEXCELREPOSITORY_SELECT_GROUPID_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C89D30)
#define MX_DATA_EXCEL_SKILLEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C8A2D0)
#define MX_DATA_EXCEL_SKILLEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C8A5E0)
#define MX_DATA_EXCEL_SKILLEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1C8A8D0)
#define MX_DATA_EXCEL_SKILLEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C8ACE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SkillExcelRepository_TypeDefinitionIndex = 19480;

	class SkillExcelRepository : public <co_Init>d__17
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_GroupId_Level(::System::String* str, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCELREPOSITORY_SELECTFIRST_GROUPID_LEVEL_OFFSET))(str, arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupId_Level(::System::String* str, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCELREPOSITORY_SELECT_GROUPID_LEVEL_OFFSET))(str, arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupId_Level(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCELREPOSITORY_SELECT_GROUPID_LEVEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_GroupId(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Select_GroupId(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

