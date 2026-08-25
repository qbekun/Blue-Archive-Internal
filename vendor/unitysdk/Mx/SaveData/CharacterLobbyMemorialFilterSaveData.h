#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CHARACTERLOBBYMEMORIALFILTERSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF9210)
#define MX_SAVEDATA_CHARACTERLOBBYMEMORIALFILTERSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF9270)
#define MX_SAVEDATA_CHARACTERLOBBYMEMORIALFILTERSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF92C0)
#define MX_SAVEDATA_CHARACTERLOBBYMEMORIALFILTERSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF9260)

namespace MX::SaveData
{
	inline static constexpr unsigned int CharacterLobbyMemorialFilterSaveData_TypeDefinitionIndex = 19917;

	class CharacterLobbyMemorialFilterSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* Favorites; // 0x10
		Il2CppObject* Schools; // 0x18
		Il2CppObject* Memorials; // 0x20

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERLOBBYMEMORIALFILTERSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERLOBBYMEMORIALFILTERSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERLOBBYMEMORIALFILTERSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERLOBBYMEMORIALFILTERSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

