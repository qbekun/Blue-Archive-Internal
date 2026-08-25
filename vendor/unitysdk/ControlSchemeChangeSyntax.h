#pragma once
#include "unitysdk.h"

#define CONTROLSCHEMECHANGESYNTAX_ANDPAIRREMAININGDEVICES_OFFSET UNITYSDK_OFFSET(0x9F2E6E0)

	inline static constexpr unsigned int ControlSchemeChangeSyntax_TypeDefinitionIndex = 28609;

	class ControlSchemeChangeSyntax : public Il2CppObject
	{
	public:
		::System::Int32 m_UserIndex; // 0x10

		ControlSchemeChangeSyntax* AndPairRemainingDevices()
		{
			return (return (ControlSchemeChangeSyntax*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLSCHEMECHANGESYNTAX_ANDPAIRREMAININGDEVICES_OFFSET))(nullptr);
		}

	};

