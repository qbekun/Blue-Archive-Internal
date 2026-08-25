#pragma once
#include "../../unitysdk.h"

#define NPA_DLC_NXPTOYDLCOWNERSHIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD6E40)
#define NPA_DLC_NXPTOYDLCOWNERSHIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CD6EA0)
#define NPA_DLC_NXPTOYDLCOWNERSHIP_TODICTIONARY_OFFSET UNITYSDK_OFFSET(0x9CD6FC0)

namespace NPA::DLC
{
	inline static constexpr unsigned int NXPToyDLCOwnership_TypeDefinitionIndex = 27459;

	class NXPToyDLCOwnership : public Il2CppObject
	{
	public:
		::System::String* id; // 0x10
		::System::String* type; // 0x18
		::System::Boolean owns; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_DLC_NXPTOYDLCOWNERSHIP_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_DLC_NXPTOYDLCOWNERSHIP_TOSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* ToDictionary()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_DLC_NXPTOYDLCOWNERSHIP_TODICTIONARY_OFFSET))(nullptr);
		}

	};
}

