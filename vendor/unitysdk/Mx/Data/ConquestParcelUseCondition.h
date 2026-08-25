#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class ConquestConditionType; }
namespace MX::GameLogic::DBModel { class ConquestInfoDB; }
namespace MX::Data { class ConquestCondition; }

#define MX_DATA_CONQUESTPARCELUSECONDITION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x183A930)
#define MX_DATA_CONQUESTPARCELUSECONDITION_GET_CONDITIONPARCEL_OFFSET UNITYSDK_OFFSET(0x183A940)
#define MX_DATA_CONQUESTPARCELUSECONDITION_SET_CONDITIONPARCEL_OFFSET UNITYSDK_OFFSET(0x183A950)
#define MX_DATA_CONQUESTPARCELUSECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x183A960)
#define MX_DATA_CONQUESTPARCELUSECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x183A970)
#define MX_DATA_CONQUESTPARCELUSECONDITION_ISOPEN_OFFSET UNITYSDK_OFFSET(0x183A9B0)
#define MX_DATA_CONQUESTPARCELUSECONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0x183A280)

namespace MX::Data
{
	inline static constexpr unsigned int ConquestParcelUseCondition_TypeDefinitionIndex = 15761;

	class ConquestParcelUseCondition : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelInfo* _ConditionParcel_k__BackingField; // 0x20

		::FlatData::ConquestConditionType* get_Type()
		{
			return (return (::FlatData::ConquestConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTPARCELUSECONDITION_GET_TYPE_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_ConditionParcel()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTPARCELUSECONDITION_GET_CONDITIONPARCEL_OFFSET))(nullptr);
		}

		::System::Void set_ConditionParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTPARCELUSECONDITION_SET_CONDITIONPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTPARCELUSECONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTPARCELUSECONDITION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsOpen(::MX::GameLogic::DBModel::ConquestInfoDB* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameLogic::DBModel::ConquestInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTPARCELUSECONDITION_ISOPEN_OFFSET))(arg, nullptr);
		}

		::MX::Data::ConquestCondition* Create(::System::Int64 arg, ::System::Int64 arg, ::System::String* str)
		{
			return (return (::MX::Data::ConquestCondition*(*)(::System::Int64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTPARCELUSECONDITION_CREATE_OFFSET))(arg, arg, str, nullptr);
		}

	};
}

