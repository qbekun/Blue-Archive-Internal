#pragma once
#include "unitysdk.h"

#define UIEVENTCOLLECTION_808_CO_ENABLECGTWEENER_OFFSET UNITYSDK_OFFSET(0x24A4EB0)
#define UIEVENTCOLLECTION_808_AWAKE_OFFSET UNITYSDK_OFFSET(0x24A4F40)
#define UIEVENTCOLLECTION_808_ONENABLE_OFFSET UNITYSDK_OFFSET(0x24A5000)
#define UIEVENTCOLLECTION_808_SETOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x24A5190)
#define UIEVENTCOLLECTION_808_.CTOR_OFFSET UNITYSDK_OFFSET(0x24A5240)

	inline static constexpr unsigned int UIEventCollection_808_TypeDefinitionIndex = 5801;

	class UIEventCollection_808 : public Il2CppObject
	{
	public:
		Il2CppObject* cgTweenerList; // 0x110

		::System::Collections::IEnumerator* Co_EnableCGTweener()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_808_CO_ENABLECGTWEENER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_808_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_808_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_808_SETOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_808_.CTOR_OFFSET))(nullptr);
		}

	};

