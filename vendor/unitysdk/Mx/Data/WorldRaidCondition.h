#pragma once
#include "../../unitysdk.h"

namespace FlatData { class WorldRaidConditionType; }

#define MX_DATA_WORLDRAIDCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1866010)
#define MX_DATA_WORLDRAIDCONDITION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1866040)
#define MX_DATA_WORLDRAIDCONDITION_GET_ID_OFFSET UNITYSDK_OFFSET(0x1866050)

namespace MX::Data
{
	inline static constexpr unsigned int WorldRaidCondition_TypeDefinitionIndex = 15925;

	class WorldRaidCondition : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::FlatData::WorldRaidConditionType* _Type_k__BackingField; // 0x18

		::System::Void .ctor(::System::Int64 arg, ::FlatData::WorldRaidConditionType* arg)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::WorldRaidConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::WorldRaidConditionType* get_Type()
		{
			return (return (::FlatData::WorldRaidConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITION_GET_ID_OFFSET))(nullptr);
		}

	};
}

