#pragma once
#include "unitysdk.h"

class UIGrid;

#define UIBATTLECHASERCHAMPIONSDISPLAY_GET_GRID_OFFSET UNITYSDK_OFFSET(0x2231860)
#define UIBATTLECHASERCHAMPIONSDISPLAY_REFRESHTHUMBNAILS_OFFSET UNITYSDK_OFFSET(0x222C4F0)
#define UIBATTLECHASERCHAMPIONSDISPLAY_GET_THUMBNAILS_OFFSET UNITYSDK_OFFSET(0x22318F0)
#define UIBATTLECHASERCHAMPIONSDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2231B50)

	inline static constexpr unsigned int UIBattleChaserChampionsDisplay_TypeDefinitionIndex = 4446;

	class UIBattleChaserChampionsDisplay : public Il2CppObject
	{
	public:
		UIGrid* grid; // 0x18
		Il2CppObject* thumbnails; // 0x20

		UIGrid* get_Grid()
		{
			return ((UIGrid*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLECHASERCHAMPIONSDISPLAY_GET_GRID_OFFSET))(nullptr);
		}

		::System::Void RefreshThumbnails()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLECHASERCHAMPIONSDISPLAY_REFRESHTHUMBNAILS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Thumbnails()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLECHASERCHAMPIONSDISPLAY_GET_THUMBNAILS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLECHASERCHAMPIONSDISPLAY_.CTOR_OFFSET))(nullptr);
		}

	};

