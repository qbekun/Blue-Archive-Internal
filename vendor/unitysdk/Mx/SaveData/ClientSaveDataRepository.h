#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CLIENTSAVEDATAREPOSITORY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D25ED0)
#define MX_SAVEDATA_CLIENTSAVEDATAREPOSITORY_GETPATH_OFFSET UNITYSDK_OFFSET(0x1D27880)
#define MX_SAVEDATA_CLIENTSAVEDATAREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D27990)

namespace MX::SaveData
{
	inline static constexpr unsigned int ClientSaveDataRepository_TypeDefinitionIndex = 20009;

	class ClientSaveDataRepository : public EntityType
	{
	public:
		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CLIENTSAVEDATAREPOSITORY_INITIALIZE_OFFSET))(nullptr);
		}

		::System::String* GetPath(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CLIENTSAVEDATAREPOSITORY_GETPATH_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CLIENTSAVEDATAREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

