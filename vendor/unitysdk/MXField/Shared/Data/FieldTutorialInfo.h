#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Condition { class ConditionElement; }
namespace FlatData { class FieldTutorialType; }
namespace FlatData { class FieldTutorialExcel; }

#define MXFIELD_SHARED_DATA_FIELDTUTORIALINFO_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0xE80120)
#define MXFIELD_SHARED_DATA_FIELDTUTORIALINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE80130)
#define MXFIELD_SHARED_DATA_FIELDTUTORIALINFO_GET_TUTORIALTYPE_OFFSET UNITYSDK_OFFSET(0xE801F0)
#define MXFIELD_SHARED_DATA_FIELDTUTORIALINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xE80200)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldTutorialInfo_TypeDefinitionIndex = 10613;

	class FieldTutorialInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::MXField::Shared::Condition::ConditionElement* _Condition_k__BackingField; // 0x18
		::FlatData::FieldTutorialType* _TutorialType_k__BackingField; // 0x20

		::MXField::Shared::Condition::ConditionElement* get_Condition()
		{
			return ((::MXField::Shared::Condition::ConditionElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDTUTORIALINFO_GET_CONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::FieldTutorialExcel* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatData::FieldTutorialExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDTUTORIALINFO_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldTutorialType* get_TutorialType()
		{
			return ((::FlatData::FieldTutorialType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDTUTORIALINFO_GET_TUTORIALTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDTUTORIALINFO_GET_SEASONID_OFFSET))(nullptr);
		}

	};
}

