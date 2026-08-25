#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define DUALSENSEHIDGENERICINPUTREPORT_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F51FB0)

	inline static constexpr unsigned int DualSenseHIDGenericInputReport_TypeDefinitionIndex = 28689;

	class DualSenseHIDGenericInputReport : public Il2CppObject
	{
	public:
		::System::Byte reportId; // 0x10

		::UnityEngine::InputSystem::Utilities::FourCC* get_Format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DUALSENSEHIDGENERICINPUTREPORT_GET_FORMAT_OFFSET))(nullptr);
		}

	};

