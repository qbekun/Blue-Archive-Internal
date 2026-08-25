#pragma once
#include "unitysdk.h"

class MXButton;
class UICharacterProfile;
class CharacterObject;

#define UIPOPUPCHARACTERPROFILE_AWAKE_OFFSET UNITYSDK_OFFSET(0x22E25E0)
#define UIPOPUPCHARACTERPROFILE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x22E2760)
#define UIPOPUPCHARACTERPROFILE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x22E27C0)
#define UIPOPUPCHARACTERPROFILE_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x22E27F0)
#define UIPOPUPCHARACTERPROFILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22E2880)

	inline static constexpr unsigned int UIPopupCharacterProfile_TypeDefinitionIndex = 4863;

	class UIPopupCharacterProfile : public Il2CppObject
	{
	public:
		MXButton* Close; // 0xD8
		UICharacterProfile* profile; // 0xE0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPCHARACTERPROFILE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPCHARACTERPROFILE_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPCHARACTERPROFILE_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPCHARACTERPROFILE_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPCHARACTERPROFILE_.CTOR_OFFSET))(nullptr);
		}

	};

