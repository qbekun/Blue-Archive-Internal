#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ConquestConditionType; }
namespace MX::Data { class ConquestCondition; }

#define MX_DATA_CONQUESTDATEOFFSETCONDIFION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x183A570)
#define MX_DATA_CONQUESTDATEOFFSETCONDIFION_GET_DATEOFFSET_OFFSET UNITYSDK_OFFSET(0x183A580)
#define MX_DATA_CONQUESTDATEOFFSETCONDIFION_SET_DATEOFFSET_OFFSET UNITYSDK_OFFSET(0x183A590)
#define MX_DATA_CONQUESTDATEOFFSETCONDIFION_.CTOR_OFFSET UNITYSDK_OFFSET(0x183A5A0)
#define MX_DATA_CONQUESTDATEOFFSETCONDIFION_.CTOR_OFFSET UNITYSDK_OFFSET(0x183A5B0)
#define MX_DATA_CONQUESTDATEOFFSETCONDIFION_ISOPEN_OFFSET UNITYSDK_OFFSET(0x183A5F0)
#define MX_DATA_CONQUESTDATEOFFSETCONDIFION_CREATE_OFFSET UNITYSDK_OFFSET(0x183A020)

namespace MX::Data
{
	inline static constexpr unsigned int ConquestDateOffsetCondifion_TypeDefinitionIndex = 15759;

	class ConquestDateOffsetCondifion : public Il2CppObject
	{
	public:
		::System::Int32 _DateOffset_k__BackingField; // 0x20

		::FlatData::ConquestConditionType* get_Type()
		{
			return (return (::FlatData::ConquestConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATEOFFSETCONDIFION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_DateOffset()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATEOFFSETCONDIFION_GET_DATEOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_DateOffset(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATEOFFSETCONDIFION_SET_DATEOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATEOFFSETCONDIFION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATEOFFSETCONDIFION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsOpen(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATEOFFSETCONDIFION_ISOPEN_OFFSET))(arg, nullptr);
		}

		::MX::Data::ConquestCondition* Create(::System::Int64 arg, ::System::Int64 arg, ::System::String* str)
		{
			return (return (::MX::Data::ConquestCondition*(*)(::System::Int64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATEOFFSETCONDIFION_CREATE_OFFSET))(arg, arg, str, nullptr);
		}

	};
}

