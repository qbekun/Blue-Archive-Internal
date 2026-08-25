#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B970B0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCELREPOSITORY_SELECTFIRST_LEVELID_NODEID_OFFSET UNITYSDK_OFFSET(0x1B97220)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCELREPOSITORY_SELECT_LEVELID_NODEID_OFFSET UNITYSDK_OFFSET(0x1B97620)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCELREPOSITORY_SELECT_LEVELID_NODEID_OFFSET UNITYSDK_OFFSET(0x1B97A00)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B97FA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGLevelNodeExcelRepository_TypeDefinitionIndex = 18495;

	class MinigameCCGLevelNodeExcelRepository : public ::MXUnderCover::UCConditionOR
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_LevelId_NodeId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCELREPOSITORY_SELECTFIRST_LEVELID_NODEID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_LevelId_NodeId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCELREPOSITORY_SELECT_LEVELID_NODEID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_LevelId_NodeId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCELREPOSITORY_SELECT_LEVELID_NODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

