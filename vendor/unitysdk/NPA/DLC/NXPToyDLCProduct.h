#pragma once
#include "../../unitysdk.h"

#define NPA_DLC_NXPTOYDLCPRODUCT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD70D0)
#define NPA_DLC_NXPTOYDLCPRODUCT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CD7170)
#define NPA_DLC_NXPTOYDLCPRODUCT_TODICTIONARY_OFFSET UNITYSDK_OFFSET(0x9CD7330)

namespace NPA::DLC
{
	inline static constexpr unsigned int NXPToyDLCProduct_TypeDefinitionIndex = 27460;

	class NXPToyDLCProduct : public Il2CppObject
	{
	public:
		::System::String* id; // 0x10
		::System::String* type; // 0x18
		::System::Boolean owns; // 0x20
		::System::String* name; // 0x28
		::System::String* currency; // 0x30
		::System::String* price; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_DLC_NXPTOYDLCPRODUCT_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_DLC_NXPTOYDLCPRODUCT_TOSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* ToDictionary()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_DLC_NXPTOYDLCPRODUCT_TODICTIONARY_OFFSET))(nullptr);
		}

	};
}

