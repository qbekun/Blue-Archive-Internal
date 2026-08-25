#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputControl; }

#define PARTBINDING_GET_PART_OFFSET UNITYSDK_OFFSET(0x9E8D450)
#define PARTBINDING_SET_CONTROL_OFFSET UNITYSDK_OFFSET(0x9E8D460)
#define PARTBINDING_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x9E8D470)
#define PARTBINDING_SET_PART_OFFSET UNITYSDK_OFFSET(0x9E8D480)

	inline static constexpr unsigned int PartBinding_TypeDefinitionIndex = 28437;

	class PartBinding : public Il2CppObject
	{
	public:
		::System::Int32 _part_k__BackingField; // 0x10
		::UnityEngine::InputSystem::InputControl* _control_k__BackingField; // 0x18

		::System::Int32 get_part()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTBINDING_GET_PART_OFFSET))(nullptr);
		}

		::System::Void set_control(::UnityEngine::InputSystem::InputControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + PARTBINDING_SET_CONTROL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputControl* get_control()
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTBINDING_GET_CONTROL_OFFSET))(nullptr);
		}

		::System::Void set_part(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PARTBINDING_SET_PART_OFFSET))(arg, nullptr);
		}

	};

