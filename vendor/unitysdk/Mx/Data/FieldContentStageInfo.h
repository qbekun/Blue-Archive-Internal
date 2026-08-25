#pragma once
#include "../../unitysdk.h"

namespace FlatData { class FieldContentStageExcel; }

#define MX_DATA_FIELDCONTENTSTAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1847C40)
#define MX_DATA_FIELDCONTENTSTAGEINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x18486C0)
#define MX_DATA_FIELDCONTENTSTAGEINFO_GET_SKIPFORMATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x18486D0)
#define MX_DATA_FIELDCONTENTSTAGEINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x18486E0)
#define MX_DATA_FIELDCONTENTSTAGEINFO_GET_INSTANTCLEAR_OFFSET UNITYSDK_OFFSET(0x18486F0)
#define MX_DATA_FIELDCONTENTSTAGEINFO_GET_ISDAILYLASTPLAY_OFFSET UNITYSDK_OFFSET(0x1848700)
#define MX_DATA_FIELDCONTENTSTAGEINFO_GET_SHOWCLEARDECKBUTTON_OFFSET UNITYSDK_OFFSET(0x1848710)
#define MX_DATA_FIELDCONTENTSTAGEINFO_GET_STARGOALS_OFFSET UNITYSDK_OFFSET(0x1848730)
#define MX_DATA_FIELDCONTENTSTAGEINFO_GET_STARGOALTYPEORDER_OFFSET UNITYSDK_OFFSET(0x1848740)
#define MX_DATA_FIELDCONTENTSTAGEINFO_SET_STARGOALTYPEORDER_OFFSET UNITYSDK_OFFSET(0x1848750)
#define MX_DATA_FIELDCONTENTSTAGEINFO_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x1848770)
#define MX_DATA_FIELDCONTENTSTAGEINFO_GET_PREVSTAGEID_OFFSET UNITYSDK_OFFSET(0x1848780)
#define MX_DATA_FIELDCONTENTSTAGEINFO_GETSTAGENUMBER_OFFSET UNITYSDK_OFFSET(0x1848790)

namespace MX::Data
{
	inline static constexpr unsigned int FieldContentStageInfo_TypeDefinitionIndex = 15823;

	class FieldContentStageInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x138
		::System::Int64 _AreaId_k__BackingField; // 0x140
		::System::Int64 _GroupId_k__BackingField; // 0x148
		::System::Int64 _PrevStageId_k__BackingField; // 0x150
		::System::Boolean _SkipFormationSettings_k__BackingField; // 0x158
		::System::Boolean _InstantClear_k__BackingField; // 0x159
		Il2CppObject* _StarGoals_k__BackingField; // 0x160
		Il2CppObject* _StarGoalTypeOrder_k__BackingField; // 0x168
		::System::Boolean _IsDailyLastPlay_k__BackingField; // 0x170

		::System::Void .ctor(::FlatData::FieldContentStageExcel* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatData::FieldContentStageExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_SkipFormationSettings()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEINFO_GET_SKIPFORMATIONSETTINGS_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Boolean get_InstantClear()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEINFO_GET_INSTANTCLEAR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDailyLastPlay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEINFO_GET_ISDAILYLASTPLAY_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowClearDeckButton()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEINFO_GET_SHOWCLEARDECKBUTTON_OFFSET))(nullptr);
		}

		Il2CppObject* get_StarGoals()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEINFO_GET_STARGOALS_OFFSET))(nullptr);
		}

		Il2CppObject* get_StarGoalTypeOrder()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEINFO_GET_STARGOALTYPEORDER_OFFSET))(nullptr);
		}

		::System::Void set_StarGoalTypeOrder(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEINFO_SET_STARGOALTYPEORDER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AreaId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEINFO_GET_AREAID_OFFSET))(nullptr);
		}

		::System::Int64 get_PrevStageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEINFO_GET_PREVSTAGEID_OFFSET))(nullptr);
		}

		::System::String* GetStageNumber()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEINFO_GETSTAGENUMBER_OFFSET))(nullptr);
		}

	};
}

