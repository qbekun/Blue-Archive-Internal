#pragma once
#include "../unitysdk.h"

#define NPA_NXPPERMISSION_SET_OPTION_OFFSET UNITYSDK_OFFSET(0x9BBD770)
#define NPA_NXPPERMISSION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9BBD780)
#define NPA_NXPPERMISSION_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9BBD790)
#define NPA_NXPPERMISSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BBD7A0)
#define NPA_NXPPERMISSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBD870)

namespace NPA
{
	inline static constexpr unsigned int NXPPermission_TypeDefinitionIndex = 25539;

	class NXPPermission : public Il2CppObject
	{
	public:
		::System::Int32 option; // 0x10
		::System::String* name; // 0x18
		::System::String* description; // 0x20

		::System::Void set_Option(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPERMISSION_SET_OPTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPERMISSION_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void set_Description(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPERMISSION_SET_DESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPERMISSION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPERMISSION_.CTOR_OFFSET))(nullptr);
		}

	};
}

