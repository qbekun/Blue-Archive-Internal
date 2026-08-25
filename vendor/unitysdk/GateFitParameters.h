#pragma once
#include "unitysdk.h"

#define GATEFITPARAMETERS_GET_MODE_OFFSET UNITYSDK_OFFSET(0xA1EA280)
#define GATEFITPARAMETERS_GET_ASPECT_OFFSET UNITYSDK_OFFSET(0xA1EA290)

	inline static constexpr unsigned int GateFitParameters_TypeDefinitionIndex = 30955;

	class GateFitParameters : public Il2CppObject
	{
	public:
		GateFitMode* _mode_k__BackingField; // 0x10
		::System::Single _aspect_k__BackingField; // 0x14

		GateFitMode* get_mode()
		{
			return (return (GateFitMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + GATEFITPARAMETERS_GET_MODE_OFFSET))(nullptr);
		}

		::System::Single get_aspect()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GATEFITPARAMETERS_GET_ASPECT_OFFSET))(nullptr);
		}

	};

