#pragma once
#include "unitysdk.h"

class MXButton;

#define UIPOPUP_CAFECOPYPRESET___N__0_OFFSET UNITYSDK_OFFSET(0x2269B70)
#define UIPOPUP_CAFECOPYPRESET_AWAKE_OFFSET UNITYSDK_OFFSET(0x2269B80)
#define UIPOPUP_CAFECOPYPRESET_.CTOR_OFFSET UNITYSDK_OFFSET(0x2269CB0)
#define UIPOPUP_CAFECOPYPRESET_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2269CC0)

	inline static constexpr unsigned int UIPopup_CafeCopyPreset_TypeDefinitionIndex = 4606;

	class UIPopup_CafeCopyPreset : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFECOPYPRESET___N__0_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFECOPYPRESET_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFECOPYPRESET_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFECOPYPRESET_CO_LOADING_OFFSET))(nullptr);
		}

	};

