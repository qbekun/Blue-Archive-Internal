#pragma once
#include "../../unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace FlatData { class ConquestConditionType; }
namespace MX::Data { class ConquestCondition; }

#define MX_DATA_CONQUESTKILLUNITCONDITION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x183A9E0)
#define MX_DATA_CONQUESTKILLUNITCONDITION_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x183A9F0)
#define MX_DATA_CONQUESTKILLUNITCONDITION_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x183AA00)
#define MX_DATA_CONQUESTKILLUNITCONDITION_GET_UNITID_OFFSET UNITYSDK_OFFSET(0x183AA10)
#define MX_DATA_CONQUESTKILLUNITCONDITION_SET_UNITID_OFFSET UNITYSDK_OFFSET(0x183AA20)
#define MX_DATA_CONQUESTKILLUNITCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x183AA30)
#define MX_DATA_CONQUESTKILLUNITCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x183AA40)
#define MX_DATA_CONQUESTKILLUNITCONDITION_ISOPEN_OFFSET UNITYSDK_OFFSET(0x183AA80)
#define MX_DATA_CONQUESTKILLUNITCONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0x183A450)

namespace MX::Data
{
	inline static constexpr unsigned int ConquestKillUnitCondition_TypeDefinitionIndex = 15764;

	class ConquestKillUnitCondition : public Il2CppObject
	{
	public:
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x20
		::System::Int64 _UnitId_k__BackingField; // 0x28

		::FlatData::ConquestConditionType* get_Type()
		{
			return (return (::FlatData::ConquestConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTKILLUNITCONDITION_GET_TYPE_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return (return (::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTKILLUNITCONDITION_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTKILLUNITCONDITION_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UnitId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTKILLUNITCONDITION_GET_UNITID_OFFSET))(nullptr);
		}

		::System::Void set_UnitId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTKILLUNITCONDITION_SET_UNITID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTKILLUNITCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::FlatData::StageDifficulty* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::StageDifficulty*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTKILLUNITCONDITION_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsOpen(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTKILLUNITCONDITION_ISOPEN_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::ConquestCondition* Create(::System::Int64 arg, ::FlatData::StageDifficulty* arg, ::System::Int64 arg, ::System::String* str)
		{
			return (return (::MX::Data::ConquestCondition*(*)(::System::Int64, ::FlatData::StageDifficulty*, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTKILLUNITCONDITION_CREATE_OFFSET))(arg, arg, arg, str, nullptr);
		}

	};
}

