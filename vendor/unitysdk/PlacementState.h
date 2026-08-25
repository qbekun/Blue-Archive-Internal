#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
class UISprite;
class UILabel;
class RoadPuzzleRailTileVisual;
class RoadPuzzleMapTileVisual;
class RoadPuzzleRailTileData;
namespace MX::NetworkProtocol { class MiniGameRoadPuzzleTilePlaceResponse; }

#define PLACEMENTSTATE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x27BE370)
#define PLACEMENTSTATE__ONENTER_G__CREATEPREVIEWRAILTILE|9_0_OFFSET UNITYSDK_OFFSET(0x27BE3C0)
#define PLACEMENTSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27BE6F0)
#define PLACEMENTSTATE_REGISTERBUTTONS_OFFSET UNITYSDK_OFFSET(0x27BE700)
#define PLACEMENTSTATE_GETROTATEBUTTON_OFFSET UNITYSDK_OFFSET(0x27BE910)
#define PLACEMENTSTATE_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x27BE920)
#define PLACEMENTSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x27BEA40)
#define PLACEMENTSTATE_ONCLICKPLACERAIL_OFFSET UNITYSDK_OFFSET(0x27BEB90)
#define PLACEMENTSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x27BECC0)
#define PLACEMENTSTATE_ONPRESSROTATERAIL_OFFSET UNITYSDK_OFFSET(0x27BEE00)
#define PLACEMENTSTATE__ONENTER_G__MAKEPREVIEWRAILTILE|9_1_OFFSET UNITYSDK_OFFSET(0x27BE660)
#define PLACEMENTSTATE__ONCLICKPLACERAIL_B__13_1_OFFSET UNITYSDK_OFFSET(0x27BEE50)
#define PLACEMENTSTATE__ONCLICKPLACERAIL_B__13_0_OFFSET UNITYSDK_OFFSET(0x27BF000)

	inline static constexpr unsigned int PlacementState_TypeDefinitionIndex = 7556;

	class PlacementState : public ::UnityEngine::Bindings::NativeAsStructAttribute
	{
	public:
		::UnityEngine::GameObject* PlacementStyle; // 0x38
		MXButton* PlaceRailButton; // 0x40
		MXButton* RotateLeftButton; // 0x48
		MXButton* CancelButton; // 0x50
		UISprite* CurrencyIcon; // 0x58
		UILabel* CurrencyAmountLabel; // 0x60
		RoadPuzzleRailTileVisual* placementPreviewRailTile; // 0x68

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLACEMENTSTATE_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void _OnEnter_g__CreatePreviewRailTile|9_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLACEMENTSTATE__ONENTER_G__CREATEPREVIEWRAILTILE|9_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLACEMENTSTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLACEMENTSTATE_REGISTERBUTTONS_OFFSET))(nullptr);
		}

		MXButton* GetRotateButton()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLACEMENTSTATE_GETROTATEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLACEMENTSTATE_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void OnEnter(RoadPuzzleMapTileVisual* arg)
		{
			((::System::Void(*)(RoadPuzzleMapTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + PLACEMENTSTATE_ONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPlaceRail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLACEMENTSTATE_ONCLICKPLACERAIL_OFFSET))(nullptr);
		}

		::System::Void OnExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLACEMENTSTATE_ONEXIT_OFFSET))(nullptr);
		}

		::System::Void OnPressRotateRail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLACEMENTSTATE_ONPRESSROTATERAIL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnEnter_g__MakePreviewRailTile|9_1(RoadPuzzleRailTileData* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(RoadPuzzleRailTileData*, ::PVOID))((::PBYTE)hIl2Cpp + PLACEMENTSTATE__ONENTER_G__MAKEPREVIEWRAILTILE|9_1_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickPlaceRail_b__13_1(::MX::NetworkProtocol::MiniGameRoadPuzzleTilePlaceResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameRoadPuzzleTilePlaceResponse*, ::PVOID))((::PBYTE)hIl2Cpp + PLACEMENTSTATE__ONCLICKPLACERAIL_B__13_1_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickPlaceRail_b__13_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLACEMENTSTATE__ONCLICKPLACERAIL_B__13_0_OFFSET))(nullptr);
		}

	};

