#pragma once
#include "unitysdk.h"

#define UIEVENTCOLLECTIONCGWITHSTAMPOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x24A45C0)
#define UIEVENTCOLLECTIONCGWITHSTAMPOBJECT___N__0_OFFSET UNITYSDK_OFFSET(0x24A4650)
#define UIEVENTCOLLECTIONCGWITHSTAMPOBJECT_CO_PLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x24A46C0)
#define UIEVENTCOLLECTIONCGWITHSTAMPOBJECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x24A4750)
#define UIEVENTCOLLECTIONCGWITHSTAMPOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x24A47F0)
#define UIEVENTCOLLECTIONCGWITHSTAMPOBJECT_SETDATA_OFFSET UNITYSDK_OFFSET(0x24A49B0)

	inline static constexpr unsigned int UIEventCollectionCGWithStampObject_TypeDefinitionIndex = 5797;

	class UIEventCollectionCGWithStampObject : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* stampObjects; // 0x70
		Il2CppObject* stampTweenerList; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGWITHSTAMPOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGWITHSTAMPOBJECT___N__0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayUnlockAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGWITHSTAMPOBJECT_CO_PLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGWITHSTAMPOBJECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGWITHSTAMPOBJECT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGWITHSTAMPOBJECT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

