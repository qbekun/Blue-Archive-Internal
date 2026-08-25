#pragma once
#include "unitysdk.h"

#define EVENTDATA_SET_DATAPOINTER_OFFSET UNITYSDK_OFFSET(0x92C7BB0)
#define EVENTDATA_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x92C7BC0)
#define EVENTDATA_SET_RESERVED_OFFSET UNITYSDK_OFFSET(0x92C7BD0)

	inline static constexpr unsigned int EventData_TypeDefinitionIndex = 25040;

	class EventData : public Il2CppObject
	{
	public:
		::System::Int32 _DataPointer_k__BackingField; // 0x10
		::System::Int32 _Size_k__BackingField; // 0x18
		::System::Int32 _Reserved_k__BackingField; // 0x1C

		::System::Void set_DataPointer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDATA_SET_DATAPOINTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_Size(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDATA_SET_SIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Reserved(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDATA_SET_RESERVED_OFFSET))(arg, nullptr);
		}

	};

