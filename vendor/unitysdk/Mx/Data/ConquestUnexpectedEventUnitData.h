#pragma once
#include "../../unitysdk.h"

#define MX_DATA_CONQUESTUNEXPECTEDEVENTUNITDATA_SET_UNEXPECTEDEVENTPREFAB_OFFSET UNITYSDK_OFFSET(0x183C0F0)
#define MX_DATA_CONQUESTUNEXPECTEDEVENTUNITDATA_GET_UNEXPECTEDEVENTUNITID_OFFSET UNITYSDK_OFFSET(0x183C100)
#define MX_DATA_CONQUESTUNEXPECTEDEVENTUNITDATA_SET_UNEXPECTEDEVENTUNITID_OFFSET UNITYSDK_OFFSET(0x183C110)
#define MX_DATA_CONQUESTUNEXPECTEDEVENTUNITDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x183B6C0)
#define MX_DATA_CONQUESTUNEXPECTEDEVENTUNITDATA_GET_UNEXPECTEDEVENTPREFAB_OFFSET UNITYSDK_OFFSET(0x183C120)

namespace MX::Data
{
	inline static constexpr unsigned int ConquestUnexpectedEventUnitData_TypeDefinitionIndex = 15769;

	class ConquestUnexpectedEventUnitData : public Il2CppObject
	{
	public:
		::System::String* _UnexpectedEventPrefab_k__BackingField; // 0x10
		::System::Int64 _UnexpectedEventUnitId_k__BackingField; // 0x18

		::System::Void set_UnexpectedEventPrefab(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTUNEXPECTEDEVENTUNITDATA_SET_UNEXPECTEDEVENTPREFAB_OFFSET))(str, nullptr);
		}

		::System::Int64 get_UnexpectedEventUnitId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTUNEXPECTEDEVENTUNITDATA_GET_UNEXPECTEDEVENTUNITID_OFFSET))(nullptr);
		}

		::System::Void set_UnexpectedEventUnitId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTUNEXPECTEDEVENTUNITDATA_SET_UNEXPECTEDEVENTUNITID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTUNEXPECTEDEVENTUNITDATA_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_UnexpectedEventPrefab()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTUNEXPECTEDEVENTUNITDATA_GET_UNEXPECTEDEVENTPREFAB_OFFSET))(nullptr);
		}

	};
}

