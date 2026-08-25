#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_ARENAOFFENSEAUTOSTARTSAVEDATA_SET_OFFSET UNITYSDK_OFFSET(0x1D24EB0)
#define MX_SAVEDATA_ARENAOFFENSEAUTOSTARTSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D24ED0)
#define MX_SAVEDATA_ARENAOFFENSEAUTOSTARTSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D24EE0)
#define MX_SAVEDATA_ARENAOFFENSEAUTOSTARTSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D24EF0)
#define MX_SAVEDATA_ARENAOFFENSEAUTOSTARTSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D24F50)

namespace MX::SaveData
{
	inline static constexpr unsigned int ArenaOffenseAutoStartSaveData_TypeDefinitionIndex = 20001;

	class ArenaOffenseAutoStartSaveData : public Il2CppObject
	{
	public:
		::System::Boolean IsEnabled; // 0x10

		::System::Void Set(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ARENAOFFENSEAUTOSTARTSAVEDATA_SET_OFFSET))(arg, nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ARENAOFFENSEAUTOSTARTSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ARENAOFFENSEAUTOSTARTSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ARENAOFFENSEAUTOSTARTSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ARENAOFFENSEAUTOSTARTSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

