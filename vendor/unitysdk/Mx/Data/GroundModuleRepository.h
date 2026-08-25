#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class GroundModuleRepository; }

#define MX_DATA_GROUNDMODULEREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x18E14E0)
#define MX_DATA_GROUNDMODULEREPOSITORY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18E1560)
#define MX_DATA_GROUNDMODULEREPOSITORY_CLEAR_OFFSET UNITYSDK_OFFSET(0x18E15B0)
#define MX_DATA_GROUNDMODULEREPOSITORY_LOAD_OFFSET UNITYSDK_OFFSET(0x18E1630)
#define MX_DATA_GROUNDMODULEREPOSITORY_GETMODULEDATA_OFFSET UNITYSDK_OFFSET(0x18E1740)

namespace MX::Data
{
	inline static constexpr unsigned int GroundModuleRepository_TypeDefinitionIndex = 16143;

	class GroundModuleRepository : public Il2CppObject
	{
	public:
		Il2CppObject* table; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDMODULEREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::GroundModuleRepository* get_Instance()
		{
			return (return (::MX::Data::GroundModuleRepository*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDMODULEREPOSITORY_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDMODULEREPOSITORY_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Load(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDMODULEREPOSITORY_LOAD_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetModuleData(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDMODULEREPOSITORY_GETMODULEDATA_OFFSET))(str, nullptr);
		}

	};
}

