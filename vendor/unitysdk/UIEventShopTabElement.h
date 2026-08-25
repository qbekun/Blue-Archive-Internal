#pragma once
#include "unitysdk.h"

class UISprite;
namespace MX::Data::Excel { class EventContentShopInfoExcel; }

#define UIEVENTSHOPTABELEMENT_INITALIZE_OFFSET UNITYSDK_OFFSET(0x24BB7E0)
#define UIEVENTSHOPTABELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x24C25B0)

	inline static constexpr unsigned int UIEventShopTabElement_TypeDefinitionIndex = 5894;

	class UIEventShopTabElement : public Il2CppObject
	{
	public:
		UISprite* costIconSprite; // 0x18
		UISprite* costTicketIconSprite; // 0x20
		::Il2CppArray<::System::Object*>* nameLabels; // 0x28

		::System::Void Initalize(::MX::Data::Excel::EventContentShopInfoExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentShopInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPTABELEMENT_INITALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSHOPTABELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

