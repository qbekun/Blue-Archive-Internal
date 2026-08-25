#pragma once
#include "unitysdk.h"

#define GRAPHICSCONFIGMODERATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x20D1DD0)
#define GRAPHICSCONFIGMODERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x20D1E50)
#define GRAPHICSCONFIGMODERATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x20D1E90)
#define GRAPHICSCONFIGMODERATOR_MODERATE_OFFSET UNITYSDK_OFFSET(0x20D1FB0)
#define GRAPHICSCONFIGMODERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x20D2610)

	inline static constexpr unsigned int GraphicsConfigModerator_TypeDefinitionIndex = 3714;

	class GraphicsConfigModerator : public Il2CppObject
	{
	public:
		::System::Single frameCut; // 0x0
		Il2CppObject* deltaTimes; // 0x18

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSCONFIGMODERATOR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSCONFIGMODERATOR_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSCONFIGMODERATOR_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Moderate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSCONFIGMODERATOR_MODERATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSCONFIGMODERATOR_.CTOR_OFFSET))(nullptr);
		}

	};

