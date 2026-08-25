#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Animator; }
class CafeCameraTranslate;
class CafeOccupiedAreaComponent;
namespace MX::Core::Math { class IRandomService; }
namespace UnityEngine { class Shader; }
class FurnitureVisual;
namespace UnityEngine { class Vector2; }
namespace FlatData { class FurnitureLocation; }

#define CAFETERRAIN_GET_CHARACTERROOT_OFFSET UNITYSDK_OFFSET(0x19C68A0)
#define CAFETERRAIN_GET_BACKGROUNDTHEMEROOT_OFFSET UNITYSDK_OFFSET(0x19C68B0)
#define CAFETERRAIN__HIDEALLGRIDS_B__63_0_OFFSET UNITYSDK_OFFSET(0x19C68C0)
#define CAFETERRAIN_TRYGETAVAILABLEDESTINATIONPOSITION_OFFSET UNITYSDK_OFFSET(0x19AE3D0)
#define CAFETERRAIN_HIDEALLGRIDS_OFFSET UNITYSDK_OFFSET(0x19BBA50)
#define CAFETERRAIN_START_OFFSET UNITYSDK_OFFSET(0x19C6BB0)
#define CAFETERRAIN_RESETCAMERAPOSMINMAX_OFFSET UNITYSDK_OFFSET(0x19C6C90)
#define CAFETERRAIN_AWAKE_OFFSET UNITYSDK_OFFSET(0x19C6E60)
#define CAFETERRAIN_GET_WALLTHEMEROOT_OFFSET UNITYSDK_OFFSET(0x19C6E90)
#define CAFETERRAIN_SET_ISREADY_OFFSET UNITYSDK_OFFSET(0x19C6EA0)
#define CAFETERRAIN_GET_TILEROOT_OFFSET UNITYSDK_OFFSET(0x19C6EB0)
#define CAFETERRAIN_CALCAVAILABLEPOSITIONS_OFFSET UNITYSDK_OFFSET(0x19B3E60)
#define CAFETERRAIN_REFRESHNAVMESH_OFFSET UNITYSDK_OFFSET(0x19C6BE0)
#define CAFETERRAIN_GET_GRIDSIZE_OFFSET UNITYSDK_OFFSET(0x19C6EC0)
#define CAFETERRAIN_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x19C6ED0)
#define CAFETERRAIN_GET_CELLOFFSET_OFFSET UNITYSDK_OFFSET(0x19C6EE0)
#define CAFETERRAIN_GET_WALLHEIGHT_OFFSET UNITYSDK_OFFSET(0x19C6FA0)
#define CAFETERRAIN_GETTERRAINMAX_OFFSET UNITYSDK_OFFSET(0x19BB000)
#define CAFETERRAIN_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x19C6FB0)
#define CAFETERRAIN_TRYGETAVAILABLEDEPLOYPOSITION_OFFSET UNITYSDK_OFFSET(0x19B4F10)
#define CAFETERRAIN_SHOWGRIDS_OFFSET UNITYSDK_OFFSET(0x19BB790)
#define CAFETERRAIN_SET_GRIDSIZE_OFFSET UNITYSDK_OFFSET(0x19C6FC0)
#define CAFETERRAIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x19C6FD0)
#define CAFETERRAIN_GET_FURNITUREROOT_OFFSET UNITYSDK_OFFSET(0x19C7290)
#define CAFETERRAIN_GET_FLOORTHEMEROOT_OFFSET UNITYSDK_OFFSET(0x19C72A0)
#define CAFETERRAIN_SET_WALLHEIGHT_OFFSET UNITYSDK_OFFSET(0x19C72B0)

	inline static constexpr unsigned int CafeTerrain_TypeDefinitionIndex = 1393;

	class CafeTerrain : public Il2CppObject
	{
	public:
		::System::Single AgentRadius; // 0x18
		::System::Single AgentHeight; // 0x1C
		::System::Int32 MaxSlope; // 0x20
		::System::Single StepHeight; // 0x24
		::System::Single CellSize; // 0x28
		::UnityEngine::Vector3* cellOffset; // 0x2C
		::System::Int32 _GridSize_k__BackingField; // 0x38
		::System::Int32 _WallHeight_k__BackingField; // 0x3C
		::Il2CppArray<::System::Object*>* surfaces; // 0x40
		::UnityEngine::Transform* tileRoot; // 0x48
		::UnityEngine::Transform* floorRoot; // 0x50
		::UnityEngine::Transform* leftwallRoot; // 0x58
		::UnityEngine::Transform* rightwallRoot; // 0x60
		::UnityEngine::Animator* gridAnimator; // 0x68
		::UnityEngine::Transform* wallThemeRoot; // 0x70
		::UnityEngine::Transform* floorThemeRoot; // 0x78
		::UnityEngine::Transform* backgroundThemeRoot; // 0x80
		::UnityEngine::Transform* characterRoot; // 0x88
		::UnityEngine::Transform* furnitureRoot; // 0x90
		CafeCameraTranslate* cameraTranslate; // 0x98
		Il2CppObject* floorTiles; // 0xA0
		Il2CppObject* leftWallTiles; // 0xA8
		Il2CppObject* rightWallTiles; // 0xB0
		Il2CppObject* floorGridTiles; // 0xB8
		Il2CppObject* leftWallGridTiles; // 0xC0
		Il2CppObject* rightWallGridTiles; // 0xC8
		CafeOccupiedAreaComponent* OccupiedArea; // 0xD0
		::System::Boolean _IsReady_k__BackingField; // 0xD8
		Il2CppObject* availablePositions; // 0xE0
		Il2CppObject* availableDeployPositions; // 0xE8
		::MX::Core::Math::IRandomService* _random_k__BackingField; // 0xF0
		::UnityEngine::Shader* CafeStencilShader; // 0xF8

		::UnityEngine::Transform* get_CharacterRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_GET_CHARACTERROOT_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_BackgroundThemeRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_GET_BACKGROUNDTHEMEROOT_OFFSET))(nullptr);
		}

		::System::Void _HideAllGrids_b__63_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN__HIDEALLGRIDS_B__63_0_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAvailableDestinationPosition(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_TRYGETAVAILABLEDESTINATIONPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void HideAllGrids(FurnitureVisual* arg)
		{
			((::System::Void(*)(FurnitureVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_HIDEALLGRIDS_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_START_OFFSET))(nullptr);
		}

		::System::Void ResetCameraPosMinMax()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_RESETCAMERAPOSMINMAX_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_AWAKE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_WallThemeRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_GET_WALLTHEMEROOT_OFFSET))(nullptr);
		}

		::System::Void set_IsReady(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_SET_ISREADY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_TileRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_GET_TILEROOT_OFFSET))(nullptr);
		}

		::System::Void CalcAvailablePositions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_CALCAVAILABLEPOSITIONS_OFFSET))(nullptr);
		}

		::System::Void RefreshNavMesh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_REFRESHNAVMESH_OFFSET))(nullptr);
		}

		::System::Int32 get_GridSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_GET_GRIDSIZE_OFFSET))(nullptr);
		}

		::MX::Core::Math::IRandomService* get_random()
		{
			return ((::MX::Core::Math::IRandomService*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_GET_RANDOM_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_CellOffset()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_GET_CELLOFFSET_OFFSET))(nullptr);
		}

		::System::Int32 get_WallHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_GET_WALLHEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetTerrainMax(::FlatData::FurnitureLocation* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::FlatData::FurnitureLocation*, ::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_GETTERRAINMAX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_GET_ISREADY_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAvailableDeployPosition(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_TRYGETAVAILABLEDEPLOYPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void ShowGrids(FurnitureVisual* arg)
		{
			((::System::Void(*)(FurnitureVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_SHOWGRIDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_GridSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_SET_GRIDSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_FurnitureRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_GET_FURNITUREROOT_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_FloorThemeRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_GET_FLOORTHEMEROOT_OFFSET))(nullptr);
		}

		::System::Void set_WallHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFETERRAIN_SET_WALLHEIGHT_OFFSET))(arg, nullptr);
		}

	};

