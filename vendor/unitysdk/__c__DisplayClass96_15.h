#pragma once
#include "unitysdk.h"

namespace MX::Data { class ManagementGuidePopupData; }
namespace MX::SaveData { class GuidePopupWatchedOnceSaveData; }
class UIPopup_Guide;

#define <>C__DISPLAYCLASS96_15_.CTOR_OFFSET UNITYSDK_OFFSET(0x2663520)
#define <>C__DISPLAYCLASS96_15__ADDPOPUPS_B__61_OFFSET UNITYSDK_OFFSET(0x2663530)
#define <>C__DISPLAYCLASS96_15__ADDPOPUPS_B__62_OFFSET UNITYSDK_OFFSET(0x26636C0)
#define <>C__DISPLAYCLASS96_15__ADDPOPUPS_B__63_OFFSET UNITYSDK_OFFSET(0x26636E0)

	inline static constexpr unsigned int <>c__DisplayClass96_15_TypeDefinitionIndex = 6658;

	class <>c__DisplayClass96_15 : public Il2CppObject
	{
	public:
		::MX::Data::ManagementGuidePopupData* guidePopupData; // 0x10
		::System::Boolean popupClosed; // 0x18
		::System::String* waitUntilCloseUIName; // 0x20
		::MX::SaveData::GuidePopupWatchedOnceSaveData* saveData; // 0x28
		Il2CppObject* __9__62; // 0x30
		Il2CppObject* __9__63; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_15_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _AddPopups_b__61(UIPopup_Guide* arg)
		{
			((::System::Void(*)(UIPopup_Guide*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_15__ADDPOPUPS_B__61_OFFSET))(arg, nullptr);
		}

		::System::Void _AddPopups_b__62(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_15__ADDPOPUPS_B__62_OFFSET))(str, nullptr);
		}

		::System::Void _AddPopups_b__63(UIPopup_Guide* arg)
		{
			((::System::Void(*)(UIPopup_Guide*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_15__ADDPOPUPS_B__63_OFFSET))(arg, nullptr);
		}

	};

