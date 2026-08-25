#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_MINIGAMETBGSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFB300)
#define MX_SAVEDATA_MINIGAMETBGSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFB370)
#define MX_SAVEDATA_MINIGAMETBGSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB360)
#define MX_SAVEDATA_MINIGAMETBGSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFB380)

namespace MX::SaveData
{
	inline static constexpr unsigned int MiniGameTBGSaveData_TypeDefinitionIndex = 19947;

	class MiniGameTBGSaveData : public Il2CppObject
	{
	public:
		::System::Int64 EventContentId; // 0x10
		::System::Boolean HasEntered; // 0x18

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMETBGSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMETBGSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMETBGSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMETBGSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

