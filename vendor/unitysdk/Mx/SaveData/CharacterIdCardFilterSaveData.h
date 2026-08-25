#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CHARACTERIDCARDFILTERSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF94E0)
#define MX_SAVEDATA_CHARACTERIDCARDFILTERSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF9540)
#define MX_SAVEDATA_CHARACTERIDCARDFILTERSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF9530)
#define MX_SAVEDATA_CHARACTERIDCARDFILTERSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF9580)

namespace MX::SaveData
{
	inline static constexpr unsigned int CharacterIdCardFilterSaveData_TypeDefinitionIndex = 19921;

	class CharacterIdCardFilterSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* Favorites; // 0x10
		Il2CppObject* Schools; // 0x18

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERIDCARDFILTERSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERIDCARDFILTERSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERIDCARDFILTERSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERIDCARDFILTERSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

	};
}

