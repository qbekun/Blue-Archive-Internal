#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYUSERINTERFACEOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBDC50)
#define NPA_NXPTOYUSERINTERFACEOPTION_GETOPTIONS_OFFSET UNITYSDK_OFFSET(0x9BBDCF0)
#define NPA_NXPTOYUSERINTERFACEOPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BBDD00)

namespace NPA
{
	inline static constexpr unsigned int NXPToyUserInterfaceOption_TypeDefinitionIndex = 25545;

	class NXPToyUserInterfaceOption : public Il2CppObject
	{
	public:
		UIOptions* options; // 0x10

		::System::Void .ctor(UIOptions* arg)
		{
			((::System::Void(*)(UIOptions*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYUSERINTERFACEOPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		UIOptions* GetOptions()
		{
			return (return (UIOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYUSERINTERFACEOPTION_GETOPTIONS_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYUSERINTERFACEOPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

