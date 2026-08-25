#pragma once
#include "../../unitysdk.h"

#define NPA_GAMES_NXPTOYCLOUDSAVELISTINFO_GET_CREATEDAT_OFFSET UNITYSDK_OFFSET(0x9CD3DA0)
#define NPA_GAMES_NXPTOYCLOUDSAVELISTINFO_GET_MODIFIEDAT_OFFSET UNITYSDK_OFFSET(0x9CD3E40)
#define NPA_GAMES_NXPTOYCLOUDSAVELISTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD3EE0)

namespace NPA::Games
{
	inline static constexpr unsigned int NXPToyCloudSaveListInfo_TypeDefinitionIndex = 27438;

	class NXPToyCloudSaveListInfo : public Il2CppObject
	{
	public:
		::System::String* guid; // 0x10
		::System::String* fileKey; // 0x18
		::System::String* createdAt; // 0x20
		::System::String* modifiedAt; // 0x28

		::System::DateTime* get_CreatedAt()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYCLOUDSAVELISTINFO_GET_CREATEDAT_OFFSET))(nullptr);
		}

		::System::DateTime* get_ModifiedAt()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYCLOUDSAVELISTINFO_GET_MODIFIEDAT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYCLOUDSAVELISTINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

