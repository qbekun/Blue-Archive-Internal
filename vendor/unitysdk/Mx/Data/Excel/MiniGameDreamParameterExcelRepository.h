#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class DreamMakerParameterType; }

#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BB53E0)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1BB5740)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1BB5A60)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1BB5D60)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB6160)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB6480)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1BB6790)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_PARAMETERTYPE_OFFSET UNITYSDK_OFFSET(0x1BB6BA0)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_SELECT_EVENTCONTENTID_PARAMETERTYPE_OFFSET UNITYSDK_OFFSET(0x1BB6FE0)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_SELECT_EVENTCONTENTID_PARAMETERTYPE_OFFSET UNITYSDK_OFFSET(0x1BB7410)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BB79B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamParameterExcelRepository_TypeDefinitionIndex = 18653;

	class MiniGameDreamParameterExcelRepository : public AnimationChangeStateProp
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_ParameterType(::System::Int64 arg, ::FlatData::DreamMakerParameterType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::DreamMakerParameterType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_PARAMETERTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_ParameterType(::System::Int64 arg, ::FlatData::DreamMakerParameterType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::DreamMakerParameterType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_SELECT_EVENTCONTENTID_PARAMETERTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_ParameterType(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_SELECT_EVENTCONTENTID_PARAMETERTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

