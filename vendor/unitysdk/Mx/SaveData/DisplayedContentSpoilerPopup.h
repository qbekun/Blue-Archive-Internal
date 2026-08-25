#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_SAVEDATA_DISPLAYEDCONTENTSPOILERPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFAC0)
#define MX_SAVEDATA_DISPLAYEDCONTENTSPOILERPOPUP_ADD_OFFSET UNITYSDK_OFFSET(0x1CFFB40)
#define MX_SAVEDATA_DISPLAYEDCONTENTSPOILERPOPUP_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFFC00)
#define MX_SAVEDATA_DISPLAYEDCONTENTSPOILERPOPUP_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CFFC80)
#define MX_SAVEDATA_DISPLAYEDCONTENTSPOILERPOPUP_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFFCD0)
#define MX_SAVEDATA_DISPLAYEDCONTENTSPOILERPOPUP_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFFD80)

namespace MX::SaveData
{
	inline static constexpr unsigned int DisplayedContentSpoilerPopup_TypeDefinitionIndex = 19962;

	class DisplayedContentSpoilerPopup : public Il2CppObject
	{
	public:
		Il2CppObject* DisplayedContentSpoilerPopupList; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDCONTENTSPOILERPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Add(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDCONTENTSPOILERPOPUP_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDCONTENTSPOILERPOPUP_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::FlatData::ContentType* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDCONTENTSPOILERPOPUP_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDCONTENTSPOILERPOPUP_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDCONTENTSPOILERPOPUP_VALIDATE_OFFSET))(nullptr);
		}

	};
}

