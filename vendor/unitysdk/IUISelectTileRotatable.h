#pragma once
#include "unitysdk.h"

class MXButton;

#define IUISELECTTILEROTATABLE_ONPRESSROTATERAIL_OFFSET UNITYSDK_OFFSET(0x000000)
#define IUISELECTTILEROTATABLE_GETROTATEBUTTON_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IUISelectTileRotatable_TypeDefinitionIndex = 7553;

	class IUISelectTileRotatable : public Il2CppObject
	{
	public:
		::System::Void OnPressRotateRail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IUISELECTTILEROTATABLE_ONPRESSROTATERAIL_OFFSET))(nullptr);
		}

		MXButton* GetRotateButton()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + IUISELECTTILEROTATABLE_GETROTATEBUTTON_OFFSET))(nullptr);
		}

	};

