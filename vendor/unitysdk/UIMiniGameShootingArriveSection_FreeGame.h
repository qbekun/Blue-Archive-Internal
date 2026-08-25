#pragma once
#include "unitysdk.h"

#define UIMINIGAMESHOOTINGARRIVESECTION_FREEGAME_SETDATA_OFFSET UNITYSDK_OFFSET(0x2061070)
#define UIMINIGAMESHOOTINGARRIVESECTION_FREEGAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x2061420)

	inline static constexpr unsigned int UIMiniGameShootingArriveSection_FreeGame_TypeDefinitionIndex = 3400;

	class UIMiniGameShootingArriveSection_FreeGame : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Bridge; // 0x18
		::Il2CppArray<::System::Object*>* BridgeFill; // 0x20
		::Il2CppArray<::System::Object*>* Pointer; // 0x28
		::Il2CppArray<::System::Object*>* Group; // 0x30

		::System::Void SetData(::System::Single arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::Single, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGARRIVESECTION_FREEGAME_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGARRIVESECTION_FREEGAME_.CTOR_OFFSET))(nullptr);
		}

	};

