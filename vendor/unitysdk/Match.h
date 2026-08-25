#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define MATCH_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x9E92FD0)
#define MATCH_GET_ISOPTIONAL_OFFSET UNITYSDK_OFFSET(0x9E93020)
#define MATCH_GET_REQUIREMENT_OFFSET UNITYSDK_OFFSET(0x9E93050)
#define MATCH_GET_REQUIREMENTINDEX_OFFSET UNITYSDK_OFFSET(0x9E930A0)
#define MATCH_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x9E930B0)

	inline static constexpr unsigned int Match_TypeDefinitionIndex = 28443;

	class Match : public Il2CppObject
	{
	public:
		::System::Int32 m_RequirementIndex; // 0x10
		::Il2CppArray<::System::Object*>* m_Requirements; // 0x18
		Il2CppObject* m_Controls; // 0x20

		::UnityEngine::InputSystem::InputControl* get_control()
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATCH_GET_CONTROL_OFFSET))(nullptr);
		}

		::System::Boolean get_isOptional()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATCH_GET_ISOPTIONAL_OFFSET))(nullptr);
		}

		DeviceRequirement* get_requirement()
		{
			return (return (DeviceRequirement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATCH_GET_REQUIREMENT_OFFSET))(nullptr);
		}

		::System::Int32 get_requirementIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MATCH_GET_REQUIREMENTINDEX_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* get_device()
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATCH_GET_DEVICE_OFFSET))(nullptr);
		}

	};

