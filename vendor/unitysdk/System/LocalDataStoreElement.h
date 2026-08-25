#pragma once
#include "../unitysdk.h"

#define SYSTEM_LOCALDATASTOREELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9390070)
#define SYSTEM_LOCALDATASTOREELEMENT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9390090)
#define SYSTEM_LOCALDATASTOREELEMENT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x93900A0)
#define SYSTEM_LOCALDATASTOREELEMENT_GET_COOKIE_OFFSET UNITYSDK_OFFSET(0x93900B0)

namespace System
{
	inline static constexpr unsigned int LocalDataStoreElement_TypeDefinitionIndex = 23913;

	class LocalDataStoreElement : public Il2CppObject
	{
	public:
		::System::Object* m_value; // 0x10
		::System::Int64 m_cookie; // 0x18

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREELEMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREELEMENT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREELEMENT_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Cookie()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREELEMENT_GET_COOKIE_OFFSET))(nullptr);
		}

	};
}

