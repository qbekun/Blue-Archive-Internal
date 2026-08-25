#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class ConquestConditionType; }
namespace MX::Data { class ConquestCondition; }
namespace MX::GameLogic::DBModel { class ConsumableItemBaseDB; }

#define MX_DATA_CONQUESTITEMACQUIRECONDITION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x183A740)
#define MX_DATA_CONQUESTITEMACQUIRECONDITION_GET_CONDITIONPARCEL_OFFSET UNITYSDK_OFFSET(0x183A750)
#define MX_DATA_CONQUESTITEMACQUIRECONDITION_SET_CONDITIONPARCEL_OFFSET UNITYSDK_OFFSET(0x183A760)
#define MX_DATA_CONQUESTITEMACQUIRECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x183A770)
#define MX_DATA_CONQUESTITEMACQUIRECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x183A780)
#define MX_DATA_CONQUESTITEMACQUIRECONDITION_ISOPEN_OFFSET UNITYSDK_OFFSET(0x183A7C0)
#define MX_DATA_CONQUESTITEMACQUIRECONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0x183A0B0)
#define MX_DATA_CONQUESTITEMACQUIRECONDITION__ISOPEN_B__8_0_OFFSET UNITYSDK_OFFSET(0x183A880)

namespace MX::Data
{
	inline static constexpr unsigned int ConquestItemAcquireCondition_TypeDefinitionIndex = 15760;

	class ConquestItemAcquireCondition : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelInfo* _ConditionParcel_k__BackingField; // 0x20

		::FlatData::ConquestConditionType* get_Type()
		{
			return (return (::FlatData::ConquestConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTITEMACQUIRECONDITION_GET_TYPE_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_ConditionParcel()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTITEMACQUIRECONDITION_GET_CONDITIONPARCEL_OFFSET))(nullptr);
		}

		::System::Void set_ConditionParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTITEMACQUIRECONDITION_SET_CONDITIONPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTITEMACQUIRECONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTITEMACQUIRECONDITION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsOpen(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTITEMACQUIRECONDITION_ISOPEN_OFFSET))(arg, nullptr);
		}

		::MX::Data::ConquestCondition* Create(::System::Int64 arg, ::System::Int64 arg, ::System::String* str)
		{
			return (return (::MX::Data::ConquestCondition*(*)(::System::Int64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTITEMACQUIRECONDITION_CREATE_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Boolean _IsOpen_b__8_0(::MX::GameLogic::DBModel::ConsumableItemBaseDB* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameLogic::DBModel::ConsumableItemBaseDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTITEMACQUIRECONDITION__ISOPEN_B__8_0_OFFSET))(arg, nullptr);
		}

	};
}

