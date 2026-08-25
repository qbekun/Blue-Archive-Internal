#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SHOWLOBBYSPINEANIMATIONSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF00A0)
#define MX_SAVEDATA_SHOWLOBBYSPINEANIMATIONSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF01D0)
#define MX_SAVEDATA_SHOWLOBBYSPINEANIMATIONSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0150)
#define MX_SAVEDATA_SHOWLOBBYSPINEANIMATIONSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF01E0)
#define MX_SAVEDATA_SHOWLOBBYSPINEANIMATIONSAVEDATA_HASBEENTODAY_OFFSET UNITYSDK_OFFSET(0x1CF01F0)
#define MX_SAVEDATA_SHOWLOBBYSPINEANIMATIONSAVEDATA_ADD_OFFSET UNITYSDK_OFFSET(0x1CF0300)

namespace MX::SaveData
{
	inline static constexpr unsigned int ShowLobbySpineAnimationSaveData_TypeDefinitionIndex = 19881;

	class ShowLobbySpineAnimationSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* dic; // 0x10

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYSPINEANIMATIONSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYSPINEANIMATIONSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYSPINEANIMATIONSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYSPINEANIMATIONSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean HasBeenToday(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYSPINEANIMATIONSAVEDATA_HASBEENTODAY_OFFSET))(str, nullptr);
		}

		::System::Void Add(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYSPINEANIMATIONSAVEDATA_ADD_OFFSET))(str, nullptr);
		}

	};
}

