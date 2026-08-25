#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class GuideMissionOpenStageConditionExcel; }

#define MX_DATA_GUIDEMISSIONOPENSTAGECONDITIONINFO_GET_LOCKSTAGETEXTLOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x184E0A0)
#define MX_DATA_GUIDEMISSIONOPENSTAGECONDITIONINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x184E0B0)
#define MX_DATA_GUIDEMISSIONOPENSTAGECONDITIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x184E0C0)
#define MX_DATA_GUIDEMISSIONOPENSTAGECONDITIONINFO_GET_LOCKSCENARIOTEXTLOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x184E180)
#define MX_DATA_GUIDEMISSIONOPENSTAGECONDITIONINFO_GET_CLEARSTAGEID_OFFSET UNITYSDK_OFFSET(0x184E190)
#define MX_DATA_GUIDEMISSIONOPENSTAGECONDITIONINFO_GET_ORDERNUMBER_OFFSET UNITYSDK_OFFSET(0x184E1A0)
#define MX_DATA_GUIDEMISSIONOPENSTAGECONDITIONINFO_GET_CLEARSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x184E1B0)
#define MX_DATA_GUIDEMISSIONOPENSTAGECONDITIONINFO_GET_SHORTCUTSCENARIOUI_OFFSET UNITYSDK_OFFSET(0x184E1C0)
#define MX_DATA_GUIDEMISSIONOPENSTAGECONDITIONINFO_GET_TABLOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x184E1D0)

namespace MX::Data
{
	inline static constexpr unsigned int GuideMissionOpenStageConditionInfo_TypeDefinitionIndex = 15839;

	class GuideMissionOpenStageConditionInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::System::Int64 _OrderNumber_k__BackingField; // 0x18
		::System::String* _TabLocalizeCode_k__BackingField; // 0x20
		::System::Int64 _ClearScenarioModeId_k__BackingField; // 0x28
		::System::String* _LockScenarioTextLocalizeCode_k__BackingField; // 0x30
		::System::String* _ShortcutScenarioUI_k__BackingField; // 0x38
		::System::Int64 _ClearStageId_k__BackingField; // 0x40
		::System::String* _LockStageTextLocalizeCode_k__BackingField; // 0x48

		::System::String* get_LockStageTextLocalizeCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONOPENSTAGECONDITIONINFO_GET_LOCKSTAGETEXTLOCALIZECODE_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONOPENSTAGECONDITIONINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::GuideMissionOpenStageConditionExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::GuideMissionOpenStageConditionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONOPENSTAGECONDITIONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_LockScenarioTextLocalizeCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONOPENSTAGECONDITIONINFO_GET_LOCKSCENARIOTEXTLOCALIZECODE_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearStageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONOPENSTAGECONDITIONINFO_GET_CLEARSTAGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_OrderNumber()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONOPENSTAGECONDITIONINFO_GET_ORDERNUMBER_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearScenarioModeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONOPENSTAGECONDITIONINFO_GET_CLEARSCENARIOMODEID_OFFSET))(nullptr);
		}

		::System::String* get_ShortcutScenarioUI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONOPENSTAGECONDITIONINFO_GET_SHORTCUTSCENARIOUI_OFFSET))(nullptr);
		}

		::System::String* get_TabLocalizeCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONOPENSTAGECONDITIONINFO_GET_TABLOCALIZECODE_OFFSET))(nullptr);
		}

	};
}

