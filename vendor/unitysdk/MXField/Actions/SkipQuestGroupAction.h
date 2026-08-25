#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class FieldQuestGroupExcel; }

#define MXFIELD_ACTIONS_SKIPQUESTGROUPACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEF56C0)
#define MXFIELD_ACTIONS_SKIPQUESTGROUPACTION_SET__QUESTGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0xEF5840)
#define MXFIELD_ACTIONS_SKIPQUESTGROUPACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF5860)
#define MXFIELD_ACTIONS_SKIPQUESTGROUPACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEF58A0)
#define MXFIELD_ACTIONS_SKIPQUESTGROUPACTION_GET__QUESTGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0xEF5930)
#define MXFIELD_ACTIONS_SKIPQUESTGROUPACTION_BUILDINTERACTIONHISTORYBYSKIP_OFFSET UNITYSDK_OFFSET(0xEF5940)

namespace MXField::Actions
{
	inline static constexpr unsigned int SkipQuestGroupAction_TypeDefinitionIndex = 11129;

	class SkipQuestGroupAction : public Il2CppObject
	{
	public:
		::MX::Data::Excel::FieldQuestGroupExcel* __questGroupExcel_k__BackingField; // 0x40

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SKIPQUESTGROUPACTION_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void set__questGroupExcel(::MX::Data::Excel::FieldQuestGroupExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::FieldQuestGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SKIPQUESTGROUPACTION_SET__QUESTGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::FieldQuestGroupExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::FieldQuestGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SKIPQUESTGROUPACTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SKIPQUESTGROUPACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FieldQuestGroupExcel* get__questGroupExcel()
		{
			return ((::MX::Data::Excel::FieldQuestGroupExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SKIPQUESTGROUPACTION_GET__QUESTGROUPEXCEL_OFFSET))(nullptr);
		}

		::System::Void BuildInteractionHistoryBySkip(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SKIPQUESTGROUPACTION_BUILDINTERACTIONHISTORYBYSKIP_OFFSET))(arg, arg2, nullptr);
		}

	};
}

