#pragma once
#include "unitysdk.h"

#define UPDATESTEPCOUNT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9F5F920)
#define UPDATESTEPCOUNT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9F5F930)
#define UPDATESTEPCOUNT_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x9F5F910)
#define UPDATESTEPCOUNT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9F5F7E0)

	inline static constexpr unsigned int UpdateStepCount_TypeDefinitionIndex = 28805;

	class UpdateStepCount : public Il2CppObject
	{
	public:
		::System::Boolean m_WasUpdated; // 0x10
		::System::UInt32 _value_k__BackingField; // 0x14

		::System::UInt32 get_value()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UPDATESTEPCOUNT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UPDATESTEPCOUNT_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void OnBeforeUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UPDATESTEPCOUNT_ONBEFOREUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UPDATESTEPCOUNT_ONUPDATE_OFFSET))(nullptr);
		}

	};

