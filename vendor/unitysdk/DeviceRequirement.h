#pragma once
#include "unitysdk.h"

#define DEVICEREQUIREMENT_GET_CONTROLPATH_OFFSET UNITYSDK_OFFSET(0x9E93270)
#define DEVICEREQUIREMENT_SET_CONTROLPATH_OFFSET UNITYSDK_OFFSET(0x9E93280)
#define DEVICEREQUIREMENT_GET_ISOPTIONAL_OFFSET UNITYSDK_OFFSET(0x9E93090)
#define DEVICEREQUIREMENT_SET_ISOPTIONAL_OFFSET UNITYSDK_OFFSET(0x9E93290)
#define DEVICEREQUIREMENT_GET_ISAND_OFFSET UNITYSDK_OFFSET(0x9E932B0)
#define DEVICEREQUIREMENT_SET_ISAND_OFFSET UNITYSDK_OFFSET(0x9E932D0)
#define DEVICEREQUIREMENT_GET_ISOR_OFFSET UNITYSDK_OFFSET(0x9E932C0)
#define DEVICEREQUIREMENT_SET_ISOR_OFFSET UNITYSDK_OFFSET(0x9E932F0)
#define DEVICEREQUIREMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E93310)
#define DEVICEREQUIREMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E933B0)
#define DEVICEREQUIREMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E93410)
#define DEVICEREQUIREMENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9E934C0)
#define DEVICEREQUIREMENT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9E928C0)
#define DEVICEREQUIREMENT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9E93580)

	inline static constexpr unsigned int DeviceRequirement_TypeDefinitionIndex = 28447;

	class DeviceRequirement : public Il2CppObject
	{
	public:
		::System::String* m_ControlPath; // 0x10
		Flags* m_Flags; // 0x18

		::System::String* get_controlPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEREQUIREMENT_GET_CONTROLPATH_OFFSET))(nullptr);
		}

		::System::Void set_controlPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEREQUIREMENT_SET_CONTROLPATH_OFFSET))(str, nullptr);
		}

		::System::Boolean get_isOptional()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEREQUIREMENT_GET_ISOPTIONAL_OFFSET))(nullptr);
		}

		::System::Void set_isOptional(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEREQUIREMENT_SET_ISOPTIONAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isAND()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEREQUIREMENT_GET_ISAND_OFFSET))(nullptr);
		}

		::System::Void set_isAND(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEREQUIREMENT_SET_ISAND_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isOR()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEREQUIREMENT_GET_ISOR_OFFSET))(nullptr);
		}

		::System::Void set_isOR(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEREQUIREMENT_SET_ISOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEREQUIREMENT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(DeviceRequirement* arg)
		{
			return (return (::System::Boolean(*)(DeviceRequirement*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEREQUIREMENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEREQUIREMENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEREQUIREMENT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(DeviceRequirement* arg, DeviceRequirement* arg)
		{
			return (return (::System::Boolean(*)(DeviceRequirement*, DeviceRequirement*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEREQUIREMENT_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(DeviceRequirement* arg, DeviceRequirement* arg)
		{
			return (return (::System::Boolean(*)(DeviceRequirement*, DeviceRequirement*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEREQUIREMENT_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

	};

