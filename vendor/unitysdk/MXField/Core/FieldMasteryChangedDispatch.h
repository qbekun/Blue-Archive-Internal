#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Model { class FieldMasteryDB; }

#define MXFIELD_CORE_FIELDMASTERYCHANGEDDISPATCH_GET_MASTERYDB_OFFSET UNITYSDK_OFFSET(0xED6BC0)
#define MXFIELD_CORE_FIELDMASTERYCHANGEDDISPATCH_GET_FROMUC_OFFSET UNITYSDK_OFFSET(0xED6BD0)
#define MXFIELD_CORE_FIELDMASTERYCHANGEDDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xED6BE0)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldMasteryChangedDispatch_TypeDefinitionIndex = 10949;

	class FieldMasteryChangedDispatch : public Il2CppObject
	{
	public:
		::MXField::Shared::Model::FieldMasteryDB* _MasteryDB_k__BackingField; // 0x18
		::System::Boolean _FromUC_k__BackingField; // 0x20

		::MXField::Shared::Model::FieldMasteryDB* get_MasteryDB()
		{
			return ((::MXField::Shared::Model::FieldMasteryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDMASTERYCHANGEDDISPATCH_GET_MASTERYDB_OFFSET))(nullptr);
		}

		::System::Boolean get_FromUC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDMASTERYCHANGEDDISPATCH_GET_FROMUC_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::MXField::Shared::Model::FieldMasteryDB* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Object*, ::MXField::Shared::Model::FieldMasteryDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDMASTERYCHANGEDDISPATCH_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

