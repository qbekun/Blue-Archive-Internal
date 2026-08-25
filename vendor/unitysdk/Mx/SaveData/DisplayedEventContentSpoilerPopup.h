#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_DISPLAYEDEVENTCONTENTSPOILERPOPUP_ADD_OFFSET UNITYSDK_OFFSET(0x1CFF7F0)
#define MX_SAVEDATA_DISPLAYEDEVENTCONTENTSPOILERPOPUP_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFF8B0)
#define MX_SAVEDATA_DISPLAYEDEVENTCONTENTSPOILERPOPUP_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFF930)
#define MX_SAVEDATA_DISPLAYEDEVENTCONTENTSPOILERPOPUP_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFFA60)
#define MX_SAVEDATA_DISPLAYEDEVENTCONTENTSPOILERPOPUP_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CFFA70)
#define MX_SAVEDATA_DISPLAYEDEVENTCONTENTSPOILERPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF9E0)

namespace MX::SaveData
{
	inline static constexpr unsigned int DisplayedEventContentSpoilerPopup_TypeDefinitionIndex = 19961;

	class DisplayedEventContentSpoilerPopup : public Il2CppObject
	{
	public:
		Il2CppObject* DisplayedEventContentSpoilerPopupIdList; // 0x10

		::System::Void Add(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDEVENTCONTENTSPOILERPOPUP_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDEVENTCONTENTSPOILERPOPUP_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDEVENTCONTENTSPOILERPOPUP_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDEVENTCONTENTSPOILERPOPUP_VALIDATE_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDEVENTCONTENTSPOILERPOPUP_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDEVENTCONTENTSPOILERPOPUP_.CTOR_OFFSET))(nullptr);
		}

	};
}

