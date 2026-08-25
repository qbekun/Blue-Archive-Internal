#pragma once
#include "unitysdk.h"

class ConquestTileVisual;
namespace UnityEngine { class Vector3; }

#define MAPRANGE_GET_MINX_OFFSET UNITYSDK_OFFSET(0x1BF13A0)
#define MAPRANGE_SETRANGE_OFFSET UNITYSDK_OFFSET(0x1BEBF40)
#define MAPRANGE_GET_MINY_OFFSET UNITYSDK_OFFSET(0x1BF1440)
#define MAPRANGE_GET_MAXY_OFFSET UNITYSDK_OFFSET(0x1BF14E0)
#define MAPRANGE_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1BF1580)
#define MAPRANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BEBF00)
#define MAPRANGE_GET_MAXX_OFFSET UNITYSDK_OFFSET(0x1BF1610)
#define MAPRANGE_ADDLOCATION_OFFSET UNITYSDK_OFFSET(0x1BECDC0)

	inline static constexpr unsigned int MapRange_TypeDefinitionIndex = 1544;

	class MapRange : public Il2CppObject
	{
	public:
		::System::Int32 minCol; // 0x10
		::System::Int32 maxCol; // 0x14
		::System::Int32 minRow; // 0x18
		::System::Int32 maxRow; // 0x1C
		::System::Single minLocalZ; // 0x20
		::System::Single maxLocalZ; // 0x24
		ConquestTileVisual* minXTile; // 0x28
		ConquestTileVisual* maxXTile; // 0x30
		ConquestTileVisual* minYTile; // 0x38
		ConquestTileVisual* maxYTile; // 0x40
		::System::Int32 step; // 0x48

		::System::Single get_minX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MAPRANGE_GET_MINX_OFFSET))(nullptr);
		}

		::System::Void SetRange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MAPRANGE_SETRANGE_OFFSET))(arg, nullptr);
		}

		::System::Single get_minY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MAPRANGE_GET_MINY_OFFSET))(nullptr);
		}

		::System::Single get_maxY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MAPRANGE_GET_MAXY_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetCenterPosition(::System::Single arg)
		{
			return ((::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAPRANGE_GETCENTERPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MAPRANGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_maxX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MAPRANGE_GET_MAXX_OFFSET))(nullptr);
		}

		::System::Void AddLocation(ConquestTileVisual* arg)
		{
			((::System::Void(*)(ConquestTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MAPRANGE_ADDLOCATION_OFFSET))(arg, nullptr);
		}

	};

