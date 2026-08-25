#pragma once
#include "unitysdk.h"

class UISlider;

#define UIMINIGAMESHOOTINGARRIVESECTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2060CA0)
#define UIMINIGAMESHOOTINGARRIVESECTION_SETDATA_OFFSET UNITYSDK_OFFSET(0x2060E10)
#define UIMINIGAMESHOOTINGARRIVESECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2061060)

	inline static constexpr unsigned int UIMiniGameShootingArriveSection_TypeDefinitionIndex = 3399;

	class UIMiniGameShootingArriveSection : public Il2CppObject
	{
	public:
		UISlider* ClearSlider; // 0x18
		::Il2CppArray<::System::Object*>* SectionIcons; // 0x20
		::Il2CppArray<::System::Object*>* ClearBG; // 0x28
		::System::Boolean reverse; // 0x30

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGARRIVESECTION_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Single arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::Single, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGARRIVESECTION_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGARRIVESECTION_.CTOR_OFFSET))(nullptr);
		}

	};

