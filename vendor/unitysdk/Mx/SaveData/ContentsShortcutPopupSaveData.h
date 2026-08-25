#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CONTENTSSHORTCUTPOPUPSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D024F0)
#define MX_SAVEDATA_CONTENTSSHORTCUTPOPUPSAVEDATA_ADD_OFFSET UNITYSDK_OFFSET(0x1D02500)
#define MX_SAVEDATA_CONTENTSSHORTCUTPOPUPSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D025C0)
#define MX_SAVEDATA_CONTENTSSHORTCUTPOPUPSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D025D0)
#define MX_SAVEDATA_CONTENTSSHORTCUTPOPUPSAVEDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1D02700)
#define MX_SAVEDATA_CONTENTSSHORTCUTPOPUPSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D02680)

namespace MX::SaveData
{
	inline static constexpr unsigned int ContentsShortcutPopupSaveData_TypeDefinitionIndex = 19976;

	class ContentsShortcutPopupSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* ContentsShortcutPopupIdList; // 0x10

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONTENTSSHORTCUTPOPUPSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONTENTSSHORTCUTPOPUPSAVEDATA_ADD_OFFSET))(arg, nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONTENTSSHORTCUTPOPUPSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONTENTSSHORTCUTPOPUPSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONTENTSSHORTCUTPOPUPSAVEDATA_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONTENTSSHORTCUTPOPUPSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

