#pragma once
#include "unitysdk.h"

namespace FlatData { class RoadPuzzleRailTileType; }

#define RAILTILEVECTORDATA_GETSPLINEPOINTS_OFFSET UNITYSDK_OFFSET(0x2084EE0)
#define RAILTILEVECTORDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x2084F10)
#define RAILTILEVECTORDATA_SETSPLINEPOINTS_OFFSET UNITYSDK_OFFSET(0x2084F70)

	inline static constexpr unsigned int RailTileVectorData_TypeDefinitionIndex = 3436;

	class RailTileVectorData : public Il2CppObject
	{
	public:
		::System::Single TileRadius; // 0x18
		::Il2CppArray<::System::Object*>* SideCenters; // 0x20
		::Il2CppArray<::System::Object*>* StraightSplinePoints; // 0x28
		::Il2CppArray<::System::Object*>* CurveSmallSplinePoints; // 0x30
		::Il2CppArray<::System::Object*>* CurveBigSplinePoints; // 0x38

		::Il2CppArray<::System::Object*>* GetSplinePoints(::FlatData::RoadPuzzleRailTileType* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::FlatData::RoadPuzzleRailTileType*, ::PVOID))((::PBYTE)hIl2Cpp + RAILTILEVECTORDATA_GETSPLINEPOINTS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAILTILEVECTORDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSplinePoints(::FlatData::RoadPuzzleRailTileType* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(::FlatData::RoadPuzzleRailTileType*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RAILTILEVECTORDATA_SETSPLINEPOINTS_OFFSET))(arg, arg2, nullptr);
		}

	};

