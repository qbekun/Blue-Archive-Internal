#pragma once
#include "unitysdk.h"

#define UIPOPUP_FAVORRANKBUFF_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x254AE70)
#define UIPOPUP_FAVORRANKBUFF_ONOPENED_OFFSET UNITYSDK_OFFSET(0x25500C0)
#define UIPOPUP_FAVORRANKBUFF_.CTOR_OFFSET UNITYSDK_OFFSET(0x25500D0)
#define UIPOPUP_FAVORRANKBUFF_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x25500E0)

	inline static constexpr unsigned int UIPopup_FavorRankBuff_TypeDefinitionIndex = 6095;

	class UIPopup_FavorRankBuff : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* StrikerSlots; // 0xD8
		::Il2CppArray<::System::Object*>* SpecialSlots; // 0xE0

		::System::Void Initialize(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FAVORRANKBUFF_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FAVORRANKBUFF_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FAVORRANKBUFF_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FAVORRANKBUFF_CO_LOADING_OFFSET))(nullptr);
		}

	};

