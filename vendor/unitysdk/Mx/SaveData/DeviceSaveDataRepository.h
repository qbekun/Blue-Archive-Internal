#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_DEVICESAVEDATAREPOSITORY_GETPATH_OFFSET UNITYSDK_OFFSET(0x1D28CF0)
#define MX_SAVEDATA_DEVICESAVEDATAREPOSITORY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D28D50)
#define MX_SAVEDATA_DEVICESAVEDATAREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D291C0)
#define MX_SAVEDATA_DEVICESAVEDATAREPOSITORY_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D29200)

namespace MX::SaveData
{
	inline static constexpr unsigned int DeviceSaveDataRepository_TypeDefinitionIndex = 20018;

	class DeviceSaveDataRepository : public EntityExpandType
	{
	public:
		::System::String* GetPath(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICESAVEDATAREPOSITORY_GETPATH_OFFSET))(str, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICESAVEDATAREPOSITORY_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICESAVEDATAREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICESAVEDATAREPOSITORY_AWAKE_OFFSET))(nullptr);
		}

	};
}

