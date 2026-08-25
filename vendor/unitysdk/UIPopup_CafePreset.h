#pragma once
#include "unitysdk.h"

class IntTabController;

#define UIPOPUP_CAFEPRESET_.CTOR_OFFSET UNITYSDK_OFFSET(0x226A070)
#define UIPOPUP_CAFEPRESET___N__0_OFFSET UNITYSDK_OFFSET(0x226A080)
#define UIPOPUP_CAFEPRESET_ONOPENED_OFFSET UNITYSDK_OFFSET(0x226A090)
#define UIPOPUP_CAFEPRESET_AWAKE_OFFSET UNITYSDK_OFFSET(0x226A0F0)
#define UIPOPUP_CAFEPRESET_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x226A130)

	inline static constexpr unsigned int UIPopup_CafePreset_TypeDefinitionIndex = 4609;

	class UIPopup_CafePreset : public Il2CppObject
	{
	public:
		IntTabController* _tabController; // 0xD8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFEPRESET_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFEPRESET___N__0_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFEPRESET_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFEPRESET_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFEPRESET_CO_LOADING_OFFSET))(nullptr);
		}

	};

