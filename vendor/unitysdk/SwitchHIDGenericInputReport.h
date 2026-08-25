#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define SWITCHHIDGENERICINPUTREPORT_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F3BDF0)

	inline static constexpr unsigned int SwitchHIDGenericInputReport_TypeDefinitionIndex = 28641;

	class SwitchHIDGenericInputReport : public Il2CppObject
	{
	public:
		::System::Byte reportId; // 0x10

		::UnityEngine::InputSystem::Utilities::FourCC* get_Format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + SWITCHHIDGENERICINPUTREPORT_GET_FORMAT_OFFSET))(nullptr);
		}

	};

