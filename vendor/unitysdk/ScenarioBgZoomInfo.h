#pragma once
#include "unitysdk.h"

namespace FlatData { class ScenarioZoomAnchors; }
namespace FlatData { class ScenarioZoomType; }
namespace UnityEngine { class Vector2; }
class ScenarioBgZoomInfo;
namespace UnityEngine { class Vector3; }

#define SCENARIOBGZOOMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EDE940)
#define SCENARIOBGZOOMINFO_SET_MOVEDURATION_OFFSET UNITYSDK_OFFSET(0x1EDE950)
#define SCENARIOBGZOOMINFO_GET_MOVEDURATION_OFFSET UNITYSDK_OFFSET(0x1EDE960)
#define SCENARIOBGZOOMINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EDE970)
#define SCENARIOBGZOOMINFO_GET_SIZEY_OFFSET UNITYSDK_OFFSET(0x1EDE980)
#define SCENARIOBGZOOMINFO_SET_MOVETYPE_OFFSET UNITYSDK_OFFSET(0x1EDE9A0)
#define SCENARIOBGZOOMINFO_PARSEBGZOOMINFO_OFFSET UNITYSDK_OFFSET(0x1EDE9B0)
#define SCENARIOBGZOOMINFO_GET_ANCHOR_OFFSET UNITYSDK_OFFSET(0x1EDECE0)
#define SCENARIOBGZOOMINFO_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EDECF0)
#define SCENARIOBGZOOMINFO_GET_SIZEX_OFFSET UNITYSDK_OFFSET(0x1EDED00)
#define SCENARIOBGZOOMINFO_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x1EDED10)
#define SCENARIOBGZOOMINFO_SET_SIZEX_OFFSET UNITYSDK_OFFSET(0x1EDED20)
#define SCENARIOBGZOOMINFO_GET_SCALEVECTOR_OFFSET UNITYSDK_OFFSET(0x1EDED30)
#define SCENARIOBGZOOMINFO_GET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x1EDED60)
#define SCENARIOBGZOOMINFO_GET_MOVETYPE_OFFSET UNITYSDK_OFFSET(0x1EDEEC0)
#define SCENARIOBGZOOMINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EDEED0)
#define SCENARIOBGZOOMINFO_SET_ANCHOR_OFFSET UNITYSDK_OFFSET(0x1EDF2D0)

	inline static constexpr unsigned int ScenarioBgZoomInfo_TypeDefinitionIndex = 1853;

	class ScenarioBgZoomInfo : public Il2CppObject
	{
	public:
		::FlatData::ScenarioZoomAnchors* _Anchor_k__BackingField; // 0x10
		::FlatData::ScenarioZoomType* _MoveType_k__BackingField; // 0x14
		::System::Single _MoveDuration_k__BackingField; // 0x18
		::UnityEngine::Vector2* _Position_k__BackingField; // 0x1C
		::System::Single _SizeX_k__BackingField; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOBGZOOMINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_MoveDuration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOBGZOOMINFO_SET_MOVEDURATION_OFFSET))(arg, nullptr);
		}

		::System::Single get_MoveDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOBGZOOMINFO_GET_MOVEDURATION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Position()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOBGZOOMINFO_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Single get_SizeY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOBGZOOMINFO_GET_SIZEY_OFFSET))(nullptr);
		}

		::System::Void set_MoveType(::FlatData::ScenarioZoomType* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioZoomType*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOBGZOOMINFO_SET_MOVETYPE_OFFSET))(arg, nullptr);
		}

		ScenarioBgZoomInfo* ParseBgZoomInfo(::System::Int64 arg, ::System::Int64 arg2, ::Il2CppArray<::System::Object*>* arg3)
		{
			return ((ScenarioBgZoomInfo*(*)(::System::Int64, ::System::Int64, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOBGZOOMINFO_PARSEBGZOOMINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::ScenarioZoomAnchors* get_Anchor()
		{
			return ((::FlatData::ScenarioZoomAnchors*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOBGZOOMINFO_GET_ANCHOR_OFFSET))(nullptr);
		}

		::System::Void set_Position(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOBGZOOMINFO_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Single get_SizeX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOBGZOOMINFO_GET_SIZEX_OFFSET))(nullptr);
		}

		::System::Single get_Scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOBGZOOMINFO_GET_SCALE_OFFSET))(nullptr);
		}

		::System::Void set_SizeX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOBGZOOMINFO_SET_SIZEX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_ScaleVector()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOBGZOOMINFO_GET_SCALEVECTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_Destination()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOBGZOOMINFO_GET_DESTINATION_OFFSET))(nullptr);
		}

		::FlatData::ScenarioZoomType* get_MoveType()
		{
			return ((::FlatData::ScenarioZoomType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOBGZOOMINFO_GET_MOVETYPE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOBGZOOMINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void set_Anchor(::FlatData::ScenarioZoomAnchors* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioZoomAnchors*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOBGZOOMINFO_SET_ANCHOR_OFFSET))(arg, nullptr);
		}

	};

