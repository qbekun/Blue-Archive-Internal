#pragma once
#include "unitysdk.h"

#define CONQUESTEVENTDISPLAYORDERVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BE3AC0)
#define CONQUESTEVENTDISPLAYORDERVISUAL_GETDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONQUESTEVENTDISPLAYORDERVISUAL_SETDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONQUESTEVENTDISPLAYORDERVISUAL_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1BE40A0)

	inline static constexpr unsigned int ConquestEventDisplayOrderVisual_TypeDefinitionIndex = 1524;

	class ConquestEventDisplayOrderVisual : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYORDERVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetDisplayOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYORDERVISUAL_GETDISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Void SetDisplayOrder(::System::Int32 arg, int32_t&* arg2)
		{
			((::System::Void(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYORDERVISUAL_SETDISPLAYORDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return ((::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYORDERVISUAL_COMPARETO_OFFSET))(arg, nullptr);
		}

	};

