#pragma once
#include "../../unitysdk.h"

class UIGrid;
namespace UnityEngine { class GameObject; }
class UIWidget;

#define MXFIELD_UI_UIFIELDWORLDMAPBUTTONROOT_REFRESH_OFFSET UNITYSDK_OFFSET(0xEA8C00)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTONROOT_STARTIMPL_OFFSET UNITYSDK_OFFSET(0xEA8D30)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTONROOT_CHECKACTIVE_OFFSET UNITYSDK_OFFSET(0xEA88F0)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTONROOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA8D40)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldWorldMapButtonRoot_TypeDefinitionIndex = 10765;

	class UIFieldWorldMapButtonRoot : public Il2CppObject
	{
	public:
		UIGrid* grid; // 0x20
		::UnityEngine::GameObject* topWidget; // 0x28
		UIWidget* lineDecoWidget; // 0x30
		::UnityEngine::GameObject* lineWidgetRoot; // 0x38
		UIWidget* topLineWidget; // 0x40
		UIWidget* bottomLineWidget; // 0x48
		::System::Int32 lineHeightDefault; // 0x50
		::System::Int32 lineHeightDelta; // 0x54

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTONROOT_REFRESH_OFFSET))(nullptr);
		}

		::System::Void StartImpl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTONROOT_STARTIMPL_OFFSET))(nullptr);
		}

		::System::Void CheckActive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTONROOT_CHECKACTIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTONROOT_.CTOR_OFFSET))(nullptr);
		}

	};
}

