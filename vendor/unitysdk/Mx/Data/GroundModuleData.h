#pragma once
#include "../../unitysdk.h"

#define MX_DATA_GROUNDMODULEDATA_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x1849AF0)
#define MX_DATA_GROUNDMODULEDATA_SET_MODULE_OFFSET UNITYSDK_OFFSET(0x1849B00)
#define MX_DATA_GROUNDMODULEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1848840)

namespace MX::Data
{
	inline static constexpr unsigned int GroundModuleData_TypeDefinitionIndex = 15833;

	class GroundModuleData : public Il2CppObject
	{
	public:
		::System::Int32 _Module_k__BackingField; // 0x10

		::System::Int32 get_Module()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDMODULEDATA_GET_MODULE_OFFSET))(nullptr);
		}

		::System::Void set_Module(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDMODULEDATA_SET_MODULE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDMODULEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

