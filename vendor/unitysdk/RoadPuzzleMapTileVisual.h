#pragma once
#include "unitysdk.h"

class RoadPuzzleMapTileData;
class RoadPuzzleRailTileVisual;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class SphereCollider; }
namespace MX::Audio { class AudioPlayer; }
namespace UnityEngine { class Collider; }
class RoadPuzzleRailTileData;

#define ROADPUZZLEMAPTILEVISUAL_GET_RAILTILEROOT_OFFSET UNITYSDK_OFFSET(0x2084FB0)
#define ROADPUZZLEMAPTILEVISUAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2084FC0)
#define ROADPUZZLEMAPTILEVISUAL_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x2085000)
#define ROADPUZZLEMAPTILEVISUAL_ENABLECOLLIDER_OFFSET UNITYSDK_OFFSET(0x20850D0)
#define ROADPUZZLEMAPTILEVISUAL_SETLAYER_OFFSET UNITYSDK_OFFSET(0x2085100)
#define ROADPUZZLEMAPTILEVISUAL_SETLAYER_OFFSET UNITYSDK_OFFSET(0x2085210)
#define ROADPUZZLEMAPTILEVISUAL_SELECT_OFFSET UNITYSDK_OFFSET(0x2085300)
#define ROADPUZZLEMAPTILEVISUAL_SETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x2085310)
#define ROADPUZZLEMAPTILEVISUAL_PLAYBUILDFX_OFFSET UNITYSDK_OFFSET(0x2085440)
#define ROADPUZZLEMAPTILEVISUAL_SETTILEPOSITION_OFFSET UNITYSDK_OFFSET(0x2085500)
#define ROADPUZZLEMAPTILEVISUAL_CREATEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x2085610)
#define ROADPUZZLEMAPTILEVISUAL_PLACERAILTILE_OFFSET UNITYSDK_OFFSET(0x20856C0)
#define ROADPUZZLEMAPTILEVISUAL_SETRAILTILE_OFFSET UNITYSDK_OFFSET(0x2085770)
#define ROADPUZZLEMAPTILEVISUAL_ISSTARTORENDTILE_OFFSET UNITYSDK_OFFSET(0x2085A00)
#define ROADPUZZLEMAPTILEVISUAL_ISEMPTYTILE_OFFSET UNITYSDK_OFFSET(0x2085AB0)
#define ROADPUZZLEMAPTILEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x2085B20)

	inline static constexpr unsigned int RoadPuzzleMapTileVisual_TypeDefinitionIndex = 3441;

	class RoadPuzzleMapTileVisual : public Il2CppObject
	{
	public:
		RoadPuzzleMapTileData* Data; // 0x18
		RoadPuzzleRailTileVisual* RailTile; // 0x20
		::UnityEngine::Transform* railTileRoot; // 0x28
		::UnityEngine::Transform* AnimationRoot; // 0x30
		::UnityEngine::GameObject* StartFX; // 0x38
		::UnityEngine::ParticleSystem* PlaceFX; // 0x40
		::UnityEngine::SphereCollider* Collider; // 0x48
		::MX::Audio::AudioPlayer* audioPlayer; // 0x50
		::UnityEngine::GameObject* highLightFX; // 0x58
		::System::Boolean hasHighlightFX; // 0x60
		::System::Action* onEnable; // 0x68

		::UnityEngine::Transform* get_RailTileRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEVISUAL_GET_RAILTILEROOT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEVISUAL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEVISUAL_ONTRIGGERENTER_OFFSET))(arg, nullptr);
		}

		::System::Void EnableCollider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEVISUAL_ENABLECOLLIDER_OFFSET))(nullptr);
		}

		::System::Void SetLayer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEVISUAL_SETLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void SetLayer(::UnityEngine::Transform* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEVISUAL_SETLAYER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Select(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEVISUAL_SELECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetHighLight(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEVISUAL_SETHIGHLIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void PlayBuildFX()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEVISUAL_PLAYBUILDFX_OFFSET))(nullptr);
		}

		::System::Void SetTilePosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEVISUAL_SETTILEPOSITION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateHighlight(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEVISUAL_CREATEHIGHLIGHT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlaceRailTile(RoadPuzzleRailTileData* arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(RoadPuzzleRailTileData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEVISUAL_PLACERAILTILE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetRailTile(RoadPuzzleRailTileVisual* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(RoadPuzzleRailTileVisual*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEVISUAL_SETRAILTILE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsStartOrEndTile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEVISUAL_ISSTARTORENDTILE_OFFSET))(nullptr);
		}

		::System::Boolean IsEmptyTile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEVISUAL_ISEMPTYTILE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

