#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define DEVICEINFO_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x9F5EB80)
#define DEVICEINFO_SET_STATESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F5EB90)
#define DEVICEINFO_GET_STATESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F5EBA0)
#define DEVICEINFO_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x9F5EBB0)
#define DEVICEINFO_GET_STATEFORMAT_OFFSET UNITYSDK_OFFSET(0x9F5EBC0)
#define DEVICEINFO_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x9F5EBD0)
#define DEVICEINFO_SET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x9F5EBE0)
#define DEVICEINFO_SET_STATEFORMAT_OFFSET UNITYSDK_OFFSET(0x9F5EBF0)

	inline static constexpr unsigned int DeviceInfo_TypeDefinitionIndex = 28794;

	class DeviceInfo : public Il2CppObject
	{
	public:
		::System::Int32 m_DeviceId; // 0x10
		::System::String* m_Layout; // 0x18
		::UnityEngine::InputSystem::Utilities::FourCC* m_StateFormat; // 0x20
		::System::Int32 m_StateSizeInBytes; // 0x24
		::System::String* m_FullLayoutJson; // 0x28

		::System::Void set_deviceId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEINFO_SET_DEVICEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_stateSizeInBytes(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEINFO_SET_STATESIZEINBYTES_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_stateSizeInBytes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEINFO_GET_STATESIZEINBYTES_OFFSET))(nullptr);
		}

		::System::String* get_layout()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEINFO_GET_LAYOUT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_stateFormat()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEINFO_GET_STATEFORMAT_OFFSET))(nullptr);
		}

		::System::Int32 get_deviceId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEINFO_GET_DEVICEID_OFFSET))(nullptr);
		}

		::System::Void set_layout(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEINFO_SET_LAYOUT_OFFSET))(str, nullptr);
		}

		::System::Void set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::FourCC*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEINFO_SET_STATEFORMAT_OFFSET))(arg, nullptr);
		}

	};

