#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputDevice; }

#define DEVICEARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x9E4BCB0)
#define DEVICEARRAY_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9E4BD40)
#define DEVICEARRAY_GET_OFFSET UNITYSDK_OFFSET(0x9E43F20)
#define DEVICEARRAY_SET_OFFSET UNITYSDK_OFFSET(0x9E44010)

	inline static constexpr unsigned int DeviceArray_TypeDefinitionIndex = 28388;

	class DeviceArray : public Il2CppObject
	{
	public:
		::System::Boolean m_HaveValue; // 0x10
		::System::Int32 m_DeviceCount; // 0x14
		::Il2CppArray<::System::Object*>* m_DeviceArray; // 0x18

		::System::Boolean Remove(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEARRAY_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEARRAY_INDEXOF_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Get()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEARRAY_GET_OFFSET))(nullptr);
		}

		::System::Boolean Set(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEARRAY_SET_OFFSET))(arg, nullptr);
		}

	};

