#pragma once
#include "unitysdk.h"

#define UISCENARIOBGSPINES_SETBGSPINES_OFFSET UNITYSDK_OFFSET(0x27D3B50)
#define UISCENARIOBGSPINES_.CTOR_OFFSET UNITYSDK_OFFSET(0x27D42A0)
#define UISCENARIOBGSPINES_PLAYVOICEEVENT_OFFSET UNITYSDK_OFFSET(0x27D42B0)
#define UISCENARIOBGSPINES_AWAKE_OFFSET UNITYSDK_OFFSET(0x27D4310)

	inline static constexpr unsigned int UIScenarioBgSpines_TypeDefinitionIndex = 7616;

	class UIScenarioBgSpines : public Il2CppObject
	{
	public:
		Il2CppObject* spineCharacters; // 0x18

		::System::Void SetBgSpines(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGSPINES_SETBGSPINES_OFFSET))(str, str2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGSPINES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayVoiceEvent(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGSPINES_PLAYVOICEEVENT_OFFSET))(str, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGSPINES_AWAKE_OFFSET))(nullptr);
		}

	};

